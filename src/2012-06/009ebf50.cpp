// from server: 100% by auto
// roc 2012-06 009ebf50  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ebf50
//
// 009ebf50  83ec18               sub esp, 0x18
// 009ebf53  55                   push ebp
// 009ebf54  56                   push esi
// 009ebf55  8b35843ab200         mov esi, dword ptr [0xb23a84]
// 009ebf5b  6a01                 push 1
// 009ebf5d  8be9                 mov ebp, ecx
// 009ebf5f  ffd6                 call esi
// 009ebf61  6685c0               test ax, ax
// 009ebf64  0f8cf1000000         jl 0x9ec05b
// 009ebf6a  6a02                 push 2
// 009ebf6c  ffd6                 call esi
// 009ebf6e  6685c0               test ax, ax
// 009ebf71  0f8ce4000000         jl 0x9ec05b
// 009ebf77  6a04                 push 4
// 009ebf79  ffd6                 call esi
// 009ebf7b  6685c0               test ax, ax
// 009ebf7e  0f8cd7000000         jl 0x9ec05b
// 009ebf84  53                   push ebx
// 009ebf85  57                   push edi
// 009ebf86  8d442410             lea eax, [esp + 0x10]
// 009ebf8a  50                   push eax
// 009ebf8b  ff158c3ab200         call dword ptr [0xb23a8c]
// 009ebf91  33ff                 xor edi, edi
// 009ebf93  397d5c               cmp dword ptr [ebp + 0x5c], edi
// 009ebf96  0f8ea6000000         jle 0x9ec042
// 009ebf9c  8b1d143bb200         mov ebx, dword ptr [0xb23b14]
// 009ebfa2  85ff                 test edi, edi
// 009ebfa4  0f8cac000000         jl 0x9ec056
// 009ebfaa  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 009ebfad  0f8da3000000         jge 0x9ec056
// 009ebfb3  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 009ebfb6  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 009ebfb9  8b5620               mov edx, dword ptr [esi + 0x20]
// 009ebfbc  52                   push edx
// 009ebfbd  ffd3                 call ebx
// 009ebfbf  85c0                 test eax, eax
// 009ebfc1  7475                 je 0x9ec038
// 009ebfc3  8b4620               mov eax, dword ptr [esi + 0x20]
// 009ebfc6  50                   push eax
// 009ebfc7  e89a66f9ff           call 0x982666
// 009ebfcc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009ebfcf  894c2418             mov dword ptr [esp + 0x18], ecx
// 009ebfd3  8b5610               mov edx, dword ptr [esi + 0x10]
// 009ebfd6  8954241c             mov dword ptr [esp + 0x1c], edx
// 009ebfda  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 009ebfdd  894c2420             mov dword ptr [esp + 0x20], ecx
// 009ebfe1  8b5618               mov edx, dword ptr [esi + 0x18]
// 009ebfe4  89542424             mov dword ptr [esp + 0x24], edx
// 009ebfe8  f6460801             test byte ptr [esi + 8], 1
// 009ebfec  8d4c2418             lea ecx, [esp + 0x18]
// 009ebff0  51                   push ecx
// 009ebff1  740c                 je 0x9ebfff
// 009ebff3  8b5020               mov edx, dword ptr [eax + 0x20]
// 009ebff6  52                   push edx
// 009ebff7  ff15f83ab200         call dword ptr [0xb23af8]
// 009ebffd  eb07                 jmp 0x9ec006
// 009ebfff  8bc8                 mov ecx, eax
// 009ec001  e8a866f9ff           call 0x9826ae
// 009ec006  8b542414             mov edx, dword ptr [esp + 0x14]
// 009ec00a  8b442410             mov eax, dword ptr [esp + 0x10]
// 009ec00e  52                   push edx
// 009ec00f  50                   push eax
// 009ec010  8d4c2420             lea ecx, [esp + 0x20]
// 009ec014  51                   push ecx
// 009ec015  ff15483bb200         call dword ptr [0xb23b48]
// 009ec01b  85c0                 test eax, eax
// 009ec01d  7419                 je 0x9ec038
// 009ec01f  f6460801             test byte ptr [esi + 8], 1
// 009ec023  7527                 jne 0x9ec04c
// 009ec025  8d542410             lea edx, [esp + 0x10]
// 009ec029  52                   push edx
// 009ec02a  6a00                 push 0
// 009ec02c  8bcd                 mov ecx, ebp
// 009ec02e  e83ddaffff           call 0x9e9a70
// 009ec033  3b4620               cmp eax, dword ptr [esi + 0x20]
// 009ec036  7414                 je 0x9ec04c
// 009ec038  47                   inc edi
// 009ec039  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 009ec03c  0f8c60ffffff         jl 0x9ebfa2
// 009ec042  5f                   pop edi
// 009ec043  5b                   pop ebx
// 009ec044  5e                   pop esi
// 009ec045  33c0                 xor eax, eax
// 009ec047  5d                   pop ebp
// 009ec048  83c418               add esp, 0x18
// 009ec04b  c3                   ret 
// 009ec04c  5f                   pop edi
// 009ec04d  5b                   pop ebx
// 009ec04e  8bc6                 mov eax, esi
// 009ec050  5e                   pop esi
// 009ec051  5d                   pop ebp
// 009ec052  83c418               add esp, 0x18
// 009ec055  c3                   ret 
// 009ec056  e86563f9ff           call 0x9823c0
// 009ec05b  5e                   pop esi
// 009ec05c  33c0                 xor eax, eax
// 009ec05e  5d                   pop ebp
// 009ec05f  83c418               add esp, 0x18
// 009ec062  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?FindTool@CXTPToolTipContextToolTip@@IAEPAUTOOLITEM@1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
