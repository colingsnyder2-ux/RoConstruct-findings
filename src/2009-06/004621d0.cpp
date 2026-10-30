// roc 2009-06 004621d0  unit: Scintilla::CScintillaView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004621d0
//
// 004621d0  53                   push ebx
// 004621d1  56                   push esi
// 004621d2  57                   push edi
// 004621d3  8d7158               lea esi, [ecx + 0x58]
// 004621d6  6a01                 push 1
// 004621d8  8bce                 mov ecx, esi
// 004621da  e821f4ffff           call 0x461600
// 004621df  6a01                 push 1
// 004621e1  8bce                 mov ecx, esi
// 004621e3  8bf8                 mov edi, eax
// 004621e5  e846f4ffff           call 0x461630
// 004621ea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004621ee  8b11                 mov edx, dword ptr [ecx]
// 004621f0  33db                 xor ebx, ebx
// 004621f2  3bf8                 cmp edi, eax
// 004621f4  8b02                 mov eax, dword ptr [edx]
// 004621f6  0f95c3               setne bl
// 004621f9  53                   push ebx
// 004621fa  ffd0                 call eax
// 004621fc  5f                   pop edi
// 004621fd  5e                   pop esi
// 004621fe  5b                   pop ebx
// 004621ff  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedSel@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
