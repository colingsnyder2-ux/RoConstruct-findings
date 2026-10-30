// roc 2012-06 0049dea0  unit: Scintilla::CScintillaView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049dea0
//
// 0049dea0  53                   push ebx
// 0049dea1  56                   push esi
// 0049dea2  57                   push edi
// 0049dea3  8d7158               lea esi, [ecx + 0x58]
// 0049dea6  6a01                 push 1
// 0049dea8  8bce                 mov ecx, esi
// 0049deaa  e831f4ffff           call 0x49d2e0
// 0049deaf  6a01                 push 1
// 0049deb1  8bce                 mov ecx, esi
// 0049deb3  8bf8                 mov edi, eax
// 0049deb5  e856f4ffff           call 0x49d310
// 0049deba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049debe  8b11                 mov edx, dword ptr [ecx]
// 0049dec0  33db                 xor ebx, ebx
// 0049dec2  3bf8                 cmp edi, eax
// 0049dec4  8b02                 mov eax, dword ptr [edx]
// 0049dec6  0f95c3               setne bl
// 0049dec9  53                   push ebx
// 0049deca  ffd0                 call eax
// 0049decc  5f                   pop edi
// 0049decd  5e                   pop esi
// 0049dece  5b                   pop ebx
// 0049decf  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedSel@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
