// roc 2008-06 0077f7e0  unit: CXTPTabPaintManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077f7e0
//
// 0077f7e0  83ec0c               sub esp, 0xc
// 0077f7e3  83b9a800000000       cmp dword ptr [ecx + 0xa8], 0
// 0077f7ea  53                   push ebx
// 0077f7eb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0077f7ef  55                   push ebp
// 0077f7f0  56                   push esi
// 0077f7f1  8bb388000000         mov esi, dword ptr [ebx + 0x88]
// 0077f7f7  8b4604               mov eax, dword ptr [esi + 4]
// 0077f7fa  57                   push edi
// 0077f7fb  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0077f7ff  894c2414             mov dword ptr [esp + 0x14], ecx
// 0077f803  89442410             mov dword ptr [esp + 0x10], eax
// 0077f807  750a                 jne 0x77f813
// 0077f809  8b442424             mov eax, dword ptr [esp + 0x24]
// 0077f80d  89442420             mov dword ptr [esp + 0x20], eax
// 0077f811  eb1b                 jmp 0x77f82e
// 0077f813  8bc8                 mov ecx, eax
// 0077f815  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0077f819  2bcf                 sub ecx, edi
// 0077f81b  99                   cdq 
// 0077f81c  f7f9                 idiv ecx
// 0077f81e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0077f822  3bc1                 cmp eax, ecx
// 0077f824  89442420             mov dword ptr [esp + 0x20], eax
// 0077f828  7c04                 jl 0x77f82e
// 0077f82a  894c2420             mov dword ptr [esp + 0x20], ecx
// 0077f82e  8b16                 mov edx, dword ptr [esi]
// 0077f830  8b74fa04             mov esi, dword ptr [edx + edi*8 + 4]
// 0077f834  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 0077f837  33c9                 xor ecx, ecx
// 0077f839  3bf0                 cmp esi, eax
// 0077f83b  89542418             mov dword ptr [esp + 0x18], edx
// 0077f83f  0f8d8f000000         jge 0x77f8d4
// 0077f845  85f6                 test esi, esi
// 0077f847  7c19                 jl 0x77f862
// 0077f849  3bf0                 cmp esi, eax
// 0077f84b  7d15                 jge 0x77f862
// 0077f84d  3b735c               cmp esi, dword ptr [ebx + 0x5c]
// 0077f850  0f8d8d000000         jge 0x77f8e3
// 0077f856  8b4358               mov eax, dword ptr [ebx + 0x58]
// 0077f859  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0077f85c  89442428             mov dword ptr [esp + 0x28], eax
// 0077f860  eb08                 jmp 0x77f86a
// 0077f862  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0077f86a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0077f86e  8b4020               mov eax, dword ptr [eax + 0x20]
// 0077f871  8d2c08               lea ebp, [eax + ecx]
// 0077f874  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 0077f878  7e41                 jle 0x77f8bb
// 0077f87a  85c9                 test ecx, ecx
// 0077f87c  743d                 je 0x77f8bb
// 0077f87e  85c0                 test eax, eax
// 0077f880  7e39                 jle 0x77f8bb
// 0077f882  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077f886  48                   dec eax
// 0077f887  3bf8                 cmp edi, eax
// 0077f889  745d                 je 0x77f8e8
// 0077f88b  8974fa0c             mov dword ptr [edx + edi*8 + 0xc], esi
// 0077f88f  8974fa08             mov dword ptr [edx + edi*8 + 8], esi
// 0077f893  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0077f897  2bd1                 sub edx, ecx
// 0077f899  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0077f89d  52                   push edx
// 0077f89e  8d4701               lea eax, [edi + 1]
// 0077f8a1  50                   push eax
// 0077f8a2  51                   push ecx
// 0077f8a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0077f8a7  53                   push ebx
// 0077f8a8  e833ffffff           call 0x77f7e0
// 0077f8ad  85c0                 test eax, eax
// 0077f8af  7523                 jne 0x77f8d4
// 0077f8b1  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 0077f8b5  7f31                 jg 0x77f8e8
// 0077f8b7  8b542418             mov edx, dword ptr [esp + 0x18]
// 0077f8bb  8b442428             mov eax, dword ptr [esp + 0x28]
// 0077f8bf  8974fa04             mov dword ptr [edx + edi*8 + 4], esi
// 0077f8c3  897864               mov dword ptr [eax + 0x64], edi
// 0077f8c6  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 0077f8c9  46                   inc esi
// 0077f8ca  3bf0                 cmp esi, eax
// 0077f8cc  8bcd                 mov ecx, ebp
// 0077f8ce  0f8c71ffffff         jl 0x77f845
// 0077f8d4  5f                   pop edi
// 0077f8d5  5e                   pop esi
// 0077f8d6  5d                   pop ebp
// 0077f8d7  b801000000           mov eax, 1
// 0077f8dc  5b                   pop ebx
// 0077f8dd  83c40c               add esp, 0xc
// 0077f8e0  c21000               ret 0x10
// 0077f8e3  e85c10f2ff           call 0x6a0944
// 0077f8e8  5f                   pop edi
// 0077f8e9  5e                   pop esi
// 0077f8ea  5d                   pop ebp
// 0077f8eb  33c0                 xor eax, eax
// 0077f8ed  5b                   pop ebx
// 0077f8ee  83c40c               add esp, 0xc
// 0077f8f1  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?_CreateMultiRowIndexerBestFit@CXTPTabPaintManager@@IAEHPAVCXTPTabManager@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
