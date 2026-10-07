// roc 2010-06 00468660  unit: CRobloxWnd::PartDropTarget  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00468660
//
// 00468660  8b442404             mov eax, dword ptr [esp + 4]
// 00468664  56                   push esi
// 00468665  8b31                 mov esi, dword ptr [ecx]
// 00468667  8901                 mov dword ptr [ecx], eax
// 00468669  85f6                 test esi, esi
// 0046866b  7410                 je 0x46867d
// 0046866d  8bce                 mov ecx, esi
// 0046866f  e87c0b0100           call 0x4791f0
// 00468674  56                   push esi
// 00468675  e820f33300           call 0x7a799a
// 0046867a  83c404               add esp, 4
// 0046867d  5e                   pop esi
// 0046867e  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
