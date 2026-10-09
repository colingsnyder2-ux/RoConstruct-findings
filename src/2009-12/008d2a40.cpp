// roc 2009-12 008d2a40  unit: CXTPTabPaintManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d2a40
//
// 008d2a40  83ec0c               sub esp, 0xc
// 008d2a43  83b9a800000000       cmp dword ptr [ecx + 0xa8], 0
// 008d2a4a  53                   push ebx
// 008d2a4b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008d2a4f  55                   push ebp
// 008d2a50  56                   push esi
// 008d2a51  8bb388000000         mov esi, dword ptr [ebx + 0x88]
// 008d2a57  8b4604               mov eax, dword ptr [esi + 4]
// 008d2a5a  57                   push edi
// 008d2a5b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008d2a5f  894c2414             mov dword ptr [esp + 0x14], ecx
// 008d2a63  89442410             mov dword ptr [esp + 0x10], eax
// 008d2a67  750a                 jne 0x8d2a73
// 008d2a69  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d2a6d  89442420             mov dword ptr [esp + 0x20], eax
// 008d2a71  eb1b                 jmp 0x8d2a8e
// 008d2a73  8bc8                 mov ecx, eax
// 008d2a75  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d2a79  2bcf                 sub ecx, edi
// 008d2a7b  99                   cdq 
// 008d2a7c  f7f9                 idiv ecx
// 008d2a7e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d2a82  3bc1                 cmp eax, ecx
// 008d2a84  89442420             mov dword ptr [esp + 0x20], eax
// 008d2a88  7c04                 jl 0x8d2a8e
// 008d2a8a  894c2420             mov dword ptr [esp + 0x20], ecx
// 008d2a8e  8b16                 mov edx, dword ptr [esi]
// 008d2a90  8b74fa04             mov esi, dword ptr [edx + edi*8 + 4]
// 008d2a94  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 008d2a97  33c9                 xor ecx, ecx
// 008d2a99  3bf0                 cmp esi, eax
// 008d2a9b  89542418             mov dword ptr [esp + 0x18], edx
// 008d2a9f  0f8d8f000000         jge 0x8d2b34
// 008d2aa5  85f6                 test esi, esi
// 008d2aa7  7c19                 jl 0x8d2ac2
// 008d2aa9  3bf0                 cmp esi, eax
// 008d2aab  7d15                 jge 0x8d2ac2
// 008d2aad  3b735c               cmp esi, dword ptr [ebx + 0x5c]
// 008d2ab0  0f8d8d000000         jge 0x8d2b43
// 008d2ab6  8b4358               mov eax, dword ptr [ebx + 0x58]
// 008d2ab9  8b04b0               mov eax, dword ptr [eax + esi*4]
// 008d2abc  89442428             mov dword ptr [esp + 0x28], eax
// 008d2ac0  eb08                 jmp 0x8d2aca
// 008d2ac2  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008d2aca  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d2ace  8b4020               mov eax, dword ptr [eax + 0x20]
// 008d2ad1  8d2c08               lea ebp, [eax + ecx]
// 008d2ad4  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 008d2ad8  7e41                 jle 0x8d2b1b
// 008d2ada  85c9                 test ecx, ecx
// 008d2adc  743d                 je 0x8d2b1b
// 008d2ade  85c0                 test eax, eax
// 008d2ae0  7e39                 jle 0x8d2b1b
// 008d2ae2  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d2ae6  48                   dec eax
// 008d2ae7  3bf8                 cmp edi, eax
// 008d2ae9  745d                 je 0x8d2b48
// 008d2aeb  8974fa0c             mov dword ptr [edx + edi*8 + 0xc], esi
// 008d2aef  8974fa08             mov dword ptr [edx + edi*8 + 8], esi
// 008d2af3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008d2af7  2bd1                 sub edx, ecx
// 008d2af9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d2afd  52                   push edx
// 008d2afe  8d4701               lea eax, [edi + 1]
// 008d2b01  50                   push eax
// 008d2b02  51                   push ecx
// 008d2b03  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d2b07  53                   push ebx
// 008d2b08  e833ffffff           call 0x8d2a40
// 008d2b0d  85c0                 test eax, eax
// 008d2b0f  7523                 jne 0x8d2b34
// 008d2b11  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 008d2b15  7f31                 jg 0x8d2b48
// 008d2b17  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d2b1b  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d2b1f  8974fa04             mov dword ptr [edx + edi*8 + 4], esi
// 008d2b23  897864               mov dword ptr [eax + 0x64], edi
// 008d2b26  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 008d2b29  46                   inc esi
// 008d2b2a  3bf0                 cmp esi, eax
// 008d2b2c  8bcd                 mov ecx, ebp
// 008d2b2e  0f8c71ffffff         jl 0x8d2aa5
// 008d2b34  5f                   pop edi
// 008d2b35  5e                   pop esi
// 008d2b36  5d                   pop ebp
// 008d2b37  b801000000           mov eax, 1
// 008d2b3c  5b                   pop ebx
// 008d2b3d  83c40c               add esp, 0xc
// 008d2b40  c21000               ret 0x10
// 008d2b43  e8c40ff2ff           call 0x7f3b0c
// 008d2b48  5f                   pop edi
// 008d2b49  5e                   pop esi
// 008d2b4a  5d                   pop ebp
// 008d2b4b  33c0                 xor eax, eax
// 008d2b4d  5b                   pop ebx
// 008d2b4e  83c40c               add esp, 0xc
// 008d2b51  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?_CreateMultiRowIndexerBestFit@CXTPTabPaintManager@@IAEHPAVCXTPTabManager@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
