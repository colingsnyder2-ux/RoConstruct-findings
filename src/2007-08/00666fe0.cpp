// from server: 100% by auto
// roc 2007-08 00666fe0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666fe0
//
// 00666fe0  83ec10               sub esp, 0x10
// 00666fe3  57                   push edi
// 00666fe4  8bf9                 mov edi, ecx
// 00666fe6  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00666fe9  e85092fcff           call 0x63023e
// 00666fee  837f0400             cmp dword ptr [edi + 4], 0
// 00666ff2  744c                 je 0x667040
// 00666ff4  56                   push esi
// 00666ff5  8bcf                 mov ecx, edi
// 00666ff7  e874f0ffff           call 0x666070
// 00666ffc  8bf0                 mov esi, eax
// 00666ffe  85f6                 test esi, esi
// 00667000  743d                 je 0x66703f
// 00667002  53                   push ebx
// 00667003  8b1ddcec7700         mov ebx, dword ptr [0x77ecdc]
// 00667009  8da42400000000       lea esp, [esp]
// 00667010  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00667013  6a01                 push 1
// 00667015  8d442410             lea eax, [esp + 0x10]
// 00667019  50                   push eax
// 0066701a  56                   push esi
// 0066701b  e85e94fcff           call 0x63047e
// 00667020  8b5734               mov edx, dword ptr [edi + 0x34]
// 00667023  8b4220               mov eax, dword ptr [edx + 0x20]
// 00667026  6a01                 push 1
// 00667028  8d4c2410             lea ecx, [esp + 0x10]
// 0066702c  51                   push ecx
// 0066702d  50                   push eax
// 0066702e  ffd3                 call ebx
// 00667030  56                   push esi
// 00667031  8bcf                 mov ecx, edi
// 00667033  e888f0ffff           call 0x6660c0
// 00667038  8bf0                 mov esi, eax
// 0066703a  85f6                 test esi, esi
// 0066703c  75d2                 jne 0x667010
// 0066703e  5b                   pop ebx
// 0066703f  5e                   pop esi
// 00667040  5f                   pop edi
// 00667041  83c410               add esp, 0x10
// 00667044  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?OnKillFocus@CXTTreeBase@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
