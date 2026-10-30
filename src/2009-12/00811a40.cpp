// roc 2009-12 00811a40  unit: CXTPToolBar  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00811a40
//
// 00811a40  83ec10               sub esp, 0x10
// 00811a43  8b442414             mov eax, dword ptr [esp + 0x14]
// 00811a47  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00811a4b  56                   push esi
// 00811a4c  57                   push edi
// 00811a4d  8bf1                 mov esi, ecx
// 00811a4f  33ff                 xor edi, edi
// 00811a51  57                   push edi
// 00811a52  8bc8                 mov ecx, eax
// 00811a54  52                   push edx
// 00811a55  81e1ffff4000         and ecx, 0x40ffff
// 00811a5b  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 00811a61  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00811a65  51                   push ecx
// 00811a66  8d542414             lea edx, [esp + 0x14]
// 00811a6a  52                   push edx
// 00811a6b  250000bfff           and eax, 0xffbf0000
// 00811a70  0d00000006           or eax, 0x6000000
// 00811a75  50                   push eax
// 00811a76  57                   push edi
// 00811a77  68fc379f00           push 0x9f37fc
// 00811a7c  57                   push edi
// 00811a7d  8bce                 mov ecx, esi
// 00811a7f  897c2428             mov dword ptr [esp + 0x28], edi
// 00811a83  897c242c             mov dword ptr [esp + 0x2c], edi
// 00811a87  897c2430             mov dword ptr [esp + 0x30], edi
// 00811a8b  897c2434             mov dword ptr [esp + 0x34], edi
// 00811a8f  e83e1efeff           call 0x7f38d2
// 00811a94  85c0                 test eax, eax
// 00811a96  7508                 jne 0x811aa0
// 00811a98  5f                   pop edi
// 00811a99  5e                   pop esi
// 00811a9a  83c410               add esp, 0x10
// 00811a9d  c20c00               ret 0xc
// 00811aa0  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00811aa6  89be00010000         mov dword ptr [esi + 0x100], edi
// 00811aac  3bcf                 cmp ecx, edi
// 00811aae  740e                 je 0x811abe
// 00811ab0  8b01                 mov eax, dword ptr [ecx]
// 00811ab2  8b10                 mov edx, dword ptr [eax]
// 00811ab4  6a01                 push 1
// 00811ab6  ffd2                 call edx
// 00811ab8  89be84010000         mov dword ptr [esi + 0x184], edi
// 00811abe  83a6ec000000c0       and dword ptr [esi + 0xec], 0xffffffc0
// 00811ac5  f686f000000010       test byte ptr [esi + 0xf0], 0x10
// 00811acc  7411                 je 0x811adf
// 00811ace  39be04010000         cmp dword ptr [esi + 0x104], edi
// 00811ad4  7509                 jne 0x811adf
// 00811ad6  6a01                 push 1
// 00811ad8  8bce                 mov ecx, esi
// 00811ada  e8e7491100           call 0x9264c6
// 00811adf  5f                   pop edi
// 00811ae0  b801000000           mov eax, 1
// 00811ae5  5e                   pop esi
// 00811ae6  83c410               add esp, 0x10
// 00811ae9  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?CreateToolBar@CXTPToolBar@@QAEHKPAVCWnd@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
