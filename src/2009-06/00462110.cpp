// roc 2009-06 00462110  unit: Scintilla::CScintillaView  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462110
//
// 00462110  56                   push esi
// 00462111  57                   push edi
// 00462112  8d7158               lea esi, [ecx + 0x58]
// 00462115  6a01                 push 1
// 00462117  8bce                 mov ecx, esi
// 00462119  e832faffff           call 0x461b50
// 0046211e  6a01                 push 1
// 00462120  8bce                 mov ecx, esi
// 00462122  8bf8                 mov edi, eax
// 00462124  e8d7f4ffff           call 0x461600
// 00462129  85ff                 test edi, edi
// 0046212b  740b                 je 0x462138
// 0046212d  3bc7                 cmp eax, edi
// 0046212f  7407                 je 0x462138
// 00462131  b801000000           mov eax, 1
// 00462136  eb02                 jmp 0x46213a
// 00462138  33c0                 xor eax, eax
// 0046213a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046213e  8b11                 mov edx, dword ptr [ecx]
// 00462140  5f                   pop edi
// 00462141  5e                   pop esi
// 00462142  89442404             mov dword ptr [esp + 4], eax
// 00462146  8b02                 mov eax, dword ptr [edx]
// 00462148  ffe0                 jmp eax
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedTextAndFollowingText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
