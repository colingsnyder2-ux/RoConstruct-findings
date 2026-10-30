// from server: 100% by auto
// roc 2008-06 006f50d0  unit: CXTPControlWorkspaceActions  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f50d0
//
// 006f50d0  56                   push esi
// 006f50d1  57                   push edi
// 006f50d2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006f50d6  6a00                 push 0
// 006f50d8  8bf1                 mov esi, ecx
// 006f50da  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f50de  57                   push edi
// 006f50df  e85c0a0100           call 0x705b40
// 006f50e4  85c0                 test eax, eax
// 006f50e6  7421                 je 0x6f5109
// 006f50e8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f50ec  8b01                 mov eax, dword ptr [ecx]
// 006f50ee  6a01                 push 1
// 006f50f0  50                   push eax
// 006f50f1  6816b78000           push 0x80b716
// 006f50f6  8d5001               lea edx, [eax + 1]
// 006f50f9  57                   push edi
// 006f50fa  8911                 mov dword ptr [ecx], edx
// 006f50fc  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 006f5102  6a01                 push 1
// 006f5104  e837f9ffff           call 0x6f4a40
// 006f5109  5f                   pop edi
// 006f510a  5e                   pop esi
// 006f510b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?AddCommand@CXTPControlWorkspaceActions@@IAEXPAVCXTPTabClientWnd@@IAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
