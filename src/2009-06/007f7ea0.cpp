// roc 2009-06 007f7ea0  unit: CXTPTabPaintManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f7ea0
//
// 007f7ea0  83ec0c               sub esp, 0xc
// 007f7ea3  83b9a800000000       cmp dword ptr [ecx + 0xa8], 0
// 007f7eaa  53                   push ebx
// 007f7eab  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007f7eaf  55                   push ebp
// 007f7eb0  56                   push esi
// 007f7eb1  8bb388000000         mov esi, dword ptr [ebx + 0x88]
// 007f7eb7  8b4604               mov eax, dword ptr [esi + 4]
// 007f7eba  57                   push edi
// 007f7ebb  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007f7ebf  894c2414             mov dword ptr [esp + 0x14], ecx
// 007f7ec3  89442410             mov dword ptr [esp + 0x10], eax
// 007f7ec7  750a                 jne 0x7f7ed3
// 007f7ec9  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f7ecd  89442420             mov dword ptr [esp + 0x20], eax
// 007f7ed1  eb1b                 jmp 0x7f7eee
// 007f7ed3  8bc8                 mov ecx, eax
// 007f7ed5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007f7ed9  2bcf                 sub ecx, edi
// 007f7edb  99                   cdq 
// 007f7edc  f7f9                 idiv ecx
// 007f7ede  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007f7ee2  3bc1                 cmp eax, ecx
// 007f7ee4  89442420             mov dword ptr [esp + 0x20], eax
// 007f7ee8  7c04                 jl 0x7f7eee
// 007f7eea  894c2420             mov dword ptr [esp + 0x20], ecx
// 007f7eee  8b16                 mov edx, dword ptr [esi]
// 007f7ef0  8b74fa04             mov esi, dword ptr [edx + edi*8 + 4]
// 007f7ef4  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 007f7ef7  33c9                 xor ecx, ecx
// 007f7ef9  3bf0                 cmp esi, eax
// 007f7efb  89542418             mov dword ptr [esp + 0x18], edx
// 007f7eff  0f8d8f000000         jge 0x7f7f94
// 007f7f05  85f6                 test esi, esi
// 007f7f07  7c19                 jl 0x7f7f22
// 007f7f09  3bf0                 cmp esi, eax
// 007f7f0b  7d15                 jge 0x7f7f22
// 007f7f0d  3b735c               cmp esi, dword ptr [ebx + 0x5c]
// 007f7f10  0f8d8d000000         jge 0x7f7fa3
// 007f7f16  8b4358               mov eax, dword ptr [ebx + 0x58]
// 007f7f19  8b04b0               mov eax, dword ptr [eax + esi*4]
// 007f7f1c  89442428             mov dword ptr [esp + 0x28], eax
// 007f7f20  eb08                 jmp 0x7f7f2a
// 007f7f22  c744242800000000     mov dword ptr [esp + 0x28], 0
// 007f7f2a  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f7f2e  8b4020               mov eax, dword ptr [eax + 0x20]
// 007f7f31  8d2c08               lea ebp, [eax + ecx]
// 007f7f34  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 007f7f38  7e41                 jle 0x7f7f7b
// 007f7f3a  85c9                 test ecx, ecx
// 007f7f3c  743d                 je 0x7f7f7b
// 007f7f3e  85c0                 test eax, eax
// 007f7f40  7e39                 jle 0x7f7f7b
// 007f7f42  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f7f46  48                   dec eax
// 007f7f47  3bf8                 cmp edi, eax
// 007f7f49  745d                 je 0x7f7fa8
// 007f7f4b  8974fa0c             mov dword ptr [edx + edi*8 + 0xc], esi
// 007f7f4f  8974fa08             mov dword ptr [edx + edi*8 + 8], esi
// 007f7f53  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007f7f57  2bd1                 sub edx, ecx
// 007f7f59  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007f7f5d  52                   push edx
// 007f7f5e  8d4701               lea eax, [edi + 1]
// 007f7f61  50                   push eax
// 007f7f62  51                   push ecx
// 007f7f63  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007f7f67  53                   push ebx
// 007f7f68  e833ffffff           call 0x7f7ea0
// 007f7f6d  85c0                 test eax, eax
// 007f7f6f  7523                 jne 0x7f7f94
// 007f7f71  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 007f7f75  7f31                 jg 0x7f7fa8
// 007f7f77  8b542418             mov edx, dword ptr [esp + 0x18]
// 007f7f7b  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f7f7f  8974fa04             mov dword ptr [edx + edi*8 + 4], esi
// 007f7f83  897864               mov dword ptr [eax + 0x64], edi
// 007f7f86  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 007f7f89  46                   inc esi
// 007f7f8a  3bf0                 cmp esi, eax
// 007f7f8c  8bcd                 mov ecx, ebp
// 007f7f8e  0f8c71ffffff         jl 0x7f7f05
// 007f7f94  5f                   pop edi
// 007f7f95  5e                   pop esi
// 007f7f96  5d                   pop ebp
// 007f7f97  b801000000           mov eax, 1
// 007f7f9c  5b                   pop ebx
// 007f7f9d  83c40c               add esp, 0xc
// 007f7fa0  c21000               ret 0x10
// 007f7fa3  e83c0df2ff           call 0x718ce4
// 007f7fa8  5f                   pop edi
// 007f7fa9  5e                   pop esi
// 007f7faa  5d                   pop ebp
// 007f7fab  33c0                 xor eax, eax
// 007f7fad  5b                   pop ebx
// 007f7fae  83c40c               add esp, 0xc
// 007f7fb1  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?_CreateMultiRowIndexerBestFit@CXTPTabPaintManager@@IAEHPAVCXTPTabManager@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
