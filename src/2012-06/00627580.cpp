// from server: 100% by auto
// roc 2012-06 00627580  unit: seg_00620000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00627580
//
// 00627580  51                   push ecx
// 00627581  56                   push esi
// 00627582  c744240400000000     mov dword ptr [esp + 4], 0
// 0062758a  e841ffffff           call 0x6274d0
// 0062758f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00627593  83c008               add eax, 8
// 00627596  50                   push eax
// 00627597  8bce                 mov ecx, esi
// 00627599  ff154426b200         call dword ptr [0xb22644]
// 0062759f  8bc6                 mov eax, esi
// 006275a1  5e                   pop esi
// 006275a2  59                   pop ecx
// 006275a3  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?getCommonLogFilename@Log@G3D@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
