// roc 2007-03 004103f0  unit: seg_00410000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004103f0
//
// 004103f0  56                   push esi
// 004103f1  8bf1                 mov esi, ecx
// 004103f3  833e00               cmp dword ptr [esi], 0
// 004103f6  57                   push edi
// 004103f7  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 004103fd  7502                 jne 0x410401
// 004103ff  ffd7                 call edi
// 00410401  8b06                 mov eax, dword ptr [esi]
// 00410403  8b4e04               mov ecx, dword ptr [esi + 4]
// 00410406  3b4808               cmp ecx, dword ptr [eax + 8]
// 00410409  7202                 jb 0x41040d
// 0041040b  ffd7                 call edi
// 0041040d  83460408             add dword ptr [esi + 4], 8
// 00410411  5f                   pop edi
// 00410412  8bc6                 mov eax, esi
// 00410414  5e                   pop esi
// 00410415  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??E?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
