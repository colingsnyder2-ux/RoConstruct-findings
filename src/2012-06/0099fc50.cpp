// roc 2012-06 0099fc50  unit: CXTPToolBar  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099fc50
//
// 0099fc50  83ec10               sub esp, 0x10
// 0099fc53  8b442414             mov eax, dword ptr [esp + 0x14]
// 0099fc57  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0099fc5b  56                   push esi
// 0099fc5c  57                   push edi
// 0099fc5d  8bf1                 mov esi, ecx
// 0099fc5f  33ff                 xor edi, edi
// 0099fc61  57                   push edi
// 0099fc62  8bc8                 mov ecx, eax
// 0099fc64  52                   push edx
// 0099fc65  81e1ffff4000         and ecx, 0x40ffff
// 0099fc6b  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 0099fc71  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0099fc75  51                   push ecx
// 0099fc76  8d542414             lea edx, [esp + 0x14]
// 0099fc7a  52                   push edx
// 0099fc7b  250000bfff           and eax, 0xffbf0000
// 0099fc80  0d00000006           or eax, 0x6000000
// 0099fc85  50                   push eax
// 0099fc86  57                   push edi
// 0099fc87  681ceec000           push 0xc0ee1c
// 0099fc8c  57                   push edi
// 0099fc8d  8bce                 mov ecx, esi
// 0099fc8f  897c2428             mov dword ptr [esp + 0x28], edi
// 0099fc93  897c242c             mov dword ptr [esp + 0x2c], edi
// 0099fc97  897c2430             mov dword ptr [esp + 0x30], edi
// 0099fc9b  897c2434             mov dword ptr [esp + 0x34], edi
// 0099fc9f  e8e824feff           call 0x98218c
// 0099fca4  85c0                 test eax, eax
// 0099fca6  7508                 jne 0x99fcb0
// 0099fca8  5f                   pop edi
// 0099fca9  5e                   pop esi
// 0099fcaa  83c410               add esp, 0x10
// 0099fcad  c20c00               ret 0xc
// 0099fcb0  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0099fcb6  89be00010000         mov dword ptr [esi + 0x100], edi
// 0099fcbc  3bcf                 cmp ecx, edi
// 0099fcbe  740e                 je 0x99fcce
// 0099fcc0  8b01                 mov eax, dword ptr [ecx]
// 0099fcc2  8b10                 mov edx, dword ptr [eax]
// 0099fcc4  6a01                 push 1
// 0099fcc6  ffd2                 call edx
// 0099fcc8  89be84010000         mov dword ptr [esi + 0x184], edi
// 0099fcce  83a6ec000000c0       and dword ptr [esi + 0xec], 0xffffffc0
// 0099fcd5  f686f000000010       test byte ptr [esi + 0xf0], 0x10
// 0099fcdc  7411                 je 0x99fcef
// 0099fcde  39be04010000         cmp dword ptr [esi + 0x104], edi
// 0099fce4  7509                 jne 0x99fcef
// 0099fce6  6a01                 push 1
// 0099fce8  8bce                 mov ecx, esi
// 0099fcea  e807990f00           call 0xa995f6
// 0099fcef  5f                   pop edi
// 0099fcf0  b801000000           mov eax, 1
// 0099fcf5  5e                   pop esi
// 0099fcf6  83c410               add esp, 0x10
// 0099fcf9  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?CreateToolBar@CXTPToolBar@@QAEHKPAVCWnd@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
