// from server: 100% by auto
// roc 2007-08 004754a0  unit: CInstanceRecord::CNameItem  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004754a0
//
// 004754a0  83ec0c               sub esp, 0xc
// 004754a3  56                   push esi
// 004754a4  8bf1                 mov esi, ecx
// 004754a6  e8555d0900           call 0x50b200
// 004754ab  d900                 fld dword ptr [eax]
// 004754ad  d9442414             fld dword ptr [esp + 0x14]
// 004754b1  8bce                 mov ecx, esi
// 004754b3  d9c0                 fld st(0)
// 004754b5  deca                 fmulp st(2)
// 004754b7  d9c9                 fxch st(1)
// 004754b9  d95c2404             fstp dword ptr [esp + 4]
// 004754bd  d94004               fld dword ptr [eax + 4]
// 004754c0  d8c9                 fmul st(1)
// 004754c2  d95c2408             fstp dword ptr [esp + 8]
// 004754c6  d84808               fmul dword ptr [eax + 8]
// 004754c9  8d442404             lea eax, [esp + 4]
// 004754cd  50                   push eax
// 004754ce  d95c2410             fstp dword ptr [esp + 0x10]
// 004754d2  e849e1ffff           call 0x473620
// 004754d7  5e                   pop esi
// 004754d8  83c40c               add esp, 0xc
// 004754db  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setSpecularCoefficient@RenderDevice@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
