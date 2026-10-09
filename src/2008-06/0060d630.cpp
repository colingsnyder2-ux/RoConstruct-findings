// roc 2008-06 0060d630  unit: RBX::BlockBlockContact  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060d630
//
// 0060d630  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060d634  83ec10               sub esp, 0x10
// 0060d637  53                   push ebx
// 0060d638  55                   push ebp
// 0060d639  56                   push esi
// 0060d63a  57                   push edi
// 0060d63b  e890a5fdff           call 0x5e7bd0
// 0060d640  8bf8                 mov edi, eax
// 0060d642  85ff                 test edi, edi
// 0060d644  7474                 je 0x60d6ba
// 0060d646  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0060d64a  8d9b00000000         lea ebx, [ebx]
// 0060d650  8b470c               mov eax, dword ptr [edi + 0xc]
// 0060d653  39442424             cmp dword ptr [esp + 0x24], eax
// 0060d657  7503                 jne 0x60d65c
// 0060d659  8b4710               mov eax, dword ptr [edi + 0x10]
// 0060d65c  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 0060d65f  8b2b                 mov ebp, dword ptr [ebx]
// 0060d661  8d542428             lea edx, [esp + 0x28]
// 0060d665  89442428             mov dword ptr [esp + 0x28], eax
// 0060d669  52                   push edx
// 0060d66a  8d44241c             lea eax, [esp + 0x1c]
// 0060d66e  894c2418             mov dword ptr [esp + 0x18], ecx
// 0060d672  50                   push eax
// 0060d673  8bcb                 mov ecx, ebx
// 0060d675  e8e609eaff           call 0x4ae060
// 0060d67a  8bf0                 mov esi, eax
// 0060d67c  8b06                 mov eax, dword ptr [esi]
// 0060d67e  85c0                 test eax, eax
// 0060d680  7404                 je 0x60d686
// 0060d682  3bc5                 cmp eax, ebp
// 0060d684  7406                 je 0x60d68c
// 0060d686  ff1590288000         call dword ptr [0x802890]
// 0060d68c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060d690  394e04               cmp dword ptr [esi + 4], ecx
// 0060d693  7515                 jne 0x60d6aa
// 0060d695  8b17                 mov edx, dword ptr [edi]
// 0060d697  d944242c             fld dword ptr [esp + 0x2c]
// 0060d69b  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0060d69e  51                   push ecx
// 0060d69f  8bcf                 mov ecx, edi
// 0060d6a1  d91c24               fstp dword ptr [esp]
// 0060d6a4  ffd0                 call eax
// 0060d6a6  84c0                 test al, al
// 0060d6a8  751c                 jne 0x60d6c6
// 0060d6aa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060d6ae  57                   push edi
// 0060d6af  e82ca5fdff           call 0x5e7be0
// 0060d6b4  8bf8                 mov edi, eax
// 0060d6b6  85ff                 test edi, edi
// 0060d6b8  7596                 jne 0x60d650
// 0060d6ba  5f                   pop edi
// 0060d6bb  5e                   pop esi
// 0060d6bc  5d                   pop ebp
// 0060d6bd  32c0                 xor al, al
// 0060d6bf  5b                   pop ebx
// 0060d6c0  83c410               add esp, 0x10
// 0060d6c3  c20c00               ret 0xc
// 0060d6c6  5f                   pop edi
// 0060d6c7  5e                   pop esi
// 0060d6c8  5d                   pop ebp
// 0060d6c9  b001                 mov al, 1
// 0060d6cb  5b                   pop ebx
// 0060d6cc  83c410               add esp, 0x10
// 0060d6cf  c20c00               ret 0xc
// library openrbx-client/App\v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NPAVPrimitive@2@ABV?$set@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@@std@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
