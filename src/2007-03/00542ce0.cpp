// roc 2007-03 00542ce0  unit: seg_00540000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00542ce0
//
// 00542ce0  81ec80000000         sub esp, 0x80
// 00542ce6  56                   push esi
// 00542ce7  8d4c2404             lea ecx, [esp + 4]
// 00542ceb  e83048faff           call 0x4e7520
// 00542cf0  8b7060               mov esi, dword ptr [eax + 0x60]
// 00542cf3  8d4c2404             lea ecx, [esp + 4]
// 00542cf7  e894fdffff           call 0x542a90
// 00542cfc  8bc6                 mov eax, esi
// 00542cfe  5e                   pop esi
// 00542cff  81c480000000         add esp, 0x80
// 00542d05  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?ram@DebugSettings@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
