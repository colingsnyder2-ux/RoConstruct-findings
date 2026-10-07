// roc 2011-06 0059f1c0  unit: RBX::P8NetworkSettings::?$GetSetImpl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059f1c0
//
// 0059f1c0  8b442404             mov eax, dword ptr [esp + 4]
// 0059f1c4  56                   push esi
// 0059f1c5  8b31                 mov esi, dword ptr [ecx]
// 0059f1c7  8901                 mov dword ptr [ecx], eax
// 0059f1c9  85f6                 test esi, esi
// 0059f1cb  7410                 je 0x59f1dd
// 0059f1cd  8bce                 mov ecx, esi
// 0059f1cf  e87c131400           call 0x6e0550
// 0059f1d4  56                   push esi
// 0059f1d5  e87eae2600           call 0x80a058
// 0059f1da  83c404               add esp, 4
// 0059f1dd  5e                   pop esi
// 0059f1de  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
