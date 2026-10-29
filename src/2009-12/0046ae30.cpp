// roc 2009-12 0046ae30  unit: Scintilla::CScintillaView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046ae30
//
// 0046ae30  8b01                 mov eax, dword ptr [ecx]
// 0046ae32  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 0046ae38  6a01                 push 1
// 0046ae3a  ffd2                 call edx
// 0046ae3c  c3                   ret 
// copied from an identical function in another client (function ?method@ScintillaView@ns_ROCX00000c@@QAEXXZ)

namespace ns_ROCX00000c {
// from server: 100% by why2
struct ScintillaView {
    void method();
};

void ScintillaView::method()
{
    void (__thiscall *fn)(void*, int);
    fn = *(void (__thiscall **)(void*, int))(*(int*)this + 0x1b0);
    fn(this, 1);
}
}
