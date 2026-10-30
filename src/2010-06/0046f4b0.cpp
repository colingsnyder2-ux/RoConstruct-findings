// roc 2010-06 0046f4b0  unit: Scintilla::CScintillaView  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046f4b0
//
// 0046f4b0  83ec10               sub esp, 0x10
// 0046f4b3  53                   push ebx
// 0046f4b4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0046f4b8  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0046f4bb  8b532c               mov edx, dword ptr [ebx + 0x2c]
// 0046f4be  55                   push ebp
// 0046f4bf  56                   push esi
// 0046f4c0  8b742420             mov esi, dword ptr [esp + 0x20]
// 0046f4c4  8d6b24               lea ebp, [ebx + 0x24]
// 0046f4c7  57                   push edi
// 0046f4c8  8bf9                 mov edi, ecx
// 0046f4ca  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0046f4cd  89442410             mov dword ptr [esp + 0x10], eax
// 0046f4d1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0046f4d4  894c2414             mov dword ptr [esp + 0x14], ecx
// 0046f4d8  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0046f4db  89542418             mov dword ptr [esp + 0x18], edx
// 0046f4df  8b16                 mov edx, dword ptr [esi]
// 0046f4e1  8944241c             mov dword ptr [esp + 0x1c], eax
// 0046f4e5  8b4224               mov eax, dword ptr [edx + 0x24]
// 0046f4e8  894c2428             mov dword ptr [esp + 0x28], ecx
// 0046f4ec  8bce                 mov ecx, esi
// 0046f4ee  ffd0                 call eax
// 0046f4f0  6a00                 push 0
// 0046f4f2  6a00                 push 0
// 0046f4f4  6a00                 push 0
// 0046f4f6  6a00                 push 0
// 0046f4f8  8bce                 mov ecx, esi
// 0046f4fa  e871933300           call 0x7a8870
// 0046f4ff  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 0046f505  894314               mov dword ptr [ebx + 0x14], eax
// 0046f508  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0046f50c  7362                 jae 0x46f570
// 0046f50e  8bff                 mov edi, edi
// 0046f510  8b17                 mov edx, dword ptr [edi]
// 0046f512  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 0046f518  53                   push ebx
// 0046f519  56                   push esi
// 0046f51a  8bcf                 mov ecx, edi
// 0046f51c  ffd0                 call eax
// 0046f51e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0046f521  6a0a                 push 0xa
// 0046f523  51                   push ecx
// 0046f524  ff15b4a09e00         call dword ptr [0x9ea0b4]
// 0046f52a  8b5608               mov edx, dword ptr [esi + 8]
// 0046f52d  6a08                 push 8
// 0046f52f  52                   push edx
// 0046f530  8944242c             mov dword ptr [esp + 0x2c], eax
// 0046f534  ff15b4a09e00         call dword ptr [0x9ea0b4]
// 0046f53a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046f53e  51                   push ecx
// 0046f53f  50                   push eax
// 0046f540  6a00                 push 0
// 0046f542  6a00                 push 0
// 0046f544  55                   push ebp
// 0046f545  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 0046f54b  8b17                 mov edx, dword ptr [edi]
// 0046f54d  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 0046f553  53                   push ebx
// 0046f554  56                   push esi
// 0046f555  8bcf                 mov ecx, edi
// 0046f557  ffd0                 call eax
// 0046f559  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0046f55c  3b87bc000000         cmp eax, dword ptr [edi + 0xbc]
// 0046f562  740c                 je 0x46f570
// 0046f564  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0046f568  40                   inc eax
// 0046f569  894314               mov dword ptr [ebx + 0x14], eax
// 0046f56c  3bc1                 cmp eax, ecx
// 0046f56e  72a0                 jb 0x46f510
// 0046f570  8b442428             mov eax, dword ptr [esp + 0x28]
// 0046f574  33d2                 xor edx, edx
// 0046f576  394314               cmp dword ptr [ebx + 0x14], eax
// 0046f579  6aff                 push -1
// 0046f57b  0f94c2               sete dl
// 0046f57e  8bce                 mov ecx, esi
// 0046f580  8bfa                 mov edi, edx
// 0046f582  8b16                 mov edx, dword ptr [esi]
// 0046f584  8b4228               mov eax, dword ptr [edx + 0x28]
// 0046f587  ffd0                 call eax
// 0046f589  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046f58d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046f591  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0046f595  895500               mov dword ptr [ebp], edx
// 0046f598  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0046f59c  894504               mov dword ptr [ebp + 4], eax
// 0046f59f  894b14               mov dword ptr [ebx + 0x14], ecx
// 0046f5a2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046f5a6  8bc7                 mov eax, edi
// 0046f5a8  5f                   pop edi
// 0046f5a9  894d08               mov dword ptr [ebp + 8], ecx
// 0046f5ac  5e                   pop esi
// 0046f5ad  89550c               mov dword ptr [ebp + 0xc], edx
// 0046f5b0  5d                   pop ebp
// 0046f5b1  5b                   pop ebx
// 0046f5b2  83c410               add esp, 0x10
// 0046f5b5  c20800               ret 8
// copied from an identical function in another client (function ?PaginateTo@CScintillaView@@MAEHPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp