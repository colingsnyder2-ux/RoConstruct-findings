// roc 2007-03 0045aa80  unit: seg_00450000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045aa80
//
// 0045aa80  56                   push esi
// 0045aa81  57                   push edi
// 0045aa82  8d7158               lea esi, [ecx + 0x58]
// 0045aa85  6a01                 push 1
// 0045aa87  8bce                 mov ecx, esi
// 0045aa89  e822faffff           call 0x45a4b0
// 0045aa8e  6a01                 push 1
// 0045aa90  8bce                 mov ecx, esi
// 0045aa92  8bf8                 mov edi, eax
// 0045aa94  e8c7f4ffff           call 0x459f60
// 0045aa99  85ff                 test edi, edi
// 0045aa9b  740b                 je 0x45aaa8
// 0045aa9d  3bc7                 cmp eax, edi
// 0045aa9f  7407                 je 0x45aaa8
// 0045aaa1  b801000000           mov eax, 1
// 0045aaa6  eb02                 jmp 0x45aaaa
// 0045aaa8  33c0                 xor eax, eax
// 0045aaaa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045aaae  8b11                 mov edx, dword ptr [ecx]
// 0045aab0  5f                   pop edi
// 0045aab1  5e                   pop esi
// 0045aab2  89442404             mov dword ptr [esp + 4], eax
// 0045aab6  8b02                 mov eax, dword ptr [edx]
// 0045aab8  ffe0                 jmp eax
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedTextAndFollowingText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
