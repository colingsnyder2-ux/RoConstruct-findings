// roc 2007-08 004cd470  unit: G3D::_WeakPtr  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd470
//
// 004cd470  53                   push ebx
// 004cd471  55                   push ebp
// 004cd472  56                   push esi
// 004cd473  8bf1                 mov esi, ecx
// 004cd475  57                   push edi
// 004cd476  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cd47a  d907                 fld dword ptr [edi]
// 004cd47c  8d9f88000000         lea ebx, [edi + 0x88]
// 004cd482  d91e                 fstp dword ptr [esi]
// 004cd484  8dae88000000         lea ebp, [esi + 0x88]
// 004cd48a  d94704               fld dword ptr [edi + 4]
// 004cd48d  53                   push ebx
// 004cd48e  d95e04               fstp dword ptr [esi + 4]
// 004cd491  d94708               fld dword ptr [edi + 8]
// 004cd494  d95e08               fstp dword ptr [esi + 8]
// 004cd497  d9470c               fld dword ptr [edi + 0xc]
// 004cd49a  d95e0c               fstp dword ptr [esi + 0xc]
// 004cd49d  d94710               fld dword ptr [edi + 0x10]
// 004cd4a0  d95e10               fstp dword ptr [esi + 0x10]
// 004cd4a3  d94714               fld dword ptr [edi + 0x14]
// 004cd4a6  d95e14               fstp dword ptr [esi + 0x14]
// 004cd4a9  d94718               fld dword ptr [edi + 0x18]
// 004cd4ac  d95e18               fstp dword ptr [esi + 0x18]
// 004cd4af  d9471c               fld dword ptr [edi + 0x1c]
// 004cd4b2  d95e1c               fstp dword ptr [esi + 0x1c]
// 004cd4b5  d94720               fld dword ptr [edi + 0x20]
// 004cd4b8  d95e20               fstp dword ptr [esi + 0x20]
// 004cd4bb  d94724               fld dword ptr [edi + 0x24]
// 004cd4be  d95e24               fstp dword ptr [esi + 0x24]
// 004cd4c1  d94728               fld dword ptr [edi + 0x28]
// 004cd4c4  d95e28               fstp dword ptr [esi + 0x28]
// 004cd4c7  d9472c               fld dword ptr [edi + 0x2c]
// 004cd4ca  d95e2c               fstp dword ptr [esi + 0x2c]
// 004cd4cd  d94730               fld dword ptr [edi + 0x30]
// 004cd4d0  d95e30               fstp dword ptr [esi + 0x30]
// 004cd4d3  d94734               fld dword ptr [edi + 0x34]
// 004cd4d6  d95e34               fstp dword ptr [esi + 0x34]
// 004cd4d9  d94738               fld dword ptr [edi + 0x38]
// 004cd4dc  d95e38               fstp dword ptr [esi + 0x38]
// 004cd4df  d9473c               fld dword ptr [edi + 0x3c]
// 004cd4e2  d95e3c               fstp dword ptr [esi + 0x3c]
// 004cd4e5  d94740               fld dword ptr [edi + 0x40]
// 004cd4e8  d95e40               fstp dword ptr [esi + 0x40]
// 004cd4eb  d94744               fld dword ptr [edi + 0x44]
// 004cd4ee  d95e44               fstp dword ptr [esi + 0x44]
// 004cd4f1  8b4748               mov eax, dword ptr [edi + 0x48]
// 004cd4f4  894648               mov dword ptr [esi + 0x48], eax
// 004cd4f7  8a4f4c               mov cl, byte ptr [edi + 0x4c]
// 004cd4fa  884e4c               mov byte ptr [esi + 0x4c], cl
// 004cd4fd  d94750               fld dword ptr [edi + 0x50]
// 004cd500  d95e50               fstp dword ptr [esi + 0x50]
// 004cd503  8bcd                 mov ecx, ebp
// 004cd505  d94754               fld dword ptr [edi + 0x54]
// 004cd508  d95e54               fstp dword ptr [esi + 0x54]
// 004cd50b  d94758               fld dword ptr [edi + 0x58]
// 004cd50e  d95e58               fstp dword ptr [esi + 0x58]
// 004cd511  d9475c               fld dword ptr [edi + 0x5c]
// 004cd514  d95e5c               fstp dword ptr [esi + 0x5c]
// 004cd517  d94760               fld dword ptr [edi + 0x60]
// 004cd51a  d95e60               fstp dword ptr [esi + 0x60]
// 004cd51d  d94764               fld dword ptr [edi + 0x64]
// 004cd520  d95e64               fstp dword ptr [esi + 0x64]
// 004cd523  d94768               fld dword ptr [edi + 0x68]
// 004cd526  d95e68               fstp dword ptr [esi + 0x68]
// 004cd529  d9476c               fld dword ptr [edi + 0x6c]
// 004cd52c  d95e6c               fstp dword ptr [esi + 0x6c]
// 004cd52f  d94770               fld dword ptr [edi + 0x70]
// 004cd532  d95e70               fstp dword ptr [esi + 0x70]
// 004cd535  d94774               fld dword ptr [edi + 0x74]
// 004cd538  d95e74               fstp dword ptr [esi + 0x74]
// 004cd53b  d94778               fld dword ptr [edi + 0x78]
// 004cd53e  d95e78               fstp dword ptr [esi + 0x78]
// 004cd541  d9477c               fld dword ptr [edi + 0x7c]
// 004cd544  d95e7c               fstp dword ptr [esi + 0x7c]
// 004cd547  dd8780000000         fld qword ptr [edi + 0x80]
// 004cd54d  dd9e80000000         fstp qword ptr [esi + 0x80]
// 004cd553  e878c00300           call 0x5095d0
// 004cd558  d94324               fld dword ptr [ebx + 0x24]
// 004cd55b  d95d24               fstp dword ptr [ebp + 0x24]
// 004cd55e  d94328               fld dword ptr [ebx + 0x28]
// 004cd561  d95d28               fstp dword ptr [ebp + 0x28]
// 004cd564  d9432c               fld dword ptr [ebx + 0x2c]
// 004cd567  8d9fb8000000         lea ebx, [edi + 0xb8]
// 004cd56d  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004cd570  8daeb8000000         lea ebp, [esi + 0xb8]
// 004cd576  53                   push ebx
// 004cd577  8bcd                 mov ecx, ebp
// 004cd579  e852c00300           call 0x5095d0
// 004cd57e  d94324               fld dword ptr [ebx + 0x24]
// 004cd581  d95d24               fstp dword ptr [ebp + 0x24]
// 004cd584  8bc6                 mov eax, esi
// 004cd586  d94328               fld dword ptr [ebx + 0x28]
// 004cd589  d95d28               fstp dword ptr [ebp + 0x28]
// 004cd58c  d9432c               fld dword ptr [ebx + 0x2c]
// 004cd58f  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004cd592  d987e8000000         fld dword ptr [edi + 0xe8]
// 004cd598  d99ee8000000         fstp dword ptr [esi + 0xe8]
// 004cd59e  d987ec000000         fld dword ptr [edi + 0xec]
// 004cd5a4  d99eec000000         fstp dword ptr [esi + 0xec]
// 004cd5aa  d987f0000000         fld dword ptr [edi + 0xf0]
// 004cd5b0  d99ef0000000         fstp dword ptr [esi + 0xf0]
// 004cd5b6  d987f4000000         fld dword ptr [edi + 0xf4]
// 004cd5bc  5f                   pop edi
// 004cd5bd  d99ef4000000         fstp dword ptr [esi + 0xf4]
// 004cd5c3  5e                   pop esi
// 004cd5c4  5d                   pop ebp
// 004cd5c5  5b                   pop ebx
// 004cd5c6  c20400               ret 4
// library rbxgs-view/View.cpp (function ??0LightingParameters@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
