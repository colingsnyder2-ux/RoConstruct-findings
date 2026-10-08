// roc 2007-08 00570480  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570480
//
// 00570480  8b442404             mov eax, dword ptr [esp + 4]
// 00570484  83ec08               sub esp, 8
// 00570487  56                   push esi
// 00570488  8b31                 mov esi, dword ptr [ecx]
// 0057048a  85f6                 test esi, esi
// 0057048c  8901                 mov dword ptr [ecx], eax
// 0057048e  7435                 je 0x5704c5
// 00570490  8b4604               mov eax, dword ptr [esi + 4]
// 00570493  8b08                 mov ecx, dword ptr [eax]
// 00570495  50                   push eax
// 00570496  56                   push esi
// 00570497  51                   push ecx
// 00570498  56                   push esi
// 00570499  8d4c2414             lea ecx, [esp + 0x14]
// 0057049d  51                   push ecx
// 0057049e  8bce                 mov ecx, esi
// 005704a0  e8dbcff3ff           call 0x4ad480
// 005704a5  8b5604               mov edx, dword ptr [esi + 4]
// 005704a8  52                   push edx
// 005704a9  e8b4f70b00           call 0x62fc62
// 005704ae  56                   push esi
// 005704af  c7460400000000       mov dword ptr [esi + 4], 0
// 005704b6  c7460800000000       mov dword ptr [esi + 8], 0
// 005704bd  e8a0f70b00           call 0x62fc62
// 005704c2  83c408               add esp, 8
// 005704c5  5e                   pop esi
// 005704c6  83c408               add esp, 8
// 005704c9  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
