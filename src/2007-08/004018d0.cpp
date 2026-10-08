// from server: 17% by colin
// roc 2007-08 004018d0  unit: CAboutRobloxDialog  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004018d0
//
// 004018d0  55                   push ebp
// 004018d1  8bec                 mov ebp, esp
// 004018d3  6afe                 push -2
// 004018d5  6858f08300           push 0x83f058
// 004018da  68760a6300           push 0x630a76
// 004018df  64a100000000         mov eax, dword ptr fs:[0]
// 004018e5  50                   push eax
// 004018e6  83ec0c               sub esp, 0xc
// 004018e9  53                   push ebx
// 004018ea  56                   push esi
// 004018eb  57                   push edi
// 004018ec  a188518b00           mov eax, dword ptr [0x8b5188]
// 004018f1  3145f8               xor dword ptr [ebp - 8], eax
// 004018f4  33c5                 xor eax, ebp
// 004018f6  50                   push eax
// 004018f7  8d45f0               lea eax, [ebp - 0x10]
// 004018fa  64a300000000         mov dword ptr fs:[0], eax
// 00401900  8965e8               mov dword ptr [ebp - 0x18], esp
// 00401903  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040190a  51                   push ecx
// 0040190b  ff1508d37700         call dword ptr [0x77d308]
// 00401911  33c0                 xor eax, eax
// 00401913  eb1c                 jmp 0x401931

extern "C" __declspec(dllimport) void __stdcall InitializeCriticalSection(void*);

struct CAboutRobloxDialog {
    void CAboutRobloxDialog_ctor();
};

void CAboutRobloxDialog::CAboutRobloxDialog_ctor()
{
    void* p;
    InitializeCriticalSection(&p);
}
