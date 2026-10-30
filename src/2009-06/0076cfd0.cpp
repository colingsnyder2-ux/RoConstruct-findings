// roc 2009-06 0076cfd0  unit: CXTPControls  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076cfd0
//
// 0076cfd0  53                   push ebx
// 0076cfd1  55                   push ebp
// 0076cfd2  56                   push esi
// 0076cfd3  57                   push edi
// 0076cfd4  8bf9                 mov edi, ecx
// 0076cfd6  8b07                 mov eax, dword ptr [edi]
// 0076cfd8  8b10                 mov edx, dword ptr [eax]
// 0076cfda  ffd2                 call edx
// 0076cfdc  8bc8                 mov ecx, eax
// 0076cfde  e851c4faff           call 0x719434
// 0076cfe3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0076cfe7  8bd8                 mov ebx, eax
// 0076cfe9  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0076cfec  33f6                 xor esi, esi
// 0076cfee  85c0                 test eax, eax
// 0076cff0  7e4a                 jle 0x76d03c
// 0076cff2  85f6                 test esi, esi
// 0076cff4  7c11                 jl 0x76d007
// 0076cff6  3bf0                 cmp esi, eax
// 0076cff8  7d0d                 jge 0x76d007
// 0076cffa  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0076cffd  7d5b                 jge 0x76d05a
// 0076cfff  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0076d002  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0076d005  eb02                 jmp 0x76d009
// 0076d007  33c9                 xor ecx, ecx
// 0076d009  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 0076d010  7522                 jne 0x76d034
// 0076d012  85f6                 test esi, esi
// 0076d014  7c11                 jl 0x76d027
// 0076d016  3bf0                 cmp esi, eax
// 0076d018  7d0d                 jge 0x76d027
// 0076d01a  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0076d01d  7d3b                 jge 0x76d05a
// 0076d01f  8b5728               mov edx, dword ptr [edi + 0x28]
// 0076d022  8b04b2               mov eax, dword ptr [edx + esi*4]
// 0076d025  eb02                 jmp 0x76d029
// 0076d027  33c0                 xor eax, eax
// 0076d029  55                   push ebp
// 0076d02a  6aff                 push -1
// 0076d02c  50                   push eax
// 0076d02d  8bcb                 mov ecx, ebx
// 0076d02f  e89cf4ffff           call 0x76c4d0
// 0076d034  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0076d037  46                   inc esi
// 0076d038  3bf0                 cmp esi, eax
// 0076d03a  7cb6                 jl 0x76cff2
// 0076d03c  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 0076d03f  85c9                 test ecx, ecx
// 0076d041  740e                 je 0x76d051
// 0076d043  55                   push ebp
// 0076d044  e887ffffff           call 0x76cfd0
// 0076d049  50                   push eax
// 0076d04a  8bcb                 mov ecx, ebx
// 0076d04c  e8ffd3ffff           call 0x76a450
// 0076d051  5f                   pop edi
// 0076d052  5e                   pop esi
// 0076d053  5d                   pop ebp
// 0076d054  8bc3                 mov eax, ebx
// 0076d056  5b                   pop ebx
// 0076d057  c20400               ret 4
// 0076d05a  e885bcfaff           call 0x718ce4
// copied from an identical function in another client (function ?Duplicate@CXTPControls@@QAEPAV1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp