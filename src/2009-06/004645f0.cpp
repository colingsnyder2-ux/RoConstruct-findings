// roc 2009-06 004645f0  unit: CScriptEditor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004645f0
//
// 004645f0  832d08b6a30001       sub dword ptr [0xa3b608], 1
// 004645f7  56                   push esi
// 004645f8  8bf1                 mov esi, ecx
// 004645fa  750c                 jne 0x464608
// 004645fc  a104b6a300           mov eax, dword ptr [0xa3b604]
// 00464601  50                   push eax
// 00464602  ff15b4e18900         call dword ptr [0x89e1b4]
// 00464608  8bce                 mov ecx, esi
// 0046460a  5e                   pop esi
// 0046460b  e924482b00           jmp 0x718e34
// copied from an identical function in another client (function ?sub_45F9D0@CScriptEditor@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
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
