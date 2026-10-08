// roc 2009-06 0073a950  unit: CXTPToolBar  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073a950
//
// 0073a950  83ec10               sub esp, 0x10
// 0073a953  8b442414             mov eax, dword ptr [esp + 0x14]
// 0073a957  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073a95b  56                   push esi
// 0073a95c  57                   push edi
// 0073a95d  8bf1                 mov esi, ecx
// 0073a95f  33ff                 xor edi, edi
// 0073a961  57                   push edi
// 0073a962  8bc8                 mov ecx, eax
// 0073a964  52                   push edx
// 0073a965  81e1ffff4000         and ecx, 0x40ffff
// 0073a96b  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 0073a971  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0073a975  51                   push ecx
// 0073a976  8d542414             lea edx, [esp + 0x14]
// 0073a97a  52                   push edx
// 0073a97b  250000bfff           and eax, 0xffbf0000
// 0073a980  0d00000006           or eax, 0x6000000
// 0073a985  50                   push eax
// 0073a986  57                   push edi
// 0073a987  6834388f00           push 0x8f3834
// 0073a98c  57                   push edi
// 0073a98d  8bce                 mov ecx, esi
// 0073a98f  897c2428             mov dword ptr [esp + 0x28], edi
// 0073a993  897c242c             mov dword ptr [esp + 0x2c], edi
// 0073a997  897c2430             mov dword ptr [esp + 0x30], edi
// 0073a99b  897c2434             mov dword ptr [esp + 0x34], edi
// 0073a99f  e806e1fdff           call 0x718aaa
// 0073a9a4  85c0                 test eax, eax
// 0073a9a6  7508                 jne 0x73a9b0
// 0073a9a8  5f                   pop edi
// 0073a9a9  5e                   pop esi
// 0073a9aa  83c410               add esp, 0x10
// 0073a9ad  c20c00               ret 0xc
// 0073a9b0  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0073a9b6  89be00010000         mov dword ptr [esi + 0x100], edi
// 0073a9bc  3bcf                 cmp ecx, edi
// 0073a9be  740e                 je 0x73a9ce
// 0073a9c0  8b01                 mov eax, dword ptr [ecx]
// 0073a9c2  8b10                 mov edx, dword ptr [eax]
// 0073a9c4  6a01                 push 1
// 0073a9c6  ffd2                 call edx
// 0073a9c8  89be84010000         mov dword ptr [esi + 0x184], edi
// 0073a9ce  83a6ec000000c0       and dword ptr [esi + 0xec], 0xffffffc0
// 0073a9d5  f686f000000010       test byte ptr [esi + 0xf0], 0x10
// 0073a9dc  7411                 je 0x73a9ef
// 0073a9de  39be04010000         cmp dword ptr [esi + 0x104], edi
// 0073a9e4  7509                 jne 0x73a9ef
// 0073a9e6  6a01                 push 1
// 0073a9e8  8bce                 mov ecx, esi
// 0073a9ea  e8a7151100           call 0x84bf96
// 0073a9ef  5f                   pop edi
// 0073a9f0  b801000000           mov eax, 1
// 0073a9f5  5e                   pop esi
// 0073a9f6  83c410               add esp, 0x10
// 0073a9f9  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?CreateToolBar@CXTPToolBar@@QAEHKPAVCWnd@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
