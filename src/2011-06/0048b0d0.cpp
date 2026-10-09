// roc 2011-06 0048b0d0  unit: Scintilla::CScintillaView  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b0d0
//
// 0048b0d0  56                   push esi
// 0048b0d1  57                   push edi
// 0048b0d2  8d7158               lea esi, [ecx + 0x58]
// 0048b0d5  6a01                 push 1
// 0048b0d7  8bce                 mov ecx, esi
// 0048b0d9  e822faffff           call 0x48ab00
// 0048b0de  6a01                 push 1
// 0048b0e0  8bce                 mov ecx, esi
// 0048b0e2  8bf8                 mov edi, eax
// 0048b0e4  e8c7f4ffff           call 0x48a5b0
// 0048b0e9  85ff                 test edi, edi
// 0048b0eb  740b                 je 0x48b0f8
// 0048b0ed  3bc7                 cmp eax, edi
// 0048b0ef  7407                 je 0x48b0f8
// 0048b0f1  b801000000           mov eax, 1
// 0048b0f6  eb02                 jmp 0x48b0fa
// 0048b0f8  33c0                 xor eax, eax
// 0048b0fa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048b0fe  8b11                 mov edx, dword ptr [ecx]
// 0048b100  5f                   pop edi
// 0048b101  5e                   pop esi
// 0048b102  89442404             mov dword ptr [esp + 4], eax
// 0048b106  8b02                 mov eax, dword ptr [edx]
// 0048b108  ffe0                 jmp eax
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedTextAndFollowingText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
