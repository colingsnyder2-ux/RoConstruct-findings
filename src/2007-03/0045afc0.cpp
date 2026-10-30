// roc 2007-03 0045afc0  unit: seg_00450000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045afc0
//
// 0045afc0  a15c918800           mov eax, dword ptr [0x88915c]
// 0045afc5  85c0                 test eax, eax
// 0045afc7  8b542408             mov edx, dword ptr [esp + 8]
// 0045afcb  740c                 je 0x45afd9
// 0045afcd  3bd1                 cmp edx, ecx
// 0045afcf  7508                 jne 0x45afd9
// 0045afd1  56                   push esi
// 0045afd2  8b7120               mov esi, dword ptr [ecx + 0x20]
// 0045afd5  897078               mov dword ptr [eax + 0x78], esi
// 0045afd8  5e                   pop esi
// 0045afd9  89542408             mov dword ptr [esp + 8], edx
// 0045afdd  e950371c00           jmp 0x61e732
// library scintilla-mfc-1.20-vc8/ScintillaDocView.cpp (function ?OnActivateView@CScintillaView@@MAEXHPAVCView@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20-vc8 ScintillaDocView.cpp
