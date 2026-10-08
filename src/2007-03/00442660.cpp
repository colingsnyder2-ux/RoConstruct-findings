// roc 2007-03 00442660  unit: seg_00440000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00442660
//
// 00442660  56                   push esi
// 00442661  8bf1                 mov esi, ecx
// 00442663  8b4618               mov eax, dword ptr [esi + 0x18]
// 00442666  50                   push eax
// 00442667  e884ba1d00           call 0x61e0f0
// 0044266c  83c404               add esp, 4
// 0044266f  c70664617800         mov dword ptr [esi], 0x786164
// 00442675  5e                   pop esi
// 00442676  c3                   ret 
// library rbxgs/script\Script.cpp (function ??1?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
