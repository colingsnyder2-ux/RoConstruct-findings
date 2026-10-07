// roc 2010-06 00550170  unit: G3D::Log  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00550170
//
// 00550170  51                   push ecx
// 00550171  56                   push esi
// 00550172  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00550176  83c108               add ecx, 8
// 00550179  51                   push ecx
// 0055017a  8bce                 mov ecx, esi
// 0055017c  c744240800000000     mov dword ptr [esp + 8], 0
// 00550184  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055018a  8bc6                 mov eax, esi
// 0055018c  5e                   pop esi
// 0055018d  59                   pop ecx
// 0055018e  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?getFilename@BinaryInput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
