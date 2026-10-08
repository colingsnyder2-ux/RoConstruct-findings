// roc 2011-06 008d7b30  unit: CXTPTabPaintManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d7b30
//
// 008d7b30  83ec0c               sub esp, 0xc
// 008d7b33  83b9a800000000       cmp dword ptr [ecx + 0xa8], 0
// 008d7b3a  53                   push ebx
// 008d7b3b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008d7b3f  55                   push ebp
// 008d7b40  56                   push esi
// 008d7b41  8bb388000000         mov esi, dword ptr [ebx + 0x88]
// 008d7b47  8b4604               mov eax, dword ptr [esi + 4]
// 008d7b4a  57                   push edi
// 008d7b4b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008d7b4f  894c2414             mov dword ptr [esp + 0x14], ecx
// 008d7b53  89442410             mov dword ptr [esp + 0x10], eax
// 008d7b57  750a                 jne 0x8d7b63
// 008d7b59  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d7b5d  89442420             mov dword ptr [esp + 0x20], eax
// 008d7b61  eb1b                 jmp 0x8d7b7e
// 008d7b63  8bc8                 mov ecx, eax
// 008d7b65  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d7b69  2bcf                 sub ecx, edi
// 008d7b6b  99                   cdq 
// 008d7b6c  f7f9                 idiv ecx
// 008d7b6e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d7b72  3bc1                 cmp eax, ecx
// 008d7b74  89442420             mov dword ptr [esp + 0x20], eax
// 008d7b78  7c04                 jl 0x8d7b7e
// 008d7b7a  894c2420             mov dword ptr [esp + 0x20], ecx
// 008d7b7e  8b16                 mov edx, dword ptr [esi]
// 008d7b80  8b74fa04             mov esi, dword ptr [edx + edi*8 + 4]
// 008d7b84  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 008d7b87  33c9                 xor ecx, ecx
// 008d7b89  3bf0                 cmp esi, eax
// 008d7b8b  89542418             mov dword ptr [esp + 0x18], edx
// 008d7b8f  0f8d8f000000         jge 0x8d7c24
// 008d7b95  85f6                 test esi, esi
// 008d7b97  7c19                 jl 0x8d7bb2
// 008d7b99  3bf0                 cmp esi, eax
// 008d7b9b  7d15                 jge 0x8d7bb2
// 008d7b9d  3b735c               cmp esi, dword ptr [ebx + 0x5c]
// 008d7ba0  0f8d8d000000         jge 0x8d7c33
// 008d7ba6  8b4358               mov eax, dword ptr [ebx + 0x58]
// 008d7ba9  8b04b0               mov eax, dword ptr [eax + esi*4]
// 008d7bac  89442428             mov dword ptr [esp + 0x28], eax
// 008d7bb0  eb08                 jmp 0x8d7bba
// 008d7bb2  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008d7bba  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d7bbe  8b4020               mov eax, dword ptr [eax + 0x20]
// 008d7bc1  8d2c08               lea ebp, [eax + ecx]
// 008d7bc4  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 008d7bc8  7e41                 jle 0x8d7c0b
// 008d7bca  85c9                 test ecx, ecx
// 008d7bcc  743d                 je 0x8d7c0b
// 008d7bce  85c0                 test eax, eax
// 008d7bd0  7e39                 jle 0x8d7c0b
// 008d7bd2  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d7bd6  48                   dec eax
// 008d7bd7  3bf8                 cmp edi, eax
// 008d7bd9  745d                 je 0x8d7c38
// 008d7bdb  8974fa0c             mov dword ptr [edx + edi*8 + 0xc], esi
// 008d7bdf  8974fa08             mov dword ptr [edx + edi*8 + 8], esi
// 008d7be3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008d7be7  2bd1                 sub edx, ecx
// 008d7be9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d7bed  52                   push edx
// 008d7bee  8d4701               lea eax, [edi + 1]
// 008d7bf1  50                   push eax
// 008d7bf2  51                   push ecx
// 008d7bf3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d7bf7  53                   push ebx
// 008d7bf8  e833ffffff           call 0x8d7b30
// 008d7bfd  85c0                 test eax, eax
// 008d7bff  7523                 jne 0x8d7c24
// 008d7c01  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 008d7c05  7f31                 jg 0x8d7c38
// 008d7c07  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d7c0b  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d7c0f  8974fa04             mov dword ptr [edx + edi*8 + 4], esi
// 008d7c13  897864               mov dword ptr [eax + 0x64], edi
// 008d7c16  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 008d7c19  46                   inc esi
// 008d7c1a  3bf0                 cmp esi, eax
// 008d7c1c  8bcd                 mov ecx, ebp
// 008d7c1e  0f8c71ffffff         jl 0x8d7b95
// 008d7c24  5f                   pop edi
// 008d7c25  5e                   pop esi
// 008d7c26  5d                   pop ebp
// 008d7c27  b801000000           mov eax, 1
// 008d7c2c  5b                   pop ebx
// 008d7c2d  83c40c               add esp, 0xc
// 008d7c30  c21000               ret 0x10
// 008d7c33  e8d226f3ff           call 0x80a30a
// 008d7c38  5f                   pop edi
// 008d7c39  5e                   pop esi
// 008d7c3a  5d                   pop ebp
// 008d7c3b  33c0                 xor eax, eax
// 008d7c3d  5b                   pop ebx
// 008d7c3e  83c40c               add esp, 0xc
// 008d7c41  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?_CreateMultiRowIndexerBestFit@CXTPTabPaintManager@@IAEHPAVCXTPTabManager@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
