// roc 2011-06 00876de0  unit: CXTPPropertyGridView  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00876de0
//
// 00876de0  53                   push ebx
// 00876de1  55                   push ebp
// 00876de2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00876de6  56                   push esi
// 00876de7  8bd9                 mov ebx, ecx
// 00876de9  8b8dc0000000         mov ecx, dword ptr [ebp + 0xc0]
// 00876def  57                   push edi
// 00876df0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00876df4  33f6                 xor esi, esi
// 00876df6  397128               cmp dword ptr [ecx + 0x28], esi
// 00876df9  897c2418             mov dword ptr [esp + 0x18], edi
// 00876dfd  7e21                 jle 0x876e20
// 00876dff  90                   nop 
// 00876e00  56                   push esi
// 00876e01  e8fa350000           call 0x87a400
// 00876e06  8d4f01               lea ecx, [edi + 1]
// 00876e09  51                   push ecx
// 00876e0a  50                   push eax
// 00876e0b  8bcb                 mov ecx, ebx
// 00876e0d  e8defeffff           call 0x876cf0
// 00876e12  8b8dc0000000         mov ecx, dword ptr [ebp + 0xc0]
// 00876e18  46                   inc esi
// 00876e19  03f8                 add edi, eax
// 00876e1b  3b7128               cmp esi, dword ptr [ecx + 0x28]
// 00876e1e  7ce0                 jl 0x876e00
// 00876e20  8bc7                 mov eax, edi
// 00876e22  2b442418             sub eax, dword ptr [esp + 0x18]
// 00876e26  5f                   pop edi
// 00876e27  5e                   pop esi
// 00876e28  5d                   pop ebp
// 00876e29  5b                   pop ebx
// 00876e2a  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?_DoExpand@CXTPPropertyGridView@@AAEHPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
