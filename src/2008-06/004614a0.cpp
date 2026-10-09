// roc 2008-06 004614a0  unit: Scintilla::CScintillaView  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004614a0
//
// 004614a0  56                   push esi
// 004614a1  57                   push edi
// 004614a2  8d7158               lea esi, [ecx + 0x58]
// 004614a5  6a01                 push 1
// 004614a7  8bce                 mov ecx, esi
// 004614a9  e832faffff           call 0x460ee0
// 004614ae  6a01                 push 1
// 004614b0  8bce                 mov ecx, esi
// 004614b2  8bf8                 mov edi, eax
// 004614b4  e8d7f4ffff           call 0x460990
// 004614b9  85ff                 test edi, edi
// 004614bb  740b                 je 0x4614c8
// 004614bd  3bc7                 cmp eax, edi
// 004614bf  7407                 je 0x4614c8
// 004614c1  b801000000           mov eax, 1
// 004614c6  eb02                 jmp 0x4614ca
// 004614c8  33c0                 xor eax, eax
// 004614ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004614ce  8b11                 mov edx, dword ptr [ecx]
// 004614d0  5f                   pop edi
// 004614d1  5e                   pop esi
// 004614d2  89442404             mov dword ptr [esp + 4], eax
// 004614d6  8b02                 mov eax, dword ptr [edx]
// 004614d8  ffe0                 jmp eax
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedTextAndFollowingText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
