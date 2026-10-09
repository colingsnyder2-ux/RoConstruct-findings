// roc 2009-12 004139e0  unit: CopyVerb  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004139e0
//
// 004139e0  56                   push esi
// 004139e1  8bf1                 mov esi, ecx
// 004139e3  8b06                 mov eax, dword ptr [esi]
// 004139e5  57                   push edi
// 004139e6  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 004139ec  85c0                 test eax, eax
// 004139ee  7508                 jne 0x4139f8
// 004139f0  ffd7                 call edi
// 004139f2  8b06                 mov eax, dword ptr [esi]
// 004139f4  85c0                 test eax, eax
// 004139f6  7404                 je 0x4139fc
// 004139f8  8b00                 mov eax, dword ptr [eax]
// 004139fa  eb02                 jmp 0x4139fe
// 004139fc  33c0                 xor eax, eax
// 004139fe  8b4e04               mov ecx, dword ptr [esi + 4]
// 00413a01  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 00413a04  7202                 jb 0x413a08
// 00413a06  ffd7                 call edi
// 00413a08  83460408             add dword ptr [esi + 4], 8
// 00413a0c  5f                   pop edi
// 00413a0d  8bc6                 mov eax, esi
// 00413a0f  5e                   pop esi
// 00413a10  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??E?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
