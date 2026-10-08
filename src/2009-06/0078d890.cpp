// roc 2009-06 0078d890  unit: CXTPPropertyGridView  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078d890
//
// 0078d890  53                   push ebx
// 0078d891  55                   push ebp
// 0078d892  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0078d896  56                   push esi
// 0078d897  8bd9                 mov ebx, ecx
// 0078d899  8b8dc0000000         mov ecx, dword ptr [ebp + 0xc0]
// 0078d89f  57                   push edi
// 0078d8a0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0078d8a4  33f6                 xor esi, esi
// 0078d8a6  397128               cmp dword ptr [ecx + 0x28], esi
// 0078d8a9  897c2418             mov dword ptr [esp + 0x18], edi
// 0078d8ad  7e21                 jle 0x78d8d0
// 0078d8af  90                   nop 
// 0078d8b0  56                   push esi
// 0078d8b1  e85ad3ffff           call 0x78ac10
// 0078d8b6  8d4f01               lea ecx, [edi + 1]
// 0078d8b9  51                   push ecx
// 0078d8ba  50                   push eax
// 0078d8bb  8bcb                 mov ecx, ebx
// 0078d8bd  e8defeffff           call 0x78d7a0
// 0078d8c2  8b8dc0000000         mov ecx, dword ptr [ebp + 0xc0]
// 0078d8c8  46                   inc esi
// 0078d8c9  03f8                 add edi, eax
// 0078d8cb  3b7128               cmp esi, dword ptr [ecx + 0x28]
// 0078d8ce  7ce0                 jl 0x78d8b0
// 0078d8d0  8bc7                 mov eax, edi
// 0078d8d2  2b442418             sub eax, dword ptr [esp + 0x18]
// 0078d8d6  5f                   pop edi
// 0078d8d7  5e                   pop esi
// 0078d8d8  5d                   pop ebp
// 0078d8d9  5b                   pop ebx
// 0078d8da  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?_DoExpand@CXTPPropertyGridView@@AAEHPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
