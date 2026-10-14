// roc 2007-08 0051dfc0  unit: seg_00510000  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051dfc0
//
// 0051dfc0  83ec24               sub esp, 0x24
// 0051dfc3  d9ee                 fldz 
// 0051dfc5  8b442430             mov eax, dword ptr [esp + 0x30]
// 0051dfc9  56                   push esi
// 0051dfca  8bf1                 mov esi, ecx
// 0051dfcc  c706fc057a00         mov dword ptr [esi], 0x7a05fc
// 0051dfd2  d95604               fst dword ptr [esi + 4]
// 0051dfd5  d95608               fst dword ptr [esi + 8]
// 0051dfd8  57                   push edi
// 0051dfd9  d95e0c               fstp dword ptr [esi + 0xc]
// 0051dfdc  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0051dfe0  d900                 fld dword ptr [eax]
// 0051dfe2  d827                 fsub dword ptr [edi]
// 0051dfe4  d95c2414             fstp dword ptr [esp + 0x14]
// 0051dfe8  d94004               fld dword ptr [eax + 4]
// 0051dfeb  d86704               fsub dword ptr [edi + 4]
// 0051dfee  d95c2418             fstp dword ptr [esp + 0x18]
// 0051dff2  d94008               fld dword ptr [eax + 8]
// 0051dff5  8b442434             mov eax, dword ptr [esp + 0x34]
// 0051dff9  d86708               fsub dword ptr [edi + 8]
// 0051dffc  d95c241c             fstp dword ptr [esp + 0x1c]
// 0051e000  d900                 fld dword ptr [eax]
// 0051e002  d827                 fsub dword ptr [edi]
// 0051e004  d95c2420             fstp dword ptr [esp + 0x20]
// 0051e008  d94004               fld dword ptr [eax + 4]
// 0051e00b  d86704               fsub dword ptr [edi + 4]
// 0051e00e  d95c2424             fstp dword ptr [esp + 0x24]
// 0051e012  d94008               fld dword ptr [eax + 8]
// 0051e015  d86708               fsub dword ptr [edi + 8]
// 0051e018  d95c2428             fstp dword ptr [esp + 0x28]
// 0051e01c  d9442424             fld dword ptr [esp + 0x24]
// 0051e020  d9c0                 fld st(0)
// 0051e022  d944241c             fld dword ptr [esp + 0x1c]
// 0051e026  d9c0                 fld st(0)
// 0051e028  deca                 fmulp st(2)
// 0051e02a  d9442428             fld dword ptr [esp + 0x28]
// 0051e02e  d9c0                 fld st(0)
// 0051e030  d9442418             fld dword ptr [esp + 0x18]
// 0051e034  d9c0                 fld st(0)
// 0051e036  deca                 fmulp st(2)
// 0051e038  d9cc                 fxch st(4)
// 0051e03a  dee1                 fsubrp st(1)
// 0051e03c  d95c2408             fstp dword ptr [esp + 8]
// 0051e040  d9442414             fld dword ptr [esp + 0x14]
// 0051e044  d9c0                 fld st(0)
// 0051e046  deca                 fmulp st(2)
// 0051e048  d9442420             fld dword ptr [esp + 0x20]
// 0051e04c  d9c0                 fld st(0)
// 0051e04e  decc                 fmulp st(4)
// 0051e050  d9ca                 fxch st(2)
// 0051e052  dee3                 fsubrp st(3)
// 0051e054  d9ca                 fxch st(2)
// 0051e056  d95c240c             fstp dword ptr [esp + 0xc]
// 0051e05a  deca                 fmulp st(2)
// 0051e05c  deca                 fmulp st(2)
// 0051e05e  dee1                 fsubrp st(1)
// 0051e060  d95c2410             fstp dword ptr [esp + 0x10]
// 0051e064  d944240c             fld dword ptr [esp + 0xc]
// 0051e068  d9442408             fld dword ptr [esp + 8]
// 0051e06c  d9442410             fld dword ptr [esp + 0x10]
// 0051e070  d9c1                 fld st(1)
// 0051e072  deca                 fmulp st(2)
// 0051e074  d9c2                 fld st(2)
// 0051e076  decb                 fmulp st(3)
// 0051e078  d9c9                 fxch st(1)
// 0051e07a  dec2                 faddp st(2)
// 0051e07c  dcc8                 fmul st(0), st(0)
// 0051e07e  dec1                 faddp st(1)
// 0051e080  d95c2438             fstp dword ptr [esp + 0x38]
// 0051e084  d9442438             fld dword ptr [esp + 0x38]
// 0051e088  e87f2d1100           call 0x630e0c
// 0051e08d  d95c2438             fstp dword ptr [esp + 0x38]
// 0051e091  d9442438             fld dword ptr [esp + 0x38]
// 0051e095  d9e8                 fld1 
// 0051e097  def1                 fdivrp st(1)
// 0051e099  d95c2438             fstp dword ptr [esp + 0x38]
// 0051e09d  d9442408             fld dword ptr [esp + 8]
// 0051e0a1  d9442438             fld dword ptr [esp + 0x38]
// 0051e0a5  d9c0                 fld st(0)
// 0051e0a7  deca                 fmulp st(2)
// 0051e0a9  d9c9                 fxch st(1)
// 0051e0ab  d95c2420             fstp dword ptr [esp + 0x20]
// 0051e0af  d944240c             fld dword ptr [esp + 0xc]
// 0051e0b3  8bc6                 mov eax, esi
// 0051e0b5  d8c9                 fmul st(1)
// 0051e0b7  d95c2424             fstp dword ptr [esp + 0x24]
// 0051e0bb  d84c2410             fmul dword ptr [esp + 0x10]
// 0051e0bf  d95c2428             fstp dword ptr [esp + 0x28]
// 0051e0c3  d9442420             fld dword ptr [esp + 0x20]
// 0051e0c7  d95e04               fstp dword ptr [esi + 4]
// 0051e0ca  d9442424             fld dword ptr [esp + 0x24]
// 0051e0ce  d95e08               fstp dword ptr [esi + 8]
// 0051e0d1  d9442428             fld dword ptr [esp + 0x28]
// 0051e0d5  d95e0c               fstp dword ptr [esi + 0xc]
// 0051e0d8  d94608               fld dword ptr [esi + 8]
// 0051e0db  d84f04               fmul dword ptr [edi + 4]
// 0051e0de  d907                 fld dword ptr [edi]
// 0051e0e0  d84e04               fmul dword ptr [esi + 4]
// 0051e0e3  dec1                 faddp st(1)
// 0051e0e5  d9460c               fld dword ptr [esi + 0xc]
// 0051e0e8  d84f08               fmul dword ptr [edi + 8]
// 0051e0eb  5f                   pop edi
// 0051e0ec  dec1                 faddp st(1)
// 0051e0ee  d95e10               fstp dword ptr [esi + 0x10]
// 0051e0f1  5e                   pop esi
// 0051e0f2  83c424               add esp, 0x24
// 0051e0f5  c20c00               ret 0xc
// library g3d-6.09-rbx2008/G3Dcpp\Plane.cpp (function ??0Plane@G3D@@QAE@ABVVector3@1@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Plane.cpp
