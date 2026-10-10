// from server: 15% by colin
struct CXTPToolBar_PAVCToolBarInfo_CArray {
    int f(int);
};

extern "C" void __stdcall sub_685720(int, int, int, int);
extern "C" void __stdcall sub_685820(int, int, int, int, int);
extern "C" void __stdcall sub_685700(int, int, int, int);
extern "C" void __stdcall sub_6ffab0(int, int, int);
extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void __cdecl sub_62ff20();
extern "C" void __cdecl sub_6301e4(void*);
extern "C" void __stdcall sub_66ab90(int, int);
extern "C" void __stdcall sub_66adf0(int);
extern "C" void __stdcall sub_66ae50(int, int, int);
extern "C" void __stdcall sub_66af60(int, int);
extern "C" void __stdcall sub_66c6c0(int);
extern "C" int __stdcall sub_77ddac(int);
extern "C" int __stdcall sub_77dd94(int, int, int);
extern "C" int __stdcall sub_77dd98(int);
extern "C" int __stdcall sub_77ddbc(int);

int CXTPToolBar_PAVCToolBarInfo_CArray::f(int a1)
{
    int* p = (int*)a1;
    int* vtbl = (int*)*p;
    int (*fn)(int, const char*) = (int (*)(int, const char*))vtbl[0x70/4];
    int esi = fn(a1, (const char*)0x7cb0cc);
    int ebp = 0;
    int local30 = 0;
    int local20;
    int local38;
    int local14;
    int local1c;

    if (*(int*)(a1 + 0x24) != 0) {
        sub_66c6c0((int)this);
        sub_685720(esi, (int)this, 0x784980, ebp);
        sub_685820(esi, 0x7cb0c0, (int)&local38, 0, 0);
        sub_685700(esi, 0x7cb0b8, (int)&local38, ebp);
        sub_66af60((int)this, (int)&local20);
        sub_685700(esi, 0x7cb0b8, (int)&local38, ebp);
        local38 = ebp;
        sub_6ffab0((int)this + 4, (int)&local38, -1);
        if ((unsigned short)local38 > (unsigned short)ebp) {
            do {
                void* mem = sub_62fef6(0x50);
                int obj;
                if (mem != 0) {
                    sub_66adf0((int)mem);
                    obj = (int)mem;
                } else {
                    obj = 0;
                }
                if (ebp < 0 || ebp >= *(int*)((char*)this + 0xc)) {
                    sub_62ff20();
                }
                *(int*)(*(int*)((char*)this + 8) + ebp * 4) = obj;
                sub_77ddac((int)&local14);
                local38 = 3;
                sub_77dd94((int)&local14, 0x7cb0ac, ebp);
                int* vt2 = (int*)esi;
                int (*fn2)(int, int) = (int (*)(int, int))vt2[0x70/4];
                int edi = fn2(esi, sub_77dd98((int)&local14));
                local1c = edi;
                if (ebp >= *(int*)((char*)this + 0xc)) {
                    sub_62ff20();
                }
                int ecx = *(int*)(*(int*)((char*)this + 8) + ebp * 4);
                sub_66ae50(ecx, edi, (int)this);
                if (edi != 0) {
                    sub_6301e4((void*)edi);
                }
                local38 = 0;
                sub_77ddbc((int)&local14);
                ebp++;
                if (ebp < (int)(unsigned short)local38) {
                    continue;
                }
                break;
            } while (1);
        }
        *(int*)this = 0x17;
    } else {
        sub_685720(esi, (int)this, 0x784980, ebp);
        sub_66ab90((int)this, (int)&local20);
        sub_685820(esi, 0x7cb0c0, (int)&local38, 0, 0);
        unsigned short cnt = *(unsigned short*)((char*)this + 0xc);
        local38 = cnt;
        sub_685700(esi, 0x7cb0b8, (int)&local38, ebp);
        if (*(int*)((char*)this + 0xc) > 0) {
            do {
                sub_77ddac((int)&local38);
                local38 = 1;
                sub_77dd94((int)&local38, 0x7cb0ac, ebp);
                int* vt2 = (int*)esi;
                int (*fn2)(int, int) = (int (*)(int, int))vt2[0x70/4];
                int edi = fn2(esi, sub_77dd98((int)&local38));
                local1c = edi;
                local30 = 2;
                if (ebp < 0 || ebp >= *(int*)((char*)this + 0xc)) {
                    sub_62ff20();
                }
                int ecx = *(int*)(*(int*)((char*)this + 8) + ebp * 4);
                sub_66ae50(ecx, edi, (int)this);
                local30 = 1;
                if (edi != 0) {
                    sub_6301e4((void*)edi);
                }
                sub_77ddbc((int)&local38);
                ebp++;
            } while (ebp < *(int*)((char*)this + 0xc));
        }
    }

    if (esi != 0) {
        sub_6301e4((void*)esi);
    }
    return 0;
}
