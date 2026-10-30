// roc 2010-06 00855ad0  unit: CXTPReportInplaceEdit  size: 579 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00855ad0
//
// 00855ad0  6aff                 push -1
// 00855ad2  68db819b00           push 0x9b81db
// 00855ad7  64a100000000         mov eax, dword ptr fs:[0]
// 00855add  50                   push eax
// 00855ade  83ec18               sub esp, 0x18
// 00855ae1  53                   push ebx
// 00855ae2  55                   push ebp
// 00855ae3  56                   push esi
// 00855ae4  57                   push edi
// 00855ae5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00855aea  33c4                 xor eax, esp
// 00855aec  50                   push eax
// 00855aed  8d44242c             lea eax, [esp + 0x2c]
// 00855af1  64a300000000         mov dword ptr fs:[0], eax
// 00855af7  8be9                 mov ebp, ecx
// 00855af9  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 00855afc  85c9                 test ecx, ecx
// 00855afe  0f84f9010000         je 0x855cfd
// 00855b04  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00855b08  83f809               cmp eax, 9
// 00855b0b  0f84ec010000         je 0x855cfd
// 00855b11  83f81b               cmp eax, 0x1b
// 00855b14  0f84dc010000         je 0x855cf6
// 00855b1a  83f80d               cmp eax, 0xd
// 00855b1d  0f84d3010000         je 0x855cf6
// 00855b23  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 00855b26  85c9                 test ecx, ecx
// 00855b28  0f84bf010000         je 0x855ced
// 00855b2e  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00855b31  85c0                 test eax, eax
// 00855b33  0f84b4010000         je 0x855ced
// 00855b39  50                   push eax
// 00855b3a  e8219af7ff           call 0x7cf560
// 00855b3f  83782400             cmp dword ptr [eax + 0x24], 0
// 00855b43  0f84a4010000         je 0x855ced
// 00855b49  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00855b4c  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 00855b4f  50                   push eax
// 00855b50  e80b9af7ff           call 0x7cf560
// 00855b55  8bf0                 mov esi, eax
// 00855b57  8b5e28               mov ebx, dword ptr [esi + 0x28]
// 00855b5a  8bcb                 mov ecx, ebx
// 00855b5c  895c2428             mov dword ptr [esp + 0x28], ebx
// 00855b60  e83b86f7ff           call 0x7ce1a0
// 00855b65  8bf8                 mov edi, eax
// 00855b67  85ff                 test edi, edi
// 00855b69  0f8e7e010000         jle 0x855ced
// 00855b6f  8d4c2414             lea ecx, [esp + 0x14]
// 00855b73  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00855b79  8d4c2418             lea ecx, [esp + 0x18]
// 00855b7d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00855b85  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00855b8b  8d4c2414             lea ecx, [esp + 0x14]
// 00855b8f  51                   push ecx
// 00855b90  8bcd                 mov ecx, ebp
// 00855b92  c644243801           mov byte ptr [esp + 0x38], 1
// 00855b97  e8ec23f5ff           call 0x7a7f88
// 00855b9c  8d542414             lea edx, [esp + 0x14]
// 00855ba0  52                   push edx
// 00855ba1  8d4c241c             lea ecx, [esp + 0x1c]
// 00855ba5  ff1580c59e00         call dword ptr [0x9ec580]
// 00855bab  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 00855bb1  85c0                 test eax, eax
// 00855bb3  751b                 jne 0x855bd0
// 00855bb5  8d4c2414             lea ecx, [esp + 0x14]
// 00855bb9  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00855bbf  50                   push eax
// 00855bc0  8bce                 mov ecx, esi
// 00855bc2  e8898cf7ff           call 0x7ce850
// 00855bc7  85c0                 test eax, eax
// 00855bc9  7505                 jne 0x855bd0
// 00855bcb  8d77ff               lea esi, [edi - 1]
// 00855bce  eb09                 jmp 0x855bd9
// 00855bd0  8bc8                 mov ecx, eax
// 00855bd2  e8c985f7ff           call 0x7ce1a0
// 00855bd7  8bf0                 mov esi, eax
// 00855bd9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00855bdd  6a01                 push 1
// 00855bdf  50                   push eax
// 00855be0  8d4c2424             lea ecx, [esp + 0x24]
// 00855be4  8974242c             mov dword ptr [esp + 0x2c], esi
// 00855be8  ff15f0ca9e00         call dword ptr [0x9ecaf0]
// 00855bee  4f                   dec edi
// 00855bef  c644243402           mov byte ptr [esp + 0x34], 2
// 00855bf4  897c243c             mov dword ptr [esp + 0x3c], edi
// 00855bf8  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 00855bfc  7d03                 jge 0x855c01
// 00855bfe  46                   inc esi
// 00855bff  eb02                 jmp 0x855c03
// 00855c01  33f6                 xor esi, esi
// 00855c03  56                   push esi
// 00855c04  8bcb                 mov ecx, ebx
// 00855c06  e8c5c0faff           call 0x801cd0
// 00855c0b  8bf8                 mov edi, eax
// 00855c0d  8d4f20               lea ecx, [edi + 0x20]
// 00855c10  51                   push ecx
// 00855c11  8d4c2418             lea ecx, [esp + 0x18]
// 00855c15  ff1580c59e00         call dword ptr [0x9ec580]
// 00855c1b  6a01                 push 1
// 00855c1d  8d542424             lea edx, [esp + 0x24]
// 00855c21  52                   push edx
// 00855c22  8d4c241c             lea ecx, [esp + 0x1c]
// 00855c26  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 00855c2c  8bc8                 mov ecx, eax
// 00855c2e  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00855c34  50                   push eax
// 00855c35  8d4c2420             lea ecx, [esp + 0x20]
// 00855c39  ff1528c09e00         call dword ptr [0x9ec028]
// 00855c3f  85c0                 test eax, eax
// 00855c41  8d4c2420             lea ecx, [esp + 0x20]
// 00855c45  0f94c3               sete bl
// 00855c48  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00855c4e  84db                 test bl, bl
// 00855c50  750c                 jne 0x855c5e
// 00855c52  3b742424             cmp esi, dword ptr [esp + 0x24]
// 00855c56  7475                 je 0x855ccd
// 00855c58  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00855c5c  eb9a                 jmp 0x855bf8
// 00855c5e  8d4c2414             lea ecx, [esp + 0x14]
// 00855c62  89bd88000000         mov dword ptr [ebp + 0x88], edi
// 00855c68  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00855c6e  50                   push eax
// 00855c6f  8bcd                 mov ecx, ebp
// 00855c71  e86af8ffff           call 0x8554e0
// 00855c76  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00855c79  8b3554ba9e00         mov esi, dword ptr [0x9eba54]
// 00855c7f  6aff                 push -1
// 00855c81  6a00                 push 0
// 00855c83  68b1000000           push 0xb1
// 00855c88  50                   push eax
// 00855c89  ffd6                 call esi
// 00855c8b  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00855c8e  6a00                 push 0
// 00855c90  6a00                 push 0
// 00855c92  68b7000000           push 0xb7
// 00855c97  51                   push ecx
// 00855c98  ffd6                 call esi
// 00855c9a  8d4c2414             lea ecx, [esp + 0x14]
// 00855c9e  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00855ca4  50                   push eax
// 00855ca5  8d4c241c             lea ecx, [esp + 0x1c]
// 00855ca9  ff1528c09e00         call dword ptr [0x9ec028]
// 00855caf  85c0                 test eax, eax
// 00855cb1  741a                 je 0x855ccd
// 00855cb3  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00855cb6  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 00855cb9  8b11                 mov edx, dword ptr [ecx]
// 00855cbb  8b9234020000         mov edx, dword ptr [edx + 0x234]
// 00855cc1  57                   push edi
// 00855cc2  50                   push eax
// 00855cc3  8b4564               mov eax, dword ptr [ebp + 0x64]
// 00855cc6  50                   push eax
// 00855cc7  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 00855cca  50                   push eax
// 00855ccb  ffd2                 call edx
// 00855ccd  8d4c241c             lea ecx, [esp + 0x1c]
// 00855cd1  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00855cd7  8d4c2418             lea ecx, [esp + 0x18]
// 00855cdb  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00855ce1  8d4c2414             lea ecx, [esp + 0x14]
// 00855ce5  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00855ceb  eb10                 jmp 0x855cfd
// 00855ced  8bcd                 mov ecx, ebp
// 00855cef  e87c22f5ff           call 0x7a7f70
// 00855cf4  eb07                 jmp 0x855cfd
// 00855cf6  6a00                 push 0
// 00855cf8  e8a32ef8ff           call 0x7d8ba0
// 00855cfd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00855d01  64890d00000000       mov dword ptr fs:[0], ecx
// 00855d08  59                   pop ecx
// 00855d09  5f                   pop edi
// 00855d0a  5e                   pop esi
// 00855d0b  5d                   pop ebp
// 00855d0c  5b                   pop ebx
// 00855d0d  83c424               add esp, 0x24
// 00855d10  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnChar@CXTPReportInplaceEdit@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports-rtm Source\ReportControl\XTPReportInplaceControls.cpp