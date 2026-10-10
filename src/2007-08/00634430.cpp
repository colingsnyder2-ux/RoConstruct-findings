// from server: 73% by colin
// roc 2007-08 00634430  unit: CXTPCommandBar  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00634430

struct CXTPCommandBar;

extern "C" void* __stdcall sub_677390(void*);
extern "C" void* __stdcall sub_738376();

struct CXTPCommandBar {
    int sub_6301e4();
    int sub_6338d0(int);
    int sub_6342d0(int, int, int, int, int, int, int);
    int sub_634430(int, int, int, int, int, int);
};

int CXTPCommandBar::sub_634430(int a1, int a2, int a3, int a4, int a5, int a6)
{
    int* p = (int*)sub_677390((void*)a6);
    int* obj = p;
    int v1 = a1;
    int v2 = a2;
    int v3 = a3;
    int v4 = a4;
    int v5 = a5;
    int v6 = a6;

    int (__thiscall *fn)(void*, int, int) = *(int (__thiscall **)(void*, int, int))(*obj + 0x144);
    obj[0x38] = v2;
    obj[0x41] = v4;
    obj[0x40] = v6;

    if (fn(obj, v1, 1) == 0) {
        sub_6301e4();
        return 0;
    }

    if (v6 != 0) {
        int* q = (int*)((char*)sub_738376() + 0x58);
        if (q[1] == 0x7b && q[3] == -1) {
            ((CXTPCommandBar*)v6)->sub_6338d0(1);
        }
    }

    int r = sub_6342d0(v1, v2, v3, v4, v5, v6, (int)obj);
    sub_6301e4();
    return r;
}
