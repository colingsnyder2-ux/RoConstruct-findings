// roc 2011-06 0085a2c0  unit: CXTPControlWorkspaceActions  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a2c0
//
// 0085a2c0  56                   push esi
// 0085a2c1  57                   push edi
// 0085a2c2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0085a2c6  6a00                 push 0
// 0085a2c8  8bf1                 mov esi, ecx
// 0085a2ca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085a2ce  57                   push edi
// 0085a2cf  e83ce40000           call 0x868710
// 0085a2d4  85c0                 test eax, eax
// 0085a2d6  7421                 je 0x85a2f9
// 0085a2d8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085a2dc  8b01                 mov eax, dword ptr [ecx]
// 0085a2de  6a01                 push 1
// 0085a2e0  50                   push eax
// 0085a2e1  68cabea500           push 0xa5beca
// 0085a2e6  8d5001               lea edx, [eax + 1]
// 0085a2e9  57                   push edi
// 0085a2ea  8911                 mov dword ptr [ecx], edx
// 0085a2ec  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0085a2f2  6a01                 push 1
// 0085a2f4  e817f9ffff           call 0x859c10
// 0085a2f9  5f                   pop edi
// 0085a2fa  5e                   pop esi
// 0085a2fb  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?AddCommand@CXTPControlWorkspaceActions@@IAEXPAVCXTPTabClientWnd@@IAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
