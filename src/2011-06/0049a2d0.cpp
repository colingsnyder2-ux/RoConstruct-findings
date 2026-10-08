// roc 2011-06 0049a2d0  unit: VerbBinderJob  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049a2d0
//
// 0049a2d0  6aff                 push -1
// 0049a2d2  68486c9d00           push 0x9d6c48
// 0049a2d7  64a100000000         mov eax, dword ptr fs:[0]
// 0049a2dd  50                   push eax
// 0049a2de  64892500000000       mov dword ptr fs:[0], esp
// 0049a2e5  51                   push ecx
// 0049a2e6  56                   push esi
// 0049a2e7  8bf1                 mov esi, ecx
// 0049a2e9  89742404             mov dword ptr [esp + 4], esi
// 0049a2ed  8d4e58               lea ecx, [esi + 0x58]
// 0049a2f0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049a2f8  ff15d004a400         call dword ptr [0xa404d0]
// 0049a2fe  8bce                 mov ecx, esi
// 0049a300  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0049a308  e833772200           call 0x6c1a40
// 0049a30d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049a311  5e                   pop esi
// 0049a312  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a319  83c410               add esp, 0x10
// 0049a31c  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
