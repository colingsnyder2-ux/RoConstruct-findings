// from server: 38% by atomic.potato
// roc 2009-12 00873500  unit: CXTPRibbonTheme  size: 687 bytes

extern "C" {
    void* __stdcall sub_98deb8(const char*);
    void* __stdcall sub_98de80();
    void __stdcall sub_98dec0(void*);
    void __stdcall sub_98cc6c(void*, int, int);
    int __stdcall sub_7f5a30(int);
    int __stdcall sub_7f65b0(void*);
    void __stdcall sub_7fda70(void*, void*);
    int __stdcall sub_8454d0(int, int, int, int, int, int);
    void* __stdcall sub_87ed00(void*, void*);
    void __stdcall sub_8e0e00(void*, int, void*, int, int, int, int, int, int);
    void __stdcall OffsetRect(void*, int, int);
}

struct CXTPRibbonTheme {
    void FillPopupLabelEntry(void* pDC, int x, int y);
};

void CXTPRibbonTheme::FillPopupLabelEntry(void* pDC, int x, int y)
{
    char* p = (char*)pDC;
    void* p1 = *(void**)(p + 0x158);
    if (p1 == 0) {
        sub_7fda70(*(void**)((char*)this + 0x60), pDC);
        return;
    }
    if (*(int*)((char*)p1 + 0x24) == 0) {
        sub_7fda70(*(void**)((char*)this + 0x60), pDC);
        return;
    }
    int edi;
    if (*(int*)(p + 0x98) != 0 || *(int*)(p + 0x94) != 0)
        edi = 1;
    else
        edi = 0;
    int eax = *(int*)(p + 0x80);
    void* ecx = *(void**)(p + 0xf8);
    int r = sub_8454d0(eax, 1, 1, 0, 1, 0);
    int flag;
    if (r > *(int*)(p + 0x80)) {
        flag = 1;
    } else {
        void* edx;
        if (r >= 0 && r < *(int*)((char*)ecx + 0x2c))
            edx = *(void**)(*(int*)((char*)ecx + 0x28) + r * 4);
        else
            edx = 0;
        if (*(int*)((char*)edx + 0x98) != 0) {
            flag = 1;
        } else {
            void* eax2;
            if (r >= 0 && r < *(int*)((char*)ecx + 0x2c))
                eax2 = *(void**)(*(int*)((char*)ecx + 0x28) + r * 4);
            else
                eax2 = 0;
            if (*(int*)((char*)eax2 + 0x94) != 0)
                flag = 1;
            else
                flag = 0;
        }
    }
    const char* str;
    if (edi) {
        if (flag)
            str = (const char*)0xa013e4;
        else
            str = (const char*)0xa013c8;
    } else {
        if (flag)
            str = (const char*)0xa013ac;
        else
            str = (const char*)0xa01390;
    }
    void* h = sub_98deb8(str);
    *(int*)((char*)this + 0x58) = 0;
    void* h2 = sub_98de80();
    void* res = sub_87ed00(this, h2);
    *(void**)((char*)this + 0x1c) = res;
    if (res == 0) {
        sub_98dec0((char*)this + 0x64);
        return;
    }
    int v18 = (*(int(__thiscall**)(void*))(*(int*)p + 0xb4))(p);
    int ebp;
    if (*(int*)(p + 0x9c) == -1) {
        void* ecx2 = *(void**)(p + 0x15c);
        if (ecx2 != 0)
            ebp = sub_7f65b0(ecx2);
        else
            ebp = 0;
    } else {
        ebp = *(int*)(p + 0x9c);
    }
    int v14;
    if (*(int*)(p + 0xa0) == -1) {
        void* eax3 = *(void**)(p + 0x15c);
        if (eax3 != 0)
            v14 = *(int*)((char*)eax3 + 0x38);
        else
            v14 = 0;
    } else {
        v14 = *(int*)(p + 0xa0);
    }
    int ebx = (*(int(__thiscall**)(void*))(*(int*)p + 0x6c))(p);
    int edi2 = (*(int(__thiscall**)(void*))(*(int*)p + 0x78))(p);
    int c0 = *(int*)(p + 0xc0);
    int c4 = *(int*)(p + 0xc4);
    int c8 = *(int*)(p + 0xc8);
    int cc = *(int*)(p + 0xcc);
    int esi = 0;
    int a20 = 0;
    int a24 = 0;
    int a28 = 0x16;
    int a2c = 0x16;
    if (ebp == 0) {
        if (ebx == 2 || ebx == 3)
            esi = 1;
    } else {
        if (v18 == 0) {
            if (v14 == 0) {
                if (ebx == 0 && edi2 == 0) {
                    if (sub_7f5a30(edi2) == 0) {
                        if (ebx == 0) {
                            if (edi2 != 0)
                                esi = 1;
                        } else {
                            esi = 2;
                        }
                    } else {
                        esi = 2;
                    }
                } else {
                    esi = 3;
                }
            } else {
                if (ebx == 0 && edi2 == 0) {
                    if (sub_7f5a30(edi2) == 0) {
                        if (ebx == 0) {
                            if (edi2 != 0)
                                esi = 1;
                        } else {
                            esi = 2;
                        }
                    } else {
                        esi = 2;
                    }
                } else {
                    esi = 3;
                }
            }
        } else {
            if (ebx == 0 && edi2 == 0) {
                if (sub_7f5a30(edi2) == 0) {
                    if (ebx == 0) {
                        if (edi2 != 0)
                            esi = 1;
                    } else {
                        esi = 2;
                    }
                } else {
                    esi = 2;
                }
            } else {
                esi = 3;
            }
        }
    }
    esi *= 0x16;
    sub_98cc6c(&a20, 0, esi);
    int v30 = 2;
    int v34 = 2;
    int v38 = 2;
    int v3c = 2;
    sub_8e0e00(*(void**)((char*)this + 0x1c), 0xff00ff, &a20, c0, c4, c8, cc, x, y);
    sub_98dec0((char*)this + 0x64);
}
