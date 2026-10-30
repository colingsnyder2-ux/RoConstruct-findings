// from server: 100% by auto
// roc 2008-06 007150f0  unit: CXTPPropertyGridView  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007150f0
//
// 007150f0  53                   push ebx
// 007150f1  55                   push ebp
// 007150f2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007150f6  56                   push esi
// 007150f7  8bd9                 mov ebx, ecx
// 007150f9  8b8dc0000000         mov ecx, dword ptr [ebp + 0xc0]
// 007150ff  57                   push edi
// 00715100  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00715104  33f6                 xor esi, esi
// 00715106  397128               cmp dword ptr [ecx + 0x28], esi
// 00715109  897c2418             mov dword ptr [esp + 0x18], edi
// 0071510d  7e21                 jle 0x715130
// 0071510f  90                   nop 
// 00715110  56                   push esi
// 00715111  e80ad3ffff           call 0x712420
// 00715116  8d4f01               lea ecx, [edi + 1]
// 00715119  51                   push ecx
// 0071511a  50                   push eax
// 0071511b  8bcb                 mov ecx, ebx
// 0071511d  e8defeffff           call 0x715000
// 00715122  8b8dc0000000         mov ecx, dword ptr [ebp + 0xc0]
// 00715128  46                   inc esi
// 00715129  03f8                 add edi, eax
// 0071512b  3b7128               cmp esi, dword ptr [ecx + 0x28]
// 0071512e  7ce0                 jl 0x715110
// 00715130  8bc7                 mov eax, edi
// 00715132  2b442418             sub eax, dword ptr [esp + 0x18]
// 00715136  5f                   pop edi
// 00715137  5e                   pop esi
// 00715138  5d                   pop ebp
// 00715139  5b                   pop ebx
// 0071513a  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?_DoExpand@CXTPPropertyGridView@@AAEHPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
