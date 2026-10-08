// from server: 100% by auto
// roc 2007-08 006a7230  unit: IIHH::?$CMap  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7230
//
// 006a7230  53                   push ebx
// 006a7231  56                   push esi
// 006a7232  8bf1                 mov esi, ecx
// 006a7234  e8b7c9f9ff           call 0x643bf0
// 006a7239  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a723d  3b8eb0010000         cmp ecx, dword ptr [esi + 0x1b0]
// 006a7243  8bd8                 mov ebx, eax
// 006a7245  7506                 jne 0x6a724d
// 006a7247  8b9eb4010000         mov ebx, dword ptr [esi + 0x1b4]
// 006a724d  85db                 test ebx, ebx
// 006a724f  7433                 je 0x6a7284
// 006a7251  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 006a7257  85c0                 test eax, eax
// 006a7259  7429                 je 0x6a7284
// 006a725b  3bc3                 cmp eax, ebx
// 006a725d  7425                 je 0x6a7284
// 006a725f  57                   push edi
// 006a7260  51                   push ecx
// 006a7261  e89290f8ff           call 0x6302f8
// 006a7266  8bf8                 mov edi, eax
// 006a7268  85ff                 test edi, edi
// 006a726a  7417                 je 0x6a7283
// 006a726c  8b4704               mov eax, dword ptr [edi + 4]
// 006a726f  50                   push eax
// 006a7270  ff1504ee7700         call dword ptr [0x77ee04]
// 006a7276  85c0                 test eax, eax
// 006a7278  7409                 je 0x6a7283
// 006a727a  57                   push edi
// 006a727b  53                   push ebx
// 006a727c  8bce                 mov ecx, esi
// 006a727e  e8fdfcffff           call 0x6a6f80
// 006a7283  5f                   pop edi
// 006a7284  5e                   pop esi
// 006a7285  5b                   pop ebx
// 006a7286  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMenuBar.cpp (function ?SwitchMDIMenu@CXTPMenuBar@@IAEXPAUHMENU__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMenuBar.cpp
