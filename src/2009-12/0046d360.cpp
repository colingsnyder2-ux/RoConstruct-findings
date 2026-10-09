// roc 2009-12 0046d360  unit: CScriptEditor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046d360
//
// 0046d360  832d30bbb70001       sub dword ptr [0xb7bb30], 1
// 0046d367  56                   push esi
// 0046d368  8bf1                 mov esi, ecx
// 0046d36a  750c                 jne 0x46d378
// 0046d36c  a12cbbb700           mov eax, dword ptr [0xb7bb2c]
// 0046d371  50                   push eax
// 0046d372  ff15f8b19800         call dword ptr [0x98b1f8]
// 0046d378  8bce                 mov ecx, esi
// 0046d37a  5e                   pop esi
// 0046d37b  e9e8683800           jmp 0x7f3c68
// copied from an identical function in another client (function ?sub_45F9D0@CScriptEditor@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
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
