// roc 2011-06 009c6590  unit: seg_009c0000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009c6590
//
// 009c6590  56                   push esi
// 009c6591  57                   push edi
// 009c6592  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009c6596  d907                 fld dword ptr [edi]
// 009c6598  83ec08               sub esp, 8
// 009c659b  d805685ba700         fadd dword ptr [0xa75b68]
// 009c65a1  8bf1                 mov esi, ecx
// 009c65a3  dd1c24               fstp qword ptr [esp]
// 009c65a6  e85b53e4ff           call 0x80b906
// 009c65ab  e8804fe4ff           call 0x80b530
// 009c65b0  668906               mov word ptr [esi], ax
// 009c65b3  d94704               fld dword ptr [edi + 4]
// 009c65b6  d805685ba700         fadd dword ptr [0xa75b68]
// 009c65bc  dd1c24               fstp qword ptr [esp]
// 009c65bf  e84253e4ff           call 0x80b906
// 009c65c4  e8674fe4ff           call 0x80b530
// 009c65c9  66894602             mov word ptr [esi + 2], ax
// 009c65cd  d94708               fld dword ptr [edi + 8]
// 009c65d0  d805685ba700         fadd dword ptr [0xa75b68]
// 009c65d6  dd1c24               fstp qword ptr [esp]
// 009c65d9  e82853e4ff           call 0x80b906
// 009c65de  83c408               add esp, 8
// 009c65e1  e84a4fe4ff           call 0x80b530
// 009c65e6  66894604             mov word ptr [esi + 4], ax
// 009c65ea  5f                   pop edi
// 009c65eb  8bc6                 mov eax, esi
// 009c65ed  5e                   pop esi
// 009c65ee  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Vector3int16.cpp (function ??0Vector3int16@G3D@@QAE@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector3int16.cpp
