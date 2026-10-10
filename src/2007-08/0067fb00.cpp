// from server: 49% by colin
extern "C" {
    struct SYSTEMTIME {
        unsigned short wYear;
        unsigned short wMonth;
        unsigned short wDayOfWeek;
        unsigned short wDay;
        unsigned short wHour;
        unsigned short wMinute;
        unsigned short wSecond;
        unsigned short wMilliseconds;
    };
    void __stdcall GetLocalTime(SYSTEMTIME*);
    int __stdcall GetDateFormatA(unsigned long, unsigned long, const SYSTEMTIME*, const char*, char*, int);
    int __stdcall GetTimeFormatA(unsigned long, unsigned long, const SYSTEMTIME*, const char*, char*, int);
}

extern char DAT_008b5188;
extern void* DAT_0077d1fc;
extern void* DAT_0077d1b0;
extern void* DAT_0077d1ac;
extern void* DAT_0077dc7c;
extern char DAT_007cebc0;
extern char DAT_007cebbc;
extern char DAT_007cebb8;
extern char DAT_007cebb4;

void __cdecl sub_00630b8c(char*, int, unsigned int);
void __cdecl sub_00630a1e();

struct CXTPPrintPageHeaderFooter {
    void func_0067fb00(char* param1, char* param2);
};

void CXTPPrintPageHeaderFooter::func_0067fb00(char* param1, char* param2)
{
    char buf1[200];
    char buf2[200];
    char buf3[200];
    char buf4[200];
    SYSTEMTIME st;
    char dateBuf[200];
    char timeBuf[200];

    GetLocalTime(&st);

    buf1[0] = 0;
    sub_00630b8c(buf1, 0, 0xc7);
    buf2[0] = 0;
    sub_00630b8c(buf2, 0, 0xc7);
    buf3[0] = 0;
    sub_00630b8c(buf3, 0, 0xc7);
    buf4[0] = 0;
    sub_00630b8c(buf4, 0, 0xc7);

    ((int (__stdcall*)(unsigned long, unsigned long, const SYSTEMTIME*, const char*, char*, int))DAT_0077d1b0)(1, 0, &st, 0, buf1, 0xc8);
    ((int (__stdcall*)(unsigned long, unsigned long, const SYSTEMTIME*, const char*, char*, int))DAT_0077d1b0)(2, 0, &st, 0, buf2, 0xc8);
    ((int (__stdcall*)(unsigned long, unsigned long, const SYSTEMTIME*, const char*, char*, int))DAT_0077d1ac)(0, 0, &st, 0, buf3, 0xc8);
    ((int (__stdcall*)(unsigned long, unsigned long, const SYSTEMTIME*, const char*, char*, int))DAT_0077d1ac)(0xc, 0, &st, 0, buf4, 0xc8);

    ((void (__thiscall*)(void*, char*, const char*))DAT_0077dc7c)(param1, buf1, &DAT_007cebc0);
    ((void (__thiscall*)(void*, char*, const char*))DAT_0077dc7c)(param1, buf2, &DAT_007cebbc);
    ((void (__thiscall*)(void*, char*, const char*))DAT_0077dc7c)(param1, buf3, &DAT_007cebb8);
    ((void (__thiscall*)(void*, char*, const char*))DAT_0077dc7c)(param1, buf4, &DAT_007cebb4);
}
