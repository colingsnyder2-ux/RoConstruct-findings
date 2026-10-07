// roc 2008-06 00509e60  unit: G3D::Shader  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00509e60
//
// 00509e60  51                   push ecx
// 00509e61  56                   push esi
// 00509e62  c744240400000000     mov dword ptr [esp + 4], 0
// 00509e6a  e841ffffff           call 0x509db0
// 00509e6f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00509e73  83c008               add eax, 8
// 00509e76  50                   push eax
// 00509e77  8bce                 mov ecx, esi
// 00509e79  ff155c248000         call dword ptr [0x80245c]
// 00509e7f  8bc6                 mov eax, esi
// 00509e81  5e                   pop esi
// 00509e82  59                   pop ecx
// 00509e83  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?getCommonLogFilename@Log@G3D@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
