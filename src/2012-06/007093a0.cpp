// roc 2012-06 007093a0  unit: MemoryBinder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007093a0
//
// 007093a0  56                   push esi
// 007093a1  57                   push edi
// 007093a2  8bf1                 mov esi, ecx
// 007093a4  e8f7feffff           call 0x7092a0
// 007093a9  8d7e04               lea edi, [esi + 4]
// 007093ac  8bcf                 mov ecx, edi
// 007093ae  8906                 mov dword ptr [esi], eax
// 007093b0  e8abf8ffff           call 0x708c60
// 007093b5  894704               mov dword ptr [edi + 4], eax
// 007093b8  c7470800000000       mov dword ptr [edi + 8], 0
// 007093bf  5f                   pop edi
// 007093c0  8bc6                 mov eax, esi
// 007093c2  5e                   pop esi
// 007093c3  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??0SignatureDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
