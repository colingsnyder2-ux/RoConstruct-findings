// roc 2010-06 007fc8b0  unit: CXTPControlWorkspaceActions  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc8b0
//
// 007fc8b0  56                   push esi
// 007fc8b1  57                   push edi
// 007fc8b2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007fc8b6  6a00                 push 0
// 007fc8b8  8bf1                 mov esi, ecx
// 007fc8ba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007fc8be  57                   push edi
// 007fc8bf  e82c0c0100           call 0x80d4f0
// 007fc8c4  85c0                 test eax, eax
// 007fc8c6  7421                 je 0x7fc8e9
// 007fc8c8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fc8cc  8b01                 mov eax, dword ptr [ecx]
// 007fc8ce  6a01                 push 1
// 007fc8d0  50                   push eax
// 007fc8d1  68fe08a000           push 0xa008fe
// 007fc8d6  8d5001               lea edx, [eax + 1]
// 007fc8d9  57                   push edi
// 007fc8da  8911                 mov dword ptr [ecx], edx
// 007fc8dc  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 007fc8e2  6a01                 push 1
// 007fc8e4  e837f9ffff           call 0x7fc220
// 007fc8e9  5f                   pop edi
// 007fc8ea  5e                   pop esi
// 007fc8eb  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?AddCommand@CXTPControlWorkspaceActions@@IAEXPAVCXTPTabClientWnd@@IAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
