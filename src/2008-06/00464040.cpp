// from server: 60% by colin
struct CScintillaCtrl {
    char padding[0x54];
    int (__stdcall *fn54)();
    int (__stdcall *fn58)();
    int getLineCount(int direct);
    int lineFromPosition(int pos, int direct);
    int positionFromLine(int line, int direct);
    int getLineEndPosition(int line, int direct);
    int setSel(int start, int end, int direct);
};

struct CScriptEditor {
    CScintillaCtrl* control();
    void f();
};

extern "C" int __stdcall MessageBeep(unsigned int uType);

CScintillaCtrl* CScriptEditor::control()
{
    return 0;
}

void CScriptEditor::f()
{
    CScintillaCtrl* ctrl = control();
    int line = ctrl->lineFromPosition(ctrl->getLineCount(1), 1);
    int pos = ctrl->positionFromLine(line - 1, 1);
    int result = ctrl->getLineEndPosition(pos, 1);
    if (result >= 0) {
        ctrl->setSel(result, result, 1);
    } else {
        MessageBeep(0x10);
    }
}
