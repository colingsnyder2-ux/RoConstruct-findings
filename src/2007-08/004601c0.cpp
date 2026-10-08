// from server: 89% by colin
// roc 2007-08 004601c0  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004601c0

struct CScriptEditor {
    void sub_4601C0();
};

struct Helper {
    int sub_45C460(int a, int b);
    int sub_45C410(int a, int b);
};

extern "C" void* __cdecl sub_45D230();

void CScriptEditor::sub_4601C0() {
    Helper* p = (Helper*)sub_45D230();
    if (p->sub_45C460(0, 1)) {
        p->sub_45C410(0, 0);
    } else {
        p->sub_45C410(0, 0x20);
    }
}
