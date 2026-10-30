// from server: 100% by auto
// roc 2011-06 00848f60  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848f60
//
// 00848f60  53                   push ebx
// 00848f61  8bd9                 mov ebx, ecx
// 00848f63  837b0400             cmp dword ptr [ebx + 4], 0
// 00848f67  7458                 je 0x848fc1
// 00848f69  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00848f6d  57                   push edi
// 00848f6e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00848f72  c70000000000         mov dword ptr [eax], 0
// 00848f78  8b470c               mov eax, dword ptr [edi + 0xc]
// 00848f7b  83f801               cmp eax, 1
// 00848f7e  7407                 je 0x848f87
// 00848f80  3d00800000           cmp eax, 0x8000
// 00848f85  7539                 jne 0x848fc0
// 00848f87  8b473c               mov eax, dword ptr [edi + 0x3c]
// 00848f8a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00848f8d  56                   push esi
// 00848f8e  6a02                 push 2
// 00848f90  50                   push eax
// 00848f91  e8c2381800           call 0x9cc858
// 00848f96  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00848f99  6a01                 push 1
// 00848f9b  8bf0                 mov esi, eax
// 00848f9d  6a00                 push 0
// 00848f9f  51                   push ecx
// 00848fa0  d1ee                 shr esi, 1
// 00848fa2  8bcb                 mov ecx, ebx
// 00848fa4  83e601               and esi, 1
// 00848fa7  e8d4f6ffff           call 0x848680
// 00848fac  85c0                 test eax, eax
// 00848fae  740f                 je 0x848fbf
// 00848fb0  85f6                 test esi, esi
// 00848fb2  750b                 jne 0x848fbf
// 00848fb4  8b573c               mov edx, dword ptr [edi + 0x3c]
// 00848fb7  52                   push edx
// 00848fb8  8bcb                 mov ecx, ebx
// 00848fba  e861efffff           call 0x847f20
// 00848fbf  5e                   pop esi
// 00848fc0  5f                   pop edi
// 00848fc1  33c0                 xor eax, eax
// 00848fc3  5b                   pop ebx
// 00848fc4  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnItemExpanding@CXTPTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
