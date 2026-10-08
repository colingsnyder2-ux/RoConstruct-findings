// from server: 100% by colin
// roc 2007-08 0045f9d0  unit: CScriptEditor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045f9d0
//
// 0045f9d0  832da0c08b0001       sub dword ptr [0x8bc0a0], 1
// 0045f9d7  56                   push esi
// 0045f9d8  8bf1                 mov esi, ecx
// 0045f9da  750c                 jne 0x45f9e8
// 0045f9dc  a19cc08b00           mov eax, dword ptr [0x8bc09c]
// 0045f9e1  50                   push eax
// 0045f9e2  ff15dcd27700         call dword ptr [0x77d2dc]
// 0045f9e8  8bce                 mov ecx, esi
// 0045f9ea  5e                   pop esi
// 0045f9eb  e96e061d00           jmp 0x63005e

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
