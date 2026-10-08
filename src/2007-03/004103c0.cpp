// roc 2007-03 004103c0  unit: seg_00410000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004103c0
//
// 004103c0  56                   push esi
// 004103c1  8bf1                 mov esi, ecx
// 004103c3  833e00               cmp dword ptr [esi], 0
// 004103c6  57                   push edi
// 004103c7  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 004103cd  7502                 jne 0x4103d1
// 004103cf  ffd7                 call edi
// 004103d1  8b06                 mov eax, dword ptr [esi]
// 004103d3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004103d6  3b4808               cmp ecx, dword ptr [eax + 8]
// 004103d9  7208                 jb 0x4103e3
// 004103db  ffd7                 call edi
// 004103dd  8b4604               mov eax, dword ptr [esi + 4]
// 004103e0  5f                   pop edi
// 004103e1  5e                   pop esi
// 004103e2  c3                   ret 
// 004103e3  5f                   pop edi
// 004103e4  8bc1                 mov eax, ecx
// 004103e6  5e                   pop esi
// 004103e7  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??D?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QBEABV?$shared_ptr@VInstance@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
