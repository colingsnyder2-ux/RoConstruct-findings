// roc 2012-06 009e4460  unit: CXTPDockingPane  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e4460
//
// 009e4460  56                   push esi
// 009e4461  57                   push edi
// 009e4462  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009e4466  8bf1                 mov esi, ecx
// 009e4468  8b06                 mov eax, dword ptr [esi]
// 009e446a  8b502c               mov edx, dword ptr [eax + 0x2c]
// 009e446d  57                   push edi
// 009e446e  ffd2                 call edx
// 009e4470  8b442420             mov eax, dword ptr [esp + 0x20]
// 009e4474  85c0                 test eax, eax
// 009e4476  7409                 je 0x9e4481
// 009e4478  833800               cmp dword ptr [eax], 0
// 009e447b  0f8486000000         je 0x9e4507
// 009e4481  8b442410             mov eax, dword ptr [esp + 0x10]
// 009e4485  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009e4489  8b542418             mov edx, dword ptr [esp + 0x18]
// 009e448d  89461c               mov dword ptr [esi + 0x1c], eax
// 009e4490  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009e4494  894e20               mov dword ptr [esi + 0x20], ecx
// 009e4497  895624               mov dword ptr [esi + 0x24], edx
// 009e449a  894628               mov dword ptr [esi + 0x28], eax
// 009e449d  85ff                 test edi, edi
// 009e449f  7466                 je 0x9e4507
// 009e44a1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 009e44a4  85c9                 test ecx, ecx
// 009e44a6  745f                 je 0x9e4507
// 009e44a8  8b01                 mov eax, dword ptr [ecx]
// 009e44aa  8b7f20               mov edi, dword ptr [edi + 0x20]
// 009e44ad  6a02                 push 2
// 009e44af  8d542414             lea edx, [esp + 0x14]
// 009e44b3  52                   push edx
// 009e44b4  8b5020               mov edx, dword ptr [eax + 0x20]
// 009e44b7  ffd2                 call edx
// 009e44b9  50                   push eax
// 009e44ba  57                   push edi
// 009e44bb  ff15e43cb200         call dword ptr [0xb23ce4]
// 009e44c1  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 009e44c7  85c0                 test eax, eax
// 009e44c9  7421                 je 0x9e44ec
// 009e44cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009e44cf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009e44d3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 009e44d7  6a01                 push 1
// 009e44d9  2bd1                 sub edx, ecx
// 009e44db  52                   push edx
// 009e44dc  8b542418             mov edx, dword ptr [esp + 0x18]
// 009e44e0  2bfa                 sub edi, edx
// 009e44e2  57                   push edi
// 009e44e3  51                   push ecx
// 009e44e4  52                   push edx
// 009e44e5  50                   push eax
// 009e44e6  ff158c3cb200         call dword ptr [0xb23c8c]
// 009e44ec  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 009e44f2  85c0                 test eax, eax
// 009e44f4  7411                 je 0x9e4507
// 009e44f6  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 009e44fc  83e101               and ecx, 1
// 009e44ff  51                   push ecx
// 009e4500  50                   push eax
// 009e4501  ff15f03bb200         call dword ptr [0xb23bf0]
// 009e4507  5f                   pop edi
// 009e4508  5e                   pop esi
// 009e4509  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?OnSizeParent@CXTPDockingPane@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
