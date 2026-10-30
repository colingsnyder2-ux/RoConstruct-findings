// from server: 100% by auto
// roc 2007-08 00635a70  unit: CXTPEdit  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635a70
//
// 00635a70  83ec1c               sub esp, 0x1c
// 00635a73  56                   push esi
// 00635a74  8b742424             mov esi, dword ptr [esp + 0x24]
// 00635a78  83fe08               cmp esi, 8
// 00635a7b  57                   push edi
// 00635a7c  8bf9                 mov edi, ecx
// 00635a7e  7435                 je 0x635ab5
// 00635a80  83fe21               cmp esi, 0x21
// 00635a83  7205                 jb 0x635a8a
// 00635a85  83fe2e               cmp esi, 0x2e
// 00635a88  762b                 jbe 0x635ab5
// 00635a8a  83fe43               cmp esi, 0x43
// 00635a8d  740f                 je 0x635a9e
// 00635a8f  83fe56               cmp esi, 0x56
// 00635a92  740a                 je 0x635a9e
// 00635a94  83fe58               cmp esi, 0x58
// 00635a97  7405                 je 0x635a9e
// 00635a99  83fe5a               cmp esi, 0x5a
// 00635a9c  750d                 jne 0x635aab
// 00635a9e  6a11                 push 0x11
// 00635aa0  ff154cec7700         call dword ptr [0x77ec4c]
// 00635aa6  6685c0               test ax, ax
// 00635aa9  7c0a                 jl 0x635ab5
// 00635aab  5f                   pop edi
// 00635aac  33c0                 xor eax, eax
// 00635aae  5e                   pop esi
// 00635aaf  83c41c               add esp, 0x1c
// 00635ab2  c20800               ret 8
// 00635ab5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00635ab9  8b4720               mov eax, dword ptr [edi + 0x20]
// 00635abc  8d542408             lea edx, [esp + 8]
// 00635ac0  894c2414             mov dword ptr [esp + 0x14], ecx
// 00635ac4  52                   push edx
// 00635ac5  8bcf                 mov ecx, edi
// 00635ac7  c744241000010000     mov dword ptr [esp + 0x10], 0x100
// 00635acf  8944240c             mov dword ptr [esp + 0xc], eax
// 00635ad3  89742414             mov dword ptr [esp + 0x14], esi
// 00635ad7  e8ac281000           call 0x738388
// 00635adc  f7d8                 neg eax
// 00635ade  1bc0                 sbb eax, eax
// 00635ae0  5f                   pop edi
// 00635ae1  f7d8                 neg eax
// 00635ae3  5e                   pop esi
// 00635ae4  83c41c               add esp, 0x1c
// 00635ae7  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?IsDialogCode@CXTPEdit@@QAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
