#ifndef OMNICORE_RPCTX
#define OMNICORE_RPCTX

#include <univalue.h>

#include "rpc/server.h"

UniValue omni_sendrawtx(const JSONRPCRequest& rq);
UniValue omni_send(const JSONRPCRequest& rq);
UniValue omni_sendall(const JSONRPCRequest& rq);
UniValue omni_senddexsell(const JSONRPCRequest& rq);
UniValue omni_senddexaccept(const JSONRPCRequest& rq);
UniValue omni_sendissuancecrowdsale(const JSONRPCRequest& rq);
UniValue omni_sendissuancefixed(const JSONRPCRequest& rq);
UniValue omni_sendissuancemanaged(const JSONRPCRequest& rq);
UniValue omni_sendsto(const JSONRPCRequest& rq);
UniValue omni_sendgrant(const JSONRPCRequest& rq);
UniValue omni_sendrevoke(const JSONRPCRequest& rq);
UniValue omni_sendclosecrowdsale(const JSONRPCRequest& rq);
UniValue trade_MP(const JSONRPCRequest& rq);
UniValue omni_sendtrade(const JSONRPCRequest& rq);
UniValue omni_sendcanceltradesbyprice(const JSONRPCRequest& rq);
UniValue omni_sendcanceltradesbypair(const JSONRPCRequest& rq);
UniValue omni_sendcancelalltrades(const JSONRPCRequest& rq);
UniValue omni_sendchangeissuer(const JSONRPCRequest& rq);
UniValue omni_sendactivation(const JSONRPCRequest& rq);
UniValue omni_sendalert(const JSONRPCRequest& rq);

#endif // OMNICORE_RPCTX
