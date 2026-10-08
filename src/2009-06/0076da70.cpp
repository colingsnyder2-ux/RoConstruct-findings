// roc 2009-06 0076da70  unit: CXTPControlWorkspaceActions  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076da70
//
// 0076da70  56                   push esi
// 0076da71  57                   push edi
// 0076da72  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0076da76  6a00                 push 0
// 0076da78  8bf1                 mov esi, ecx
// 0076da7a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076da7e  57                   push edi
// 0076da7f  e82c0a0100           call 0x77e4b0
// 0076da84  85c0                 test eax, eax
// 0076da86  7421                 je 0x76daa9
// 0076da88  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076da8c  8b01                 mov eax, dword ptr [ecx]
// 0076da8e  6a01                 push 1
// 0076da90  50                   push eax
// 0076da91  6816d28a00           push 0x8ad216
// 0076da96  8d5001               lea edx, [eax + 1]
// 0076da99  57                   push edi
// 0076da9a  8911                 mov dword ptr [ecx], edx
// 0076da9c  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0076daa2  6a01                 push 1
// 0076daa4  e8f7f8ffff           call 0x76d3a0
// 0076daa9  5f                   pop edi
// 0076daaa  5e                   pop esi
// 0076daab  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?AddCommand@CXTPControlWorkspaceActions@@IAEXPAVCXTPTabClientWnd@@IAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
