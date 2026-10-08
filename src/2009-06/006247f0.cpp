// roc 2009-06 006247f0  unit: RBX::StarterGear  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006247f0
//
// 006247f0  56                   push esi
// 006247f1  8bf1                 mov esi, ecx
// 006247f3  8b4618               mov eax, dword ptr [esi + 0x18]
// 006247f6  50                   push eax
// 006247f7  e836420f00           call 0x718a32
// 006247fc  83c404               add esp, 4
// 006247ff  c70630d28a00         mov dword ptr [esi], 0x8ad230
// 00624805  5e                   pop esi
// 00624806  c3                   ret 
// library rbxgs/script\Script.cpp (function ??1?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
