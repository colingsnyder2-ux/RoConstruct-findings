// roc 2009-06 00633210  unit: std::strstream  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633210
//
// 00633210  56                   push esi
// 00633211  8bf1                 mov esi, ecx
// 00633213  8b06                 mov eax, dword ptr [esi]
// 00633215  57                   push edi
// 00633216  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 0063321c  85c0                 test eax, eax
// 0063321e  7508                 jne 0x633228
// 00633220  ffd7                 call edi
// 00633222  8b06                 mov eax, dword ptr [esi]
// 00633224  85c0                 test eax, eax
// 00633226  7404                 je 0x63322c
// 00633228  8b00                 mov eax, dword ptr [eax]
// 0063322a  eb02                 jmp 0x63322e
// 0063322c  33c0                 xor eax, eax
// 0063322e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00633231  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 00633234  7202                 jb 0x633238
// 00633236  ffd7                 call edi
// 00633238  83460408             add dword ptr [esi + 4], 8
// 0063323c  5f                   pop edi
// 0063323d  8bc6                 mov eax, esi
// 0063323f  5e                   pop esi
// 00633240  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??E?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
