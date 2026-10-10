// from server: 3% by colin
struct CScriptEditor {
    char pad[0x130];
    int field_130;
    void sub_45f9f0();
};

extern "C" {
    int __stdcall sub_630298();
    int __stdcall sub_62ff50();
    int __stdcall sub_62ff20();
}

struct Obj45d230 {
    void sub_45d040(int, int);
    void sub_45d0d0(int, const char*, int);
    void sub_45c540(int);
    void sub_45c570(int, int, int);
    void sub_45c5c0(int, int, int);
    void sub_45c660(int, int, int);
    void sub_45c6b0(int, const char*, int);
    void sub_45c150(int, int);
    void sub_45c1a0(int, int, int);
    void sub_45c1f0(int, int, int);
    void sub_45c3c0(int, int, int);
    void sub_45c410(int, int, int);
    void sub_45c4a0(int, int, int);
    void sub_45c4f0(int, int, int);
    void sub_45c610(int, int, int);
    void sub_45c750(int, int);
    void sub_45cfa0(int, int);
    void sub_45d080(int, const char*, const char*);
};

void CScriptEditor::sub_45f9f0()
{
    sub_630298();
    int v = sub_62ff50();
    if (v == 0) {
        sub_62ff20();
        return;
    }
    field_130 = v;
    Obj45d230* p = (Obj45d230*)0;
    p = (Obj45d230*)((char*)this + 0);
    // call 0x45d230 returns object pointer
    // We'll use a helper via reinterpret
    // Actually call sub_45d230 as member returning Obj45d230*
    // Declare it in struct
    // We'll add to struct
    // For now, use a function pointer
    // But we need to call it as thiscall
    // Let's add to struct
    // We'll do it properly
    // (This is a placeholder; actual code below)
}
