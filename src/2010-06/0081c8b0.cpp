// roc 2010-06 0081c8b0  unit: CXTPPropertyGridView  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081c8b0
//
// 0081c8b0  53                   push ebx
// 0081c8b1  55                   push ebp
// 0081c8b2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0081c8b6  56                   push esi
// 0081c8b7  8bd9                 mov ebx, ecx
// 0081c8b9  8b8dc0000000         mov ecx, dword ptr [ebp + 0xc0]
// 0081c8bf  57                   push edi
// 0081c8c0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0081c8c4  33f6                 xor esi, esi
// 0081c8c6  397128               cmp dword ptr [ecx + 0x28], esi
// 0081c8c9  897c2418             mov dword ptr [esp + 0x18], edi
// 0081c8cd  7e21                 jle 0x81c8f0
// 0081c8cf  90                   nop 
// 0081c8d0  56                   push esi
// 0081c8d1  e80ad3ffff           call 0x819be0
// 0081c8d6  8d4f01               lea ecx, [edi + 1]
// 0081c8d9  51                   push ecx
// 0081c8da  50                   push eax
// 0081c8db  8bcb                 mov ecx, ebx
// 0081c8dd  e8defeffff           call 0x81c7c0
// 0081c8e2  8b8dc0000000         mov ecx, dword ptr [ebp + 0xc0]
// 0081c8e8  46                   inc esi
// 0081c8e9  03f8                 add edi, eax
// 0081c8eb  3b7128               cmp esi, dword ptr [ecx + 0x28]
// 0081c8ee  7ce0                 jl 0x81c8d0
// 0081c8f0  8bc7                 mov eax, edi
// 0081c8f2  2b442418             sub eax, dword ptr [esp + 0x18]
// 0081c8f6  5f                   pop edi
// 0081c8f7  5e                   pop esi
// 0081c8f8  5d                   pop ebp
// 0081c8f9  5b                   pop ebx
// 0081c8fa  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?_DoExpand@CXTPPropertyGridView@@AAEHPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
