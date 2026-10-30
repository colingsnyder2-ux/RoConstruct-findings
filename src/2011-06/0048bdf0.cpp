// roc 2011-06 0048bdf0  unit: Scintilla::CScintillaView  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048bdf0
//
// 0048bdf0  83ec10               sub esp, 0x10
// 0048bdf3  53                   push ebx
// 0048bdf4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0048bdf8  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0048bdfb  8b532c               mov edx, dword ptr [ebx + 0x2c]
// 0048bdfe  55                   push ebp
// 0048bdff  56                   push esi
// 0048be00  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048be04  8d6b24               lea ebp, [ebx + 0x24]
// 0048be07  57                   push edi
// 0048be08  8bf9                 mov edi, ecx
// 0048be0a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0048be0d  89442410             mov dword ptr [esp + 0x10], eax
// 0048be11  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0048be14  894c2414             mov dword ptr [esp + 0x14], ecx
// 0048be18  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0048be1b  89542418             mov dword ptr [esp + 0x18], edx
// 0048be1f  8b16                 mov edx, dword ptr [esi]
// 0048be21  8944241c             mov dword ptr [esp + 0x1c], eax
// 0048be25  8b4224               mov eax, dword ptr [edx + 0x24]
// 0048be28  894c2428             mov dword ptr [esp + 0x28], ecx
// 0048be2c  8bce                 mov ecx, esi
// 0048be2e  ffd0                 call eax
// 0048be30  6a00                 push 0
// 0048be32  6a00                 push 0
// 0048be34  6a00                 push 0
// 0048be36  6a00                 push 0
// 0048be38  8bce                 mov ecx, esi
// 0048be3a  e825f13700           call 0x80af64
// 0048be3f  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 0048be45  894314               mov dword ptr [ebx + 0x14], eax
// 0048be48  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0048be4c  7362                 jae 0x48beb0
// 0048be4e  8bff                 mov edi, edi
// 0048be50  8b17                 mov edx, dword ptr [edi]
// 0048be52  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 0048be58  53                   push ebx
// 0048be59  56                   push esi
// 0048be5a  8bcf                 mov ecx, edi
// 0048be5c  ffd0                 call eax
// 0048be5e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0048be61  6a0a                 push 0xa
// 0048be63  51                   push ecx
// 0048be64  ff157401a400         call dword ptr [0xa40174]
// 0048be6a  8b5608               mov edx, dword ptr [esi + 8]
// 0048be6d  6a08                 push 8
// 0048be6f  52                   push edx
// 0048be70  8944242c             mov dword ptr [esp + 0x2c], eax
// 0048be74  ff157401a400         call dword ptr [0xa40174]
// 0048be7a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0048be7e  51                   push ecx
// 0048be7f  50                   push eax
// 0048be80  6a00                 push 0
// 0048be82  6a00                 push 0
// 0048be84  55                   push ebp
// 0048be85  ff15c81ba400         call dword ptr [0xa41bc8]
// 0048be8b  8b17                 mov edx, dword ptr [edi]
// 0048be8d  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 0048be93  53                   push ebx
// 0048be94  56                   push esi
// 0048be95  8bcf                 mov ecx, edi
// 0048be97  ffd0                 call eax
// 0048be99  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0048be9c  3b87bc000000         cmp eax, dword ptr [edi + 0xbc]
// 0048bea2  740c                 je 0x48beb0
// 0048bea4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0048bea8  40                   inc eax
// 0048bea9  894314               mov dword ptr [ebx + 0x14], eax
// 0048beac  3bc1                 cmp eax, ecx
// 0048beae  72a0                 jb 0x48be50
// 0048beb0  8b442428             mov eax, dword ptr [esp + 0x28]
// 0048beb4  33d2                 xor edx, edx
// 0048beb6  394314               cmp dword ptr [ebx + 0x14], eax
// 0048beb9  6aff                 push -1
// 0048bebb  0f94c2               sete dl
// 0048bebe  8bce                 mov ecx, esi
// 0048bec0  8bfa                 mov edi, edx
// 0048bec2  8b16                 mov edx, dword ptr [esi]
// 0048bec4  8b4228               mov eax, dword ptr [edx + 0x28]
// 0048bec7  ffd0                 call eax
// 0048bec9  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048becd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0048bed1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0048bed5  895500               mov dword ptr [ebp], edx
// 0048bed8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0048bedc  894504               mov dword ptr [ebp + 4], eax
// 0048bedf  894b14               mov dword ptr [ebx + 0x14], ecx
// 0048bee2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048bee6  8bc7                 mov eax, edi
// 0048bee8  5f                   pop edi
// 0048bee9  894d08               mov dword ptr [ebp + 8], ecx
// 0048beec  5e                   pop esi
// 0048beed  89550c               mov dword ptr [ebp + 0xc], edx
// 0048bef0  5d                   pop ebp
// 0048bef1  5b                   pop ebx
// 0048bef2  83c410               add esp, 0x10
// 0048bef5  c20800               ret 8
// copied from an identical function in another client (function ?PaginateTo@CScintillaView@@MAEHPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp