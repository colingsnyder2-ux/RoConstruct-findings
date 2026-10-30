// roc 2009-12 00804a70  unit: CXTPCommandBar  size: 499 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804a70
//
// 00804a70  6aff                 push -1
// 00804a72  68c8959500           push 0x9595c8
// 00804a77  64a100000000         mov eax, dword ptr fs:[0]
// 00804a7d  50                   push eax
// 00804a7e  83ec08               sub esp, 8
// 00804a81  53                   push ebx
// 00804a82  55                   push ebp
// 00804a83  56                   push esi
// 00804a84  57                   push edi
// 00804a85  a10052b600           mov eax, dword ptr [0xb65200]
// 00804a8a  33c4                 xor eax, esp
// 00804a8c  50                   push eax
// 00804a8d  8d44241c             lea eax, [esp + 0x1c]
// 00804a91  64a300000000         mov dword ptr fs:[0], eax
// 00804a97  8bf1                 mov esi, ecx
// 00804a99  89742414             mov dword ptr [esp + 0x14], esi
// 00804a9d  e8a6f6feff           call 0x7f4148
// 00804aa2  8d6e54               lea ebp, [esi + 0x54]
// 00804aa5  33ff                 xor edi, edi
// 00804aa7  8bcd                 mov ecx, ebp
// 00804aa9  897c2424             mov dword ptr [esp + 0x24], edi
// 00804aad  e8eeb90600           call 0x8704a0
// 00804ab2  bb01000000           mov ebx, 1
// 00804ab7  8d4e5c               lea ecx, [esi + 0x5c]
// 00804aba  885c2424             mov byte ptr [esp + 0x24], bl
// 00804abe  e81d7d0300           call 0x83c7e0
// 00804ac3  8d8ef4000000         lea ecx, [esi + 0xf4]
// 00804ac9  c706842b9f00         mov dword ptr [esi], 0x9f2b84
// 00804acf  c74500742b9f00       mov dword ptr [ebp], 0x9f2b74
// 00804ad6  c7465c142b9f00       mov dword ptr [esi + 0x5c], 0x9f2b14
// 00804add  ff1574de9800         call dword ptr [0x98de74]
// 00804ae3  8bce                 mov ecx, esi
// 00804ae5  c644242403           mov byte ptr [esp + 0x24], 3
// 00804aea  e859191200           call 0x926448
// 00804aef  89be04010000         mov dword ptr [esi + 0x104], edi
// 00804af5  89bee8000000         mov dword ptr [esi + 0xe8], edi
// 00804afb  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 00804b01  89be70010000         mov dword ptr [esi + 0x170], edi
// 00804b07  e804340400           call 0x847f10
// 00804b0c  56                   push esi
// 00804b0d  8bc8                 mov ecx, eax
// 00804b0f  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 00804b15  e8a6070400           call 0x8452c0
// 00804b1a  83c8ff               or eax, 0xffffffff
// 00804b1d  89867c010000         mov dword ptr [esi + 0x17c], eax
// 00804b23  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 00804b29  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00804b2f  33c0                 xor eax, eax
// 00804b31  89860c010000         mov dword ptr [esi + 0x10c], eax
// 00804b37  898614010000         mov dword ptr [esi + 0x114], eax
// 00804b3d  8d863c010000         lea eax, [esi + 0x13c]
// 00804b43  50                   push eax
// 00804b44  c7860001000007000000 mov dword ptr [esi + 0x100], 7
// 00804b4e  89bee0000000         mov dword ptr [esi + 0xe0], edi
// 00804b54  89bed4000000         mov dword ptr [esi + 0xd4], edi
// 00804b5a  89beec000000         mov dword ptr [esi + 0xec], edi
// 00804b60  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 00804b66  89be08010000         mov dword ptr [esi + 0x108], edi
// 00804b6c  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00804b72  89bed8000000         mov dword ptr [esi + 0xd8], edi
// 00804b78  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 00804b7e  89be10010000         mov dword ptr [esi + 0x110], edi
// 00804b84  89be18010000         mov dword ptr [esi + 0x118], edi
// 00804b8a  c786c8000000ff7f0000 mov dword ptr [esi + 0xc8], 0x7fff
// 00804b94  c786f000000000004000 mov dword ptr [esi + 0xf0], 0x400000
// 00804b9e  899e38010000         mov dword ptr [esi + 0x138], ebx
// 00804ba4  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 00804baa  ff159cca9800         call dword ptr [0x98ca9c]
// 00804bb0  6a30                 push 0x30
// 00804bb2  89be50010000         mov dword ptr [esi + 0x150], edi
// 00804bb8  89be54010000         mov dword ptr [esi + 0x154], edi
// 00804bbe  899ec0000000         mov dword ptr [esi + 0xc0], ebx
// 00804bc4  899e58010000         mov dword ptr [esi + 0x158], ebx
// 00804bca  c7861c01000002000000 mov dword ptr [esi + 0x11c], 2
// 00804bd4  89be20010000         mov dword ptr [esi + 0x120], edi
// 00804bda  89be24010000         mov dword ptr [esi + 0x124], edi
// 00804be0  89be28010000         mov dword ptr [esi + 0x128], edi
// 00804be6  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 00804bec  89be64010000         mov dword ptr [esi + 0x164], edi
// 00804bf2  89be68010000         mov dword ptr [esi + 0x168], edi
// 00804bf8  89be30010000         mov dword ptr [esi + 0x130], edi
// 00804bfe  89be60010000         mov dword ptr [esi + 0x160], edi
// 00804c04  89be74010000         mov dword ptr [esi + 0x174], edi
// 00804c0a  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 00804c10  89be6c010000         mov dword ptr [esi + 0x16c], edi
// 00804c16  89be5c010000         mov dword ptr [esi + 0x15c], edi
// 00804c1c  89be4c010000         mov dword ptr [esi + 0x14c], edi
// 00804c22  e839ecfeff           call 0x7f3860
// 00804c27  83c404               add esp, 4
// 00804c2a  89442418             mov dword ptr [esp + 0x18], eax
// 00804c2e  c644242404           mov byte ptr [esp + 0x24], 4
// 00804c33  3bc7                 cmp eax, edi
// 00804c35  7410                 je 0x804c47
// 00804c37  56                   push esi
// 00804c38  8bc8                 mov ecx, eax
// 00804c3a  e8c1890800           call 0x88d600
// 00804c3f  898678010000         mov dword ptr [esi + 0x178], eax
// 00804c45  eb06                 jmp 0x804c4d
// 00804c47  89be78010000         mov dword ptr [esi + 0x178], edi
// 00804c4d  8bc6                 mov eax, esi
// 00804c4f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00804c53  64890d00000000       mov dword ptr fs:[0], ecx
// 00804c5a  59                   pop ecx
// 00804c5b  5f                   pop edi
// 00804c5c  5e                   pop esi
// 00804c5d  5d                   pop ebp
// 00804c5e  5b                   pop ebx
// 00804c5f  83c414               add esp, 0x14
// 00804c62  c3                   ret 
// copied from an identical function in another client (function ??0CXTPCommandBar@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp