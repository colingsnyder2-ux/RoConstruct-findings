// roc 2010-06 0046e7c0  unit: Scintilla::CScintillaView  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e7c0
//
// 0046e7c0  56                   push esi
// 0046e7c1  57                   push edi
// 0046e7c2  8d7158               lea esi, [ecx + 0x58]
// 0046e7c5  6a01                 push 1
// 0046e7c7  8bce                 mov ecx, esi
// 0046e7c9  e822faffff           call 0x46e1f0
// 0046e7ce  6a01                 push 1
// 0046e7d0  8bce                 mov ecx, esi
// 0046e7d2  8bf8                 mov edi, eax
// 0046e7d4  e8c7f4ffff           call 0x46dca0
// 0046e7d9  85ff                 test edi, edi
// 0046e7db  740b                 je 0x46e7e8
// 0046e7dd  3bc7                 cmp eax, edi
// 0046e7df  7407                 je 0x46e7e8
// 0046e7e1  b801000000           mov eax, 1
// 0046e7e6  eb02                 jmp 0x46e7ea
// 0046e7e8  33c0                 xor eax, eax
// 0046e7ea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046e7ee  8b11                 mov edx, dword ptr [ecx]
// 0046e7f0  5f                   pop edi
// 0046e7f1  5e                   pop esi
// 0046e7f2  89442404             mov dword ptr [esp + 4], eax
// 0046e7f6  8b02                 mov eax, dword ptr [edx]
// 0046e7f8  ffe0                 jmp eax
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedTextAndFollowingText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
