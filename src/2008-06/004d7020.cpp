// roc 2008-06 004d7020  unit: CSHA1  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7020
//
// 004d7020  53                   push ebx
// 004d7021  55                   push ebp
// 004d7022  56                   push esi
// 004d7023  8bf1                 mov esi, ecx
// 004d7025  57                   push edi
// 004d7026  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004d702a  d907                 fld dword ptr [edi]
// 004d702c  8d9f88000000         lea ebx, [edi + 0x88]
// 004d7032  d91e                 fstp dword ptr [esi]
// 004d7034  8dae88000000         lea ebp, [esi + 0x88]
// 004d703a  d94704               fld dword ptr [edi + 4]
// 004d703d  53                   push ebx
// 004d703e  d95e04               fstp dword ptr [esi + 4]
// 004d7041  d94708               fld dword ptr [edi + 8]
// 004d7044  d95e08               fstp dword ptr [esi + 8]
// 004d7047  d9470c               fld dword ptr [edi + 0xc]
// 004d704a  d95e0c               fstp dword ptr [esi + 0xc]
// 004d704d  d94710               fld dword ptr [edi + 0x10]
// 004d7050  d95e10               fstp dword ptr [esi + 0x10]
// 004d7053  d94714               fld dword ptr [edi + 0x14]
// 004d7056  d95e14               fstp dword ptr [esi + 0x14]
// 004d7059  d94718               fld dword ptr [edi + 0x18]
// 004d705c  d95e18               fstp dword ptr [esi + 0x18]
// 004d705f  d9471c               fld dword ptr [edi + 0x1c]
// 004d7062  d95e1c               fstp dword ptr [esi + 0x1c]
// 004d7065  d94720               fld dword ptr [edi + 0x20]
// 004d7068  d95e20               fstp dword ptr [esi + 0x20]
// 004d706b  d94724               fld dword ptr [edi + 0x24]
// 004d706e  d95e24               fstp dword ptr [esi + 0x24]
// 004d7071  d94728               fld dword ptr [edi + 0x28]
// 004d7074  d95e28               fstp dword ptr [esi + 0x28]
// 004d7077  d9472c               fld dword ptr [edi + 0x2c]
// 004d707a  d95e2c               fstp dword ptr [esi + 0x2c]
// 004d707d  d94730               fld dword ptr [edi + 0x30]
// 004d7080  d95e30               fstp dword ptr [esi + 0x30]
// 004d7083  d94734               fld dword ptr [edi + 0x34]
// 004d7086  d95e34               fstp dword ptr [esi + 0x34]
// 004d7089  d94738               fld dword ptr [edi + 0x38]
// 004d708c  d95e38               fstp dword ptr [esi + 0x38]
// 004d708f  d9473c               fld dword ptr [edi + 0x3c]
// 004d7092  d95e3c               fstp dword ptr [esi + 0x3c]
// 004d7095  d94740               fld dword ptr [edi + 0x40]
// 004d7098  d95e40               fstp dword ptr [esi + 0x40]
// 004d709b  d94744               fld dword ptr [edi + 0x44]
// 004d709e  d95e44               fstp dword ptr [esi + 0x44]
// 004d70a1  8b4748               mov eax, dword ptr [edi + 0x48]
// 004d70a4  894648               mov dword ptr [esi + 0x48], eax
// 004d70a7  8a4f4c               mov cl, byte ptr [edi + 0x4c]
// 004d70aa  884e4c               mov byte ptr [esi + 0x4c], cl
// 004d70ad  d94750               fld dword ptr [edi + 0x50]
// 004d70b0  d95e50               fstp dword ptr [esi + 0x50]
// 004d70b3  8bcd                 mov ecx, ebp
// 004d70b5  d94754               fld dword ptr [edi + 0x54]
// 004d70b8  d95e54               fstp dword ptr [esi + 0x54]
// 004d70bb  d94758               fld dword ptr [edi + 0x58]
// 004d70be  d95e58               fstp dword ptr [esi + 0x58]
// 004d70c1  d9475c               fld dword ptr [edi + 0x5c]
// 004d70c4  d95e5c               fstp dword ptr [esi + 0x5c]
// 004d70c7  d94760               fld dword ptr [edi + 0x60]
// 004d70ca  d95e60               fstp dword ptr [esi + 0x60]
// 004d70cd  d94764               fld dword ptr [edi + 0x64]
// 004d70d0  d95e64               fstp dword ptr [esi + 0x64]
// 004d70d3  d94768               fld dword ptr [edi + 0x68]
// 004d70d6  d95e68               fstp dword ptr [esi + 0x68]
// 004d70d9  d9476c               fld dword ptr [edi + 0x6c]
// 004d70dc  d95e6c               fstp dword ptr [esi + 0x6c]
// 004d70df  d94770               fld dword ptr [edi + 0x70]
// 004d70e2  d95e70               fstp dword ptr [esi + 0x70]
// 004d70e5  d94774               fld dword ptr [edi + 0x74]
// 004d70e8  d95e74               fstp dword ptr [esi + 0x74]
// 004d70eb  d94778               fld dword ptr [edi + 0x78]
// 004d70ee  d95e78               fstp dword ptr [esi + 0x78]
// 004d70f1  d9477c               fld dword ptr [edi + 0x7c]
// 004d70f4  d95e7c               fstp dword ptr [esi + 0x7c]
// 004d70f7  dd8780000000         fld qword ptr [edi + 0x80]
// 004d70fd  dd9e80000000         fstp qword ptr [esi + 0x80]
// 004d7103  e818c10300           call 0x513220
// 004d7108  d94324               fld dword ptr [ebx + 0x24]
// 004d710b  d95d24               fstp dword ptr [ebp + 0x24]
// 004d710e  d94328               fld dword ptr [ebx + 0x28]
// 004d7111  d95d28               fstp dword ptr [ebp + 0x28]
// 004d7114  d9432c               fld dword ptr [ebx + 0x2c]
// 004d7117  8d9fb8000000         lea ebx, [edi + 0xb8]
// 004d711d  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004d7120  8daeb8000000         lea ebp, [esi + 0xb8]
// 004d7126  53                   push ebx
// 004d7127  8bcd                 mov ecx, ebp
// 004d7129  e8f2c00300           call 0x513220
// 004d712e  d94324               fld dword ptr [ebx + 0x24]
// 004d7131  d95d24               fstp dword ptr [ebp + 0x24]
// 004d7134  8bc6                 mov eax, esi
// 004d7136  d94328               fld dword ptr [ebx + 0x28]
// 004d7139  d95d28               fstp dword ptr [ebp + 0x28]
// 004d713c  d9432c               fld dword ptr [ebx + 0x2c]
// 004d713f  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004d7142  d987e8000000         fld dword ptr [edi + 0xe8]
// 004d7148  d99ee8000000         fstp dword ptr [esi + 0xe8]
// 004d714e  d987ec000000         fld dword ptr [edi + 0xec]
// 004d7154  d99eec000000         fstp dword ptr [esi + 0xec]
// 004d715a  d987f0000000         fld dword ptr [edi + 0xf0]
// 004d7160  d99ef0000000         fstp dword ptr [esi + 0xf0]
// 004d7166  d987f4000000         fld dword ptr [edi + 0xf4]
// 004d716c  5f                   pop edi
// 004d716d  d99ef4000000         fstp dword ptr [esi + 0xf4]
// 004d7173  5e                   pop esi
// 004d7174  5d                   pop ebp
// 004d7175  5b                   pop ebx
// 004d7176  c20400               ret 4
// library rbxgs-view/View.cpp (function ??0LightingParameters@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
