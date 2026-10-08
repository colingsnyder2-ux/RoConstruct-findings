// from server: 100% by auto
// roc 2010-06 0054f5a0  unit: G3D::Shader  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f5a0
//
// 0054f5a0  51                   push ecx
// 0054f5a1  56                   push esi
// 0054f5a2  c744240400000000     mov dword ptr [esp + 4], 0
// 0054f5aa  e841ffffff           call 0x54f4f0
// 0054f5af  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0054f5b3  83c008               add eax, 8
// 0054f5b6  50                   push eax
// 0054f5b7  8bce                 mov ecx, esi
// 0054f5b9  ff150ca49e00         call dword ptr [0x9ea40c]
// 0054f5bf  8bc6                 mov eax, esi
// 0054f5c1  5e                   pop esi
// 0054f5c2  59                   pop ecx
// 0054f5c3  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?getCommonLogFilename@Log@G3D@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
