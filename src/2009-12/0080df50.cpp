// roc 2009-12 0080df50  unit: IIHH::?$CMap  size: 762 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080df50
//
// 0080df50  55                   push ebp
// 0080df51  8bec                 mov ebp, esp
// 0080df53  83e4c0               and esp, 0xffffffc0
// 0080df56  6aff                 push -1
// 0080df58  68039d9500           push 0x959d03
// 0080df5d  64a100000000         mov eax, dword ptr fs:[0]
// 0080df63  50                   push eax
// 0080df64  81ece4000000         sub esp, 0xe4
// 0080df6a  53                   push ebx
// 0080df6b  55                   push ebp
// 0080df6c  56                   push esi
// 0080df6d  57                   push edi
// 0080df6e  a10052b600           mov eax, dword ptr [0xb65200]
// 0080df73  33c4                 xor eax, esp
// 0080df75  50                   push eax
// 0080df76  8d8424f8000000       lea eax, [esp + 0xf8]
// 0080df7d  64a300000000         mov dword ptr fs:[0], eax
// 0080df83  8be9                 mov ebp, ecx
// 0080df85  896c2440             mov dword ptr [esp + 0x40], ebp
// 0080df89  33ff                 xor edi, edi
// 0080df8b  397d50               cmp dword ptr [ebp + 0x50], edi
// 0080df8e  0f849f020000         je 0x80e233
// 0080df94  8d4c2460             lea ecx, [esp + 0x60]
// 0080df98  e893c8ffff           call 0x80a830
// 0080df9d  8d4530               lea eax, [ebp + 0x30]
// 0080dfa0  50                   push eax
// 0080dfa1  89bc2404010000       mov dword ptr [esp + 0x104], edi
// 0080dfa8  e813fcffff           call 0x80dbc0
// 0080dfad  8d4c2460             lea ecx, [esp + 0x60]
// 0080dfb1  e83ab1ffff           call 0x8090f0
// 0080dfb6  85c0                 test eax, eax
// 0080dfb8  0f8545010000         jne 0x80e103
// 0080dfbe  8d4c244c             lea ecx, [esp + 0x4c]
// 0080dfc2  51                   push ecx
// 0080dfc3  8d4c2464             lea ecx, [esp + 0x64]
// 0080dfc7  e8a416d2ff           call 0x52f670
// 0080dfcc  50                   push eax
// 0080dfcd  ff15ecc99800         call dword ptr [0x98c9ec]
// 0080dfd3  85c0                 test eax, eax
// 0080dfd5  0f8437020000         je 0x80e212
// 0080dfdb  57                   push edi
// 0080dfdc  e8afca0300           call 0x84aa90
// 0080dfe1  83c404               add esp, 4
// 0080dfe4  85c0                 test eax, eax
// 0080dfe6  0f85e9000000         jne 0x80e0d5
// 0080dfec  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0080dff0  52                   push edx
// 0080dff1  e86e63feff           call 0x7f4364
// 0080dff6  50                   push eax
// 0080dff7  57                   push edi
// 0080dff8  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0080dfff  e87cd80300           call 0x84b880
// 0080e004  8b442458             mov eax, dword ptr [esp + 0x58]
// 0080e008  50                   push eax
// 0080e009  c684240401000001     mov byte ptr [esp + 0x104], 1
// 0080e011  e84e63feff           call 0x7f4364
// 0080e016  50                   push eax
// 0080e017  57                   push edi
// 0080e018  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0080e01f  e85cd80300           call 0x84b880
// 0080e024  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0080e028  8d8c2484000000       lea ecx, [esp + 0x84]
// 0080e02f  51                   push ecx
// 0080e030  6a18                 push 0x18
// 0080e032  52                   push edx
// 0080e033  ff155cb19800         call dword ptr [0x98b15c]
// 0080e039  39bc2488000000       cmp dword ptr [esp + 0x88], edi
// 0080e040  7e73                 jle 0x80e0b5
// 0080e042  8b1d18b19800         mov ebx, dword ptr [0x98b118]
// 0080e048  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0080e04f  90                   nop 
// 0080e050  33f6                 xor esi, esi
// 0080e052  85c0                 test eax, eax
// 0080e054  7e55                 jle 0x80e0ab
// 0080e056  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0080e05d  56                   push esi
// 0080e05e  57                   push edi
// 0080e05f  50                   push eax
// 0080e060  ffd3                 call ebx
// 0080e062  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0080e069  56                   push esi
// 0080e06a  57                   push edi
// 0080e06b  51                   push ecx
// 0080e06c  8be8                 mov ebp, eax
// 0080e06e  ffd3                 call ebx
// 0080e070  85c0                 test eax, eax
// 0080e072  7527                 jne 0x80e09b
// 0080e074  dd0570329f00         fld qword ptr [0x9f3270]
// 0080e07a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080e07e  83ec08               sub esp, 8
// 0080e081  dd1c24               fstp qword ptr [esp]
// 0080e084  55                   push ebp
// 0080e085  e8c6b0ffff           call 0x809150
// 0080e08a  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 0080e091  50                   push eax
// 0080e092  56                   push esi
// 0080e093  57                   push edi
// 0080e094  52                   push edx
// 0080e095  ff1514b19800         call dword ptr [0x98b114]
// 0080e09b  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0080e0a2  46                   inc esi
// 0080e0a3  3bf0                 cmp esi, eax
// 0080e0a5  7caf                 jl 0x80e056
// 0080e0a7  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0080e0ab  47                   inc edi
// 0080e0ac  3bbc2488000000       cmp edi, dword ptr [esp + 0x88]
// 0080e0b3  7c9b                 jl 0x80e050
// 0080e0b5  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 0080e0bc  e8cfd80300           call 0x84b990
// 0080e0c1  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0080e0c8  c684240001000000     mov byte ptr [esp + 0x100], 0
// 0080e0d0  e8bbd80300           call 0x84b990
// 0080e0d5  8d44244c             lea eax, [esp + 0x4c]
// 0080e0d9  50                   push eax
// 0080e0da  ff1584ca9800         call dword ptr [0x98ca84]
// 0080e0e0  50                   push eax
// 0080e0e1  8d4c2464             lea ecx, [esp + 0x64]
// 0080e0e5  e876ecffff           call 0x80cd60
// 0080e0ea  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0080e0ee  8b353cb19800         mov esi, dword ptr [0x98b13c]
// 0080e0f4  51                   push ecx
// 0080e0f5  ffd6                 call esi
// 0080e0f7  8b542458             mov edx, dword ptr [esp + 0x58]
// 0080e0fb  52                   push edx
// 0080e0fc  ffd6                 call esi
// 0080e0fe  e90f010000           jmp 0x80e212
// 0080e103  8d4c2460             lea ecx, [esp + 0x60]
// 0080e107  e834efffff           call 0x80d040
// 0080e10c  85c0                 test eax, eax
// 0080e10e  0f84fe000000         je 0x80e212
// 0080e114  8d4c2460             lea ecx, [esp + 0x60]
// 0080e118  e823efffff           call 0x80d040
// 0080e11d  8bf0                 mov esi, eax
// 0080e11f  8d442444             lea eax, [esp + 0x44]
// 0080e123  50                   push eax
// 0080e124  8d4c2464             lea ecx, [esp + 0x64]
// 0080e128  e8e3afffff           call 0x809110
// 0080e12d  8b442448             mov eax, dword ptr [esp + 0x48]
// 0080e131  0faf442444           imul eax, dword ptr [esp + 0x44]
// 0080e136  3bc7                 cmp eax, edi
// 0080e138  0f86d4000000         jbe 0x80e212
// 0080e13e  dd0570329f00         fld qword ptr [0x9f3270]
// 0080e144  8bc8                 mov ecx, eax
// 0080e146  dd05084b9b00         fld qword ptr [0x9b4b08]
// 0080e14c  0fb64603             movzx eax, byte ptr [esi + 3]
// 0080e150  89442440             mov dword ptr [esp + 0x40], eax
// 0080e154  3bc7                 cmp eax, edi
// 0080e156  0f84a6000000         je 0x80e202
// 0080e15c  db442440             fild dword ptr [esp + 0x40]
// 0080e160  0fb616               movzx edx, byte ptr [esi]
// 0080e163  89542440             mov dword ptr [esp + 0x40], edx
// 0080e167  0fb65601             movzx edx, byte ptr [esi + 1]
// 0080e16b  d8ca                 fmul st(2)
// 0080e16d  db442440             fild dword ptr [esp + 0x40]
// 0080e171  d97c2440             fnstcw word ptr [esp + 0x40]
// 0080e175  0fb7442440           movzx eax, word ptr [esp + 0x40]
// 0080e17a  d8ca                 fmul st(2)
// 0080e17c  0d000c0000           or eax, 0xc00
// 0080e181  89442444             mov dword ptr [esp + 0x44], eax
// 0080e185  d8c1                 fadd st(1)
// 0080e187  d96c2444             fldcw word ptr [esp + 0x44]
// 0080e18b  db5c2444             fistp dword ptr [esp + 0x44]
// 0080e18f  0fb6442444           movzx eax, byte ptr [esp + 0x44]
// 0080e194  8806                 mov byte ptr [esi], al
// 0080e196  89542444             mov dword ptr [esp + 0x44], edx
// 0080e19a  0fb65602             movzx edx, byte ptr [esi + 2]
// 0080e19e  d96c2440             fldcw word ptr [esp + 0x40]
// 0080e1a2  db442444             fild dword ptr [esp + 0x44]
// 0080e1a6  d97c2440             fnstcw word ptr [esp + 0x40]
// 0080e1aa  d8ca                 fmul st(2)
// 0080e1ac  0fb7442440           movzx eax, word ptr [esp + 0x40]
// 0080e1b1  0d000c0000           or eax, 0xc00
// 0080e1b6  89442444             mov dword ptr [esp + 0x44], eax
// 0080e1ba  d8c1                 fadd st(1)
// 0080e1bc  d96c2444             fldcw word ptr [esp + 0x44]
// 0080e1c0  db5c2444             fistp dword ptr [esp + 0x44]
// 0080e1c4  0fb6442444           movzx eax, byte ptr [esp + 0x44]
// 0080e1c9  89542444             mov dword ptr [esp + 0x44], edx
// 0080e1cd  884601               mov byte ptr [esi + 1], al
// 0080e1d0  d96c2440             fldcw word ptr [esp + 0x40]
// 0080e1d4  db442444             fild dword ptr [esp + 0x44]
// 0080e1d8  d97c2440             fnstcw word ptr [esp + 0x40]
// 0080e1dc  d8ca                 fmul st(2)
// 0080e1de  0fb7442440           movzx eax, word ptr [esp + 0x40]
// 0080e1e3  0d000c0000           or eax, 0xc00
// 0080e1e8  89442444             mov dword ptr [esp + 0x44], eax
// 0080e1ec  dec1                 faddp st(1)
// 0080e1ee  d96c2444             fldcw word ptr [esp + 0x44]
// 0080e1f2  db5c2444             fistp dword ptr [esp + 0x44]
// 0080e1f6  0fb6442444           movzx eax, byte ptr [esp + 0x44]
// 0080e1fb  884602               mov byte ptr [esi + 2], al
// 0080e1fe  d96c2440             fldcw word ptr [esp + 0x40]
// 0080e202  83c604               add esi, 4
// 0080e205  83e901               sub ecx, 1
// 0080e208  0f853effffff         jne 0x80e14c
// 0080e20e  ddd8                 fstp st(0)
// 0080e210  ddd8                 fstp st(0)
// 0080e212  8d4c2460             lea ecx, [esp + 0x60]
// 0080e216  51                   push ecx
// 0080e217  8d4d54               lea ecx, [ebp + 0x54]
// 0080e21a  e8a1f9ffff           call 0x80dbc0
// 0080e21f  8d4c2460             lea ecx, [esp + 0x60]
// 0080e223  c7842400010000ffffffff mov dword ptr [esp + 0x100], 0xffffffff
// 0080e22e  e8adebffff           call 0x80cde0
// 0080e233  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 0080e23a  64890d00000000       mov dword ptr fs:[0], ecx
// 0080e241  59                   pop ecx
// 0080e242  5f                   pop edi
// 0080e243  5e                   pop esi
// 0080e244  5d                   pop ebp
// 0080e245  5b                   pop ebx
// 0080e246  8be5                 mov esp, ebp
// 0080e248  5d                   pop ebp
// 0080e249  c3                   ret 
// copied from an identical function in another client (function ?CreateFadedIcon@CXTPImageManagerIcon@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp