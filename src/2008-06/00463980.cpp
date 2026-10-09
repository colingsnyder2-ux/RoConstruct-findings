// roc 2008-06 00463980  unit: CScriptEditor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463980
//
// 00463980  832d94df960001       sub dword ptr [0x96df94], 1
// 00463987  56                   push esi
// 00463988  8bf1                 mov esi, ecx
// 0046398a  750c                 jne 0x463998
// 0046398c  a190df9600           mov eax, dword ptr [0x96df90]
// 00463991  50                   push eax
// 00463992  ff15a0218000         call dword ptr [0x8021a0]
// 00463998  8bce                 mov ecx, esi
// 0046399a  5e                   pop esi
// 0046399b  e9d6d02300           jmp 0x6a0a76
// copied from an identical function in another client (function ?sub_45F9D0@CScriptEditor@ns_ROCX00000d@@QAEXXZ)

namespace ns_ROCX00000d {
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
