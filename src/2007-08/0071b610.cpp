// from server: 64% by colin
typedef unsigned int DWORD;
typedef unsigned short WORD;
typedef void* HGDIOBJ;

extern "C" {
    __declspec(dllimport) HGDIOBJ __stdcall CreateBitmap(int, int, unsigned int, unsigned int, const void*);
    __declspec(dllimport) HGDIOBJ __stdcall CreatePatternBrush(HGDIOBJ);
    __declspec(dllimport) int __stdcall PatBlt(void*, int, int, int, int, DWORD);
}

extern "C" void __cdecl sub_630238(void*, void*);
extern "C" void __cdecl sub_630a1e(void);
extern "C" void* __cdecl sub_668f70(void);
extern "C" void* __cdecl sub_668770(void*, int);
extern "C" void* __cdecl sub_682240(void*, void*, int, int, int);
extern "C" void* __cdecl sub_682270(void*, void*);
extern "C" void* __cdecl sub_738406(void*, void*);
extern "C" void __cdecl sub_41f680(void*);

struct CXTPTabPaintManager_CColorSet {
    void* vtbl;
    void* hdc;
    char pad[0x204 - 8];
    void* field_204;

    void func(int, int, int, int, int, int, int, int);
};

void CXTPTabPaintManager_CColorSet::func(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    struct Local1 {
        void* p;
        void* vtbl;
        Local1() : p(0), vtbl((void*)0x788300) {}
        ~Local1() { sub_41f680(this); }
    };

    struct Local2 {
        void* p;
        void* vtbl;
        Local2() : p(0), vtbl((void*)0x7864e0) {}
        ~Local2() { sub_41f680(this); }
    };

    if (a1 == -2) {
        WORD pattern[8];
        pattern[0] = 0x55;
        pattern[1] = 0xaa;
        pattern[2] = 0x55;
        pattern[3] = 0xaa;
        pattern[4] = 0x55;
        pattern[5] = 0xaa;
        pattern[6] = 0x55;
        pattern[7] = 0xaa;

        Local1 l1;
        HGDIOBJ bmp = CreateBitmap(8, 8, 1, 1, pattern);
        sub_630238(&l1, bmp);

        Local2 l2;
        HGDIOBJ brush = CreatePatternBrush(l1.p);
        sub_630238(&l2, brush);

        void* old = sub_738406(this, &l2);

        void* font1 = sub_668f70();
        void* font1b = sub_668770(font1, 0xf);
        ((void (__thiscall*)(void*, void*))((void**)this->vtbl)[0x34 / 4])(this, font1b);

        void* font2 = sub_668f70();
        void* font2b = sub_668770(font2, 0x14);
        ((void (__thiscall*)(void*, void*))((void**)this->vtbl)[0x38 / 4])(this, font2b);

        PatBlt(this->hdc, a5, a6, a7 - a5, a8 - a6, 0xf00021);

        sub_738406(this, old);

        l2.~Local2();
        l1.~Local1();
    } else {
        int ebp;
        if (a2 == 2 || a2 == 0) {
            ebp = 1;
        } else {
            ebp = 0;
        }

        int eax;
        int edi;
        if (a2 == 0 || a2 == 1) {
            eax = a3;
            edi = a4;
        } else {
            eax = a4;
            edi = a3;
        }

        void* edx = this->field_204;
        if (*(void**)((char*)edx + 0x80) != 0) {
            int tmp = edi;
            edi = eax;
            eax = tmp;
        }

        int ecx = (ebp == 0) ? 1 : 0;
        void* result = sub_682240(this, &a5, edi, eax, ecx);
        sub_682270(result, 0);
    }
}
