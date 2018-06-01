// Copyright (c) 2012-2018 The Elastos Open Source Project
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "nlohmann/json.hpp"

#include "ISubWallet.h"

#ifndef __ELASTOS_SDK_ISIDECHAINSUBWALLET_H__
#define __ELASTOS_SDK_ISIDECHAINSUBWALLET_H__

namespace Elastos {
	namespace SDK {

		class ISidechainSubWallet : public virtual ISubWallet {
		public:
			virtual std::string SendWithdrawTransaction(
					const std::string &fromAddress,
					const nlohmann::json& mainchainAccounts,
					const nlohmann::json& mainchainAmounts,
					uint64_t fee,
					const std::string &payPassword,
					const std::string &memo) = 0;
		};

	}
}

#endif //__ELASTOS_SDK_ISIDECHAINSUBWALLET_H__
