// roc 2007-03 004f64e0  unit: seg_004f0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f64e0
//
// 004f64e0  51                   push ecx
// 004f64e1  56                   push esi
// 004f64e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f64e6  83c108               add ecx, 8
// 004f64e9  51                   push ecx
// 004f64ea  8bce                 mov ecx, esi
// 004f64ec  c744240800000000     mov dword ptr [esp + 8], 0
// 004f64f4  ff157ce77700         call dword ptr [0x77e77c]
// 004f64fa  8bc6                 mov eax, esi
// 004f64fc  5e                   pop esi
// 004f64fd  59                   pop ecx
// 004f64fe  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GImage.cpp (function ?getFilename@BinaryInput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage.cpp
