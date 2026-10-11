// roc 2007-03 0049e850  unit: seg_00490000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049e850
//
// 0049e850  8b442408             mov eax, dword ptr [esp + 8]
// 0049e854  53                   push ebx
// 0049e855  55                   push ebp
// 0049e856  56                   push esi
// 0049e857  8b701c               mov esi, dword ptr [eax + 0x1c]
// 0049e85a  85f6                 test esi, esi
// 0049e85c  57                   push edi
// 0049e85d  8b7820               mov edi, dword ptr [eax + 0x20]
// 0049e860  7506                 jne 0x49e868
// 0049e862  ff1544e97700         call dword ptr [0x77e944]
// 0049e868  3b7e04               cmp edi, dword ptr [esi + 4]
// 0049e86b  7506                 jne 0x49e873
// 0049e86d  ff1544e97700         call dword ptr [0x77e944]
// 0049e873  8b1f                 mov ebx, dword ptr [edi]
// 0049e875  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0049e879  3bf7                 cmp esi, edi
// 0049e87b  8b6f04               mov ebp, dword ptr [edi + 4]
// 0049e87e  7406                 je 0x49e886
// 0049e880  ff1544e97700         call dword ptr [0x77e944]
// 0049e886  3bdd                 cmp ebx, ebp
// 0049e888  7519                 jne 0x49e8a3
// 0049e88a  8b4704               mov eax, dword ptr [edi + 4]
// 0049e88d  8b30                 mov esi, dword ptr [eax]
// 0049e88f  3bf0                 cmp esi, eax
// 0049e891  7506                 jne 0x49e899
// 0049e893  ff1544e97700         call dword ptr [0x77e944]
// 0049e899  8b4608               mov eax, dword ptr [esi + 8]
// 0049e89c  5f                   pop edi
// 0049e89d  5e                   pop esi
// 0049e89e  5d                   pop ebp
// 0049e89f  5b                   pop ebx
// 0049e8a0  c20800               ret 8
// 0049e8a3  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0049e8a6  7506                 jne 0x49e8ae
// 0049e8a8  ff1544e97700         call dword ptr [0x77e944]
// 0049e8ae  8b4308               mov eax, dword ptr [ebx + 8]
// 0049e8b1  5f                   pop edi
// 0049e8b2  5e                   pop esi
// 0049e8b3  5d                   pop ebp
// 0049e8b4  5b                   pop ebx
// 0049e8b5  c20800               ret 8
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?nextMechanism@SimJobStage@RBX@@QAEPAVMechanism@2@AAV?$list@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@std@@PBV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
