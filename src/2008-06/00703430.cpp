// from server: 100% by auto
// roc 2008-06 00703430  unit: CXTPTabClientWnd::CWorkspace  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00703430
//
// 00703430  53                   push ebx
// 00703431  56                   push esi
// 00703432  57                   push edi
// 00703433  8bf9                 mov edi, ecx
// 00703435  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00703438  33f6                 xor esi, esi
// 0070343a  85c0                 test eax, eax
// 0070343c  7e2c                 jle 0x70346a
// 0070343e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00703442  85f6                 test esi, esi
// 00703444  7c11                 jl 0x703457
// 00703446  3bf0                 cmp esi, eax
// 00703448  7d0d                 jge 0x703457
// 0070344a  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 0070344d  7d23                 jge 0x703472
// 0070344f  8b4758               mov eax, dword ptr [edi + 0x58]
// 00703452  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00703455  eb02                 jmp 0x703459
// 00703457  33c9                 xor ecx, ecx
// 00703459  e822a1f0ff           call 0x60d580
// 0070345e  3bc3                 cmp eax, ebx
// 00703460  7415                 je 0x703477
// 00703462  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00703465  46                   inc esi
// 00703466  3bf0                 cmp esi, eax
// 00703468  7cd8                 jl 0x703442
// 0070346a  5f                   pop edi
// 0070346b  5e                   pop esi
// 0070346c  33c0                 xor eax, eax
// 0070346e  5b                   pop ebx
// 0070346f  c20400               ret 4
// 00703472  e8cdd4f9ff           call 0x6a0944
// 00703477  85f6                 test esi, esi
// 00703479  7cef                 jl 0x70346a
// 0070347b  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 0070347e  7dea                 jge 0x70346a
// 00703480  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00703483  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00703486  5f                   pop edi
// 00703487  5e                   pop esi
// 00703488  5b                   pop ebx
// 00703489  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?FindItem@CWorkspace@CXTPTabClientWnd@@IBEPAVCXTPTabManagerItem@@QAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
