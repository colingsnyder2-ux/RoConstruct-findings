// from server: 100% by auto
// roc 2008-06 0070bf40  unit: RBX::VInstance::?$NonFactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070bf40
//
// 0070bf40  8b442404             mov eax, dword ptr [esp + 4]
// 0070bf44  56                   push esi
// 0070bf45  8bf1                 mov esi, ecx
// 0070bf47  894668               mov dword ptr [esi + 0x68], eax
// 0070bf4a  85c0                 test eax, eax
// 0070bf4c  7549                 jne 0x70bf97
// 0070bf4e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0070bf51  85c9                 test ecx, ecx
// 0070bf53  7427                 je 0x70bf7c
// 0070bf55  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0070bf5b  85c0                 test eax, eax
// 0070bf5d  741d                 je 0x70bf7c
// 0070bf5f  50                   push eax
// 0070bf60  51                   push ecx
// 0070bf61  ff151c2e8000         call dword ptr [0x802e1c]
// 0070bf67  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0070bf6d  c7861801000000000000 mov dword ptr [esi + 0x118], 0
// 0070bf77  e824e2ffff           call 0x70a1a0
// 0070bf7c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0070bf7f  85c0                 test eax, eax
// 0070bf81  7414                 je 0x70bf97
// 0070bf83  50                   push eax
// 0070bf84  ff153c2d8000         call dword ptr [0x802d3c]
// 0070bf8a  85c0                 test eax, eax
// 0070bf8c  7409                 je 0x70bf97
// 0070bf8e  6a00                 push 0
// 0070bf90  8bce                 mov ecx, esi
// 0070bf92  e8e9e6ffff           call 0x70a680
// 0070bf97  5e                   pop esi
// 0070bf98  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?Activate@CXTPToolTipContextToolTip@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
