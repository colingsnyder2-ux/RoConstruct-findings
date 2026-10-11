// from server: 51% by atomic.potato
struct S_func_004613d0 {
    char pad0[88];
    int m_x;
    int* f();
};

struct CScriptEditor {
    char pad0[0x41];
    char m_flag41;
    char m_flag42;
    char pad1[0x100];
    int* f(int, int);
};

int* CScriptEditor::f(int arg, int arg2) {
    m_flag41 = (arg != 0);
    int v;
    if (m_flag41 != 0) {
        v = 1;
    } else if (m_flag42 == 0) {
        v = 1;
    } else {
        v = 0;
    }
    S_func_004613d0* p = (S_func_004613d0*)((char*)this - 0x114);
    int* r = p->f();
    return r;
}
