// from server: 27% by colin
struct CXTPToolBar;

struct CXTPToolBar {
    char pad0[0xf8];
    void* m_pSomething;
    int f(int* a, int b);
};

extern "C" {
    void __stdcall sub_67A660(void*);
    int __cdecl sub_646570(CXTPToolBar*);
    int __cdecl sub_631AD0(CXTPToolBar*, void*);
    void* __cdecl sub_67D2A0(void*, int, int, int, int, int);
    void* __cdecl sub_67D1E0(void*, int, int, int, int, int);
    void __cdecl sub_639DB0(void*, int);
    void __cdecl sub_63A690(void*, int);
    void __stdcall sub_77DDAC(void*);
    void __stdcall sub_77DDBC(void*);
    void __stdcall sub_77D434(void*, void*);
    int __stdcall sub_77ECD8(void*, unsigned int, int, void*);
    int __stdcall SendMessageA(void*, unsigned int, int, int);
}

int CXTPToolBar::f(int* a, int b)
{
    int result = 1;
    int i;
    int flag = 0;
    int v18 = 0;
    int v1c = 0;
    int v20 = 0;
    int v24[4];
    int v28[4];
    int v40[4];
    int v44;
    int v48;
    int v54;
    int v58;

    sub_67A660(m_pSomething);
    v18 = sub_646570(this);
    v1c = 0;

    if (b <= 0)
        return result;

    for (i = 0; i < b; i++) {
        int edi = a[i];
        if (edi == 0) {
            flag = 1;
            continue;
        }

        sub_77DDAC(v40);
        v54 = 0;
        v20 = 0;

        if (v18 != 0) {
            v24[0] = edi;
            v24[1] = 0;
            v24[2] = 1;
            v24[3] = 0;
            v28[0] = v1c;
            sub_631AD0(this, v24);
            sub_77D434(v40, v24);
            sub_77DDBC(v24);

            v58 = 1;
            v44 = (int)this;
            v48 = 0;
            if (sub_77ECD8((void*)(*(int*)(v18 + 0x20)), 0x285e, 0, v28) != 0) {
                v20 = v28[0];
                v1c = v28[1];
                edi = v28[2];
                if (v28[3] != 0) {
                    void* p = sub_67D1E0(m_pSomething, v28[3], edi, -1, 0, 0);
                    (void)p;
                }
            } else {
                void* p = sub_67D2A0(m_pSomething, 1, -1, 0, edi, 0);
                if (p != 0) {
                    if (*(int*)((char*)p + 0x144) != v20) {
                        *(int*)((char*)p + 0x144) = v20;
                        sub_639DB0(p, v20);
                    }
                    if (1 == 2) {
                        if (*(int*)((char*)p + 0x88) != edi) {
                            *(int*)((char*)p + 0x88) = edi;
                            sub_63A690(p, 1);
                        }
                    }
                }
            }
        } else {
            void* p = sub_67D2A0(m_pSomething, 1, -1, 0, edi, 0);
            if (p != 0) {
                if (*(int*)((char*)p + 0x144) != v20) {
                    *(int*)((char*)p + 0x144) = v20;
                    sub_639DB0(p, v20);
                }
            }
        }

        if (flag != 0) {
            (*(void(__thiscall**)(void*, int))(*(int*)0 + 0x64))(0, 1);
            flag = 0;
        }

        if (v18 != 0) {
            v28[0] = 0;
            sub_77ECD8((void*)(*(int*)(v18 + 0x20)), 0x285f, 0, v28);
        }

        v54 = -1;
        sub_77DDBC(v40);
    }

    return result;
}
