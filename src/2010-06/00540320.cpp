// roc 2010-06 00540320  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00540320
//
// 00540320  55                   push ebp
// 00540321  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00540325  57                   push edi
// 00540326  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0054032a  3bfd                 cmp edi, ebp
// 0054032c  745a                 je 0x540388
// 0054032e  53                   push ebx
// 0054032f  8b1d7ca39e00         mov ebx, dword ptr [0x9ea37c]
// 00540335  56                   push esi
// 00540336  8b07                 mov eax, dword ptr [edi]
// 00540338  85c0                 test eax, eax
// 0054033a  7443                 je 0x54037f
// 0054033c  83c004               add eax, 4
// 0054033f  50                   push eax
// 00540340  ffd3                 call ebx
// 00540342  85c0                 test eax, eax
// 00540344  7533                 jne 0x540379
// 00540346  8b07                 mov eax, dword ptr [edi]
// 00540348  8b7008               mov esi, dword ptr [eax + 8]
// 0054034b  85f6                 test esi, esi
// 0054034d  741c                 je 0x54036b
// 0054034f  90                   nop 
// 00540350  8b0e                 mov ecx, dword ptr [esi]
// 00540352  8b11                 mov edx, dword ptr [ecx]
// 00540354  8b4204               mov eax, dword ptr [edx + 4]
// 00540357  ffd0                 call eax
// 00540359  8bc6                 mov eax, esi
// 0054035b  8b7604               mov esi, dword ptr [esi + 4]
// 0054035e  50                   push eax
// 0054035f  e836762600           call 0x7a799a
// 00540364  83c404               add esp, 4
// 00540367  85f6                 test esi, esi
// 00540369  75e5                 jne 0x540350
// 0054036b  8b0f                 mov ecx, dword ptr [edi]
// 0054036d  85c9                 test ecx, ecx
// 0054036f  7408                 je 0x540379
// 00540371  8b11                 mov edx, dword ptr [ecx]
// 00540373  8b02                 mov eax, dword ptr [edx]
// 00540375  6a01                 push 1
// 00540377  ffd0                 call eax
// 00540379  c70700000000         mov dword ptr [edi], 0
// 0054037f  83c704               add edi, 4
// 00540382  3bfd                 cmp edi, ebp
// 00540384  75b0                 jne 0x540336
// 00540386  5e                   pop esi
// 00540387  5b                   pop ebx
// 00540388  5f                   pop edi
// 00540389  5d                   pop ebp
// 0054038a  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Destroy_range@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@YAXPAV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@0AAV?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
