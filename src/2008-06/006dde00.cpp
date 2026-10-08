// from server: 100% by auto
// roc 2008-06 006dde00  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dde00
//
// 006dde00  53                   push ebx
// 006dde01  8bd9                 mov ebx, ecx
// 006dde03  837b0400             cmp dword ptr [ebx + 4], 0
// 006dde07  7458                 je 0x6dde61
// 006dde09  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006dde0d  57                   push edi
// 006dde0e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006dde12  c70000000000         mov dword ptr [eax], 0
// 006dde18  8b470c               mov eax, dword ptr [edi + 0xc]
// 006dde1b  83f801               cmp eax, 1
// 006dde1e  7407                 je 0x6dde27
// 006dde20  3d00800000           cmp eax, 0x8000
// 006dde25  7539                 jne 0x6dde60
// 006dde27  8b473c               mov eax, dword ptr [edi + 0x3c]
// 006dde2a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 006dde2d  56                   push esi
// 006dde2e  6a02                 push 2
// 006dde30  50                   push eax
// 006dde31  e8e6e40d00           call 0x7bc31c
// 006dde36  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 006dde39  6a01                 push 1
// 006dde3b  8bf0                 mov esi, eax
// 006dde3d  6a00                 push 0
// 006dde3f  51                   push ecx
// 006dde40  d1ee                 shr esi, 1
// 006dde42  8bcb                 mov ecx, ebx
// 006dde44  83e601               and esi, 1
// 006dde47  e8d4f6ffff           call 0x6dd520
// 006dde4c  85c0                 test eax, eax
// 006dde4e  740f                 je 0x6dde5f
// 006dde50  85f6                 test esi, esi
// 006dde52  750b                 jne 0x6dde5f
// 006dde54  8b573c               mov edx, dword ptr [edi + 0x3c]
// 006dde57  52                   push edx
// 006dde58  8bcb                 mov ecx, ebx
// 006dde5a  e861efffff           call 0x6dcdc0
// 006dde5f  5e                   pop esi
// 006dde60  5f                   pop edi
// 006dde61  33c0                 xor eax, eax
// 006dde63  5b                   pop ebx
// 006dde64  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnItemExpanding@CXTTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
