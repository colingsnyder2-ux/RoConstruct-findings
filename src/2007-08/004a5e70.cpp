// roc 2007-08 004a5e70  unit: RBX::VInstance::?$NonFactoryProduct  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a5e70
//
// 004a5e70  51                   push ecx
// 004a5e71  56                   push esi
// 004a5e72  8bf1                 mov esi, ecx
// 004a5e74  d94604               fld dword ptr [esi + 4]
// 004a5e77  d906                 fld dword ptr [esi]
// 004a5e79  d94608               fld dword ptr [esi + 8]
// 004a5e7c  d9460c               fld dword ptr [esi + 0xc]
// 004a5e7f  d9c2                 fld st(2)
// 004a5e81  decb                 fmulp st(3)
// 004a5e83  d9c3                 fld st(3)
// 004a5e85  decc                 fmulp st(4)
// 004a5e87  d9ca                 fxch st(2)
// 004a5e89  dec3                 faddp st(3)
// 004a5e8b  dcc8                 fmul st(0), st(0)
// 004a5e8d  dec2                 faddp st(2)
// 004a5e8f  dcc8                 fmul st(0), st(0)
// 004a5e91  dec1                 faddp st(1)
// 004a5e93  d95c2404             fstp dword ptr [esp + 4]
// 004a5e97  d9442404             fld dword ptr [esp + 4]
// 004a5e9b  e86caf1800           call 0x630e0c
// 004a5ea0  d95c2404             fstp dword ptr [esp + 4]
// 004a5ea4  d9442404             fld dword ptr [esp + 4]
// 004a5ea8  d9e8                 fld1 
// 004a5eaa  def1                 fdivrp st(1)
// 004a5eac  d95c2404             fstp dword ptr [esp + 4]
// 004a5eb0  d906                 fld dword ptr [esi]
// 004a5eb2  d9442404             fld dword ptr [esp + 4]
// 004a5eb6  d9c0                 fld st(0)
// 004a5eb8  deca                 fmulp st(2)
// 004a5eba  d9c9                 fxch st(1)
// 004a5ebc  d91e                 fstp dword ptr [esi]
// 004a5ebe  d9c0                 fld st(0)
// 004a5ec0  d84e04               fmul dword ptr [esi + 4]
// 004a5ec3  d95e04               fstp dword ptr [esi + 4]
// 004a5ec6  d94608               fld dword ptr [esi + 8]
// 004a5ec9  d8c9                 fmul st(1)
// 004a5ecb  d95e08               fstp dword ptr [esi + 8]
// 004a5ece  d84e0c               fmul dword ptr [esi + 0xc]
// 004a5ed1  d95e0c               fstp dword ptr [esi + 0xc]
// 004a5ed4  5e                   pop esi
// 004a5ed5  59                   pop ecx
// 004a5ed6  c3                   ret 
// library openrbx-client/App\v8kernel\SimBody.cpp (function ?normalize@Quaternion@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/SimBody.cpp
