// roc 2009-12 00847db0  unit: CXTPControls  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00847db0
//
// 00847db0  53                   push ebx
// 00847db1  55                   push ebp
// 00847db2  56                   push esi
// 00847db3  57                   push edi
// 00847db4  8bf9                 mov edi, ecx
// 00847db6  8b07                 mov eax, dword ptr [edi]
// 00847db8  8b10                 mov edx, dword ptr [eax]
// 00847dba  ffd2                 call edx
// 00847dbc  8bc8                 mov ecx, eax
// 00847dbe  e89fc4faff           call 0x7f4262
// 00847dc3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00847dc7  8bd8                 mov ebx, eax
// 00847dc9  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00847dcc  33f6                 xor esi, esi
// 00847dce  85c0                 test eax, eax
// 00847dd0  7e4a                 jle 0x847e1c
// 00847dd2  85f6                 test esi, esi
// 00847dd4  7c11                 jl 0x847de7
// 00847dd6  3bf0                 cmp esi, eax
// 00847dd8  7d0d                 jge 0x847de7
// 00847dda  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00847ddd  7d5b                 jge 0x847e3a
// 00847ddf  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00847de2  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00847de5  eb02                 jmp 0x847de9
// 00847de7  33c9                 xor ecx, ecx
// 00847de9  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 00847df0  7522                 jne 0x847e14
// 00847df2  85f6                 test esi, esi
// 00847df4  7c11                 jl 0x847e07
// 00847df6  3bf0                 cmp esi, eax
// 00847df8  7d0d                 jge 0x847e07
// 00847dfa  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00847dfd  7d3b                 jge 0x847e3a
// 00847dff  8b5728               mov edx, dword ptr [edi + 0x28]
// 00847e02  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00847e05  eb02                 jmp 0x847e09
// 00847e07  33c0                 xor eax, eax
// 00847e09  55                   push ebp
// 00847e0a  6aff                 push -1
// 00847e0c  50                   push eax
// 00847e0d  8bcb                 mov ecx, ebx
// 00847e0f  e89cf4ffff           call 0x8472b0
// 00847e14  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00847e17  46                   inc esi
// 00847e18  3bf0                 cmp esi, eax
// 00847e1a  7cb6                 jl 0x847dd2
// 00847e1c  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00847e1f  85c9                 test ecx, ecx
// 00847e21  740e                 je 0x847e31
// 00847e23  55                   push ebp
// 00847e24  e887ffffff           call 0x847db0
// 00847e29  50                   push eax
// 00847e2a  8bcb                 mov ecx, ebx
// 00847e2c  e8ffd3ffff           call 0x845230
// 00847e31  5f                   pop edi
// 00847e32  5e                   pop esi
// 00847e33  5d                   pop ebp
// 00847e34  8bc3                 mov eax, ebx
// 00847e36  5b                   pop ebx
// 00847e37  c20400               ret 4
// 00847e3a  e8cdbcfaff           call 0x7f3b0c
// copied from an identical function in another client (function ?Duplicate@CXTPControls@@QAEPAV1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp