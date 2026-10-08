// from server: 50% by colin
// roc 2008-06 00461620  unit: Scintilla::CScintillaView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461620
//
// 00461620  8b01                 mov eax, dword ptr [ecx]
// 00461622  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 00461628  6a00                 push 0
// 0046162a  ffd2                 call edx
// 0046162c  c3                   ret 

struct ScintillaView {
    void* vtable;

    int someFunction();
};

extern "C" __declspec(dllimport) void __stdcall CallFunction(void* func, int arg);

int ScintillaView::someFunction() {
    CallFunction(reinterpret_cast<void*>(reinterpret_cast<char*>(this->vtable) + 0x1b0), 0);
    return 0;
}
