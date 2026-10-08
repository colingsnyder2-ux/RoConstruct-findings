// from server: 100% by auto
// roc 2008-06 0050aa30  unit: G3D::Log  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050aa30
//
// 0050aa30  51                   push ecx
// 0050aa31  56                   push esi
// 0050aa32  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0050aa36  83c108               add ecx, 8
// 0050aa39  51                   push ecx
// 0050aa3a  8bce                 mov ecx, esi
// 0050aa3c  c744240800000000     mov dword ptr [esp + 8], 0
// 0050aa44  ff155c248000         call dword ptr [0x80245c]
// 0050aa4a  8bc6                 mov eax, esi
// 0050aa4c  5e                   pop esi
// 0050aa4d  59                   pop ecx
// 0050aa4e  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?getFilename@BinaryInput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
