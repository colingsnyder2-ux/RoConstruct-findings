// roc 2010-06 0060a9f0  unit: RBX::ScriptContext  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060a9f0
//
// 0060a9f0  56                   push esi
// 0060a9f1  8bf1                 mov esi, ecx
// 0060a9f3  8b06                 mov eax, dword ptr [esi]
// 0060a9f5  57                   push edi
// 0060a9f6  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 0060a9fc  85c0                 test eax, eax
// 0060a9fe  7508                 jne 0x60aa08
// 0060aa00  ffd7                 call edi
// 0060aa02  8b06                 mov eax, dword ptr [esi]
// 0060aa04  85c0                 test eax, eax
// 0060aa06  7404                 je 0x60aa0c
// 0060aa08  8b00                 mov eax, dword ptr [eax]
// 0060aa0a  eb02                 jmp 0x60aa0e
// 0060aa0c  33c0                 xor eax, eax
// 0060aa0e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060aa11  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 0060aa14  7202                 jb 0x60aa18
// 0060aa16  ffd7                 call edi
// 0060aa18  83460408             add dword ptr [esi + 4], 8
// 0060aa1c  5f                   pop edi
// 0060aa1d  8bc6                 mov eax, esi
// 0060aa1f  5e                   pop esi
// 0060aa20  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??E?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
