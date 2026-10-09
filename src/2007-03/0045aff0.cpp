// roc 2007-03 0045aff0  unit: seg_00450000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045aff0
//
// 0045aff0  8b442404             mov eax, dword ptr [esp + 4]
// 0045aff4  56                   push esi
// 0045aff5  8d7158               lea esi, [ecx + 0x58]
// 0045aff8  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0045affb  6a01                 push 1
// 0045affd  51                   push ecx
// 0045affe  8bce                 mov ecx, esi
// 0045b000  e8dbf1ffff           call 0x45a1e0
// 0045b005  6a01                 push 1
// 0045b007  50                   push eax
// 0045b008  8bce                 mov ecx, esi
// 0045b00a  e8e1f6ffff           call 0x45a6f0
// 0045b00f  5e                   pop esi
// 0045b010  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnMarginClick@CScintillaView@@MAEXPAUSCNotification@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
