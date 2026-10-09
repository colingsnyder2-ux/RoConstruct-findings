// roc 2009-12 0042af50  unit: CMainFrame  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042af50
//
// 0042af50  8b442404             mov eax, dword ptr [esp + 4]
// 0042af54  56                   push esi
// 0042af55  8b31                 mov esi, dword ptr [ecx]
// 0042af57  8901                 mov dword ptr [ecx], eax
// 0042af59  85f6                 test esi, esi
// 0042af5b  7410                 je 0x42af6d
// 0042af5d  8bce                 mov ecx, esi
// 0042af5f  e83c7fffff           call 0x422ea0
// 0042af64  56                   push esi
// 0042af65  e8f0883c00           call 0x7f385a
// 0042af6a  83c404               add esp, 4
// 0042af6d  5e                   pop esi
// 0042af6e  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
