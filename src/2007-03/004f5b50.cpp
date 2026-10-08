// roc 2007-03 004f5b50  unit: seg_004f0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f5b50
//
// 004f5b50  51                   push ecx
// 004f5b51  56                   push esi
// 004f5b52  c744240400000000     mov dword ptr [esp + 4], 0
// 004f5b5a  e841ffffff           call 0x4f5aa0
// 004f5b5f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f5b63  83c008               add eax, 8
// 004f5b66  50                   push eax
// 004f5b67  8bce                 mov ecx, esi
// 004f5b69  ff157ce77700         call dword ptr [0x77e77c]
// 004f5b6f  8bc6                 mov eax, esi
// 004f5b71  5e                   pop esi
// 004f5b72  59                   pop ecx
// 004f5b73  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Log.cpp (function ?getCommonLogFilename@Log@G3D@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Log.cpp
