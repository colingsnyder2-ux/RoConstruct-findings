// from server: 51% by atomic.potato
struct CXTPControls;

struct CXTPControls {
    char pad0[0x28];
    void* m_pControls;      // 0x28
    int m_nCount;           // 0x2c
    char pad30[0x0c];
    void* m_pOriginalControls; // 0x3c

    void* func_00859840(int arg);
};

struct CXTPOriginalControls {
    char pad0[0xac];
    int m_bSomething;       // 0xac
};

extern "C" void* __stdcall sub_80aa66(void* p);
extern "C" void __stdcall sub_80a30a();
extern "C" void __stdcall sub_858d40(void* p, void* a, int b, int c);
extern "C" void __stdcall sub_856c10(void* p, void* a);
extern "C" void* __stdcall sub_859840(void* p, int a);

void* CXTPControls::func_00859840(int arg)
{
    void* p = sub_80aa66(*(void**)this);
    void* ebx = p;
    int n = this->m_nCount;
    int i = 0;
    if (n > 0) {
        do {
            CXTPOriginalControls* c;
            if (i >= 0 && i < n) {
                if (i >= this->m_nCount) {
                    sub_80a30a();
                }
                c = (CXTPOriginalControls*)((void**)this->m_pControls)[i];
            } else {
                c = 0;
            }
            if (c->m_bSomething == 0) {
                CXTPOriginalControls* c2;
                if (i >= 0 && i < n) {
                    if (i >= this->m_nCount) {
                        sub_80a30a();
                    }
                    c2 = (CXTPOriginalControls*)((void**)this->m_pControls)[i];
                } else {
                    c2 = 0;
                }
                sub_858d40(ebx, c2, -1, arg);
            }
            n = this->m_nCount;
            i++;
        } while (i < n);
    }
    if (this->m_pOriginalControls != 0) {
        void* r = sub_859840(this->m_pOriginalControls, arg);
        sub_856c10(ebx, r);
    }
    return ebx;
}
