// roc 2008-06 00583a00  unit: RBX::VModelInstance::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583a00
//
// 00583a00  56                   push esi
// 00583a01  8bf1                 mov esi, ecx
// 00583a03  8b4618               mov eax, dword ptr [esi + 0x18]
// 00583a06  85c0                 test eax, eax
// 00583a08  7409                 je 0x583a13
// 00583a0a  50                   push eax
// 00583a0b  e86acc1100           call 0x6a067a
// 00583a10  83c404               add esp, 4
// 00583a13  c70630b78000         mov dword ptr [esi], 0x80b730
// 00583a19  5e                   pop esi
// 00583a1a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??1?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
