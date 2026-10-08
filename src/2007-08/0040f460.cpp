// roc 2007-08 0040f460  unit: CutVerb  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f460
//
// 0040f460  56                   push esi
// 0040f461  8bf1                 mov esi, ecx
// 0040f463  833e00               cmp dword ptr [esi], 0
// 0040f466  57                   push edi
// 0040f467  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 0040f46d  7502                 jne 0x40f471
// 0040f46f  ffd7                 call edi
// 0040f471  8b06                 mov eax, dword ptr [esi]
// 0040f473  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040f476  3b4808               cmp ecx, dword ptr [eax + 8]
// 0040f479  7202                 jb 0x40f47d
// 0040f47b  ffd7                 call edi
// 0040f47d  83460408             add dword ptr [esi + 4], 8
// 0040f481  5f                   pop edi
// 0040f482  8bc6                 mov eax, esi
// 0040f484  5e                   pop esi
// 0040f485  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??E?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
