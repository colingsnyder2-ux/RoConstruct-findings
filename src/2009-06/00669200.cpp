// roc 2009-06 00669200  unit: RBX::VPartInstance::?$FilteredSelection  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00669200
//
// 00669200  6aff                 push -1
// 00669202  6840c58600           push 0x86c540
// 00669207  64a100000000         mov eax, dword ptr fs:[0]
// 0066920d  50                   push eax
// 0066920e  64892500000000       mov dword ptr fs:[0], esp
// 00669215  51                   push ecx
// 00669216  56                   push esi
// 00669217  8bf1                 mov esi, ecx
// 00669219  89742404             mov dword ptr [esp + 4], esi
// 0066921d  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00669220  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00669228  85c9                 test ecx, ecx
// 0066922a  7408                 je 0x669234
// 0066922c  8b01                 mov eax, dword ptr [ecx]
// 0066922e  8b10                 mov edx, dword ptr [eax]
// 00669230  6a01                 push 1
// 00669232  ffd2                 call edx
// 00669234  8d4e18               lea ecx, [esi + 0x18]
// 00669237  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0066923f  e80cf8e4ff           call 0x4b8a50
// 00669244  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00669248  c70630d28a00         mov dword ptr [esi], 0x8ad230
// 0066924e  5e                   pop esi
// 0066924f  64890d00000000       mov dword ptr fs:[0], ecx
// 00669256  83c410               add esp, 0x10
// 00669259  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??1?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
