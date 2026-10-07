// roc 2012-06 006a74d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a74d0
//
// 006a74d0  8b442404             mov eax, dword ptr [esp + 4]
// 006a74d4  56                   push esi
// 006a74d5  8b31                 mov esi, dword ptr [ecx]
// 006a74d7  8901                 mov dword ptr [ecx], eax
// 006a74d9  85f6                 test esi, esi
// 006a74db  7410                 je 0x6a74ed
// 006a74dd  8bce                 mov ecx, esi
// 006a74df  e88ce4ffff           call 0x6a5970
// 006a74e4  56                   push esi
// 006a74e5  e82aac2d00           call 0x982114
// 006a74ea  83c404               add esp, 4
// 006a74ed  5e                   pop esi
// 006a74ee  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
