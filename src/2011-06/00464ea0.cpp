// roc 2011-06 00464ea0  unit: LockPlayModeVerb2  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00464ea0
//
// 00464ea0  8b442404             mov eax, dword ptr [esp + 4]
// 00464ea4  56                   push esi
// 00464ea5  8b31                 mov esi, dword ptr [ecx]
// 00464ea7  8901                 mov dword ptr [ecx], eax
// 00464ea9  85f6                 test esi, esi
// 00464eab  7410                 je 0x464ebd
// 00464ead  8bce                 mov ecx, esi
// 00464eaf  e8fc160300           call 0x4965b0
// 00464eb4  56                   push esi
// 00464eb5  e89e513a00           call 0x80a058
// 00464eba  83c404               add esp, 4
// 00464ebd  5e                   pop esi
// 00464ebe  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
