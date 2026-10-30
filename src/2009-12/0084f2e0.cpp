// roc 2009-12 0084f2e0  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f2e0
//
// 0084f2e0  6aff                 push -1
// 0084f2e2  68f3d69500           push 0x95d6f3
// 0084f2e7  64a100000000         mov eax, dword ptr fs:[0]
// 0084f2ed  50                   push eax
// 0084f2ee  51                   push ecx
// 0084f2ef  56                   push esi
// 0084f2f0  57                   push edi
// 0084f2f1  a10052b600           mov eax, dword ptr [0xb65200]
// 0084f2f6  33c4                 xor eax, esp
// 0084f2f8  50                   push eax
// 0084f2f9  8d442410             lea eax, [esp + 0x10]
// 0084f2fd  64a300000000         mov dword ptr fs:[0], eax
// 0084f303  8bf9                 mov edi, ecx
// 0084f305  897c240c             mov dword ptr [esp + 0xc], edi
// 0084f309  c7072cc09f00         mov dword ptr [edi], 0x9fc02c
// 0084f30f  33f6                 xor esi, esi
// 0084f311  397728               cmp dword ptr [edi + 0x28], esi
// 0084f314  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0084f31c  7e1f                 jle 0x84f33d
// 0084f31e  8bff                 mov edi, edi
// 0084f320  85f6                 test esi, esi
// 0084f322  7c47                 jl 0x84f36b
// 0084f324  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0084f327  7d42                 jge 0x84f36b
// 0084f329  8b4724               mov eax, dword ptr [edi + 0x24]
// 0084f32c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0084f32f  8d04b0               lea eax, [eax + esi*4]
// 0084f332  e8a54afaff           call 0x7f3ddc
// 0084f337  46                   inc esi
// 0084f338  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0084f33b  7ce3                 jl 0x84f320
// 0084f33d  8d4f20               lea ecx, [edi + 0x20]
// 0084f340  c644241800           mov byte ptr [esp + 0x18], 0
// 0084f345  e8f6feffff           call 0x84f240
// 0084f34a  8bcf                 mov ecx, edi
// 0084f34c  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0084f354  e88950faff           call 0x7f43e2
// 0084f359  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084f35d  64890d00000000       mov dword ptr fs:[0], ecx
// 0084f364  59                   pop ecx
// 0084f365  5f                   pop edi
// 0084f366  5e                   pop esi
// 0084f367  83c410               add esp, 0x10
// 0084f36a  c3                   ret 
// 0084f36b  e89c47faff           call 0x7f3b0c
// copied from an identical function in another client (function ??1CXTPPropertyGridVerbs@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp