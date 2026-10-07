// roc 2011-06 00873a10  unit: CXTPPropertyGridToolTip  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00873a10
//
// 00873a10  83ec18               sub esp, 0x18
// 00873a13  55                   push ebp
// 00873a14  56                   push esi
// 00873a15  8b35601aa400         mov esi, dword ptr [0xa41a60]
// 00873a1b  6a01                 push 1
// 00873a1d  8be9                 mov ebp, ecx
// 00873a1f  ffd6                 call esi
// 00873a21  6685c0               test ax, ax
// 00873a24  0f8cf1000000         jl 0x873b1b
// 00873a2a  6a02                 push 2
// 00873a2c  ffd6                 call esi
// 00873a2e  6685c0               test ax, ax
// 00873a31  0f8ce4000000         jl 0x873b1b
// 00873a37  6a04                 push 4
// 00873a39  ffd6                 call esi
// 00873a3b  6685c0               test ax, ax
// 00873a3e  0f8cd7000000         jl 0x873b1b
// 00873a44  53                   push ebx
// 00873a45  57                   push edi
// 00873a46  8d442410             lea eax, [esp + 0x10]
// 00873a4a  50                   push eax
// 00873a4b  ff15c819a400         call dword ptr [0xa419c8]
// 00873a51  33ff                 xor edi, edi
// 00873a53  397d5c               cmp dword ptr [ebp + 0x5c], edi
// 00873a56  0f8ea6000000         jle 0x873b02
// 00873a5c  8b1dec1ba400         mov ebx, dword ptr [0xa41bec]
// 00873a62  85ff                 test edi, edi
// 00873a64  0f8cac000000         jl 0x873b16
// 00873a6a  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 00873a6d  0f8da3000000         jge 0x873b16
// 00873a73  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 00873a76  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 00873a79  8b5620               mov edx, dword ptr [esi + 0x20]
// 00873a7c  52                   push edx
// 00873a7d  ffd3                 call ebx
// 00873a7f  85c0                 test eax, eax
// 00873a81  7475                 je 0x873af8
// 00873a83  8b4620               mov eax, dword ptr [esi + 0x20]
// 00873a86  50                   push eax
// 00873a87  e89c68f9ff           call 0x80a328
// 00873a8c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00873a8f  894c2418             mov dword ptr [esp + 0x18], ecx
// 00873a93  8b5610               mov edx, dword ptr [esi + 0x10]
// 00873a96  8954241c             mov dword ptr [esp + 0x1c], edx
// 00873a9a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00873a9d  894c2420             mov dword ptr [esp + 0x20], ecx
// 00873aa1  8b5618               mov edx, dword ptr [esi + 0x18]
// 00873aa4  89542424             mov dword ptr [esp + 0x24], edx
// 00873aa8  f6460801             test byte ptr [esi + 8], 1
// 00873aac  8d4c2418             lea ecx, [esp + 0x18]
// 00873ab0  51                   push ecx
// 00873ab1  740c                 je 0x873abf
// 00873ab3  8b5020               mov edx, dword ptr [eax + 0x20]
// 00873ab6  52                   push edx
// 00873ab7  ff155c1ca400         call dword ptr [0xa41c5c]
// 00873abd  eb07                 jmp 0x873ac6
// 00873abf  8bc8                 mov ecx, eax
// 00873ac1  e8386bf9ff           call 0x80a5fe
// 00873ac6  8b542414             mov edx, dword ptr [esp + 0x14]
// 00873aca  8b442410             mov eax, dword ptr [esp + 0x10]
// 00873ace  52                   push edx
// 00873acf  50                   push eax
// 00873ad0  8d4c2420             lea ecx, [esp + 0x20]
// 00873ad4  51                   push ecx
// 00873ad5  ff15101ca400         call dword ptr [0xa41c10]
// 00873adb  85c0                 test eax, eax
// 00873add  7419                 je 0x873af8
// 00873adf  f6460801             test byte ptr [esi + 8], 1
// 00873ae3  7527                 jne 0x873b0c
// 00873ae5  8d542410             lea edx, [esp + 0x10]
// 00873ae9  52                   push edx
// 00873aea  6a00                 push 0
// 00873aec  8bcd                 mov ecx, ebp
// 00873aee  e85ddaffff           call 0x871550
// 00873af3  3b4620               cmp eax, dword ptr [esi + 0x20]
// 00873af6  7414                 je 0x873b0c
// 00873af8  47                   inc edi
// 00873af9  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 00873afc  0f8c60ffffff         jl 0x873a62
// 00873b02  5f                   pop edi
// 00873b03  5b                   pop ebx
// 00873b04  5e                   pop esi
// 00873b05  33c0                 xor eax, eax
// 00873b07  5d                   pop ebp
// 00873b08  83c418               add esp, 0x18
// 00873b0b  c3                   ret 
// 00873b0c  5f                   pop edi
// 00873b0d  5b                   pop ebx
// 00873b0e  8bc6                 mov eax, esi
// 00873b10  5e                   pop esi
// 00873b11  5d                   pop ebp
// 00873b12  83c418               add esp, 0x18
// 00873b15  c3                   ret 
// 00873b16  e8ef67f9ff           call 0x80a30a
// 00873b1b  5e                   pop esi
// 00873b1c  33c0                 xor eax, eax
// 00873b1e  5d                   pop ebp
// 00873b1f  83c418               add esp, 0x18
// 00873b22  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?FindTool@CXTPToolTipContextToolTip@@IAEPAUTOOLITEM@1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
