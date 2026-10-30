// from server: 100% by auto
// roc 2008-06 006c2440  unit: CXTPToolBar  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c2440
//
// 006c2440  83ec10               sub esp, 0x10
// 006c2443  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c2447  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006c244b  56                   push esi
// 006c244c  57                   push edi
// 006c244d  8bf1                 mov esi, ecx
// 006c244f  33ff                 xor edi, edi
// 006c2451  57                   push edi
// 006c2452  8bc8                 mov ecx, eax
// 006c2454  52                   push edx
// 006c2455  81e1ffff4000         and ecx, 0x40ffff
// 006c245b  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 006c2461  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006c2465  51                   push ecx
// 006c2466  8d542414             lea edx, [esp + 0x14]
// 006c246a  52                   push edx
// 006c246b  250000bfff           and eax, 0xffbf0000
// 006c2470  0d00000006           or eax, 0x6000000
// 006c2475  50                   push eax
// 006c2476  57                   push edi
// 006c2477  68e4278500           push 0x8527e4
// 006c247c  57                   push edi
// 006c247d  8bce                 mov ecx, esi
// 006c247f  897c2428             mov dword ptr [esp + 0x28], edi
// 006c2483  897c242c             mov dword ptr [esp + 0x2c], edi
// 006c2487  897c2430             mov dword ptr [esp + 0x30], edi
// 006c248b  897c2434             mov dword ptr [esp + 0x34], edi
// 006c248f  e864e2fdff           call 0x6a06f8
// 006c2494  85c0                 test eax, eax
// 006c2496  7508                 jne 0x6c24a0
// 006c2498  5f                   pop edi
// 006c2499  5e                   pop esi
// 006c249a  83c410               add esp, 0x10
// 006c249d  c20c00               ret 0xc
// 006c24a0  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006c24a6  89be00010000         mov dword ptr [esi + 0x100], edi
// 006c24ac  3bcf                 cmp ecx, edi
// 006c24ae  740e                 je 0x6c24be
// 006c24b0  8b01                 mov eax, dword ptr [ecx]
// 006c24b2  8b10                 mov edx, dword ptr [eax]
// 006c24b4  6a01                 push 1
// 006c24b6  ffd2                 call edx
// 006c24b8  89be84010000         mov dword ptr [esi + 0x184], edi
// 006c24be  83a6ec000000c0       and dword ptr [esi + 0xec], 0xffffffc0
// 006c24c5  f686f000000010       test byte ptr [esi + 0xf0], 0x10
// 006c24cc  7411                 je 0x6c24df
// 006c24ce  39be04010000         cmp dword ptr [esi + 0x104], edi
// 006c24d4  7509                 jne 0x6c24df
// 006c24d6  6a01                 push 1
// 006c24d8  8bce                 mov ecx, esi
// 006c24da  e8919b0f00           call 0x7bc070
// 006c24df  5f                   pop edi
// 006c24e0  b801000000           mov eax, 1
// 006c24e5  5e                   pop esi
// 006c24e6  83c410               add esp, 0x10
// 006c24e9  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?CreateToolBar@CXTPToolBar@@QAEHKPAVCWnd@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
