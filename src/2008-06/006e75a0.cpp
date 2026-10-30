// from server: 100% by auto
// roc 2008-06 006e75a0  unit: CXTPToolBar::CControlButtonExpand  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e75a0
//
// 006e75a0  53                   push ebx
// 006e75a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006e75a5  56                   push esi
// 006e75a6  53                   push ebx
// 006e75a7  8bf1                 mov esi, ecx
// 006e75a9  e8425dfcff           call 0x6ad2f0
// 006e75ae  85c0                 test eax, eax
// 006e75b0  7505                 jne 0x6e75b7
// 006e75b2  5e                   pop esi
// 006e75b3  5b                   pop ebx
// 006e75b4  c20400               ret 4
// 006e75b7  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 006e75be  0f84e2000000         je 0x6e76a6
// 006e75c4  57                   push edi
// 006e75c5  bf02000000           mov edi, 2
// 006e75ca  39befc000000         cmp dword ptr [esi + 0xfc], edi
// 006e75d0  7459                 je 0x6e762b
// 006e75d2  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006e75d8  39b8f8000000         cmp dword ptr [eax + 0xf8], edi
// 006e75de  744b                 je 0x6e762b
// 006e75e0  8bce                 mov ecx, esi
// 006e75e2  e89969d6ff           call 0x44df80
// 006e75e7  85c0                 test eax, eax
// 006e75e9  0f84b6000000         je 0x6e76a5
// 006e75ef  53                   push ebx
// 006e75f0  e86b37fcff           call 0x6aad60
// 006e75f5  83c404               add esp, 4
// 006e75f8  85c0                 test eax, eax
// 006e75fa  0f84a5000000         je 0x6e76a5
// 006e7600  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e7606  39b9e0000000         cmp dword ptr [ecx + 0xe0], edi
// 006e760c  0f8593000000         jne 0x6e76a5
// 006e7612  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 006e7618  6a00                 push 0
// 006e761a  52                   push edx
// 006e761b  e8b0f8fcff           call 0x6b6ed0
// 006e7620  5f                   pop edi
// 006e7621  5e                   pop esi
// 006e7622  b801000000           mov eax, 1
// 006e7627  5b                   pop ebx
// 006e7628  c20400               ret 4
// 006e762b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006e7631  83f8ff               cmp eax, -1
// 006e7634  750f                 jne 0x6e7645
// 006e7636  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006e763c  85c9                 test ecx, ecx
// 006e763e  7405                 je 0x6e7645
// 006e7640  e87b41fcff           call 0x6ab7c0
// 006e7645  ba05000000           mov edx, 5
// 006e764a  85c0                 test eax, eax
// 006e764c  7433                 je 0x6e7681
// 006e764e  85db                 test ebx, ebx
// 006e7650  7433                 je 0x6e7685
// 006e7652  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e7658  39b9e0000000         cmp dword ptr [ecx + 0xe0], edi
// 006e765e  7521                 jne 0x6e7681
// 006e7660  399100010000         cmp dword ptr [ecx + 0x100], edx
// 006e7666  7419                 je 0x6e7681
// 006e7668  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 006e766e  6a00                 push 0
// 006e7670  50                   push eax
// 006e7671  e85af8fcff           call 0x6b6ed0
// 006e7676  5f                   pop edi
// 006e7677  5e                   pop esi
// 006e7678  b801000000           mov eax, 1
// 006e767d  5b                   pop ebx
// 006e767e  c20400               ret 4
// 006e7681  85db                 test ebx, ebx
// 006e7683  7520                 jne 0x6e76a5
// 006e7685  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 006e768c  7417                 je 0x6e76a5
// 006e768e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e7694  399100010000         cmp dword ptr [ecx + 0x100], edx
// 006e769a  7409                 je 0x6e76a5
// 006e769c  6a00                 push 0
// 006e769e  6aff                 push -1
// 006e76a0  e82bf8fcff           call 0x6b6ed0
// 006e76a5  5f                   pop edi
// 006e76a6  5e                   pop esi
// 006e76a7  b801000000           mov eax, 1
// 006e76ac  5b                   pop ebx
// 006e76ad  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnSetSelected@CXTPControlPopup@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
