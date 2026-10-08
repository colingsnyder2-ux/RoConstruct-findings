// from server: 100% by auto
// roc 2007-08 00501fe0  unit: G3D::Log  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00501fe0
//
// 00501fe0  51                   push ecx
// 00501fe1  56                   push esi
// 00501fe2  c744240400000000     mov dword ptr [esp + 4], 0
// 00501fea  e841ffffff           call 0x501f30
// 00501fef  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00501ff3  83c008               add eax, 8
// 00501ff6  50                   push eax
// 00501ff7  8bce                 mov ecx, esi
// 00501ff9  ff159ce67700         call dword ptr [0x77e69c]
// 00501fff  8bc6                 mov eax, esi
// 00502001  5e                   pop esi
// 00502002  59                   pop ecx
// 00502003  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?getCommonLogFilename@Log@G3D@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
