// roc 2009-12 008688a0  unit: CXTPPropertyGridView  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008688a0
//
// 008688a0  53                   push ebx
// 008688a1  55                   push ebp
// 008688a2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008688a6  56                   push esi
// 008688a7  8bd9                 mov ebx, ecx
// 008688a9  8b8dc0000000         mov ecx, dword ptr [ebp + 0xc0]
// 008688af  57                   push edi
// 008688b0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008688b4  33f6                 xor esi, esi
// 008688b6  397128               cmp dword ptr [ecx + 0x28], esi
// 008688b9  897c2418             mov dword ptr [esp + 0x18], edi
// 008688bd  7e21                 jle 0x8688e0
// 008688bf  90                   nop 
// 008688c0  56                   push esi
// 008688c1  e85ad3ffff           call 0x865c20
// 008688c6  8d4f01               lea ecx, [edi + 1]
// 008688c9  51                   push ecx
// 008688ca  50                   push eax
// 008688cb  8bcb                 mov ecx, ebx
// 008688cd  e8defeffff           call 0x8687b0
// 008688d2  8b8dc0000000         mov ecx, dword ptr [ebp + 0xc0]
// 008688d8  46                   inc esi
// 008688d9  03f8                 add edi, eax
// 008688db  3b7128               cmp esi, dword ptr [ecx + 0x28]
// 008688de  7ce0                 jl 0x8688c0
// 008688e0  8bc7                 mov eax, edi
// 008688e2  2b442418             sub eax, dword ptr [esp + 0x18]
// 008688e6  5f                   pop edi
// 008688e7  5e                   pop esi
// 008688e8  5d                   pop ebp
// 008688e9  5b                   pop ebx
// 008688ea  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?_DoExpand@CXTPPropertyGridView@@AAEHPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
