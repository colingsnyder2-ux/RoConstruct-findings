// roc 2011-06 0053b610  unit: seg_00530000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053b610
//
// 0053b610  51                   push ecx
// 0053b611  56                   push esi
// 0053b612  c744240400000000     mov dword ptr [esp + 4], 0
// 0053b61a  e841ffffff           call 0x53b560
// 0053b61f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053b623  83c008               add eax, 8
// 0053b626  50                   push eax
// 0053b627  8bce                 mov ecx, esi
// 0053b629  ff15c804a400         call dword ptr [0xa404c8]
// 0053b62f  8bc6                 mov eax, esi
// 0053b631  5e                   pop esi
// 0053b632  59                   pop ecx
// 0053b633  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?getCommonLogFilename@Log@G3D@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
