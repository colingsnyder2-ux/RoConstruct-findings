// from server: 77% by colin
// roc 2007-08 00460200  unit: CScriptEditor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00460200

struct CScriptEditor {
    void sub_460200(int);
};

extern "C" int __stdcall sub_45D230(int, int);
extern "C" int __stdcall sub_45C460(int);

void CScriptEditor::sub_460200(int arg) {
    int* p = (int*)this;
    int v = *p;
    int r = sub_45C460(sub_45D230(0, 1));
    int flag = (r != 0) ? 1 : 0;
    ((void (__thiscall*)(void*, int))*(int*)(v + 4))(this, flag);
}
