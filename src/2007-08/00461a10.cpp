// from server: 66% by colin
// roc 2007-08 00461a10  unit: CScriptEditor  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00461a10
//
// 00461a10  837c241000           cmp dword ptr [esp + 0x10], 0
// 00461a15  56                   push esi
// 00461a16  8bf1                 mov esi, ecx
// 00461a18  7534                 jne 0x461a4e
// 00461a1a  83ec08               sub esp, 8
// 00461a1d  8bc4                 mov eax, esp
// 00461a1f  c70000000000         mov dword ptr [eax], 0
// 00461a25  8d8e14ffffff         lea ecx, [esi - 0xec]
// 00461a2b  89642414             mov dword ptr [esp + 0x14], esp
// 00461a2f  c7400400000000       mov dword ptr [eax + 4], 0
// 00461a36  e895fcffff           call 0x4616d0
// 00461a3b  8b4644               mov eax, dword ptr [esi + 0x44]
// 00461a3e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00461a41  6a00                 push 0
// 00461a43  6a00                 push 0
// 00461a45  6a10                 push 0x10
// 00461a47  51                   push ecx
// 00461a48  ff15d0ec7700         call dword ptr [0x77ecd0]
// 00461a4e  5e                   pop esi
// 00461a4f  c21000               ret 0x10

extern "C" __declspec(dllimport) int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct CScriptEditor {
    char pad[0x44];
    void* field_44;
    void sub_4616D0(int, int);
    void sub_461A10(int, int, int, int);
};

void CScriptEditor::sub_461A10(int a, int b, int c, int d) {
    if (d == 0) {
        int local[2];
        local[0] = 0;
        local[1] = 0;
        sub_4616D0(local[0], local[1]);
        void* p = field_44;
        PostMessageA(*(void**)((char*)p + 0x20), 0x10, 0, 0);
    }
}
