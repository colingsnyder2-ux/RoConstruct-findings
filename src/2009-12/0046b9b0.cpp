// roc 2009-12 0046b9b0  unit: Scintilla::CScintillaView  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046b9b0
//
// 0046b9b0  83ec10               sub esp, 0x10
// 0046b9b3  53                   push ebx
// 0046b9b4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0046b9b8  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0046b9bb  8b532c               mov edx, dword ptr [ebx + 0x2c]
// 0046b9be  55                   push ebp
// 0046b9bf  56                   push esi
// 0046b9c0  8b742420             mov esi, dword ptr [esp + 0x20]
// 0046b9c4  8d6b24               lea ebp, [ebx + 0x24]
// 0046b9c7  57                   push edi
// 0046b9c8  8bf9                 mov edi, ecx
// 0046b9ca  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0046b9cd  89442410             mov dword ptr [esp + 0x10], eax
// 0046b9d1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0046b9d4  894c2414             mov dword ptr [esp + 0x14], ecx
// 0046b9d8  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0046b9db  89542418             mov dword ptr [esp + 0x18], edx
// 0046b9df  8b16                 mov edx, dword ptr [esi]
// 0046b9e1  8944241c             mov dword ptr [esp + 0x1c], eax
// 0046b9e5  8b4224               mov eax, dword ptr [edx + 0x24]
// 0046b9e8  894c2428             mov dword ptr [esp + 0x28], ecx
// 0046b9ec  8bce                 mov ecx, esi
// 0046b9ee  ffd0                 call eax
// 0046b9f0  6a00                 push 0
// 0046b9f2  6a00                 push 0
// 0046b9f4  6a00                 push 0
// 0046b9f6  6a00                 push 0
// 0046b9f8  8bce                 mov ecx, esi
// 0046b9fa  e8378d3800           call 0x7f4736
// 0046b9ff  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 0046ba05  894314               mov dword ptr [ebx + 0x14], eax
// 0046ba08  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0046ba0c  7362                 jae 0x46ba70
// 0046ba0e  8bff                 mov edi, edi
// 0046ba10  8b17                 mov edx, dword ptr [edi]
// 0046ba12  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 0046ba18  53                   push ebx
// 0046ba19  56                   push esi
// 0046ba1a  8bcf                 mov ecx, edi
// 0046ba1c  ffd0                 call eax
// 0046ba1e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0046ba21  6a0a                 push 0xa
// 0046ba23  51                   push ecx
// 0046ba24  ff1564b19800         call dword ptr [0x98b164]
// 0046ba2a  8b5608               mov edx, dword ptr [esi + 8]
// 0046ba2d  6a08                 push 8
// 0046ba2f  52                   push edx
// 0046ba30  8944242c             mov dword ptr [esp + 0x2c], eax
// 0046ba34  ff1564b19800         call dword ptr [0x98b164]
// 0046ba3a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046ba3e  51                   push ecx
// 0046ba3f  50                   push eax
// 0046ba40  6a00                 push 0
// 0046ba42  6a00                 push 0
// 0046ba44  55                   push ebp
// 0046ba45  ff1538ca9800         call dword ptr [0x98ca38]
// 0046ba4b  8b17                 mov edx, dword ptr [edi]
// 0046ba4d  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 0046ba53  53                   push ebx
// 0046ba54  56                   push esi
// 0046ba55  8bcf                 mov ecx, edi
// 0046ba57  ffd0                 call eax
// 0046ba59  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0046ba5c  3b87bc000000         cmp eax, dword ptr [edi + 0xbc]
// 0046ba62  740c                 je 0x46ba70
// 0046ba64  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0046ba68  40                   inc eax
// 0046ba69  894314               mov dword ptr [ebx + 0x14], eax
// 0046ba6c  3bc1                 cmp eax, ecx
// 0046ba6e  72a0                 jb 0x46ba10
// 0046ba70  8b442428             mov eax, dword ptr [esp + 0x28]
// 0046ba74  33d2                 xor edx, edx
// 0046ba76  394314               cmp dword ptr [ebx + 0x14], eax
// 0046ba79  6aff                 push -1
// 0046ba7b  0f94c2               sete dl
// 0046ba7e  8bce                 mov ecx, esi
// 0046ba80  8bfa                 mov edi, edx
// 0046ba82  8b16                 mov edx, dword ptr [esi]
// 0046ba84  8b4228               mov eax, dword ptr [edx + 0x28]
// 0046ba87  ffd0                 call eax
// 0046ba89  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046ba8d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046ba91  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0046ba95  895500               mov dword ptr [ebp], edx
// 0046ba98  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0046ba9c  894504               mov dword ptr [ebp + 4], eax
// 0046ba9f  894b14               mov dword ptr [ebx + 0x14], ecx
// 0046baa2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046baa6  8bc7                 mov eax, edi
// 0046baa8  5f                   pop edi
// 0046baa9  894d08               mov dword ptr [ebp + 8], ecx
// 0046baac  5e                   pop esi
// 0046baad  89550c               mov dword ptr [ebp + 0xc], edx
// 0046bab0  5d                   pop ebp
// 0046bab1  5b                   pop ebx
// 0046bab2  83c410               add esp, 0x10
// 0046bab5  c20800               ret 8
// copied from an identical function in another client (function ?PaginateTo@CScintillaView@@MAEHPAVCDC@@PAUCPrintInfo@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp