// roc 2009-06 00429fd0  unit: CMainFrame  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00429fd0
//
// 00429fd0  8b442404             mov eax, dword ptr [esp + 4]
// 00429fd4  56                   push esi
// 00429fd5  8b31                 mov esi, dword ptr [ecx]
// 00429fd7  8901                 mov dword ptr [ecx], eax
// 00429fd9  85f6                 test esi, esi
// 00429fdb  7410                 je 0x429fed
// 00429fdd  8bce                 mov ecx, esi
// 00429fdf  e84c82ffff           call 0x422230
// 00429fe4  56                   push esi
// 00429fe5  e848ea2e00           call 0x718a32
// 00429fea  83c404               add esp, 4
// 00429fed  5e                   pop esi
// 00429fee  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
