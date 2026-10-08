// roc 2010-06 0047af60  unit: DxUserInput  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047af60
//
// 0047af60  6aff                 push -1
// 0047af62  68c84e9800           push 0x984ec8
// 0047af67  64a100000000         mov eax, dword ptr fs:[0]
// 0047af6d  50                   push eax
// 0047af6e  64892500000000       mov dword ptr fs:[0], esp
// 0047af75  51                   push ecx
// 0047af76  56                   push esi
// 0047af77  8bf1                 mov esi, ecx
// 0047af79  89742404             mov dword ptr [esp + 4], esi
// 0047af7d  8d4e58               lea ecx, [esi + 0x58]
// 0047af80  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0047af88  ff1500a49e00         call dword ptr [0x9ea400]
// 0047af8e  8bce                 mov ecx, esi
// 0047af90  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0047af98  e8a389f9ff           call 0x413940
// 0047af9d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047afa1  5e                   pop esi
// 0047afa2  64890d00000000       mov dword ptr fs:[0], ecx
// 0047afa9  83c410               add esp, 0x10
// 0047afac  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
