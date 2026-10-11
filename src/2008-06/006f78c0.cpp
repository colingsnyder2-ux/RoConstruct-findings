// from server: 50% by colin
extern "C" int __stdcall GetLocaleInfoA(unsigned int Locale, unsigned int LCType, char* lpLCData, int cchData);
extern "C" int __cdecl atoi(const char* str);

struct CXTPPrintOptions {
    virtual int GetLocaleInfo(int, char*, int);
    int GetLocale();
};

int CXTPPrintOptions::GetLocale()
{
    char buf[4];
    GetLocaleInfoA(0x0d, 4, buf, 4);
    return atoi(buf) != 0;
}
