// from server: 50% by colin
// roc 2007-08 006e5cf0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 434 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e5cf0

extern "C" {
    typedef unsigned int DWORD;
    typedef void* HWND;
    typedef void* HDC;
    typedef void* HFONT;
    typedef void* HGDIOBJ;
    typedef int BOOL;
    typedef unsigned short WORD;
    typedef unsigned char BYTE;
    typedef long LONG;

    struct tagSIZE { LONG cx; LONG cy; };
    typedef struct tagSIZE SIZE;
    typedef SIZE* LPSIZE;

    struct tagPOINT { LONG x; LONG y; };
    typedef struct tagPOINT POINT;
    typedef POINT* LPPOINT;

    struct tagLOGFONTA {
        LONG lfHeight;
        LONG lfWidth;
        LONG lfEscapement;
        LONG lfOrientation;
        LONG lfWeight;
        BYTE lfItalic;
        BYTE lfUnderline;
        BYTE lfStrikeOut;
        BYTE lfCharSet;
        BYTE lfOutPrecision;
        BYTE lfClipPrecision;
        BYTE lfQuality;
        BYTE lfPitchAndFamily;
        char lfFaceName[32];
    };
    typedef tagLOGFONTA LOGFONTA;
    typedef LOGFONTA* LPLOGFONTA;

    typedef void* HGDIOBJ;

    __declspec(dllimport) HFONT __stdcall CreateFontIndirectA(const LOGFONTA*);
    __declspec(dllimport) BOOL __stdcall GetTextExtentPoint32A(HDC, const char*, int, LPSIZE);
    __declspec(dllimport) HWND __stdcall GetDesktopWindow(void);
    __declspec(dllimport) int __cdecl strcpy_s(char*, unsigned int, const char*);
}

// forward declarations of internal functions
extern "C" void __stdcall sub_6301c0();
extern "C" void __stdcall sub_63022c();
extern "C" void __stdcall sub_630238();
extern "C" void __stdcall sub_67f650();
extern "C" void __stdcall sub_67f6d0();
extern "C" void __stdcall sub_680550();
extern "C" void __stdcall sub_6805d0();
extern "C" void __stdcall sub_682240();
extern "C" void __stdcall sub_7383a6();
extern "C" void __stdcall sub_7383ac();

// imported function pointers
extern "C" {
    extern void* (__stdcall *g_pfn_77d14c)(void*);
    extern void* (__stdcall *g_pfn_77dd98)(void*);
    extern void* (__stdcall *g_pfn_77ddbc)(void*);
    extern void* (__stdcall *g_pfn_77ee4c)(void);
    extern void* (__stdcall *g_pfn_77e9a4)(void*, unsigned int, void*, unsigned int);
    extern void* (__stdcall *g_pfn_77d0b8)(void*, unsigned int, void*, unsigned int, void*);
}

extern "C" DWORD g_dw_8b5188;
extern "C" char g_sz_7a0fd4[];
extern "C" char g_sz_787034[];

struct CColorSetVisualStudio2005 {
    char pad_000[0x78];
    int field_078;
    int field_07c;
    char pad_080[0x04];
    char field_084[0x08];
    char field_08c[0x08];
    int field_094;
    int field_098;

    void __thiscall sub_6e5cf0(void* pParam1, int nParam2);
};

void __thiscall CColorSetVisualStudio2005::sub_6e5cf0(void* pParam1, int nParam2)
{
    char* p = (char*)pParam1;
    this->field_098 = nParam2;

    if (p != 0)
        return;

    int bFlag = 0;
    {
        unsigned char al = 2;
        unsigned char cmp = *(unsigned char*)(p + 0x17);
        if (al < cmp)
            bFlag = 1;
        else
            bFlag = 0;
    }

    if (this->field_094 != 0 && bFlag == 0 && nParam2 != 0)
    {
        sub_682240();
        void* r = ((void* (__stdcall*)(char*))sub_67f650)(g_sz_7a0fd4);
        if (r != 0)
        {
            g_pfn_77e9a4(p + 0x1c, 0x20, g_sz_7a0fd4, 0x20);
        }
    }

    char* pField84 = (char*)this + 0x84;
    ((void (__stdcall*)(char*))sub_63022c)(pField84);
    void* h = g_pfn_77d14c(p);
    ((void (__stdcall*)(char*, void*))sub_630238)(pField84, h);

    int val = *(int*)p;
    *(int*)(p + 0xc) = 0x384;
    *(int*)(p + 8) = 0xa8c;
    if (val < 0)
    {
        if (val > -0xb)
            val = -0xb;
    }
    *(int*)p = val;

    int edx = this->field_094;
    char localBuf[0x20];
    void* r2 = ((void* (__stdcall*)(int, char*))sub_67f6d0)(edx, localBuf);
    void* r3 = g_pfn_77dd98(r2);
    g_pfn_77e9a4(p + 0x1c, 0x20, r3, 0x20);

    char* pField8c = (char*)this + 0x8c;
    g_pfn_77ddbc(localBuf);
    ((void (__stdcall*)(char*))sub_63022c)(pField8c);
    void* h2 = g_pfn_77d14c(p);
    ((void (__stdcall*)(char*, void*))sub_630238)(pField8c, h2);

    void* r4 = g_pfn_77ee4c();
    void* r5 = ((void* (__stdcall*)(void*))sub_6301c0)(r4);

    char localBuf2[0x20];
    ((void (__stdcall*)(char*, void*))sub_7383ac)(localBuf2, r5);

    char localBuf3[0x20];
    *(int*)(localBuf3 + 0x20) = 0;
    ((void (__stdcall*)(char*, char*, char*))sub_680550)(localBuf3, localBuf2, pField84);

    void* ecx = *(void**)(localBuf3 + 0x18);
    char localBuf4[0x10];
    g_pfn_77d0b8(ecx, 1, g_sz_787034, 1, localBuf4);

    int eax = 0xd;
    if (*(int*)(localBuf4 + 4) >= eax)
    {
        void* ecx2 = *(void**)(localBuf3 + 0x18);
        g_pfn_77d0b8(ecx2, 1, g_sz_787034, 1, localBuf4);
        eax = *(int*)(localBuf4 + 4);
    }

    int ecx3 = this->field_07c;
    ecx3 += eax;
    this->field_078 = ecx3;

    ((void (__stdcall*)(char*))sub_6805d0)(localBuf3);
    *(int*)(localBuf2 + 0x1c) = -1;
    ((void (__stdcall*)(char*))sub_7383a6)(localBuf2);
}
