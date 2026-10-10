// from server: 60% by colin
struct CXTPDockingPaneMiniWnd {
    char pad0[0xe4];
    int m_field_e4;
    char pad1[0xf0 - 0xe8];
    int m_field_f0;
    char pad2[0x11c - 0xf4];
    int m_field_11c;
    void OnSomething(int);
};

extern "C" int __stdcall sub_738c58(int);
extern "C" int __fastcall sub_6d7b60(int);
extern "C" void __fastcall sub_66f110(int, int);
extern "C" void __fastcall sub_66f140(int);
extern "C" void __fastcall sub_66e3d0(int);
extern "C" int __fastcall sub_6e0540(int);

void CXTPDockingPaneMiniWnd::OnSomething(int arg)
{
    sub_738c58(arg);
    if (m_field_11c != 0) {
        int ecx = m_field_f0;
        if (ecx != 0) {
            if (sub_6d7b60(ecx) != 0) {
                char buf[8];
                sub_66f110(0xa, (int)buf);
                int edx = *(int *)(m_field_e4 + 0xc);
                int *p = &m_field_e4;
                int local = 0;
                ((void (__thiscall *)(int *, int *, int))edx)(p, &local, 1);
                if (local == 1) {
                    int eax = *(int *)(*(int *)buf + 8);
                    if (eax != 0) {
                        eax -= 0x54;
                    } else {
                        eax = 0;
                    }
                    int ecx2 = *(int *)(eax + 0x1a0);
                    if (ecx2 != 0) {
                        int edx2 = *(int *)ecx2;
                        int eax2 = *(int *)(edx2 + 0x58);
                        ((void (__thiscall *)(int))eax2)(ecx2);
                    }
                }
                int r = sub_6e0540((int)p);
                sub_66e3d0(r);
                sub_66f140((int)buf);
            }
        }
    }
}
