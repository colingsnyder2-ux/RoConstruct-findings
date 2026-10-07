// roc 2012-06 00439300  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00439300
//
// 00439300  8b442404             mov eax, dword ptr [esp + 4]
// 00439304  56                   push esi
// 00439305  8b31                 mov esi, dword ptr [ecx]
// 00439307  8901                 mov dword ptr [ecx], eax
// 00439309  85f6                 test esi, esi
// 0043930b  7410                 je 0x43931d
// 0043930d  8bce                 mov ecx, esi
// 0043930f  e83c79ffff           call 0x430c50
// 00439314  56                   push esi
// 00439315  e8fa8d5400           call 0x982114
// 0043931a  83c404               add esp, 4
// 0043931d  5e                   pop esi
// 0043931e  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?reset@?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAEXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
