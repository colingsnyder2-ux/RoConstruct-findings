// roc 2007-03 00620060  unit: seg_00620000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00620060
//
// 00620060  83ec1c               sub esp, 0x1c
// 00620063  56                   push esi
// 00620064  8b742424             mov esi, dword ptr [esp + 0x24]
// 00620068  83fe08               cmp esi, 8
// 0062006b  57                   push edi
// 0062006c  8bf9                 mov edi, ecx
// 0062006e  7435                 je 0x6200a5
// 00620070  83fe21               cmp esi, 0x21
// 00620073  7205                 jb 0x62007a
// 00620075  83fe2e               cmp esi, 0x2e
// 00620078  762b                 jbe 0x6200a5
// 0062007a  83fe43               cmp esi, 0x43
// 0062007d  740f                 je 0x62008e
// 0062007f  83fe56               cmp esi, 0x56
// 00620082  740a                 je 0x62008e
// 00620084  83fe58               cmp esi, 0x58
// 00620087  7405                 je 0x62008e
// 00620089  83fe5a               cmp esi, 0x5a
// 0062008c  750d                 jne 0x62009b
// 0062008e  6a11                 push 0x11
// 00620090  ff151ced7700         call dword ptr [0x77ed1c]
// 00620096  6685c0               test ax, ax
// 00620099  7c0a                 jl 0x6200a5
// 0062009b  5f                   pop edi
// 0062009c  33c0                 xor eax, eax
// 0062009e  5e                   pop esi
// 0062009f  83c41c               add esp, 0x1c
// 006200a2  c20800               ret 8
// 006200a5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006200a9  8b4720               mov eax, dword ptr [edi + 0x20]
// 006200ac  8d542408             lea edx, [esp + 8]
// 006200b0  894c2414             mov dword ptr [esp + 0x14], ecx
// 006200b4  52                   push edx
// 006200b5  8bcf                 mov ecx, edi
// 006200b7  c744241000010000     mov dword ptr [esp + 0x10], 0x100
// 006200bf  8944240c             mov dword ptr [esp + 0xc], eax
// 006200c3  89742414             mov dword ptr [esp + 0x14], esi
// 006200c7  e89ca91100           call 0x73aa68
// 006200cc  f7d8                 neg eax
// 006200ce  1bc0                 sbb eax, eax
// 006200d0  5f                   pop edi
// 006200d1  f7d8                 neg eax
// 006200d3  5e                   pop esi
// 006200d4  83c41c               add esp, 0x1c
// 006200d7  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?IsDialogCode@CXTPEdit@@QAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
