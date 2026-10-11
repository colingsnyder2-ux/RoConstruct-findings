// from server: 58% by colin
struct S_func_004613d0 {
    char pad0[88];
    int m_x;
    int* f();
};

struct S_func_00460f10 {
    char pad0[0x54];
    int m_a;
    int m_b;
    int f(int);
};

struct CScriptEditor {
    void func(int);
};

extern "C" {
    int __stdcall sub_803F04(int*);
    int __stdcall sub_8032C0(int*, int);
    int __stdcall sub_803EE0(int*);
    int __stdcall sub_803F14(int*);
}

void CScriptEditor::func(int arg) {
    int local;
    sub_803F04(&local);
    S_func_004613d0* p = (S_func_004613d0*)((char*)this + 0);
    int* q = p->f();
    S_func_00460f10* r = (S_func_00460f10*)q;
    if (r->f(1)) {
        sub_8032C0(&local, 0xe704);
    }
    int* v = (int*)arg;
    int* vt = *(int**)v;
    int tmp = sub_803EE0(&local);
    ((void (__thiscall*)(void*, int))vt[3])(v, tmp);
    sub_803F14(&local);
}
