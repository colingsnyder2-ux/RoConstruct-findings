// from server: 35% by colin
struct CXTPCommandBar;

struct CXTPCommandBarVtbl {
    char pad0[0x80];
    int (__thiscall *pfn_80)(void *, int);
};

struct CXTPCommandBar {
    CXTPCommandBarVtbl *m_pVtbl;

    int sub_006774b0();
};

struct CXTPSomething {
    char pad0[0x74];
    void *m_p74;
};

struct CXTPSomething2 {
    char pad0[0x58];
    int m_58;
};

struct CXTPSomething3 {
    CXTPCommandBarVtbl *m_pVtbl;
    char pad4[0xfc - 4];
    CXTPCommandBar *m_fc;
    int m_84;
    char pad88[0xe4 - 0x88];
    char m_e4[4];
};

extern "C" int __stdcall sub_00643980();
extern "C" int __stdcall sub_00644710();
extern "C" int __stdcall sub_00644720(int);
extern "C" int __stdcall sub_00631c90();
extern "C" void __stdcall sub_0077ddac(void *);
extern "C" void __stdcall sub_0077d434(void *, void *);
extern "C" void __stdcall sub_0077ddbc(void *);

int CXTPCommandBar::sub_006774b0()
{
    CXTPSomething *p = (CXTPSomething *)sub_00643980();
    if (p == 0) {
        return 0;
    }
    CXTPSomething2 *q = (CXTPSomething2 *)p->m_p74;
    if (q->m_58 == 0) {
        return 0;
    }
    int count = sub_00644710();
    if (count <= 0) {
        return 0;
    }
    int i = 0;
    do {
        CXTPSomething3 *r = (CXTPSomething3 *)sub_00644720(i);
        if (r != 0 && r->m_fc == this) {
            CXTPCommandBarVtbl *vt = r->m_pVtbl;
            if (vt->pfn_80(r, 0) != 0) {
                char buf[4];
                sub_0077ddac(buf);
                if (r->m_84 != 0) {
                    void *obj = (void *)sub_00631c90();
                    void *vt2 = *(void **)obj;
                    int (__thiscall *pfn)(void *, int, void *) = *(int (__thiscall **)(void *, int, void *))((char *)vt2 + 0x58);
                    pfn(obj, r->m_84, buf);
                    sub_0077d434(r->m_e4, buf);
                }
                sub_0077ddbc(buf);
            }
        }
        i++;
    } while (i < sub_00644710());
    return 0;
}
