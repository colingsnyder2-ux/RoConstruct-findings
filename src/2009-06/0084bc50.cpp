// roc 2009-06 0084bc50  unit: G3D::H::PAV?$Array::?$Set  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084bc50
//
// 0084bc50  56                   push esi
// 0084bc51  57                   push edi
// 0084bc52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084bc56  d907                 fld dword ptr [edi]
// 0084bc58  83ec08               sub esp, 8
// 0084bc5b  d8054cad8b00         fadd dword ptr [0x8bad4c]
// 0084bc61  8bf1                 mov esi, ecx
// 0084bc63  dd1c24               fstp qword ptr [esp]
// 0084bc66  e815e6ecff           call 0x71a280
// 0084bc6b  e850e2ecff           call 0x719ec0
// 0084bc70  668906               mov word ptr [esi], ax
// 0084bc73  d94704               fld dword ptr [edi + 4]
// 0084bc76  d8054cad8b00         fadd dword ptr [0x8bad4c]
// 0084bc7c  dd1c24               fstp qword ptr [esp]
// 0084bc7f  e8fce5ecff           call 0x71a280
// 0084bc84  e837e2ecff           call 0x719ec0
// 0084bc89  66894602             mov word ptr [esi + 2], ax
// 0084bc8d  d94708               fld dword ptr [edi + 8]
// 0084bc90  d8054cad8b00         fadd dword ptr [0x8bad4c]
// 0084bc96  dd1c24               fstp qword ptr [esp]
// 0084bc99  e8e2e5ecff           call 0x71a280
// 0084bc9e  83c408               add esp, 8
// 0084bca1  e81ae2ecff           call 0x719ec0
// 0084bca6  66894604             mov word ptr [esi + 4], ax
// 0084bcaa  5f                   pop edi
// 0084bcab  8bc6                 mov eax, esi
// 0084bcad  5e                   pop esi
// 0084bcae  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Vector3int16.cpp (function ??0Vector3int16@G3D@@QAE@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector3int16.cpp
