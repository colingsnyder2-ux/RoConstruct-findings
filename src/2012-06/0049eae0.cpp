// roc 2012-06 0049eae0  unit: Scintilla::CScintillaView  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049eae0
//
// 0049eae0  83ec10               sub esp, 0x10
// 0049eae3  53                   push ebx
// 0049eae4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0049eae8  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0049eaeb  8b532c               mov edx, dword ptr [ebx + 0x2c]
// 0049eaee  55                   push ebp
// 0049eaef  56                   push esi
// 0049eaf0  8b742420             mov esi, dword ptr [esp + 0x20]
// 0049eaf4  8d6b24               lea ebp, [ebx + 0x24]
// 0049eaf7  57                   push edi
// 0049eaf8  8bf9                 mov edi, ecx
// 0049eafa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0049eafd  89442410             mov dword ptr [esp + 0x10], eax
// 0049eb01  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0049eb04  894c2414             mov dword ptr [esp + 0x14], ecx
// 0049eb08  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0049eb0b  89542418             mov dword ptr [esp + 0x18], edx
// 0049eb0f  8b16                 mov edx, dword ptr [esi]
// 0049eb11  8944241c             mov dword ptr [esp + 0x1c], eax
// 0049eb15  8b4224               mov eax, dword ptr [edx + 0x24]
// 0049eb18  894c2428             mov dword ptr [esp + 0x28], ecx
// 0049eb1c  8bce                 mov ecx, esi
// 0049eb1e  ffd0                 call eax
// 0049eb20  6a00                 push 0
// 0049eb22  6a00                 push 0
// 0049eb24  6a00                 push 0
// 0049eb26  6a00                 push 0
// 0049eb28  8bce                 mov ecx, esi
// 0049eb2a  e8c7444e00           call 0x982ff6
// 0049eb2f  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 0049eb35  894314               mov dword ptr [ebx + 0x14], eax
// 0049eb38  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0049eb3c  7362                 jae 0x49eba0
// 0049eb3e  8bff                 mov edi, edi
// 0049eb40  8b17                 mov edx, dword ptr [edi]
// 0049eb42  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 0049eb48  53                   push ebx
// 0049eb49  56                   push esi
// 0049eb4a  8bcf                 mov ecx, edi
// 0049eb4c  ffd0                 call eax
// 0049eb4e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0049eb51  6a0a                 push 0xa
// 0049eb53  51                   push ecx
// 0049eb54  ff154821b200         call dword ptr [0xb22148]
// 0049eb5a  8b5608               mov edx, dword ptr [esi + 8]
// 0049eb5d  6a08                 push 8
// 0049eb5f  52                   push edx
// 0049eb60  8944242c             mov dword ptr [esp + 0x2c], eax
// 0049eb64  ff154821b200         call dword ptr [0xb22148]
// 0049eb6a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0049eb6e  51                   push ecx
// 0049eb6f  50                   push eax
// 0049eb70  6a00                 push 0
// 0049eb72  6a00                 push 0
// 0049eb74  55                   push ebp
// 0049eb75  ff156c3bb200         call dword ptr [0xb23b6c]
// 0049eb7b  8b17                 mov edx, dword ptr [edi]
// 0049eb7d  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 0049eb83  53                   push ebx
// 0049eb84  56                   push esi
// 0049eb85  8bcf                 mov ecx, edi
// 0049eb87  ffd0                 call eax
// 0049eb89  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0049eb8c  3b87bc000000         cmp eax, dword ptr [edi + 0xbc]
// 0049eb92  740c                 je 0x49eba0
// 0049eb94  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049eb98  40                   inc eax
// 0049eb99  894314               mov dword ptr [ebx + 0x14], eax
// 0049eb9c  3bc1                 cmp eax, ecx
// 0049eb9e  72a0                 jb 0x49eb40
// 0049eba0  8b442428             mov eax, dword ptr [esp + 0x28]
// 0049eba4  33d2                 xor edx, edx
// 0049eba6  394314               cmp dword ptr [ebx + 0x14], eax
// 0049eba9  6aff                 push -1
// 0049ebab  0f94c2               sete dl
// 0049ebae  8bce                 mov ecx, esi
// 0049ebb0  8bfa                 mov edi, edx
// 0049ebb2  8b16                 mov edx, dword ptr [esi]
// 0049ebb4  8b4228               mov eax, dword ptr [edx + 0x28]
// 0049ebb7  ffd0                 call eax
// 0049ebb9  8b542410             mov edx, dword ptr [esp + 0x10]
// 0049ebbd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049ebc1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049ebc5  895500               mov dword ptr [ebp], edx
// 0049ebc8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0049ebcc  894504               mov dword ptr [ebp + 4], eax
// 0049ebcf  894b14               mov dword ptr [ebx + 0x14], ecx
// 0049ebd2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049ebd6  8bc7                 mov eax, edi
// 0049ebd8  5f                   pop edi
// 0049ebd9  894d08               mov dword ptr [ebp + 8], ecx
// 0049ebdc  5e                   pop esi
// 0049ebdd  89550c               mov dword ptr [ebp + 0xc], edx
// 0049ebe0  5d                   pop ebp
// 0049ebe1  5b                   pop ebx
// 0049ebe2  83c410               add esp, 0x10
// 0049ebe5  c20800               ret 8
// copied from an identical function in another client (function ?PaginateTo@CScintillaView@@MAEHPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp