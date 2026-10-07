// roc 2008-06 00430ec0  unit: CMainFrame  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00430ec0
//
// 00430ec0  8b442404             mov eax, dword ptr [esp + 4]
// 00430ec4  56                   push esi
// 00430ec5  8b31                 mov esi, dword ptr [ecx]
// 00430ec7  8901                 mov dword ptr [ecx], eax
// 00430ec9  85f6                 test esi, esi
// 00430ecb  7410                 je 0x430edd
// 00430ecd  8bce                 mov ecx, esi
// 00430ecf  e8cc64ffff           call 0x4273a0
// 00430ed4  56                   push esi
// 00430ed5  e8a0f72600           call 0x6a067a
// 00430eda  83c404               add esp, 4
// 00430edd  5e                   pop esi
// 00430ede  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
