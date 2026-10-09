// roc 2008-06 00420ce0  unit: CInstanceExplorer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420ce0
//
// 00420ce0  56                   push esi
// 00420ce1  8bf1                 mov esi, ecx
// 00420ce3  8b06                 mov eax, dword ptr [esi]
// 00420ce5  57                   push edi
// 00420ce6  8b3d90288000         mov edi, dword ptr [0x802890]
// 00420cec  85c0                 test eax, eax
// 00420cee  7508                 jne 0x420cf8
// 00420cf0  ffd7                 call edi
// 00420cf2  8b06                 mov eax, dword ptr [esi]
// 00420cf4  85c0                 test eax, eax
// 00420cf6  7404                 je 0x420cfc
// 00420cf8  8b00                 mov eax, dword ptr [eax]
// 00420cfa  eb02                 jmp 0x420cfe
// 00420cfc  33c0                 xor eax, eax
// 00420cfe  8b4e04               mov ecx, dword ptr [esi + 4]
// 00420d01  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 00420d04  7202                 jb 0x420d08
// 00420d06  ffd7                 call edi
// 00420d08  83460404             add dword ptr [esi + 4], 4
// 00420d0c  5f                   pop edi
// 00420d0d  8bc6                 mov eax, esi
// 00420d0f  5e                   pop esi
// 00420d10  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Clusterer.cpp (function ??E?$_Vector_const_iterator@PAVChunk@Render@RBX@@V?$allocator@PAVChunk@Render@RBX@@@std@@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Clusterer.cpp
