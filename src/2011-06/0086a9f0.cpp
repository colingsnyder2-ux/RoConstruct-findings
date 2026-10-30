// roc 2011-06 0086a9f0  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086a9f0
//
// 0086a9f0  6aff                 push -1
// 0086a9f2  68d371a000           push 0xa071d3
// 0086a9f7  64a100000000         mov eax, dword ptr fs:[0]
// 0086a9fd  50                   push eax
// 0086a9fe  51                   push ecx
// 0086a9ff  56                   push esi
// 0086aa00  57                   push edi
// 0086aa01  a12058c900           mov eax, dword ptr [0xc95820]
// 0086aa06  33c4                 xor eax, esp
// 0086aa08  50                   push eax
// 0086aa09  8d442410             lea eax, [esp + 0x10]
// 0086aa0d  64a300000000         mov dword ptr fs:[0], eax
// 0086aa13  8bf9                 mov edi, ecx
// 0086aa15  897c240c             mov dword ptr [esp + 0xc], edi
// 0086aa19  c7078cbaac00         mov dword ptr [edi], 0xacba8c
// 0086aa1f  33f6                 xor esi, esi
// 0086aa21  397728               cmp dword ptr [edi + 0x28], esi
// 0086aa24  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0086aa2c  7e1f                 jle 0x86aa4d
// 0086aa2e  8bff                 mov edi, edi
// 0086aa30  85f6                 test esi, esi
// 0086aa32  7c47                 jl 0x86aa7b
// 0086aa34  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0086aa37  7d42                 jge 0x86aa7b
// 0086aa39  8b4724               mov eax, dword ptr [edi + 0x24]
// 0086aa3c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0086aa3f  8d04b0               lea eax, [eax + esi*4]
// 0086aa42  e893fbf9ff           call 0x80a5da
// 0086aa47  46                   inc esi
// 0086aa48  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0086aa4b  7ce3                 jl 0x86aa30
// 0086aa4d  8d4f20               lea ecx, [edi + 0x20]
// 0086aa50  c644241800           mov byte ptr [esp + 0x18], 0
// 0086aa55  e8f6feffff           call 0x86a950
// 0086aa5a  8bcf                 mov ecx, edi
// 0086aa5c  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0086aa64  e87d01faff           call 0x80abe6
// 0086aa69  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086aa6d  64890d00000000       mov dword ptr fs:[0], ecx
// 0086aa74  59                   pop ecx
// 0086aa75  5f                   pop edi
// 0086aa76  5e                   pop esi
// 0086aa77  83c410               add esp, 0x10
// 0086aa7a  c3                   ret 
// 0086aa7b  e88af8f9ff           call 0x80a30a
// copied from an identical function in another client (function ??1CXTPPropertyGridVerbs@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp