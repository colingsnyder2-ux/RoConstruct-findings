// from server: 37% by colin
struct CPatchedControlComboBox {
    int process(int*);
};

struct CMainFrame {
    char pad[0x24];
    CMainFrame* construct();
};

extern "C" int __cdecl helper_6c1b10(int);
extern "C" int __cdecl helper_6a0c26(int);
extern "C" int __cdecl helper_6f65d0();
extern "C" int __cdecl helper_6ab370();
extern "C" int __cdecl helper_6ab360(int);
extern "C" int __cdecl helper_6a0920(int);
extern "C" int __cdecl helper_6a6cb0(int);
extern "C" int __cdecl helper_6ab940(int);
extern "C" int __cdecl helper_6e9510();
extern "C" int __cdecl helper_6ee720(int);
extern "C" int __cdecl helper_6e7f60(int);
extern "C" int __cdecl helper_44ec60();
extern "C" int __cdecl helper_6f48d0(int, int, int, int, int);
extern "C" int __cdecl helper_6ee220(int, int, int);
extern "C" int __cdecl helper_6a0be4();

extern "C" int __stdcall sub_0040e450(int, int);
extern "C" int __stdcall sub_0042e430(int, int);

int CPatchedControlComboBox::process(int* p) {
    if (p[2] == 0)
        return 0;
    if (helper_6a0c26(helper_6c1b10(p[5])) == 0)
        return 0;
    int op = p[0];
    if (op == 0xe12b || op == 0xe12c) {
        p[7] = 4;
        return 1;
    }
    if (op == 0x80db || op == 0x80f6) {
        int obj = helper_6f65d0();
        p[1] = obj;
        int v = helper_6ab370();
        helper_6ab360(v & 0xfffffff7);
        sub_0040e450(p[1], 1);
        return 1;
    }
    if (op == 0x80c3) {
        int mem = helper_6a0920(0x1e0);
        int obj;
        if (mem != 0)
            obj = (int)((CMainFrame*)mem)->construct();
        else
            obj = 0;
        helper_6a6cb0(1);
        helper_6ab940(0x810de8);
        sub_0040e450(obj, 1);
        helper_6ab360(0x20);
        p[1] = obj;
        return 1;
    }
    if (op == 0x8040) {
        int frame = helper_6e9510();
        int v = helper_6ee720(*(int*)((char*)this + 0xec));
        helper_6e7f60(v);
        int mem = helper_6a0920(0x184);
        int obj;
        if (mem != 0)
            obj = helper_44ec60();
        else
            obj = 0;
        helper_6f48d0(obj, 0x8d, 0, -1, 0);
        helper_6ee220(v, 0x3ed, 0x810de0);
        sub_0042e430(v, 1);
        helper_6a0be4();
        p[1] = frame;
        return 1;
    }
    return 0;
}
