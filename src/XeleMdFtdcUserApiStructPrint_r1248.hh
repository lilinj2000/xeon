#ifndef XELEMD_FTDC_USERAPI_STRUCT_PRINT_R1248_HH
#define XELEMD_FTDC_USERAPI_STRUCT_PRINT_R1248_HH

#include <ostream>
#include "XeleMdFtdcUserApiStruct.h"

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcReqUserLoginField const& aMdFtdcReqUserLoginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcReqUserLoginField\": {" <<std::endl;
    os <<"        \"UserID\": \"" <<aMdFtdcReqUserLoginField.UserID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aMdFtdcReqUserLoginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aMdFtdcReqUserLoginField.Password  <<"\"," <<std::endl;
    os <<"        \"ProtocolInfo\": \"" <<aMdFtdcReqUserLoginField.ProtocolInfo  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcRspUserLoginField const& aMdFtdcRspUserLoginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcRspUserLoginField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aMdFtdcRspUserLoginField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aMdFtdcRspUserLoginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aMdFtdcRspUserLoginField.UserID  <<"\"," <<std::endl;
    os <<"        \"LoginTime\": \"" <<aMdFtdcRspUserLoginField.LoginTime  <<"\"," <<std::endl;
    os <<"        \"MaxOrderLocalID\": \"" <<aMdFtdcRspUserLoginField.MaxOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"TradingSystemName\": \"" <<aMdFtdcRspUserLoginField.TradingSystemName  <<"\"," <<std::endl;
    os <<"        \"DataCenterID\": \"" <<aMdFtdcRspUserLoginField.DataCenterID  <<"\"," <<std::endl;
    os <<"        \"PrivateFlowSize\": \"" <<aMdFtdcRspUserLoginField.PrivateFlowSize  <<"\"," <<std::endl;
    os <<"        \"UserFlowSize\": \"" <<aMdFtdcRspUserLoginField.UserFlowSize  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcReqUserLogoutField const& aMdFtdcReqUserLogoutField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcReqUserLogoutField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aMdFtdcReqUserLogoutField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aMdFtdcReqUserLogoutField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcRspUserLogoutField const& aMdFtdcRspUserLogoutField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcRspUserLogoutField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aMdFtdcRspUserLogoutField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aMdFtdcRspUserLogoutField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcUserPasswordUpdateField const& aMdFtdcUserPasswordUpdateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcUserPasswordUpdateField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aMdFtdcUserPasswordUpdateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aMdFtdcUserPasswordUpdateField.UserID  <<"\"," <<std::endl;
    os <<"        \"OldPassword\": \"" <<aMdFtdcUserPasswordUpdateField.OldPassword  <<"\"," <<std::endl;
    os <<"        \"NewPassword\": \"" <<aMdFtdcUserPasswordUpdateField.NewPassword  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcRspInfoField const& aMdFtdcRspInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcRspInfoField\": {" <<std::endl;
    os <<"        \"ErrorID\": \"" <<aMdFtdcRspInfoField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aMdFtdcRspInfoField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcDisseminationField const& aMdFtdcDisseminationField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcDisseminationField\": {" <<std::endl;
    os <<"        \"SequenceSeries\": \"" <<aMdFtdcDisseminationField.SequenceSeries  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aMdFtdcDisseminationField.SequenceNo  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcInvestorAccountDepositResField const& aMdFtdcInvestorAccountDepositResField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcInvestorAccountDepositResField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aMdFtdcInvestorAccountDepositResField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aMdFtdcInvestorAccountDepositResField.UserID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aMdFtdcInvestorAccountDepositResField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aMdFtdcInvestorAccountDepositResField.AccountID  <<"\"," <<std::endl;
    os <<"        \"AccountSeqNo\": \"" <<aMdFtdcInvestorAccountDepositResField.AccountSeqNo  <<"\"," <<std::endl;
    os <<"        \"Amount\": \"" <<aMdFtdcInvestorAccountDepositResField.Amount  <<"\"," <<std::endl;
    os <<"        \"AmountDirection\": \"" <<aMdFtdcInvestorAccountDepositResField.AmountDirection  <<"\"," <<std::endl;
    os <<"        \"Available\": \"" <<aMdFtdcInvestorAccountDepositResField.Available  <<"\"," <<std::endl;
    os <<"        \"Balance\": \"" <<aMdFtdcInvestorAccountDepositResField.Balance  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataBaseField const& aMdFtdcMarketDataBaseField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataBaseField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aMdFtdcMarketDataBaseField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementGroupID\": \"" <<aMdFtdcMarketDataBaseField.SettlementGroupID  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aMdFtdcMarketDataBaseField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aMdFtdcMarketDataBaseField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"PreClosePrice\": \"" <<aMdFtdcMarketDataBaseField.PreClosePrice  <<"\"," <<std::endl;
    os <<"        \"PreOpenInterest\": \"" <<aMdFtdcMarketDataBaseField.PreOpenInterest  <<"\"," <<std::endl;
    os <<"        \"PreDelta\": \"" <<aMdFtdcMarketDataBaseField.PreDelta  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataStaticField const& aMdFtdcMarketDataStaticField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataStaticField\": {" <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aMdFtdcMarketDataStaticField.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"HighestPrice\": \"" <<aMdFtdcMarketDataStaticField.HighestPrice  <<"\"," <<std::endl;
    os <<"        \"LowestPrice\": \"" <<aMdFtdcMarketDataStaticField.LowestPrice  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aMdFtdcMarketDataStaticField.ClosePrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aMdFtdcMarketDataStaticField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aMdFtdcMarketDataStaticField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aMdFtdcMarketDataStaticField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"CurrDelta\": \"" <<aMdFtdcMarketDataStaticField.CurrDelta  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataLastMatchField const& aMdFtdcMarketDataLastMatchField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataLastMatchField\": {" <<std::endl;
    os <<"        \"LastPrice\": \"" <<aMdFtdcMarketDataLastMatchField.LastPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aMdFtdcMarketDataLastMatchField.Volume  <<"\"," <<std::endl;
    os <<"        \"Turnover\": \"" <<aMdFtdcMarketDataLastMatchField.Turnover  <<"\"," <<std::endl;
    os <<"        \"OpenInterest\": \"" <<aMdFtdcMarketDataLastMatchField.OpenInterest  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataBestPriceField const& aMdFtdcMarketDataBestPriceField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataBestPriceField\": {" <<std::endl;
    os <<"        \"BidPrice1\": \"" <<aMdFtdcMarketDataBestPriceField.BidPrice1  <<"\"," <<std::endl;
    os <<"        \"BidVolume1\": \"" <<aMdFtdcMarketDataBestPriceField.BidVolume1  <<"\"," <<std::endl;
    os <<"        \"AskPrice1\": \"" <<aMdFtdcMarketDataBestPriceField.AskPrice1  <<"\"," <<std::endl;
    os <<"        \"AskVolume1\": \"" <<aMdFtdcMarketDataBestPriceField.AskVolume1  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataBid23Field const& aMdFtdcMarketDataBid23Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataBid23Field\": {" <<std::endl;
    os <<"        \"BidPrice2\": \"" <<aMdFtdcMarketDataBid23Field.BidPrice2  <<"\"," <<std::endl;
    os <<"        \"BidVolume2\": \"" <<aMdFtdcMarketDataBid23Field.BidVolume2  <<"\"," <<std::endl;
    os <<"        \"BidPrice3\": \"" <<aMdFtdcMarketDataBid23Field.BidPrice3  <<"\"," <<std::endl;
    os <<"        \"BidVolume3\": \"" <<aMdFtdcMarketDataBid23Field.BidVolume3  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataAsk23Field const& aMdFtdcMarketDataAsk23Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataAsk23Field\": {" <<std::endl;
    os <<"        \"AskPrice2\": \"" <<aMdFtdcMarketDataAsk23Field.AskPrice2  <<"\"," <<std::endl;
    os <<"        \"AskVolume2\": \"" <<aMdFtdcMarketDataAsk23Field.AskVolume2  <<"\"," <<std::endl;
    os <<"        \"AskPrice3\": \"" <<aMdFtdcMarketDataAsk23Field.AskPrice3  <<"\"," <<std::endl;
    os <<"        \"AskVolume3\": \"" <<aMdFtdcMarketDataAsk23Field.AskVolume3  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataBid45Field const& aMdFtdcMarketDataBid45Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataBid45Field\": {" <<std::endl;
    os <<"        \"BidPrice4\": \"" <<aMdFtdcMarketDataBid45Field.BidPrice4  <<"\"," <<std::endl;
    os <<"        \"BidVolume4\": \"" <<aMdFtdcMarketDataBid45Field.BidVolume4  <<"\"," <<std::endl;
    os <<"        \"BidPrice5\": \"" <<aMdFtdcMarketDataBid45Field.BidPrice5  <<"\"," <<std::endl;
    os <<"        \"BidVolume5\": \"" <<aMdFtdcMarketDataBid45Field.BidVolume5  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataAsk45Field const& aMdFtdcMarketDataAsk45Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataAsk45Field\": {" <<std::endl;
    os <<"        \"AskPrice4\": \"" <<aMdFtdcMarketDataAsk45Field.AskPrice4  <<"\"," <<std::endl;
    os <<"        \"AskVolume4\": \"" <<aMdFtdcMarketDataAsk45Field.AskVolume4  <<"\"," <<std::endl;
    os <<"        \"AskPrice5\": \"" <<aMdFtdcMarketDataAsk45Field.AskPrice5  <<"\"," <<std::endl;
    os <<"        \"AskVolume5\": \"" <<aMdFtdcMarketDataAsk45Field.AskVolume5  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcMarketDataUpdateTimeField const& aMdFtdcMarketDataUpdateTimeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcMarketDataUpdateTimeField\": {" <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aMdFtdcMarketDataUpdateTimeField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aMdFtdcMarketDataUpdateTimeField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"UpdateMillisec\": \"" <<aMdFtdcMarketDataUpdateTimeField.UpdateMillisec  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleMdFtdcDepthMarketDataField const& aMdFtdcDepthMarketDataField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleMdFtdcDepthMarketDataField\": {" <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aMdFtdcDepthMarketDataField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aMdFtdcDepthMarketDataField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"UpdateMillisec\": \"" <<aMdFtdcDepthMarketDataField.UpdateMillisec  <<"\"," <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aMdFtdcDepthMarketDataField.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"HighestPrice\": \"" <<aMdFtdcDepthMarketDataField.HighestPrice  <<"\"," <<std::endl;
    os <<"        \"LowestPrice\": \"" <<aMdFtdcDepthMarketDataField.LowestPrice  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aMdFtdcDepthMarketDataField.ClosePrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aMdFtdcDepthMarketDataField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aMdFtdcDepthMarketDataField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aMdFtdcDepthMarketDataField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"CurrDelta\": \"" <<aMdFtdcDepthMarketDataField.CurrDelta  <<"\"," <<std::endl;
    os <<"        \"LastPrice\": \"" <<aMdFtdcDepthMarketDataField.LastPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aMdFtdcDepthMarketDataField.Volume  <<"\"," <<std::endl;
    os <<"        \"Turnover\": \"" <<aMdFtdcDepthMarketDataField.Turnover  <<"\"," <<std::endl;
    os <<"        \"OpenInterest\": \"" <<aMdFtdcDepthMarketDataField.OpenInterest  <<"\"," <<std::endl;
    os <<"        \"BidPrice1\": \"" <<aMdFtdcDepthMarketDataField.BidPrice1  <<"\"," <<std::endl;
    os <<"        \"BidVolume1\": \"" <<aMdFtdcDepthMarketDataField.BidVolume1  <<"\"," <<std::endl;
    os <<"        \"AskPrice1\": \"" <<aMdFtdcDepthMarketDataField.AskPrice1  <<"\"," <<std::endl;
    os <<"        \"AskVolume1\": \"" <<aMdFtdcDepthMarketDataField.AskVolume1  <<"\"," <<std::endl;
    os <<"        \"BidPrice2\": \"" <<aMdFtdcDepthMarketDataField.BidPrice2  <<"\"," <<std::endl;
    os <<"        \"BidVolume2\": \"" <<aMdFtdcDepthMarketDataField.BidVolume2  <<"\"," <<std::endl;
    os <<"        \"BidPrice3\": \"" <<aMdFtdcDepthMarketDataField.BidPrice3  <<"\"," <<std::endl;
    os <<"        \"BidVolume3\": \"" <<aMdFtdcDepthMarketDataField.BidVolume3  <<"\"," <<std::endl;
    os <<"        \"AskPrice2\": \"" <<aMdFtdcDepthMarketDataField.AskPrice2  <<"\"," <<std::endl;
    os <<"        \"AskVolume2\": \"" <<aMdFtdcDepthMarketDataField.AskVolume2  <<"\"," <<std::endl;
    os <<"        \"AskPrice3\": \"" <<aMdFtdcDepthMarketDataField.AskPrice3  <<"\"," <<std::endl;
    os <<"        \"AskVolume3\": \"" <<aMdFtdcDepthMarketDataField.AskVolume3  <<"\"," <<std::endl;
    os <<"        \"BidPrice4\": \"" <<aMdFtdcDepthMarketDataField.BidPrice4  <<"\"," <<std::endl;
    os <<"        \"BidVolume4\": \"" <<aMdFtdcDepthMarketDataField.BidVolume4  <<"\"," <<std::endl;
    os <<"        \"BidPrice5\": \"" <<aMdFtdcDepthMarketDataField.BidPrice5  <<"\"," <<std::endl;
    os <<"        \"BidVolume5\": \"" <<aMdFtdcDepthMarketDataField.BidVolume5  <<"\"," <<std::endl;
    os <<"        \"AskPrice4\": \"" <<aMdFtdcDepthMarketDataField.AskPrice4  <<"\"," <<std::endl;
    os <<"        \"AskVolume4\": \"" <<aMdFtdcDepthMarketDataField.AskVolume4  <<"\"," <<std::endl;
    os <<"        \"AskPrice5\": \"" <<aMdFtdcDepthMarketDataField.AskPrice5  <<"\"," <<std::endl;
    os <<"        \"AskVolume5\": \"" <<aMdFtdcDepthMarketDataField.AskVolume5  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleShfeHighLevelOneMarketData const& aShfeHighLevelOneMarketData)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleShfeHighLevelOneMarketData\": {" <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aShfeHighLevelOneMarketData.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"UpdateMillisec\": \"" <<aShfeHighLevelOneMarketData.UpdateMillisec  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aShfeHighLevelOneMarketData.Volume  <<"\"," <<std::endl;
    os <<"        \"LastPrice\": \"" <<aShfeHighLevelOneMarketData.LastPrice  <<"\"," <<std::endl;
    os <<"        \"Turnover\": \"" <<aShfeHighLevelOneMarketData.Turnover  <<"\"," <<std::endl;
    os <<"        \"OpenInterest\": \"" <<aShfeHighLevelOneMarketData.OpenInterest  <<"\"," <<std::endl;
    os <<"        \"BidPrice\": \"" <<aShfeHighLevelOneMarketData.BidPrice  <<"\"," <<std::endl;
    os <<"        \"AskPrice\": \"" <<aShfeHighLevelOneMarketData.AskPrice  <<"\"," <<std::endl;
    os <<"        \"BidVolume\": \"" <<aShfeHighLevelOneMarketData.BidVolume  <<"\"," <<std::endl;
    os <<"        \"AskVolume\": \"" <<aShfeHighLevelOneMarketData.AskVolume  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleShfeDepthMarketData const& aShfeDepthMarketData)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleShfeDepthMarketData\": {" <<std::endl;
    os <<"        \"Direction\": \"" <<aShfeDepthMarketData.Direction  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CXeleShfeLowLevelOneMarketData const& aShfeLowLevelOneMarketData)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CXeleShfeLowLevelOneMarketData\": {" <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aShfeLowLevelOneMarketData.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aShfeLowLevelOneMarketData.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"HighestPrice\": \"" <<aShfeLowLevelOneMarketData.HighestPrice  <<"\"," <<std::endl;
    os <<"        \"LowestPrice\": \"" <<aShfeLowLevelOneMarketData.LowestPrice  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aShfeLowLevelOneMarketData.ClosePrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aShfeLowLevelOneMarketData.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aShfeLowLevelOneMarketData.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aShfeLowLevelOneMarketData.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"CurrDelta\": \"" <<aShfeLowLevelOneMarketData.CurrDelta  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

#endif
