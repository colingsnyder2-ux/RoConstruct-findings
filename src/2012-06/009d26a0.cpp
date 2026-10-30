// roc 2012-06 009d26a0  unit: CXTPControlWorkspaceActions  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d26a0
//
// 009d26a0  56                   push esi
// 009d26a1  57                   push edi
// 009d26a2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009d26a6  6a00                 push 0
// 009d26a8  8bf1                 mov esi, ecx
// 009d26aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009d26ae  57                   push edi
// 009d26af  e8cce50000           call 0x9e0c80
// 009d26b4  85c0                 test eax, eax
// 009d26b6  7421                 je 0x9d26d9
// 009d26b8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009d26bc  8b01                 mov eax, dword ptr [ecx]
// 009d26be  6a01                 push 1
// 009d26c0  50                   push eax
// 009d26c1  68e83bb400           push 0xb43be8
// 009d26c6  8d5001               lea edx, [eax + 1]
// 009d26c9  57                   push edi
// 009d26ca  8911                 mov dword ptr [ecx], edx
// 009d26cc  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 009d26d2  6a01                 push 1
// 009d26d4  e837f9ffff           call 0x9d2010
// 009d26d9  5f                   pop edi
// 009d26da  5e                   pop esi
// 009d26db  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?AddCommand@CXTPControlWorkspaceActions@@IAEXPAVCXTPTabClientWnd@@IAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
