// from server: 45% by colin
struct CXTPRibbonControlSystemRecentFileList {
    void f(int a1);
};

extern "C" void* __stdcall sub_0062FEF6(unsigned int);
extern "C" void __stdcall sub_0063A120(void*, int);
extern "C" void __stdcall sub_0063A700(void*, const char*);
extern "C" int __stdcall sub_006439B0(void*);
extern "C" void* __stdcall sub_0067D1E0(void*, void*, int);
extern "C" void* __stdcall sub_0067D690(void*, void*, int);
extern "C" void* __stdcall sub_00719AF0(void*);
extern "C" void __stdcall sub_00738D54(const char*);

extern "C" void* __stdcall sub_0077D55C(void*, int);
extern "C" void* __stdcall sub_0077D560(void*, int, int);
extern "C" int __stdcall sub_0077DCD0(void*);
extern "C" void* __stdcall sub_0077DD6C(void*, const char*);
extern "C" const char* __stdcall sub_0077DD98(void*);
extern "C" void* __stdcall sub_0077DDAC(void*);
extern "C" void* __stdcall sub_0077DDBC(void*);

void CXTPRibbonControlSystemRecentFileList::f(int a1)
{
    void* p = *(void**)this;
    void* (__thiscall *fn1)(void*) = (void* (__thiscall *)(void*))(*(void***)p)[0x140 / 4];
    void* ebx = fn1(this);
    if (ebx == 0)
        return;
    if (*(int*)((char*)ebx + 8) == 0)
        return;

    void* eax = *(void**)((char*)this + 0xf4);
    int ecx = *(int*)((char*)this + 0x80);
    int eax2 = *(int*)((char*)eax + 0x2c);
    ecx++;
    if (ecx < eax2) {
        do {
            int eax3 = *(int*)((char*)this + 0x80) + 1;
            void* ecx2 = *(void**)((char*)this + 0xf4);
            void* edi;
            if (eax3 >= 0 && eax3 < *(int*)((char*)ecx2 + 0x2c)) {
                void* edx = *(void**)((char*)ecx2 + 0x28);
                edi = *(void**)((char*)edx + eax3 * 4);
            } else {
                edi = 0;
            }
            void* eax4 = *(void**)this;
            void* (__thiscall *fn2)(void*) = (void* (__thiscall *)(void*))(*(void***)eax4)[0x144 / 4];
            int ebp = *(int*)((char*)edi + 0x84);
            fn2(this);
            if (ebp < (int)eax4)
                break;
            void* eax5 = *(void**)this;
            void* (__thiscall *fn3)(void*) = (void* (__thiscall *)(void*))(*(void***)eax5)[0x144 / 4];
            ebp = *(int*)((char*)edi + 0x84);
            fn3(this);
            if (ebp > (int)eax5 + *(int*)((char*)ebx + 4))
                break;
            void* ecx3 = *(void**)((char*)this + 0xf4);
            void* eax6 = *(void**)ecx3;
            void (__thiscall *fn4)(void*, void*) = (void (__thiscall *)(void*, void*))(*(void***)eax6)[0x58 / 4];
            fn4(ecx3, edi);
            void* eax7 = *(void**)((char*)this + 0xf4);
            int ecx4 = *(int*)((char*)this + 0x80);
            int eax8 = *(int*)((char*)eax7 + 0x2c);
            ecx4++;
            if (ecx4 >= eax8)
                break;
        } while (true);
    }

    void* ecx5 = *(void**)((char*)this + 0xfc);
    if (sub_006439B0(ecx5) != 0) {
        void* edx = *(void**)this;
        void (__thiscall *fn5)(void*, int) = (void (__thiscall *)(void*, int))(*(void***)edx)[0x68 / 4];
        *(int*)((char*)this + 0xd0) = 0;
        fn5(this, 1);
        return;
    }

    char buf1[0x10];
    sub_0077DDAC(buf1);

    int ebp = 0;
    *(int*)((char*)this + 0x2c) = ebp;
    if (*(int*)((char*)ebx + 4) <= 0)
        goto cleanup;

    do {
        void* ecx6 = *(void**)((char*)ebx + 8);
        int edi = ebp * 4;
        ecx6 = (char*)ecx6 + edi;
        *(int*)((char*)this + 0x1c) = edi;
        if (sub_0077DCD0(ecx6) != 0)
            break;

        char buf2[0x104];
        sub_0077D560(buf2, 0x104, 0x104);
        void* ecx7 = *(void**)((char*)ebx + 8);
        ecx7 = (char*)ecx7 + edi;
        const char* s = sub_0077DD98(ecx7);
        sub_00738D54(s);

        sub_0077D55C(buf1, -1);

        void* mem = sub_0062FEF6(0x168);
        void* edi2;
        if (mem != 0) {
            edi2 = sub_00719AF0(mem);
        } else {
            edi2 = 0;
        }

        int ecx8 = *(int*)((char*)this + 0x80);
        void* eax9 = *(void**)this;
        int edx2 = ecx8 + ebp + 1;
        void* (__thiscall *fn6)(void*, const char*, int, int) = (void* (__thiscall *)(void*, const char*, int, int))(*(void***)eax9)[0x144 / 4];
        fn6(this, (const char*)0x785954, edx2, 1);
        void* ecx9 = *(void**)((char*)this + 0xf4);
        int eax10 = (int)eax9 + ebp;
        void* edi3 = sub_0067D1E0(edi2, ecx9, eax10);
        ebp++;
        void* eax11 = sub_0067D690(buf2, buf1, ebp);
        const char* s2 = sub_0077DD98(eax11);
        sub_0063A700(edi3, s2);
        sub_0077DDBC(buf1);
        sub_0063A120(edi3, 0x48);
        void* ecx10 = *(void**)((char*)ebx + 8);
        ecx10 = (char*)ecx10 + *(int*)((char*)this + 0x1c);
        const char* s3 = sub_0077DD98(ecx10);
        sub_0077DD6C((char*)edi3 + 0xe8, s3);
        sub_0077DD6C((char*)edi3 + 0xec, 0);
    } while (ebp < *(int*)((char*)ebx + 4));

cleanup:
    sub_0077DDBC(buf1);
}
