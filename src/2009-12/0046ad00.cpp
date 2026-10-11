// from server: 41% by atomic.potato
struct Scintilla_CScintillaCtrl {
    char pad0[0x54];
    void* field54;
    void* field58;
    int Call(unsigned int msg, unsigned int wParam, long lParam);
};

struct Scintilla_CScintillaView {
    char pad0[0x58];
    Scintilla_CScintillaCtrl ctrl;
    int f();
};

extern "C" int __stdcall sub_98ddbc(void* p);

int Scintilla_CScintillaView::f()
{
    if (ctrl.Call(0x7d6, 0, 0) != 0)
    {
        if (sub_98ddbc((void*)0xb0b5e8) == 0)
            return 1;
    }
    return 0;
}
