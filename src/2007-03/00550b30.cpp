// roc 2007-03 00550b30  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00550b30
//
// 00550b30  8a442404             mov al, byte ptr [esp + 4]
// 00550b34  8881f8000000         mov byte ptr [ecx + 0xf8], al
// 00550b3a  c744240470bf8b00     mov dword ptr [esp + 4], 0x8bbf70
// 00550b42  e9f932efff           jmp 0x443e40
// library rbxgs/v8datamodel\Team.cpp (function ?setAutoAssignable@Team@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
