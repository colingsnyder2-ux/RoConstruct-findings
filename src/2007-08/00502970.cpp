// roc 2007-08 00502970  unit: G3D::Log  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00502970
//
// 00502970  51                   push ecx
// 00502971  56                   push esi
// 00502972  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00502976  83c108               add ecx, 8
// 00502979  51                   push ecx
// 0050297a  8bce                 mov ecx, esi
// 0050297c  c744240800000000     mov dword ptr [esp + 8], 0
// 00502984  ff159ce67700         call dword ptr [0x77e69c]
// 0050298a  8bc6                 mov eax, esi
// 0050298c  5e                   pop esi
// 0050298d  59                   pop ecx
// 0050298e  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?getFilename@BinaryInput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
