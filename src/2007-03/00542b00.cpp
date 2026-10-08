// roc 2007-03 00542b00  unit: seg_00540000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00542b00
//
// 00542b00  81ec80000000         sub esp, 0x80
// 00542b06  56                   push esi
// 00542b07  8d4c2404             lea ecx, [esp + 4]
// 00542b0b  e8104afaff           call 0x4e7520
// 00542b10  8b7004               mov esi, dword ptr [eax + 4]
// 00542b13  8d4c2404             lea ecx, [esp + 4]
// 00542b17  e874ffffff           call 0x542a90
// 00542b1c  8bc6                 mov eax, esi
// 00542b1e  5e                   pop esi
// 00542b1f  81c480000000         add esp, 0x80
// 00542b25  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?videoMemory@DebugSettings@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
