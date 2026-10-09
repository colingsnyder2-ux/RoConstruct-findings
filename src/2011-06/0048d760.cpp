// roc 2011-06 0048d760  unit: CScriptEditor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048d760
//
// 0048d760  832d4441cb0001       sub dword ptr [0xcb4144], 1
// 0048d767  56                   push esi
// 0048d768  8bf1                 mov esi, ecx
// 0048d76a  750c                 jne 0x48d778
// 0048d76c  a14041cb00           mov eax, dword ptr [0xcb4140]
// 0048d771  50                   push eax
// 0048d772  ff15b803a400         call dword ptr [0xa403b8]
// 0048d778  8bce                 mov ecx, esi
// 0048d77a  5e                   pop esi
// 0048d77b  e9e6cc3700           jmp 0x80a466
// copied from an identical function in another client (function ?sub_45F9D0@CScriptEditor@ns_ROCX00007c@@QAEXXZ)

namespace ns_ROCX00007c {
extern "C" __declspec(dllimport) int __stdcall FreeLibrary(void*);

extern int dword_8BC0A0;
extern void* dword_8BC09C;

struct CScriptEditor {
    void sub_45F9D0();
};

void CScriptEditor::sub_45F9D0() {
    if (--dword_8BC0A0 == 0) {
        FreeLibrary(dword_8BC09C);
    }
    // tail call to 0x63005e
    extern void __fastcall sub_63005E(CScriptEditor*);
    sub_63005E(this);
}
}
