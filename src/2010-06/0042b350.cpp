// roc 2010-06 0042b350  unit: CMainFrame  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042b350
//
// 0042b350  8b442404             mov eax, dword ptr [esp + 4]
// 0042b354  56                   push esi
// 0042b355  8b31                 mov esi, dword ptr [ecx]
// 0042b357  8901                 mov dword ptr [ecx], eax
// 0042b359  85f6                 test esi, esi
// 0042b35b  7410                 je 0x42b36d
// 0042b35d  8bce                 mov ecx, esi
// 0042b35f  e89c7fffff           call 0x423300
// 0042b364  56                   push esi
// 0042b365  e830c63700           call 0x7a799a
// 0042b36a  83c404               add esp, 4
// 0042b36d  5e                   pop esi
// 0042b36e  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
