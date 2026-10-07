// roc 2011-06 00816130  unit: CXTPEdit  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816130
//
// 00816130  83ec1c               sub esp, 0x1c
// 00816133  56                   push esi
// 00816134  8b742424             mov esi, dword ptr [esp + 0x24]
// 00816138  57                   push edi
// 00816139  8bf9                 mov edi, ecx
// 0081613b  83fe08               cmp esi, 8
// 0081613e  7435                 je 0x816175
// 00816140  83fe21               cmp esi, 0x21
// 00816143  7205                 jb 0x81614a
// 00816145  83fe2e               cmp esi, 0x2e
// 00816148  762b                 jbe 0x816175
// 0081614a  83fe43               cmp esi, 0x43
// 0081614d  740f                 je 0x81615e
// 0081614f  83fe56               cmp esi, 0x56
// 00816152  740a                 je 0x81615e
// 00816154  83fe58               cmp esi, 0x58
// 00816157  7405                 je 0x81615e
// 00816159  83fe5a               cmp esi, 0x5a
// 0081615c  750d                 jne 0x81616b
// 0081615e  6a11                 push 0x11
// 00816160  ff15601aa400         call dword ptr [0xa41a60]
// 00816166  6685c0               test ax, ax
// 00816169  7c0a                 jl 0x816175
// 0081616b  5f                   pop edi
// 0081616c  33c0                 xor eax, eax
// 0081616e  5e                   pop esi
// 0081616f  83c41c               add esp, 0x1c
// 00816172  c20800               ret 8
// 00816175  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00816179  8b4720               mov eax, dword ptr [edi + 0x20]
// 0081617c  8d542408             lea edx, [esp + 8]
// 00816180  894c2414             mov dword ptr [esp + 0x14], ecx
// 00816184  52                   push edx
// 00816185  8bcf                 mov ecx, edi
// 00816187  c744241000010000     mov dword ptr [esp + 0x10], 0x100
// 0081618f  8944240c             mov dword ptr [esp + 0xc], eax
// 00816193  89742414             mov dword ptr [esp + 0x14], esi
// 00816197  e864641b00           call 0x9cc600
// 0081619c  f7d8                 neg eax
// 0081619e  1bc0                 sbb eax, eax
// 008161a0  5f                   pop edi
// 008161a1  f7d8                 neg eax
// 008161a3  5e                   pop esi
// 008161a4  83c41c               add esp, 0x1c
// 008161a7  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?IsDialogCode@CXTPCommandBarEditCtrl@@QAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
