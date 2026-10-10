// from server: 48% by colin
struct CXTPRibbonBar {
    int f(int, int, int, int, int);
    int pad0;
    int m_nOffset;
    int m_pLeft;
    int m_pRight;
};

struct VtblA {
    void* pad[1];
    void (__stdcall* fn4)(void*, int*);
};

struct VtblB {
    void* pad[32];
    int (__stdcall* fn80)(void*, int);
};

struct VtblC {
    void* pad[95];
    void (__stdcall* fn17c)(void*);
};

int CXTPRibbonBar::f(int a1, int a2, int a3, int a4, int a5)
{
    int local;
    int esi;
    int ebx;
    int eax;
    int ecx;

    esi = *(int*)(a1 + 0x38);

    VtblA* vt = *(VtblA**)this;
    vt->fn4(this, &local);

    ebx = a3;
    if (ebx < 0xc) {
        VtblB* v2 = *(VtblB**)m_pLeft;
        if (v2->fn80((void*)m_pLeft, 0) != 0) {
            esi = esi + ebx - 0xc;
            goto check;
        }
    }

    ebx = a4;
    if (ebx > local) {
        VtblB* v3 = *(VtblB**)m_pRight;
        if (v3->fn80((void*)m_pRight, 0) != 0) {
            eax = local - local;
            eax = eax + ebx;
            esi = esi + eax + 0xc;
        }
    }

check:
    if (esi < 0)
        esi = 0;

    if (esi != m_nOffset) {
        m_nOffset = esi;
        ecx = *(int*)(a1 + 0x34);
        ecx = *(int*)(ecx + 0x8c);
        VtblC* v4 = *(VtblC**)ecx;
        v4->fn17c((void*)ecx);
    }

    return 0;
}
