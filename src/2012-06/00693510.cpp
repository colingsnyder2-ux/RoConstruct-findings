// roc 2012-06 00693510  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00693510
//
// 00693510  8b442404             mov eax, dword ptr [esp + 4]
// 00693514  56                   push esi
// 00693515  8b31                 mov esi, dword ptr [ecx]
// 00693517  8901                 mov dword ptr [ecx], eax
// 00693519  85f6                 test esi, esi
// 0069351b  7410                 je 0x69352d
// 0069351d  8bce                 mov ecx, esi
// 0069351f  e8acd71900           call 0x830cd0
// 00693524  56                   push esi
// 00693525  e8eaeb2e00           call 0x982114
// 0069352a  83c404               add esp, 4
// 0069352d  5e                   pop esi
// 0069352e  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
