// roc 2011-06 00848ef0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848ef0
//
// 00848ef0  83ec10               sub esp, 0x10
// 00848ef3  57                   push edi
// 00848ef4  8bf9                 mov edi, ecx
// 00848ef6  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00848ef9  e83017fcff           call 0x80a62e
// 00848efe  837f0400             cmp dword ptr [edi + 4], 0
// 00848f02  744c                 je 0x848f50
// 00848f04  56                   push esi
// 00848f05  8bcf                 mov ecx, edi
// 00848f07  e864f0ffff           call 0x847f70
// 00848f0c  8bf0                 mov esi, eax
// 00848f0e  85f6                 test esi, esi
// 00848f10  743d                 je 0x848f4f
// 00848f12  53                   push ebx
// 00848f13  8b1dec19a400         mov ebx, dword ptr [0xa419ec]
// 00848f19  8da42400000000       lea esp, [esp]
// 00848f20  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00848f23  6a01                 push 1
// 00848f25  8d442410             lea eax, [esp + 0x10]
// 00848f29  50                   push eax
// 00848f2a  56                   push esi
// 00848f2b  e8c41afcff           call 0x80a9f4
// 00848f30  8b5734               mov edx, dword ptr [edi + 0x34]
// 00848f33  8b4220               mov eax, dword ptr [edx + 0x20]
// 00848f36  6a01                 push 1
// 00848f38  8d4c2410             lea ecx, [esp + 0x10]
// 00848f3c  51                   push ecx
// 00848f3d  50                   push eax
// 00848f3e  ffd3                 call ebx
// 00848f40  56                   push esi
// 00848f41  8bcf                 mov ecx, edi
// 00848f43  e878f0ffff           call 0x847fc0
// 00848f48  8bf0                 mov esi, eax
// 00848f4a  85f6                 test esi, esi
// 00848f4c  75d2                 jne 0x848f20
// 00848f4e  5b                   pop ebx
// 00848f4f  5e                   pop esi
// 00848f50  5f                   pop edi
// 00848f51  83c410               add esp, 0x10
// 00848f54  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnKillFocus@CXTPTreeBase@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
