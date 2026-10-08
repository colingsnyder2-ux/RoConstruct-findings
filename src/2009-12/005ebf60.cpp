// roc 2009-12 005ebf60  unit: G3D::Shader  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ebf60
//
// 005ebf60  51                   push ecx
// 005ebf61  56                   push esi
// 005ebf62  c744240400000000     mov dword ptr [esp + 4], 0
// 005ebf6a  e841ffffff           call 0x5ebeb0
// 005ebf6f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ebf73  83c008               add eax, 8
// 005ebf76  50                   push eax
// 005ebf77  8bce                 mov ecx, esi
// 005ebf79  ff15f0b69800         call dword ptr [0x98b6f0]
// 005ebf7f  8bc6                 mov eax, esi
// 005ebf81  5e                   pop esi
// 005ebf82  59                   pop ecx
// 005ebf83  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?getCommonLogFilename@Log@G3D@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
