// roc 2007-03 00591780  unit: seg_00590000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00591780
//
// 00591780  6aff                 push -1
// 00591782  68587d7500           push 0x757d58
// 00591787  64a100000000         mov eax, dword ptr fs:[0]
// 0059178d  50                   push eax
// 0059178e  64892500000000       mov dword ptr fs:[0], esp
// 00591795  51                   push ecx
// 00591796  56                   push esi
// 00591797  8bf1                 mov esi, ecx
// 00591799  89742404             mov dword ptr [esp + 4], esi
// 0059179d  8d4e58               lea ecx, [esi + 0x58]
// 005917a0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005917a8  ff158ce77700         call dword ptr [0x77e78c]
// 005917ae  8bce                 mov ecx, esi
// 005917b0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005917b8  e863ffffff           call 0x591720
// 005917bd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005917c1  5e                   pop esi
// 005917c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005917c9  83c410               add esp, 0x10
// 005917cc  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
