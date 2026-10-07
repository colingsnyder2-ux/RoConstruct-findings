// roc 2007-08 00524100  unit: G3D::Line  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524100
//
// 00524100  83ec24               sub esp, 0x24
// 00524103  56                   push esi
// 00524104  57                   push edi
// 00524105  51                   push ecx
// 00524106  8d4c240c             lea ecx, [esp + 0xc]
// 0052410a  e8c15efeff           call 0x509fd0
// 0052410f  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00524113  b909000000           mov ecx, 9
// 00524118  8bf0                 mov esi, eax
// 0052411a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0052411c  5f                   pop edi
// 0052411d  5e                   pop esi
// 0052411e  83c424               add esp, 0x24
// 00524121  c20400               ret 4
// library g3d-6.09/G3Dcpp\Quat.cpp (function ?toRotationMatrix@Quat@G3D@@QBEXAAVMatrix3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Quat.cpp
