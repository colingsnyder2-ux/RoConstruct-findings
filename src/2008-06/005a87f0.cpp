// roc 2008-06 005a87f0  unit: RBX::ScriptContext  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a87f0
//
// 005a87f0  56                   push esi
// 005a87f1  8bf1                 mov esi, ecx
// 005a87f3  8b06                 mov eax, dword ptr [esi]
// 005a87f5  57                   push edi
// 005a87f6  8b3d90288000         mov edi, dword ptr [0x802890]
// 005a87fc  85c0                 test eax, eax
// 005a87fe  7508                 jne 0x5a8808
// 005a8800  ffd7                 call edi
// 005a8802  8b06                 mov eax, dword ptr [esi]
// 005a8804  85c0                 test eax, eax
// 005a8806  7404                 je 0x5a880c
// 005a8808  8b00                 mov eax, dword ptr [eax]
// 005a880a  eb02                 jmp 0x5a880e
// 005a880c  33c0                 xor eax, eax
// 005a880e  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a8811  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 005a8814  7202                 jb 0x5a8818
// 005a8816  ffd7                 call edi
// 005a8818  83460408             add dword ptr [esi + 4], 8
// 005a881c  5f                   pop edi
// 005a881d  8bc6                 mov eax, esi
// 005a881f  5e                   pop esi
// 005a8820  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??E?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
