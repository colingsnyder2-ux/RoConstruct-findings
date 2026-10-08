// roc 2010-06 007c5b00  unit: CXTPToolBar  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c5b00
//
// 007c5b00  83ec10               sub esp, 0x10
// 007c5b03  8b442414             mov eax, dword ptr [esp + 0x14]
// 007c5b07  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007c5b0b  56                   push esi
// 007c5b0c  57                   push edi
// 007c5b0d  8bf1                 mov esi, ecx
// 007c5b0f  33ff                 xor edi, edi
// 007c5b11  57                   push edi
// 007c5b12  8bc8                 mov ecx, eax
// 007c5b14  52                   push edx
// 007c5b15  81e1ffff4000         and ecx, 0x40ffff
// 007c5b1b  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 007c5b21  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007c5b25  51                   push ecx
// 007c5b26  8d542414             lea edx, [esp + 0x14]
// 007c5b2a  52                   push edx
// 007c5b2b  250000bfff           and eax, 0xffbf0000
// 007c5b30  0d00000006           or eax, 0x6000000
// 007c5b35  50                   push eax
// 007c5b36  57                   push edi
// 007c5b37  68ec7aa500           push 0xa57aec
// 007c5b3c  57                   push edi
// 007c5b3d  8bce                 mov ecx, esi
// 007c5b3f  897c2428             mov dword ptr [esp + 0x28], edi
// 007c5b43  897c242c             mov dword ptr [esp + 0x2c], edi
// 007c5b47  897c2430             mov dword ptr [esp + 0x30], edi
// 007c5b4b  897c2434             mov dword ptr [esp + 0x34], edi
// 007c5b4f  e8be1efeff           call 0x7a7a12
// 007c5b54  85c0                 test eax, eax
// 007c5b56  7508                 jne 0x7c5b60
// 007c5b58  5f                   pop edi
// 007c5b59  5e                   pop esi
// 007c5b5a  83c410               add esp, 0x10
// 007c5b5d  c20c00               ret 0xc
// 007c5b60  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007c5b66  89be00010000         mov dword ptr [esi + 0x100], edi
// 007c5b6c  3bcf                 cmp ecx, edi
// 007c5b6e  740e                 je 0x7c5b7e
// 007c5b70  8b01                 mov eax, dword ptr [ecx]
// 007c5b72  8b10                 mov edx, dword ptr [eax]
// 007c5b74  6a01                 push 1
// 007c5b76  ffd2                 call edx
// 007c5b78  89be84010000         mov dword ptr [esi + 0x184], edi
// 007c5b7e  83a6ec000000c0       and dword ptr [esi + 0xec], 0xffffffc0
// 007c5b85  f686f000000010       test byte ptr [esi + 0xf0], 0x10
// 007c5b8c  7411                 je 0x7c5b9f
// 007c5b8e  39be04010000         cmp dword ptr [esi + 0x104], edi
// 007c5b94  7509                 jne 0x7c5b9f
// 007c5b96  6a01                 push 1
// 007c5b98  8bce                 mov ecx, esi
// 007c5b9a  e863721b00           call 0x97ce02
// 007c5b9f  5f                   pop edi
// 007c5ba0  b801000000           mov eax, 1
// 007c5ba5  5e                   pop esi
// 007c5ba6  83c410               add esp, 0x10
// 007c5ba9  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?CreateToolBar@CXTPToolBar@@QAEHKPAVCWnd@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
