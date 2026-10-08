// roc 2010-06 0080a960  unit: CXTPTabClientWnd  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080a960
//
// 0080a960  83ec14               sub esp, 0x14
// 0080a963  56                   push esi
// 0080a964  8bf1                 mov esi, ecx
// 0080a966  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 0080a96d  0f84b4000000         je 0x80aa27
// 0080a973  53                   push ebx
// 0080a974  55                   push ebp
// 0080a975  57                   push edi
// 0080a976  e843291700           call 0x97d2be
// 0080a97b  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0080a981  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 0080a987  89442410             mov dword ptr [esp + 0x10], eax
// 0080a98b  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0080a991  894c2418             mov dword ptr [esp + 0x18], ecx
// 0080a995  8d4c2414             lea ecx, [esp + 0x14]
// 0080a999  89442414             mov dword ptr [esp + 0x14], eax
// 0080a99d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 0080a9a3  51                   push ecx
// 0080a9a4  8bce                 mov ecx, esi
// 0080a9a6  89542420             mov dword ptr [esp + 0x20], edx
// 0080a9aa  89442424             mov dword ptr [esp + 0x24], eax
// 0080a9ae  e88dd5f9ff           call 0x7a7f40
// 0080a9b3  8b3d6cba9e00         mov edi, dword ptr [0x9eba6c]
// 0080a9b9  6a21                 push 0x21
// 0080a9bb  ffd7                 call edi
// 0080a9bd  6a20                 push 0x20
// 0080a9bf  8bd8                 mov ebx, eax
// 0080a9c1  ffd7                 call edi
// 0080a9c3  837c242800           cmp dword ptr [esp + 0x28], 0
// 0080a9c8  8be8                 mov ebp, eax
// 0080a9ca  7404                 je 0x80a9d0
// 0080a9cc  33db                 xor ebx, ebx
// 0080a9ce  33ed                 xor ebp, ebp
// 0080a9d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080a9d4  8b960c010000         mov edx, dword ptr [esi + 0x10c]
// 0080a9da  50                   push eax
// 0080a9db  50                   push eax
// 0080a9dc  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 0080a9e2  52                   push edx
// 0080a9e3  50                   push eax
// 0080a9e4  8dbef8000000         lea edi, [esi + 0xf8]
// 0080a9ea  57                   push edi
// 0080a9eb  53                   push ebx
// 0080a9ec  55                   push ebp
// 0080a9ed  8d4c2430             lea ecx, [esp + 0x30]
// 0080a9f1  51                   push ecx
// 0080a9f2  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 0080a9f8  e881261700           call 0x97d07e
// 0080a9fd  8b542414             mov edx, dword ptr [esp + 0x14]
// 0080aa01  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080aa05  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080aa09  8917                 mov dword ptr [edi], edx
// 0080aa0b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0080aa0f  894704               mov dword ptr [edi + 4], eax
// 0080aa12  894f08               mov dword ptr [edi + 8], ecx
// 0080aa15  89570c               mov dword ptr [edi + 0xc], edx
// 0080aa18  5f                   pop edi
// 0080aa19  89ae08010000         mov dword ptr [esi + 0x108], ebp
// 0080aa1f  5d                   pop ebp
// 0080aa20  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 0080aa26  5b                   pop ebx
// 0080aa27  5e                   pop esi
// 0080aa28  83c414               add esp, 0x14
// 0080aa2b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawFocusRect@CXTPTabClientWnd@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
