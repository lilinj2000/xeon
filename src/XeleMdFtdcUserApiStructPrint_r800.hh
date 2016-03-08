#ifndef XELEMD_FTDC_USERAPI_STRUCT_PRINT_R800_HH
#define XELEMD_FTDC_USERAPI_STRUCT_PRINT_R800_HH

#include <ostream>
#include "XeleMdFtdcUserApiStruct.h"

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcReqUserLoginField const& aReqUserLoginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcReqUserLoginField\": {" <<std::endl;
    os <<"        \"UserID\": \"" <<aReqUserLoginField.UserID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqUserLoginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aReqUserLoginField.Password  <<"\"," <<std::endl;
    os <<"        \"ProtocolInfo\": \"" <<aReqUserLoginField.ProtocolInfo  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcRspUserLoginField const& aRspUserLoginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcRspUserLoginField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aRspUserLoginField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspUserLoginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspUserLoginField.UserID  <<"\"," <<std::endl;
    os <<"        \"LoginTime\": \"" <<aRspUserLoginField.LoginTime  <<"\"," <<std::endl;
    os <<"        \"MaxOrderLocalID\": \"" <<aRspUserLoginField.MaxOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"TradingSystemName\": \"" <<aRspUserLoginField.TradingSystemName  <<"\"," <<std::endl;
    os <<"        \"DataCenterID\": \"" <<aRspUserLoginField.DataCenterID  <<"\"," <<std::endl;
    os <<"        \"PrivateFlowSize\": \"" <<aRspUserLoginField.PrivateFlowSize  <<"\"," <<std::endl;
    os <<"        \"UserFlowSize\": \"" <<aRspUserLoginField.UserFlowSize  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcReqUserLogoutField const& aReqUserLogoutField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcReqUserLogoutField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqUserLogoutField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqUserLogoutField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcRspUserLogoutField const& aRspUserLogoutField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcRspUserLogoutField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspUserLogoutField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspUserLogoutField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcUserPasswordUpdateField const& aUserPasswordUpdateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcUserPasswordUpdateField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aUserPasswordUpdateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aUserPasswordUpdateField.UserID  <<"\"," <<std::endl;
    os <<"        \"OldPassword\": \"" <<aUserPasswordUpdateField.OldPassword  <<"\"," <<std::endl;
    os <<"        \"NewPassword\": \"" <<aUserPasswordUpdateField.NewPassword  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcRspInfoField const& aRspInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcRspInfoField\": {" <<std::endl;
    os <<"        \"ErrorID\": \"" <<aRspInfoField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aRspInfoField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcDisseminationField const& aDisseminationField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcDisseminationField\": {" <<std::endl;
    os <<"        \"SequenceSeries\": \"" <<aDisseminationField.SequenceSeries  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aDisseminationField.SequenceNo  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcInvestorAccountDepositResField const& aInvestorAccountDepositResField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcInvestorAccountDepositResField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInvestorAccountDepositResField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aInvestorAccountDepositResField.UserID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInvestorAccountDepositResField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aInvestorAccountDepositResField.AccountID  <<"\"," <<std::endl;
    os <<"        \"AccountSeqNo\": \"" <<aInvestorAccountDepositResField.AccountSeqNo  <<"\"," <<std::endl;
    os <<"        \"Amount\": \"" <<aInvestorAccountDepositResField.Amount  <<"\"," <<std::endl;
    os <<"        \"AmountDirection\": \"" <<aInvestorAccountDepositResField.AmountDirection  <<"\"," <<std::endl;
    os <<"        \"Available\": \"" <<aInvestorAccountDepositResField.Available  <<"\"," <<std::endl;
    os <<"        \"Balance\": \"" <<aInvestorAccountDepositResField.Balance  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataBaseField const& aMarketDataBaseField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataBaseField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aMarketDataBaseField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementGroupID\": \"" <<aMarketDataBaseField.SettlementGroupID  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aMarketDataBaseField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aMarketDataBaseField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"PreClosePrice\": \"" <<aMarketDataBaseField.PreClosePrice  <<"\"," <<std::endl;
    os <<"        \"PreOpenInterest\": \"" <<aMarketDataBaseField.PreOpenInterest  <<"\"," <<std::endl;
    os <<"        \"PreDelta\": \"" <<aMarketDataBaseField.PreDelta  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataStaticField const& aMarketDataStaticField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataStaticField\": {" <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aMarketDataStaticField.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"HighestPrice\": \"" <<aMarketDataStaticField.HighestPrice  <<"\"," <<std::endl;
    os <<"        \"LowestPrice\": \"" <<aMarketDataStaticField.LowestPrice  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aMarketDataStaticField.ClosePrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aMarketDataStaticField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aMarketDataStaticField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aMarketDataStaticField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"CurrDelta\": \"" <<aMarketDataStaticField.CurrDelta  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataLastMatchField const& aMarketDataLastMatchField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataLastMatchField\": {" <<std::endl;
    os <<"        \"LastPrice\": \"" <<aMarketDataLastMatchField.LastPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aMarketDataLastMatchField.Volume  <<"\"," <<std::endl;
    os <<"        \"Turnover\": \"" <<aMarketDataLastMatchField.Turnover  <<"\"," <<std::endl;
    os <<"        \"OpenInterest\": \"" <<aMarketDataLastMatchField.OpenInterest  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataBestPriceField const& aMarketDataBestPriceField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataBestPriceField\": {" <<std::endl;
    os <<"        \"BidPrice1\": \"" <<aMarketDataBestPriceField.BidPrice1  <<"\"," <<std::endl;
    os <<"        \"BidVolume1\": \"" <<aMarketDataBestPriceField.BidVolume1  <<"\"," <<std::endl;
    os <<"        \"AskPrice1\": \"" <<aMarketDataBestPriceField.AskPrice1  <<"\"," <<std::endl;
    os <<"        \"AskVolume1\": \"" <<aMarketDataBestPriceField.AskVolume1  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataBid23Field const& aMarketDataBid23Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataBid23Field\": {" <<std::endl;
    os <<"        \"BidPrice2\": \"" <<aMarketDataBid23Field.BidPrice2  <<"\"," <<std::endl;
    os <<"        \"BidVolume2\": \"" <<aMarketDataBid23Field.BidVolume2  <<"\"," <<std::endl;
    os <<"        \"BidPrice3\": \"" <<aMarketDataBid23Field.BidPrice3  <<"\"," <<std::endl;
    os <<"        \"BidVolume3\": \"" <<aMarketDataBid23Field.BidVolume3  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataAsk23Field const& aMarketDataAsk23Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataAsk23Field\": {" <<std::endl;
    os <<"        \"AskPrice2\": \"" <<aMarketDataAsk23Field.AskPrice2  <<"\"," <<std::endl;
    os <<"        \"AskVolume2\": \"" <<aMarketDataAsk23Field.AskVolume2  <<"\"," <<std::endl;
    os <<"        \"AskPrice3\": \"" <<aMarketDataAsk23Field.AskPrice3  <<"\"," <<std::endl;
    os <<"        \"AskVolume3\": \"" <<aMarketDataAsk23Field.AskVolume3  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataBid45Field const& aMarketDataBid45Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataBid45Field\": {" <<std::endl;
    os <<"        \"BidPrice4\": \"" <<aMarketDataBid45Field.BidPrice4  <<"\"," <<std::endl;
    os <<"        \"BidVolume4\": \"" <<aMarketDataBid45Field.BidVolume4  <<"\"," <<std::endl;
    os <<"        \"BidPrice5\": \"" <<aMarketDataBid45Field.BidPrice5  <<"\"," <<std::endl;
    os <<"        \"BidVolume5\": \"" <<aMarketDataBid45Field.BidVolume5  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataAsk45Field const& aMarketDataAsk45Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataAsk45Field\": {" <<std::endl;
    os <<"        \"AskPrice4\": \"" <<aMarketDataAsk45Field.AskPrice4  <<"\"," <<std::endl;
    os <<"        \"AskVolume4\": \"" <<aMarketDataAsk45Field.AskVolume4  <<"\"," <<std::endl;
    os <<"        \"AskPrice5\": \"" <<aMarketDataAsk45Field.AskPrice5  <<"\"," <<std::endl;
    os <<"        \"AskVolume5\": \"" <<aMarketDataAsk45Field.AskVolume5  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataUpdateTimeField const& aMarketDataUpdateTimeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataUpdateTimeField\": {" <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aMarketDataUpdateTimeField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aMarketDataUpdateTimeField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"UpdateMillisec\": \"" <<aMarketDataUpdateTimeField.UpdateMillisec  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcDepthMarketDataField const& aDepthMarketDataField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcDepthMarketDataField\": {" <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aDepthMarketDataField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aDepthMarketDataField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"UpdateMillisec\": \"" <<aDepthMarketDataField.UpdateMillisec  <<"\"," <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aDepthMarketDataField.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"HighestPrice\": \"" <<aDepthMarketDataField.HighestPrice  <<"\"," <<std::endl;
    os <<"        \"LowestPrice\": \"" <<aDepthMarketDataField.LowestPrice  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aDepthMarketDataField.ClosePrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aDepthMarketDataField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aDepthMarketDataField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aDepthMarketDataField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"CurrDelta\": \"" <<aDepthMarketDataField.CurrDelta  <<"\"," <<std::endl;
    os <<"        \"LastPrice\": \"" <<aDepthMarketDataField.LastPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aDepthMarketDataField.Volume  <<"\"," <<std::endl;
    os <<"        \"Turnover\": \"" <<aDepthMarketDataField.Turnover  <<"\"," <<std::endl;
    os <<"        \"OpenInterest\": \"" <<aDepthMarketDataField.OpenInterest  <<"\"," <<std::endl;
    os <<"        \"BidPrice1\": \"" <<aDepthMarketDataField.BidPrice1  <<"\"," <<std::endl;
    os <<"        \"BidVolume1\": \"" <<aDepthMarketDataField.BidVolume1  <<"\"," <<std::endl;
    os <<"        \"AskPrice1\": \"" <<aDepthMarketDataField.AskPrice1  <<"\"," <<std::endl;
    os <<"        \"AskVolume1\": \"" <<aDepthMarketDataField.AskVolume1  <<"\"," <<std::endl;
    os <<"        \"BidPrice2\": \"" <<aDepthMarketDataField.BidPrice2  <<"\"," <<std::endl;
    os <<"        \"BidVolume2\": \"" <<aDepthMarketDataField.BidVolume2  <<"\"," <<std::endl;
    os <<"        \"BidPrice3\": \"" <<aDepthMarketDataField.BidPrice3  <<"\"," <<std::endl;
    os <<"        \"BidVolume3\": \"" <<aDepthMarketDataField.BidVolume3  <<"\"," <<std::endl;
    os <<"        \"AskPrice2\": \"" <<aDepthMarketDataField.AskPrice2  <<"\"," <<std::endl;
    os <<"        \"AskVolume2\": \"" <<aDepthMarketDataField.AskVolume2  <<"\"," <<std::endl;
    os <<"        \"AskPrice3\": \"" <<aDepthMarketDataField.AskPrice3  <<"\"," <<std::endl;
    os <<"        \"AskVolume3\": \"" <<aDepthMarketDataField.AskVolume3  <<"\"," <<std::endl;
    os <<"        \"BidPrice4\": \"" <<aDepthMarketDataField.BidPrice4  <<"\"," <<std::endl;
    os <<"        \"BidVolume4\": \"" <<aDepthMarketDataField.BidVolume4  <<"\"," <<std::endl;
    os <<"        \"BidPrice5\": \"" <<aDepthMarketDataField.BidPrice5  <<"\"," <<std::endl;
    os <<"        \"BidVolume5\": \"" <<aDepthMarketDataField.BidVolume5  <<"\"," <<std::endl;
    os <<"        \"AskPrice4\": \"" <<aDepthMarketDataField.AskPrice4  <<"\"," <<std::endl;
    os <<"        \"AskVolume4\": \"" <<aDepthMarketDataField.AskVolume4  <<"\"," <<std::endl;
    os <<"        \"AskPrice5\": \"" <<aDepthMarketDataField.AskPrice5  <<"\"," <<std::endl;
    os <<"        \"AskVolume5\": \"" <<aDepthMarketDataField.AskVolume5  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

#endif 
