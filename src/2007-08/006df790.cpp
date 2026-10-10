// from server: 50% by colin
struct CXTPDockingPaneMiniWnd {
    char pad[0xe4];
    int m_field;
    int FindPane(int);
};

extern "C" int __fastcall sub_6e0540(int);
extern "C" int __fastcall sub_66f110(int);
extern "C" int __fastcall sub_66f140(int);
extern "C" int __fastcall sub_66e000(int, int, int, int, int);

int CXTPDockingPaneMiniWnd::FindPane(int arg)
{
    int result = sub_6e0540(m_field);
    int local1;
    sub_66f110(0xa);
    int local2;
    (*(int (__thiscall **)(int, int, int *))(*(int *)&m_field + 0xc))((int)&m_field, 0, &local2);
    int *node = (int *)local2;
    while (node != 0) {
        int *next = (int *)*node;
        int val = node[2];
        if (val != 0)
            val -= 0x20;
        else
            val = 0;
        if (sub_66e000(result, arg, val, 0, 0) != 0) {
            sub_66f140((int)&local1);
            return 1;
        }
        node = next;
    }
    sub_66f140((int)&local1);
    return 0;
}
