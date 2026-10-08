// roc 2007-03 005703a0  unit: seg_00570000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005703a0
//
// 005703a0  8b442404             mov eax, dword ptr [esp + 4]
// 005703a4  83ec08               sub esp, 8
// 005703a7  56                   push esi
// 005703a8  8b31                 mov esi, dword ptr [ecx]
// 005703aa  85f6                 test esi, esi
// 005703ac  8901                 mov dword ptr [ecx], eax
// 005703ae  7435                 je 0x5703e5
// 005703b0  8b4604               mov eax, dword ptr [esi + 4]
// 005703b3  8b08                 mov ecx, dword ptr [eax]
// 005703b5  50                   push eax
// 005703b6  56                   push esi
// 005703b7  51                   push ecx
// 005703b8  56                   push esi
// 005703b9  8d4c2414             lea ecx, [esp + 0x14]
// 005703bd  51                   push ecx
// 005703be  8bce                 mov ecx, esi
// 005703c0  e8db3bf3ff           call 0x4a3fa0
// 005703c5  8b5604               mov edx, dword ptr [esi + 4]
// 005703c8  52                   push edx
// 005703c9  e822dd0a00           call 0x61e0f0
// 005703ce  56                   push esi
// 005703cf  c7460400000000       mov dword ptr [esi + 4], 0
// 005703d6  c7460800000000       mov dword ptr [esi + 8], 0
// 005703dd  e80edd0a00           call 0x61e0f0
// 005703e2  83c408               add esp, 8
// 005703e5  5e                   pop esi
// 005703e6  83c408               add esp, 8
// 005703e9  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
