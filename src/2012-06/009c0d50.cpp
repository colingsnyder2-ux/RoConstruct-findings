// from server: 100% by auto
// roc 2012-06 009c0d50  unit: CXTTreeBase  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0d50
//
// 009c0d50  83ec10               sub esp, 0x10
// 009c0d53  56                   push esi
// 009c0d54  8bf1                 mov esi, ecx
// 009c0d56  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0d59  e874880d00           call 0xa995d2
// 009c0d5e  a900020000           test eax, 0x200
// 009c0d63  747c                 je 0x9c0de1
// 009c0d65  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009c0d69  33c0                 xor eax, eax
// 009c0d6b  89442404             mov dword ptr [esp + 4], eax
// 009c0d6f  89442408             mov dword ptr [esp + 8], eax
// 009c0d73  8944240c             mov dword ptr [esp + 0xc], eax
// 009c0d77  89442410             mov dword ptr [esp + 0x10], eax
// 009c0d7b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009c0d7f  8d542404             lea edx, [esp + 4]
// 009c0d83  52                   push edx
// 009c0d84  89442408             mov dword ptr [esp + 8], eax
// 009c0d88  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c0d8b  6a00                 push 0
// 009c0d8d  894c2410             mov dword ptr [esp + 0x10], ecx
// 009c0d91  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c0d94  6811110000           push 0x1111
// 009c0d99  51                   push ecx
// 009c0d9a  ff15043cb200         call dword ptr [0xb23c04]
// 009c0da0  8b442410             mov eax, dword ptr [esp + 0x10]
// 009c0da4  85c0                 test eax, eax
// 009c0da6  7407                 je 0x9c0daf
// 009c0da8  f644240c46           test byte ptr [esp + 0xc], 0x46
// 009c0dad  7502                 jne 0x9c0db1
// 009c0daf  33c0                 xor eax, eax
// 009c0db1  394614               cmp dword ptr [esi + 0x14], eax
// 009c0db4  742b                 je 0x9c0de1
// 009c0db6  894614               mov dword ptr [esi + 0x14], eax
// 009c0db9  85c0                 test eax, eax
// 009c0dbb  7413                 je 0x9c0dd0
// 009c0dbd  8b5634               mov edx, dword ptr [esi + 0x34]
// 009c0dc0  8b4220               mov eax, dword ptr [edx + 0x20]
// 009c0dc3  6a00                 push 0
// 009c0dc5  6a37                 push 0x37
// 009c0dc7  6a55                 push 0x55
// 009c0dc9  50                   push eax
// 009c0dca  ff15e03ab200         call dword ptr [0xb23ae0]
// 009c0dd0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0dd3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009c0dd6  6a00                 push 0
// 009c0dd8  6a00                 push 0
// 009c0dda  52                   push edx
// 009c0ddb  ff15ec3bb200         call dword ptr [0xb23bec]
// 009c0de1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0de4  e8f518fcff           call 0x9826de
// 009c0de9  5e                   pop esi
// 009c0dea  83c410               add esp, 0x10
// 009c0ded  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnMouseMove@CXTPTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
