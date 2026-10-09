// roc 2007-03 0067ed10  unit: seg_00670000  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067ed10
//
// 0067ed10  83ec18               sub esp, 0x18
// 0067ed13  55                   push ebp
// 0067ed14  56                   push esi
// 0067ed15  8b351ced7700         mov esi, dword ptr [0x77ed1c]
// 0067ed1b  6a01                 push 1
// 0067ed1d  8be9                 mov ebp, ecx
// 0067ed1f  ffd6                 call esi
// 0067ed21  6685c0               test ax, ax
// 0067ed24  0f8cf3000000         jl 0x67ee1d
// 0067ed2a  6a02                 push 2
// 0067ed2c  ffd6                 call esi
// 0067ed2e  6685c0               test ax, ax
// 0067ed31  0f8ce6000000         jl 0x67ee1d
// 0067ed37  6a04                 push 4
// 0067ed39  ffd6                 call esi
// 0067ed3b  6685c0               test ax, ax
// 0067ed3e  0f8cd9000000         jl 0x67ee1d
// 0067ed44  53                   push ebx
// 0067ed45  57                   push edi
// 0067ed46  8d442410             lea eax, [esp + 0x10]
// 0067ed4a  50                   push eax
// 0067ed4b  ff1524ed7700         call dword ptr [0x77ed24]
// 0067ed51  33ff                 xor edi, edi
// 0067ed53  397d5c               cmp dword ptr [ebp + 0x5c], edi
// 0067ed56  0f8ea8000000         jle 0x67ee04
// 0067ed5c  8b1d74ed7700         mov ebx, dword ptr [0x77ed74]
// 0067ed62  85ff                 test edi, edi
// 0067ed64  0f8cae000000         jl 0x67ee18
// 0067ed6a  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 0067ed6d  0f8da5000000         jge 0x67ee18
// 0067ed73  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 0067ed76  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 0067ed79  8b5620               mov edx, dword ptr [esi + 0x20]
// 0067ed7c  52                   push edx
// 0067ed7d  ffd3                 call ebx
// 0067ed7f  85c0                 test eax, eax
// 0067ed81  7475                 je 0x67edf8
// 0067ed83  8b4620               mov eax, dword ptr [esi + 0x20]
// 0067ed86  50                   push eax
// 0067ed87  e8c2f8f9ff           call 0x61e64e
// 0067ed8c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0067ed8f  894c2418             mov dword ptr [esp + 0x18], ecx
// 0067ed93  8b5610               mov edx, dword ptr [esi + 0x10]
// 0067ed96  8954241c             mov dword ptr [esp + 0x1c], edx
// 0067ed9a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0067ed9d  894c2420             mov dword ptr [esp + 0x20], ecx
// 0067eda1  8b5618               mov edx, dword ptr [esi + 0x18]
// 0067eda4  89542424             mov dword ptr [esp + 0x24], edx
// 0067eda8  f6460801             test byte ptr [esi + 8], 1
// 0067edac  8d4c2418             lea ecx, [esp + 0x18]
// 0067edb0  51                   push ecx
// 0067edb1  740c                 je 0x67edbf
// 0067edb3  8b5020               mov edx, dword ptr [eax + 0x20]
// 0067edb6  52                   push edx
// 0067edb7  ff155ced7700         call dword ptr [0x77ed5c]
// 0067edbd  eb07                 jmp 0x67edc6
// 0067edbf  8bc8                 mov ecx, eax
// 0067edc1  e8d6f8f9ff           call 0x61e69c
// 0067edc6  8b542414             mov edx, dword ptr [esp + 0x14]
// 0067edca  8b442410             mov eax, dword ptr [esp + 0x10]
// 0067edce  52                   push edx
// 0067edcf  50                   push eax
// 0067edd0  8d4c2420             lea ecx, [esp + 0x20]
// 0067edd4  51                   push ecx
// 0067edd5  ff1598ed7700         call dword ptr [0x77ed98]
// 0067eddb  85c0                 test eax, eax
// 0067eddd  7419                 je 0x67edf8
// 0067eddf  f6460801             test byte ptr [esi + 8], 1
// 0067ede3  7529                 jne 0x67ee0e
// 0067ede5  8d542410             lea edx, [esp + 0x10]
// 0067ede9  52                   push edx
// 0067edea  6a00                 push 0
// 0067edec  8bcd                 mov ecx, ebp
// 0067edee  e85de9ffff           call 0x67d750
// 0067edf3  3b4620               cmp eax, dword ptr [esi + 0x20]
// 0067edf6  7416                 je 0x67ee0e
// 0067edf8  83c701               add edi, 1
// 0067edfb  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 0067edfe  0f8c5effffff         jl 0x67ed62
// 0067ee04  5f                   pop edi
// 0067ee05  5b                   pop ebx
// 0067ee06  5e                   pop esi
// 0067ee07  33c0                 xor eax, eax
// 0067ee09  5d                   pop ebp
// 0067ee0a  83c418               add esp, 0x18
// 0067ee0d  c3                   ret 
// 0067ee0e  5f                   pop edi
// 0067ee0f  5b                   pop ebx
// 0067ee10  8bc6                 mov eax, esi
// 0067ee12  5e                   pop esi
// 0067ee13  5d                   pop ebp
// 0067ee14  83c418               add esp, 0x18
// 0067ee17  c3                   ret 
// 0067ee18  e991f5f9ff           jmp 0x61e3ae
// 0067ee1d  5e                   pop esi
// 0067ee1e  33c0                 xor eax, eax
// 0067ee20  5d                   pop ebp
// 0067ee21  83c418               add esp, 0x18
// 0067ee24  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?FindTool@CXTPToolTipContextToolTip@@IAEPAUTOOLITEM@1@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
