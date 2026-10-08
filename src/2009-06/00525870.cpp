// roc 2009-06 00525870  unit: RBX::SceneManager  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00525870
//
// 00525870  53                   push ebx
// 00525871  55                   push ebp
// 00525872  56                   push esi
// 00525873  8bf1                 mov esi, ecx
// 00525875  57                   push edi
// 00525876  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052587a  d907                 fld dword ptr [edi]
// 0052587c  8d9f88000000         lea ebx, [edi + 0x88]
// 00525882  d91e                 fstp dword ptr [esi]
// 00525884  8dae88000000         lea ebp, [esi + 0x88]
// 0052588a  d94704               fld dword ptr [edi + 4]
// 0052588d  53                   push ebx
// 0052588e  d95e04               fstp dword ptr [esi + 4]
// 00525891  d94708               fld dword ptr [edi + 8]
// 00525894  d95e08               fstp dword ptr [esi + 8]
// 00525897  d9470c               fld dword ptr [edi + 0xc]
// 0052589a  d95e0c               fstp dword ptr [esi + 0xc]
// 0052589d  d94710               fld dword ptr [edi + 0x10]
// 005258a0  d95e10               fstp dword ptr [esi + 0x10]
// 005258a3  d94714               fld dword ptr [edi + 0x14]
// 005258a6  d95e14               fstp dword ptr [esi + 0x14]
// 005258a9  d94718               fld dword ptr [edi + 0x18]
// 005258ac  d95e18               fstp dword ptr [esi + 0x18]
// 005258af  d9471c               fld dword ptr [edi + 0x1c]
// 005258b2  d95e1c               fstp dword ptr [esi + 0x1c]
// 005258b5  d94720               fld dword ptr [edi + 0x20]
// 005258b8  d95e20               fstp dword ptr [esi + 0x20]
// 005258bb  d94724               fld dword ptr [edi + 0x24]
// 005258be  d95e24               fstp dword ptr [esi + 0x24]
// 005258c1  d94728               fld dword ptr [edi + 0x28]
// 005258c4  d95e28               fstp dword ptr [esi + 0x28]
// 005258c7  d9472c               fld dword ptr [edi + 0x2c]
// 005258ca  d95e2c               fstp dword ptr [esi + 0x2c]
// 005258cd  d94730               fld dword ptr [edi + 0x30]
// 005258d0  d95e30               fstp dword ptr [esi + 0x30]
// 005258d3  d94734               fld dword ptr [edi + 0x34]
// 005258d6  d95e34               fstp dword ptr [esi + 0x34]
// 005258d9  d94738               fld dword ptr [edi + 0x38]
// 005258dc  d95e38               fstp dword ptr [esi + 0x38]
// 005258df  d9473c               fld dword ptr [edi + 0x3c]
// 005258e2  d95e3c               fstp dword ptr [esi + 0x3c]
// 005258e5  d94740               fld dword ptr [edi + 0x40]
// 005258e8  d95e40               fstp dword ptr [esi + 0x40]
// 005258eb  d94744               fld dword ptr [edi + 0x44]
// 005258ee  d95e44               fstp dword ptr [esi + 0x44]
// 005258f1  8b4748               mov eax, dword ptr [edi + 0x48]
// 005258f4  894648               mov dword ptr [esi + 0x48], eax
// 005258f7  8a4f4c               mov cl, byte ptr [edi + 0x4c]
// 005258fa  884e4c               mov byte ptr [esi + 0x4c], cl
// 005258fd  d94750               fld dword ptr [edi + 0x50]
// 00525900  d95e50               fstp dword ptr [esi + 0x50]
// 00525903  8bcd                 mov ecx, ebp
// 00525905  d94754               fld dword ptr [edi + 0x54]
// 00525908  d95e54               fstp dword ptr [esi + 0x54]
// 0052590b  d94758               fld dword ptr [edi + 0x58]
// 0052590e  d95e58               fstp dword ptr [esi + 0x58]
// 00525911  d9475c               fld dword ptr [edi + 0x5c]
// 00525914  d95e5c               fstp dword ptr [esi + 0x5c]
// 00525917  d94760               fld dword ptr [edi + 0x60]
// 0052591a  d95e60               fstp dword ptr [esi + 0x60]
// 0052591d  d94764               fld dword ptr [edi + 0x64]
// 00525920  d95e64               fstp dword ptr [esi + 0x64]
// 00525923  d94768               fld dword ptr [edi + 0x68]
// 00525926  d95e68               fstp dword ptr [esi + 0x68]
// 00525929  d9476c               fld dword ptr [edi + 0x6c]
// 0052592c  d95e6c               fstp dword ptr [esi + 0x6c]
// 0052592f  d94770               fld dword ptr [edi + 0x70]
// 00525932  d95e70               fstp dword ptr [esi + 0x70]
// 00525935  d94774               fld dword ptr [edi + 0x74]
// 00525938  d95e74               fstp dword ptr [esi + 0x74]
// 0052593b  d94778               fld dword ptr [edi + 0x78]
// 0052593e  d95e78               fstp dword ptr [esi + 0x78]
// 00525941  d9477c               fld dword ptr [edi + 0x7c]
// 00525944  d95e7c               fstp dword ptr [esi + 0x7c]
// 00525947  dd8780000000         fld qword ptr [edi + 0x80]
// 0052594d  dd9e80000000         fstp qword ptr [esi + 0x80]
// 00525953  e82846f7ff           call 0x499f80
// 00525958  d94324               fld dword ptr [ebx + 0x24]
// 0052595b  d95d24               fstp dword ptr [ebp + 0x24]
// 0052595e  d94328               fld dword ptr [ebx + 0x28]
// 00525961  d95d28               fstp dword ptr [ebp + 0x28]
// 00525964  d9432c               fld dword ptr [ebx + 0x2c]
// 00525967  8d9fb8000000         lea ebx, [edi + 0xb8]
// 0052596d  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00525970  8daeb8000000         lea ebp, [esi + 0xb8]
// 00525976  53                   push ebx
// 00525977  8bcd                 mov ecx, ebp
// 00525979  e80246f7ff           call 0x499f80
// 0052597e  d94324               fld dword ptr [ebx + 0x24]
// 00525981  d95d24               fstp dword ptr [ebp + 0x24]
// 00525984  8bc6                 mov eax, esi
// 00525986  d94328               fld dword ptr [ebx + 0x28]
// 00525989  d95d28               fstp dword ptr [ebp + 0x28]
// 0052598c  d9432c               fld dword ptr [ebx + 0x2c]
// 0052598f  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00525992  d987e8000000         fld dword ptr [edi + 0xe8]
// 00525998  d99ee8000000         fstp dword ptr [esi + 0xe8]
// 0052599e  d987ec000000         fld dword ptr [edi + 0xec]
// 005259a4  d99eec000000         fstp dword ptr [esi + 0xec]
// 005259aa  d987f0000000         fld dword ptr [edi + 0xf0]
// 005259b0  d99ef0000000         fstp dword ptr [esi + 0xf0]
// 005259b6  d987f4000000         fld dword ptr [edi + 0xf4]
// 005259bc  5f                   pop edi
// 005259bd  d99ef4000000         fstp dword ptr [esi + 0xf4]
// 005259c3  5e                   pop esi
// 005259c4  5d                   pop ebp
// 005259c5  5b                   pop ebx
// 005259c6  c20400               ret 4
// library rbxgs-view/View.cpp (function ??0LightingParameters@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
