// from server: 100% by auto
// roc 2009-06 0056ce50  unit: G3D::Shader  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056ce50
//
// 0056ce50  51                   push ecx
// 0056ce51  56                   push esi
// 0056ce52  c744240400000000     mov dword ptr [esp + 4], 0
// 0056ce5a  e841ffffff           call 0x56cda0
// 0056ce5f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056ce63  83c008               add eax, 8
// 0056ce66  50                   push eax
// 0056ce67  8bce                 mov ecx, esi
// 0056ce69  ff15b8e48900         call dword ptr [0x89e4b8]
// 0056ce6f  8bc6                 mov eax, esi
// 0056ce71  5e                   pop esi
// 0056ce72  59                   pop ecx
// 0056ce73  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?getCommonLogFilename@Log@G3D@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
