// roc 2007-08 005725c0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005725c0
//
// 005725c0  56                   push esi
// 005725c1  8bf1                 mov esi, ecx
// 005725c3  8b4618               mov eax, dword ptr [esi + 0x18]
// 005725c6  50                   push eax
// 005725c7  e896d60b00           call 0x62fc62
// 005725cc  83c404               add esp, 4
// 005725cf  c706b4707800         mov dword ptr [esi], 0x7870b4
// 005725d5  5e                   pop esi
// 005725d6  c3                   ret 
// library rbxgs/script\Script.cpp (function ??1?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
