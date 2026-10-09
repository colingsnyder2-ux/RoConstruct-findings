// roc 2009-12 0046acc0  unit: Scintilla::CScintillaView  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046acc0
//
// 0046acc0  56                   push esi
// 0046acc1  57                   push edi
// 0046acc2  8d7158               lea esi, [ecx + 0x58]
// 0046acc5  6a01                 push 1
// 0046acc7  8bce                 mov ecx, esi
// 0046acc9  e822faffff           call 0x46a6f0
// 0046acce  6a01                 push 1
// 0046acd0  8bce                 mov ecx, esi
// 0046acd2  8bf8                 mov edi, eax
// 0046acd4  e8c7f4ffff           call 0x46a1a0
// 0046acd9  85ff                 test edi, edi
// 0046acdb  740b                 je 0x46ace8
// 0046acdd  3bc7                 cmp eax, edi
// 0046acdf  7407                 je 0x46ace8
// 0046ace1  b801000000           mov eax, 1
// 0046ace6  eb02                 jmp 0x46acea
// 0046ace8  33c0                 xor eax, eax
// 0046acea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046acee  8b11                 mov edx, dword ptr [ecx]
// 0046acf0  5f                   pop edi
// 0046acf1  5e                   pop esi
// 0046acf2  89442404             mov dword ptr [esp + 4], eax
// 0046acf6  8b02                 mov eax, dword ptr [edx]
// 0046acf8  ffe0                 jmp eax
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedTextAndFollowingText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
