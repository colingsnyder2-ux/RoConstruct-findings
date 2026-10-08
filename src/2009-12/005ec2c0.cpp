// roc 2009-12 005ec2c0  unit: G3D::Log  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec2c0
//
// 005ec2c0  51                   push ecx
// 005ec2c1  56                   push esi
// 005ec2c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ec2c6  83c108               add ecx, 8
// 005ec2c9  51                   push ecx
// 005ec2ca  8bce                 mov ecx, esi
// 005ec2cc  c744240800000000     mov dword ptr [esp + 8], 0
// 005ec2d4  ff15f0b69800         call dword ptr [0x98b6f0]
// 005ec2da  8bc6                 mov eax, esi
// 005ec2dc  5e                   pop esi
// 005ec2dd  59                   pop ecx
// 005ec2de  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?getFilename@BinaryInput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
