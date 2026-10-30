// roc 2010-06 00886bf0  unit: CXTPTabPaintManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00886bf0
//
// 00886bf0  83ec0c               sub esp, 0xc
// 00886bf3  83b9a800000000       cmp dword ptr [ecx + 0xa8], 0
// 00886bfa  53                   push ebx
// 00886bfb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00886bff  55                   push ebp
// 00886c00  56                   push esi
// 00886c01  8bb388000000         mov esi, dword ptr [ebx + 0x88]
// 00886c07  8b4604               mov eax, dword ptr [esi + 4]
// 00886c0a  57                   push edi
// 00886c0b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00886c0f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00886c13  89442410             mov dword ptr [esp + 0x10], eax
// 00886c17  750a                 jne 0x886c23
// 00886c19  8b442424             mov eax, dword ptr [esp + 0x24]
// 00886c1d  89442420             mov dword ptr [esp + 0x20], eax
// 00886c21  eb1b                 jmp 0x886c3e
// 00886c23  8bc8                 mov ecx, eax
// 00886c25  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00886c29  2bcf                 sub ecx, edi
// 00886c2b  99                   cdq 
// 00886c2c  f7f9                 idiv ecx
// 00886c2e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00886c32  3bc1                 cmp eax, ecx
// 00886c34  89442420             mov dword ptr [esp + 0x20], eax
// 00886c38  7c04                 jl 0x886c3e
// 00886c3a  894c2420             mov dword ptr [esp + 0x20], ecx
// 00886c3e  8b16                 mov edx, dword ptr [esi]
// 00886c40  8b74fa04             mov esi, dword ptr [edx + edi*8 + 4]
// 00886c44  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 00886c47  33c9                 xor ecx, ecx
// 00886c49  3bf0                 cmp esi, eax
// 00886c4b  89542418             mov dword ptr [esp + 0x18], edx
// 00886c4f  0f8d8f000000         jge 0x886ce4
// 00886c55  85f6                 test esi, esi
// 00886c57  7c19                 jl 0x886c72
// 00886c59  3bf0                 cmp esi, eax
// 00886c5b  7d15                 jge 0x886c72
// 00886c5d  3b735c               cmp esi, dword ptr [ebx + 0x5c]
// 00886c60  0f8d8d000000         jge 0x886cf3
// 00886c66  8b4358               mov eax, dword ptr [ebx + 0x58]
// 00886c69  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00886c6c  89442428             mov dword ptr [esp + 0x28], eax
// 00886c70  eb08                 jmp 0x886c7a
// 00886c72  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00886c7a  8b442428             mov eax, dword ptr [esp + 0x28]
// 00886c7e  8b4020               mov eax, dword ptr [eax + 0x20]
// 00886c81  8d2c08               lea ebp, [eax + ecx]
// 00886c84  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 00886c88  7e41                 jle 0x886ccb
// 00886c8a  85c9                 test ecx, ecx
// 00886c8c  743d                 je 0x886ccb
// 00886c8e  85c0                 test eax, eax
// 00886c90  7e39                 jle 0x886ccb
// 00886c92  8b442410             mov eax, dword ptr [esp + 0x10]
// 00886c96  48                   dec eax
// 00886c97  3bf8                 cmp edi, eax
// 00886c99  745d                 je 0x886cf8
// 00886c9b  8974fa0c             mov dword ptr [edx + edi*8 + 0xc], esi
// 00886c9f  8974fa08             mov dword ptr [edx + edi*8 + 8], esi
// 00886ca3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00886ca7  2bd1                 sub edx, ecx
// 00886ca9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00886cad  52                   push edx
// 00886cae  8d4701               lea eax, [edi + 1]
// 00886cb1  50                   push eax
// 00886cb2  51                   push ecx
// 00886cb3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00886cb7  53                   push ebx
// 00886cb8  e833ffffff           call 0x886bf0
// 00886cbd  85c0                 test eax, eax
// 00886cbf  7523                 jne 0x886ce4
// 00886cc1  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 00886cc5  7f31                 jg 0x886cf8
// 00886cc7  8b542418             mov edx, dword ptr [esp + 0x18]
// 00886ccb  8b442428             mov eax, dword ptr [esp + 0x28]
// 00886ccf  8974fa04             mov dword ptr [edx + edi*8 + 4], esi
// 00886cd3  897864               mov dword ptr [eax + 0x64], edi
// 00886cd6  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 00886cd9  46                   inc esi
// 00886cda  3bf0                 cmp esi, eax
// 00886cdc  8bcd                 mov ecx, ebp
// 00886cde  0f8c71ffffff         jl 0x886c55
// 00886ce4  5f                   pop edi
// 00886ce5  5e                   pop esi
// 00886ce6  5d                   pop ebp
// 00886ce7  b801000000           mov eax, 1
// 00886cec  5b                   pop ebx
// 00886ced  83c40c               add esp, 0xc
// 00886cf0  c21000               ret 0x10
// 00886cf3  e8540ff2ff           call 0x7a7c4c
// 00886cf8  5f                   pop edi
// 00886cf9  5e                   pop esi
// 00886cfa  5d                   pop ebp
// 00886cfb  33c0                 xor eax, eax
// 00886cfd  5b                   pop ebx
// 00886cfe  83c40c               add esp, 0xc
// 00886d01  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?_CreateMultiRowIndexerBestFit@CXTPTabPaintManager@@IAEHPAVCXTPTabManager@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
