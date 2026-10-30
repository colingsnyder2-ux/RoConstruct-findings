// roc 2009-06 00462e00  unit: Scintilla::CScintillaView  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462e00
//
// 00462e00  83ec10               sub esp, 0x10
// 00462e03  53                   push ebx
// 00462e04  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00462e08  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00462e0b  8b532c               mov edx, dword ptr [ebx + 0x2c]
// 00462e0e  55                   push ebp
// 00462e0f  56                   push esi
// 00462e10  8b742420             mov esi, dword ptr [esp + 0x20]
// 00462e14  8d6b24               lea ebp, [ebx + 0x24]
// 00462e17  57                   push edi
// 00462e18  8bf9                 mov edi, ecx
// 00462e1a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00462e1d  89442410             mov dword ptr [esp + 0x10], eax
// 00462e21  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00462e24  894c2414             mov dword ptr [esp + 0x14], ecx
// 00462e28  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00462e2b  89542418             mov dword ptr [esp + 0x18], edx
// 00462e2f  8b16                 mov edx, dword ptr [esi]
// 00462e31  8944241c             mov dword ptr [esp + 0x1c], eax
// 00462e35  8b4224               mov eax, dword ptr [edx + 0x24]
// 00462e38  894c2428             mov dword ptr [esp + 0x28], ecx
// 00462e3c  8bce                 mov ecx, esi
// 00462e3e  ffd0                 call eax
// 00462e40  6a00                 push 0
// 00462e42  6a00                 push 0
// 00462e44  6a00                 push 0
// 00462e46  6a00                 push 0
// 00462e48  8bce                 mov ecx, esi
// 00462e4a  e8b36a2b00           call 0x719902
// 00462e4f  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 00462e55  894314               mov dword ptr [ebx + 0x14], eax
// 00462e58  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00462e5c  7362                 jae 0x462ec0
// 00462e5e  8bff                 mov edi, edi
// 00462e60  8b17                 mov edx, dword ptr [edi]
// 00462e62  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00462e68  53                   push ebx
// 00462e69  56                   push esi
// 00462e6a  8bcf                 mov ecx, edi
// 00462e6c  ffd0                 call eax
// 00462e6e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00462e71  6a0a                 push 0xa
// 00462e73  51                   push ecx
// 00462e74  ff1558e18900         call dword ptr [0x89e158]
// 00462e7a  8b5608               mov edx, dword ptr [esi + 8]
// 00462e7d  6a08                 push 8
// 00462e7f  52                   push edx
// 00462e80  8944242c             mov dword ptr [esp + 0x2c], eax
// 00462e84  ff1558e18900         call dword ptr [0x89e158]
// 00462e8a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00462e8e  51                   push ecx
// 00462e8f  50                   push eax
// 00462e90  6a00                 push 0
// 00462e92  6a00                 push 0
// 00462e94  55                   push ebp
// 00462e95  ff15a4ed8900         call dword ptr [0x89eda4]
// 00462e9b  8b17                 mov edx, dword ptr [edi]
// 00462e9d  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 00462ea3  53                   push ebx
// 00462ea4  56                   push esi
// 00462ea5  8bcf                 mov ecx, edi
// 00462ea7  ffd0                 call eax
// 00462ea9  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00462eac  3b87bc000000         cmp eax, dword ptr [edi + 0xbc]
// 00462eb2  740c                 je 0x462ec0
// 00462eb4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00462eb8  40                   inc eax
// 00462eb9  894314               mov dword ptr [ebx + 0x14], eax
// 00462ebc  3bc1                 cmp eax, ecx
// 00462ebe  72a0                 jb 0x462e60
// 00462ec0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00462ec4  33d2                 xor edx, edx
// 00462ec6  394314               cmp dword ptr [ebx + 0x14], eax
// 00462ec9  6aff                 push -1
// 00462ecb  0f94c2               sete dl
// 00462ece  8bce                 mov ecx, esi
// 00462ed0  8bfa                 mov edi, edx
// 00462ed2  8b16                 mov edx, dword ptr [esi]
// 00462ed4  8b4228               mov eax, dword ptr [edx + 0x28]
// 00462ed7  ffd0                 call eax
// 00462ed9  8b542410             mov edx, dword ptr [esp + 0x10]
// 00462edd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00462ee1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00462ee5  895500               mov dword ptr [ebp], edx
// 00462ee8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00462eec  894504               mov dword ptr [ebp + 4], eax
// 00462eef  894b14               mov dword ptr [ebx + 0x14], ecx
// 00462ef2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00462ef6  8bc7                 mov eax, edi
// 00462ef8  5f                   pop edi
// 00462ef9  894d08               mov dword ptr [ebp + 8], ecx
// 00462efc  5e                   pop esi
// 00462efd  89550c               mov dword ptr [ebp + 0xc], edx
// 00462f00  5d                   pop ebp
// 00462f01  5b                   pop ebx
// 00462f02  83c410               add esp, 0x10
// 00462f05  c20800               ret 8
// copied from an identical function in another client (function ?PaginateTo@CScintillaView@@MAEHPAVCDC@@PAUCPrintInfo@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp