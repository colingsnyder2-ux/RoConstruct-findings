// roc 2007-03 0056bb70  unit: seg_00560000  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056bb70
//
// 0056bb70  83ec10               sub esp, 0x10
// 0056bb73  53                   push ebx
// 0056bb74  56                   push esi
// 0056bb75  57                   push edi
// 0056bb76  8bf9                 mov edi, ecx
// 0056bb78  8b5708               mov edx, dword ptr [edi + 8]
// 0056bb7b  33c0                 xor eax, eax
// 0056bb7d  85d2                 test edx, edx
// 0056bb7f  89442410             mov dword ptr [esp + 0x10], eax
// 0056bb83  7504                 jne 0x56bb89
// 0056bb85  33c9                 xor ecx, ecx
// 0056bb87  eb08                 jmp 0x56bb91
// 0056bb89  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0056bb8c  2bca                 sub ecx, edx
// 0056bb8e  c1f902               sar ecx, 2
// 0056bb91  85c9                 test ecx, ecx
// 0056bb93  8b5714               mov edx, dword ptr [edi + 0x14]
// 0056bb96  89542418             mov dword ptr [esp + 0x18], edx
// 0056bb9a  8d542410             lea edx, [esp + 0x10]
// 0056bb9e  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056bba2  895714               mov dword ptr [edi + 0x14], edx
// 0056bba5  766a                 jbe 0x56bc11
// 0056bba7  8b1d44e97700         mov ebx, dword ptr [0x77e944]
// 0056bbad  8d4900               lea ecx, [ecx]
// 0056bbb0  8b5708               mov edx, dword ptr [edi + 8]
// 0056bbb3  85d2                 test edx, edx
// 0056bbb5  8bf0                 mov esi, eax
// 0056bbb7  740c                 je 0x56bbc5
// 0056bbb9  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0056bbbc  2bca                 sub ecx, edx
// 0056bbbe  c1f902               sar ecx, 2
// 0056bbc1  3bc1                 cmp eax, ecx
// 0056bbc3  7202                 jb 0x56bbc7
// 0056bbc5  ffd3                 call ebx
// 0056bbc7  8b4708               mov eax, dword ptr [edi + 8]
// 0056bbca  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0056bbcd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056bbd1  50                   push eax
// 0056bbd2  83ec28               sub esp, 0x28
// 0056bbd5  8bf4                 mov esi, esp
// 0056bbd7  8d542450             lea edx, [esp + 0x50]
// 0056bbdb  89642438             mov dword ptr [esp + 0x38], esp
// 0056bbdf  890e                 mov dword ptr [esi], ecx
// 0056bbe1  52                   push edx
// 0056bbe2  8d4e04               lea ecx, [esi + 4]
// 0056bbe5  ff157ce77700         call dword ptr [0x77e77c]
// 0056bbeb  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0056bbef  894620               mov dword ptr [esi + 0x20], eax
// 0056bbf2  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0056bbf6  894e24               mov dword ptr [esi + 0x24], ecx
// 0056bbf9  8bcf                 mov ecx, edi
// 0056bbfb  e880050000           call 0x56c180
// 0056bc00  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056bc04  83c001               add eax, 1
// 0056bc07  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0056bc0b  89442410             mov dword ptr [esp + 0x10], eax
// 0056bc0f  729f                 jb 0x56bbb0
// 0056bc11  8b542418             mov edx, dword ptr [esp + 0x18]
// 0056bc15  8d4c2424             lea ecx, [esp + 0x24]
// 0056bc19  895714               mov dword ptr [edi + 0x14], edx
// 0056bc1c  ff158ce77700         call dword ptr [0x77e78c]
// 0056bc22  5f                   pop edi
// 0056bc23  5e                   pop esi
// 0056bc24  5b                   pop ebx
// 0056bc25  83c410               add esp, 0x10
// 0056bc28  c22800               ret 0x28
// library openrbx-client/App\util\standardout.cpp (function ?raise@?$Notifier@VStandardOut@RBX@@UStandardOutMessage@2@@RBX@@IBEXUStandardOutMessage@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/standardout.cpp
