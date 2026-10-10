// roc 2008-06 007990b0  unit: CXTPRibbonQuickAccessControls  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007990b0
//
// 007990b0  53                   push ebx
// 007990b1  55                   push ebp
// 007990b2  8bd9                 mov ebx, ecx
// 007990b4  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 007990b7  56                   push esi
// 007990b8  33f6                 xor esi, esi
// 007990ba  57                   push edi
// 007990bb  85c0                 test eax, eax
// 007990bd  7e51                 jle 0x799110
// 007990bf  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007990c3  85f6                 test esi, esi
// 007990c5  7c11                 jl 0x7990d8
// 007990c7  3bf0                 cmp esi, eax
// 007990c9  7d0d                 jge 0x7990d8
// 007990cb  3b732c               cmp esi, dword ptr [ebx + 0x2c]
// 007990ce  7d49                 jge 0x799119
// 007990d0  8b4328               mov eax, dword ptr [ebx + 0x28]
// 007990d3  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 007990d6  eb02                 jmp 0x7990da
// 007990d8  33ff                 xor edi, edi
// 007990da  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 007990e0  3b8d84000000         cmp ecx, dword ptr [ebp + 0x84]
// 007990e6  7520                 jne 0x799108
// 007990e8  8b17                 mov edx, dword ptr [edi]
// 007990ea  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007990f0  6a00                 push 0
// 007990f2  8bcf                 mov ecx, edi
// 007990f4  ffd0                 call eax
// 007990f6  85c0                 test eax, eax
// 007990f8  740e                 je 0x799108
// 007990fa  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00799100  3b8dfc000000         cmp ecx, dword ptr [ebp + 0xfc]
// 00799106  7416                 je 0x79911e
// 00799108  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 0079910b  46                   inc esi
// 0079910c  3bf0                 cmp esi, eax
// 0079910e  7cb3                 jl 0x7990c3
// 00799110  5f                   pop edi
// 00799111  5e                   pop esi
// 00799112  5d                   pop ebp
// 00799113  33c0                 xor eax, eax
// 00799115  5b                   pop ebx
// 00799116  c20400               ret 4
// 00799119  e82678f0ff           call 0x6a0944
// 0079911e  8bc7                 mov eax, edi
// 00799120  5f                   pop edi
// 00799121  5e                   pop esi
// 00799122  5d                   pop ebp
// 00799123  5b                   pop ebx
// 00799124  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?FindDuplicate@CXTPRibbonQuickAccessControls@@QAEPAVCXTPControl@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonQuickAccessControls.cpp
