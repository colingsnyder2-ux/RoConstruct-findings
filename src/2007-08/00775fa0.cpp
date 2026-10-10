// from server: 99% by colin
// roc 2007-08 00774e30  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774e30
//
// 00774e30  e82bbfe1ff           call 0x5d35b0
// 00774e35  686cb77b00           push 0x7c3bec
// 00774e3a  50                   push eax
// 00774e3b  b938698c00           mov ecx, 0x8c8014
// 00774e40  e8cbb5dfff           call 0x570410
// 00774e45  6890bd7700           push 0x77c9b0
// 00774e4a  c70538698c003cb47b00 mov dword ptr [0x8c8014], 0x7c3b9c
// 00774e54  e8cabeebff           call 0x630d23
// 00774e59  59                   pop ecx
// 00774e5a  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eevent_Unequipped@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp