// roc 2012-06 009ef360  unit: CXTPPropertyGridView  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ef360
//
// 009ef360  53                   push ebx
// 009ef361  55                   push ebp
// 009ef362  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 009ef366  56                   push esi
// 009ef367  8bd9                 mov ebx, ecx
// 009ef369  8b8dc0000000         mov ecx, dword ptr [ebp + 0xc0]
// 009ef36f  57                   push edi
// 009ef370  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 009ef374  33f6                 xor esi, esi
// 009ef376  397128               cmp dword ptr [ecx + 0x28], esi
// 009ef379  897c2418             mov dword ptr [esp + 0x18], edi
// 009ef37d  7e21                 jle 0x9ef3a0
// 009ef37f  90                   nop 
// 009ef380  56                   push esi
// 009ef381  e8ea350000           call 0x9f2970
// 009ef386  8d4f01               lea ecx, [edi + 1]
// 009ef389  51                   push ecx
// 009ef38a  50                   push eax
// 009ef38b  8bcb                 mov ecx, ebx
// 009ef38d  e8defeffff           call 0x9ef270
// 009ef392  8b8dc0000000         mov ecx, dword ptr [ebp + 0xc0]
// 009ef398  46                   inc esi
// 009ef399  03f8                 add edi, eax
// 009ef39b  3b7128               cmp esi, dword ptr [ecx + 0x28]
// 009ef39e  7ce0                 jl 0x9ef380
// 009ef3a0  8bc7                 mov eax, edi
// 009ef3a2  2b442418             sub eax, dword ptr [esp + 0x18]
// 009ef3a6  5f                   pop edi
// 009ef3a7  5e                   pop esi
// 009ef3a8  5d                   pop ebp
// 009ef3a9  5b                   pop ebx
// 009ef3aa  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?_DoExpand@CXTPPropertyGridView@@AAEHPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
