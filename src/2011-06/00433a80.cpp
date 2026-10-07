// roc 2011-06 00433a80  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00433a80
//
// 00433a80  8b442404             mov eax, dword ptr [esp + 4]
// 00433a84  56                   push esi
// 00433a85  8b31                 mov esi, dword ptr [ecx]
// 00433a87  8901                 mov dword ptr [ecx], eax
// 00433a89  85f6                 test esi, esi
// 00433a8b  7410                 je 0x433a9d
// 00433a8d  8bce                 mov ecx, esi
// 00433a8f  e85c89ffff           call 0x42c3f0
// 00433a94  56                   push esi
// 00433a95  e8be653d00           call 0x80a058
// 00433a9a  83c404               add esp, 4
// 00433a9d  5e                   pop esi
// 00433a9e  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
