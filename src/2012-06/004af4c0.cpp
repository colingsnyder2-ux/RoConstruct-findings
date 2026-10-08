// roc 2012-06 004af4c0  unit: VerbBinderJob  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004af4c0
//
// 004af4c0  6aff                 push -1
// 004af4c2  683848aa00           push 0xaa4838
// 004af4c7  64a100000000         mov eax, dword ptr fs:[0]
// 004af4cd  50                   push eax
// 004af4ce  64892500000000       mov dword ptr fs:[0], esp
// 004af4d5  51                   push ecx
// 004af4d6  56                   push esi
// 004af4d7  8bf1                 mov esi, ecx
// 004af4d9  89742404             mov dword ptr [esp + 4], esi
// 004af4dd  8d4e58               lea ecx, [esi + 0x58]
// 004af4e0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004af4e8  ff153c26b200         call dword ptr [0xb2263c]
// 004af4ee  8bce                 mov ecx, esi
// 004af4f0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004af4f8  e863ffffff           call 0x4af460
// 004af4fd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004af501  5e                   pop esi
// 004af502  64890d00000000       mov dword ptr fs:[0], ecx
// 004af509  83c410               add esp, 0x10
// 004af50c  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
