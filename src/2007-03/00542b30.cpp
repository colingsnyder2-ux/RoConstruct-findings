// roc 2007-03 00542b30  unit: seg_00540000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00542b30
//
// 00542b30  81ec80000000         sub esp, 0x80
// 00542b36  56                   push esi
// 00542b37  8d4c2404             lea ecx, [esp + 4]
// 00542b3b  e8e049faff           call 0x4e7520
// 00542b40  8b7008               mov esi, dword ptr [eax + 8]
// 00542b43  8d4c2404             lea ecx, [esp + 4]
// 00542b47  e844ffffff           call 0x542a90
// 00542b4c  8bc6                 mov eax, esi
// 00542b4e  5e                   pop esi
// 00542b4f  81c480000000         add esp, 0x80
// 00542b55  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?cpuSpeed@DebugSettings@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
