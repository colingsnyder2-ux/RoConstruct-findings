// from server: 66% by colin
// roc 2007-08 0045d120  unit: Scintilla::CScintillaCtrl  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d120

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void* __stdcall sub_77ddb8(void*, void*);

struct CScintillaCtrl {
    char pad[0x54];
    int (__stdcall *fn54)(void*, int, int, int);
    void* ptr58;
    void* SendMessage(int msg, int wParam, int lParam);
    void* GetTextRange(int cpMin, int cpMax, void* tr);
};

void* CScintillaCtrl::SendMessage(int msg, int wParam, int lParam) {
    return (void*)fn54(ptr58, msg, wParam, lParam);
}

void* CScintillaCtrl::GetTextRange(int cpMin, int cpMax, void* tr) {
    int start = (int)SendMessage(0x85f, 0, 0);
    int end = (int)SendMessage(0x861, 0, 0);
    int len = end - start + 1;
    char* buf = (char*)operator_new(len);
    SendMessage(0x871, 0, (int)buf);
    sub_77ddb8(tr, buf);
    operator_delete(buf);
    return tr;
}
