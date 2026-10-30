// roc 2010-06 00803340  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00803340
//
// 00803340  6aff                 push -1
// 00803342  68e3349b00           push 0x9b34e3
// 00803347  64a100000000         mov eax, dword ptr fs:[0]
// 0080334d  50                   push eax
// 0080334e  51                   push ecx
// 0080334f  56                   push esi
// 00803350  57                   push edi
// 00803351  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00803356  33c4                 xor eax, esp
// 00803358  50                   push eax
// 00803359  8d442410             lea eax, [esp + 0x10]
// 0080335d  64a300000000         mov dword ptr fs:[0], eax
// 00803363  8bf9                 mov edi, ecx
// 00803365  897c240c             mov dword ptr [esp + 0xc], edi
// 00803369  c707ec02a600         mov dword ptr [edi], 0xa602ec
// 0080336f  33f6                 xor esi, esi
// 00803371  397728               cmp dword ptr [edi + 0x28], esi
// 00803374  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0080337c  7e1f                 jle 0x80339d
// 0080337e  8bff                 mov edi, edi
// 00803380  85f6                 test esi, esi
// 00803382  7c47                 jl 0x8033cb
// 00803384  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00803387  7d42                 jge 0x8033cb
// 00803389  8b4724               mov eax, dword ptr [edi + 0x24]
// 0080338c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0080338f  8d04b0               lea eax, [eax + esi*4]
// 00803392  e8854bfaff           call 0x7a7f1c
// 00803397  46                   inc esi
// 00803398  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0080339b  7ce3                 jl 0x803380
// 0080339d  8d4f20               lea ecx, [edi + 0x20]
// 008033a0  c644241800           mov byte ptr [esp + 0x18], 0
// 008033a5  e8f6feffff           call 0x8032a0
// 008033aa  8bcf                 mov ecx, edi
// 008033ac  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008033b4  e86951faff           call 0x7a8522
// 008033b9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008033bd  64890d00000000       mov dword ptr fs:[0], ecx
// 008033c4  59                   pop ecx
// 008033c5  5f                   pop edi
// 008033c6  5e                   pop esi
// 008033c7  83c410               add esp, 0x10
// 008033ca  c3                   ret 
// 008033cb  e87c48faff           call 0x7a7c4c
// copied from an identical function in another client (function ??1CXTPPropertyGridVerbs@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp