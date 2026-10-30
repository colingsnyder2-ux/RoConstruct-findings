// roc 2012-06 0049dde0  unit: Scintilla::CScintillaView  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049dde0
//
// 0049dde0  56                   push esi
// 0049dde1  57                   push edi
// 0049dde2  8d7158               lea esi, [ecx + 0x58]
// 0049dde5  6a01                 push 1
// 0049dde7  8bce                 mov ecx, esi
// 0049dde9  e842faffff           call 0x49d830
// 0049ddee  6a01                 push 1
// 0049ddf0  8bce                 mov ecx, esi
// 0049ddf2  8bf8                 mov edi, eax
// 0049ddf4  e8e7f4ffff           call 0x49d2e0
// 0049ddf9  85ff                 test edi, edi
// 0049ddfb  740b                 je 0x49de08
// 0049ddfd  3bc7                 cmp eax, edi
// 0049ddff  7407                 je 0x49de08
// 0049de01  b801000000           mov eax, 1
// 0049de06  eb02                 jmp 0x49de0a
// 0049de08  33c0                 xor eax, eax
// 0049de0a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049de0e  8b11                 mov edx, dword ptr [ecx]
// 0049de10  5f                   pop edi
// 0049de11  5e                   pop esi
// 0049de12  89442404             mov dword ptr [esp + 4], eax
// 0049de16  8b02                 mov eax, dword ptr [edx]
// 0049de18  ffe0                 jmp eax
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedTextAndFollowingText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
