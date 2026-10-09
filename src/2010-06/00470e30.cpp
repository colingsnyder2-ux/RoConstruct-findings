// roc 2010-06 00470e30  unit: CScriptEditor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00470e30
//
// 00470e30  832d0821c00001       sub dword ptr [0xc02108], 1
// 00470e37  56                   push esi
// 00470e38  8bf1                 mov esi, ecx
// 00470e3a  750c                 jne 0x470e48
// 00470e3c  a10421c000           mov eax, dword ptr [0xc02104]
// 00470e41  50                   push eax
// 00470e42  ff1568a39e00         call dword ptr [0x9ea368]
// 00470e48  8bce                 mov ecx, esi
// 00470e4a  5e                   pop esi
// 00470e4b  e9586f3300           jmp 0x7a7da8
// copied from an identical function in another client (function ?sub_45F9D0@CScriptEditor@ns_ROCX00003c@@QAEXXZ)

namespace ns_ROCX00003c {
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
