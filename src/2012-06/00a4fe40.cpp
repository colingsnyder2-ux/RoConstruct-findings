// roc 2012-06 00a4fe40  unit: CXTPTabPaintManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4fe40
//
// 00a4fe40  83ec0c               sub esp, 0xc
// 00a4fe43  83b9a800000000       cmp dword ptr [ecx + 0xa8], 0
// 00a4fe4a  53                   push ebx
// 00a4fe4b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a4fe4f  55                   push ebp
// 00a4fe50  56                   push esi
// 00a4fe51  8bb388000000         mov esi, dword ptr [ebx + 0x88]
// 00a4fe57  8b4604               mov eax, dword ptr [esi + 4]
// 00a4fe5a  57                   push edi
// 00a4fe5b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a4fe5f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a4fe63  89442410             mov dword ptr [esp + 0x10], eax
// 00a4fe67  750a                 jne 0xa4fe73
// 00a4fe69  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a4fe6d  89442420             mov dword ptr [esp + 0x20], eax
// 00a4fe71  eb1b                 jmp 0xa4fe8e
// 00a4fe73  8bc8                 mov ecx, eax
// 00a4fe75  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a4fe79  2bcf                 sub ecx, edi
// 00a4fe7b  99                   cdq 
// 00a4fe7c  f7f9                 idiv ecx
// 00a4fe7e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a4fe82  3bc1                 cmp eax, ecx
// 00a4fe84  89442420             mov dword ptr [esp + 0x20], eax
// 00a4fe88  7c04                 jl 0xa4fe8e
// 00a4fe8a  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a4fe8e  8b16                 mov edx, dword ptr [esi]
// 00a4fe90  8b74fa04             mov esi, dword ptr [edx + edi*8 + 4]
// 00a4fe94  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 00a4fe97  33c9                 xor ecx, ecx
// 00a4fe99  3bf0                 cmp esi, eax
// 00a4fe9b  89542418             mov dword ptr [esp + 0x18], edx
// 00a4fe9f  0f8d8f000000         jge 0xa4ff34
// 00a4fea5  85f6                 test esi, esi
// 00a4fea7  7c19                 jl 0xa4fec2
// 00a4fea9  3bf0                 cmp esi, eax
// 00a4feab  7d15                 jge 0xa4fec2
// 00a4fead  3b735c               cmp esi, dword ptr [ebx + 0x5c]
// 00a4feb0  0f8d8d000000         jge 0xa4ff43
// 00a4feb6  8b4358               mov eax, dword ptr [ebx + 0x58]
// 00a4feb9  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00a4febc  89442428             mov dword ptr [esp + 0x28], eax
// 00a4fec0  eb08                 jmp 0xa4feca
// 00a4fec2  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00a4feca  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a4fece  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a4fed1  8d2c08               lea ebp, [eax + ecx]
// 00a4fed4  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 00a4fed8  7e41                 jle 0xa4ff1b
// 00a4feda  85c9                 test ecx, ecx
// 00a4fedc  743d                 je 0xa4ff1b
// 00a4fede  85c0                 test eax, eax
// 00a4fee0  7e39                 jle 0xa4ff1b
// 00a4fee2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a4fee6  48                   dec eax
// 00a4fee7  3bf8                 cmp edi, eax
// 00a4fee9  745d                 je 0xa4ff48
// 00a4feeb  8974fa0c             mov dword ptr [edx + edi*8 + 0xc], esi
// 00a4feef  8974fa08             mov dword ptr [edx + edi*8 + 8], esi
// 00a4fef3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a4fef7  2bd1                 sub edx, ecx
// 00a4fef9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a4fefd  52                   push edx
// 00a4fefe  8d4701               lea eax, [edi + 1]
// 00a4ff01  50                   push eax
// 00a4ff02  51                   push ecx
// 00a4ff03  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a4ff07  53                   push ebx
// 00a4ff08  e833ffffff           call 0xa4fe40
// 00a4ff0d  85c0                 test eax, eax
// 00a4ff0f  7523                 jne 0xa4ff34
// 00a4ff11  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 00a4ff15  7f31                 jg 0xa4ff48
// 00a4ff17  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a4ff1b  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a4ff1f  8974fa04             mov dword ptr [edx + edi*8 + 4], esi
// 00a4ff23  897864               mov dword ptr [eax + 0x64], edi
// 00a4ff26  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 00a4ff29  46                   inc esi
// 00a4ff2a  3bf0                 cmp esi, eax
// 00a4ff2c  8bcd                 mov ecx, ebp
// 00a4ff2e  0f8c71ffffff         jl 0xa4fea5
// 00a4ff34  5f                   pop edi
// 00a4ff35  5e                   pop esi
// 00a4ff36  5d                   pop ebp
// 00a4ff37  b801000000           mov eax, 1
// 00a4ff3c  5b                   pop ebx
// 00a4ff3d  83c40c               add esp, 0xc
// 00a4ff40  c21000               ret 0x10
// 00a4ff43  e87824f3ff           call 0x9823c0
// 00a4ff48  5f                   pop edi
// 00a4ff49  5e                   pop esi
// 00a4ff4a  5d                   pop ebp
// 00a4ff4b  33c0                 xor eax, eax
// 00a4ff4d  5b                   pop ebx
// 00a4ff4e  83c40c               add esp, 0xc
// 00a4ff51  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?_CreateMultiRowIndexerBestFit@CXTPTabPaintManager@@IAEHPAVCXTPTabManager@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
