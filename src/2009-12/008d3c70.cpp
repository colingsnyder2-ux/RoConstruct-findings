// roc 2009-12 008d3c70  unit: CXTPTabPaintManager  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d3c70
//
// 008d3c70  6aff                 push -1
// 008d3c72  682e539600           push 0x96532e
// 008d3c77  64a100000000         mov eax, dword ptr fs:[0]
// 008d3c7d  50                   push eax
// 008d3c7e  51                   push ecx
// 008d3c7f  53                   push ebx
// 008d3c80  55                   push ebp
// 008d3c81  56                   push esi
// 008d3c82  57                   push edi
// 008d3c83  a10052b600           mov eax, dword ptr [0xb65200]
// 008d3c88  33c4                 xor eax, esp
// 008d3c8a  50                   push eax
// 008d3c8b  8d442418             lea eax, [esp + 0x18]
// 008d3c8f  64a300000000         mov dword ptr fs:[0], eax
// 008d3c95  8bf1                 mov esi, ecx
// 008d3c97  89742414             mov dword ptr [esp + 0x14], esi
// 008d3c9b  e8a2270500           call 0x926442
// 008d3ca0  33ff                 xor edi, edi
// 008d3ca2  8d8ee8000000         lea ecx, [esi + 0xe8]
// 008d3ca8  897c2420             mov dword ptr [esp + 0x20], edi
// 008d3cac  c7064caba000         mov dword ptr [esi], 0xa0ab4c
// 008d3cb2  e859d9ffff           call 0x8d1610
// 008d3cb7  b898019b00           mov eax, 0x9b0198
// 008d3cbc  89be10010000         mov dword ptr [esi + 0x110], edi
// 008d3cc2  89860c010000         mov dword ptr [esi + 0x10c], eax
// 008d3cc8  89be18010000         mov dword ptr [esi + 0x118], edi
// 008d3cce  898614010000         mov dword ptr [esi + 0x114], eax
// 008d3cd4  89be20010000         mov dword ptr [esi + 0x120], edi
// 008d3cda  89861c010000         mov dword ptr [esi + 0x11c], eax
// 008d3ce0  89be28010000         mov dword ptr [esi + 0x128], edi
// 008d3ce6  898624010000         mov dword ptr [esi + 0x124], eax
// 008d3cec  bb01000000           mov ebx, 1
// 008d3cf1  57                   push edi
// 008d3cf2  8bce                 mov ecx, esi
// 008d3cf4  c644242405           mov byte ptr [esp + 0x24], 5
// 008d3cf9  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 008d3cff  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 008d3d05  89bee0000000         mov dword ptr [esi + 0xe0], edi
// 008d3d0b  e840f6ffff           call 0x8d3350
// 008d3d10  8b2d38ca9800         mov ebp, dword ptr [0x98ca38]
// 008d3d16  57                   push edi
// 008d3d17  57                   push edi
// 008d3d18  57                   push edi
// 008d3d19  57                   push edi
// 008d3d1a  8d4640               lea eax, [esi + 0x40]
// 008d3d1d  50                   push eax
// 008d3d1e  897e20               mov dword ptr [esi + 0x20], edi
// 008d3d21  897e28               mov dword ptr [esi + 0x28], edi
// 008d3d24  897e2c               mov dword ptr [esi + 0x2c], edi
// 008d3d27  895e24               mov dword ptr [esi + 0x24], ebx
// 008d3d2a  899eb8000000         mov dword ptr [esi + 0xb8], ebx
// 008d3d30  897e30               mov dword ptr [esi + 0x30], edi
// 008d3d33  897e34               mov dword ptr [esi + 0x34], edi
// 008d3d36  89be04010000         mov dword ptr [esi + 0x104], edi
// 008d3d3c  89be08010000         mov dword ptr [esi + 0x108], edi
// 008d3d42  897e38               mov dword ptr [esi + 0x38], edi
// 008d3d45  897e3c               mov dword ptr [esi + 0x3c], edi
// 008d3d48  89be80000000         mov dword ptr [esi + 0x80], edi
// 008d3d4e  899e84000000         mov dword ptr [esi + 0x84], ebx
// 008d3d54  899eac000000         mov dword ptr [esi + 0xac], ebx
// 008d3d5a  ffd5                 call ebp
// 008d3d5c  57                   push edi
// 008d3d5d  57                   push edi
// 008d3d5e  57                   push edi
// 008d3d5f  57                   push edi
// 008d3d60  8d4e50               lea ecx, [esi + 0x50]
// 008d3d63  51                   push ecx
// 008d3d64  ffd5                 call ebp
// 008d3d66  57                   push edi
// 008d3d67  57                   push edi
// 008d3d68  57                   push edi
// 008d3d69  57                   push edi
// 008d3d6a  8d5660               lea edx, [esi + 0x60]
// 008d3d6d  52                   push edx
// 008d3d6e  ffd5                 call ebp
// 008d3d70  b810000000           mov eax, 0x10
// 008d3d75  8bc8                 mov ecx, eax
// 008d3d77  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 008d3d7d  898688000000         mov dword ptr [esi + 0x88], eax
// 008d3d83  898e8c000000         mov dword ptr [esi + 0x8c], ecx
// 008d3d89  c786d800000046000000 mov dword ptr [esi + 0xd8], 0x46
// 008d3d93  89bed4000000         mov dword ptr [esi + 0xd4], edi
// 008d3d99  89bed0000000         mov dword ptr [esi + 0xd0], edi
// 008d3d9f  899e94000000         mov dword ptr [esi + 0x94], ebx
// 008d3da5  89be90000000         mov dword ptr [esi + 0x90], edi
// 008d3dab  899e98000000         mov dword ptr [esi + 0x98], ebx
// 008d3db1  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 008d3db7  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 008d3dbd  899ea8000000         mov dword ptr [esi + 0xa8], ebx
// 008d3dc3  c786dc00000002000000 mov dword ptr [esi + 0xdc], 2
// 008d3dcd  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 008d3dd3  57                   push edi
// 008d3dd4  6a06                 push 6
// 008d3dd6  57                   push edi
// 008d3dd7  6a06                 push 6
// 008d3dd9  8d4670               lea eax, [esi + 0x70]
// 008d3ddc  50                   push eax
// 008d3ddd  89be30010000         mov dword ptr [esi + 0x130], edi
// 008d3de3  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 008d3de9  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 008d3def  ffd5                 call ebp
// 008d3df1  b90f000000           mov ecx, 0xf
// 008d3df6  b80e000000           mov eax, 0xe
// 008d3dfb  898ecc000000         mov dword ptr [esi + 0xcc], ecx
// 008d3e01  8bce                 mov ecx, esi
// 008d3e03  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 008d3e09  c7869c00000004000000 mov dword ptr [esi + 0x9c], 4
// 008d3e13  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 008d3e19  e82a260500           call 0x926448
// 008d3e1e  8bce                 mov ecx, esi
// 008d3e20  e80bd0ffff           call 0x8d0e30
// 008d3e25  8bc6                 mov eax, esi
// 008d3e27  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d3e2b  64890d00000000       mov dword ptr fs:[0], ecx
// 008d3e32  59                   pop ecx
// 008d3e33  5f                   pop edi
// 008d3e34  5e                   pop esi
// 008d3e35  5d                   pop ebp
// 008d3e36  5b                   pop ebx
// 008d3e37  83c410               add esp, 0x10
// 008d3e3a  c3                   ret 
// copied from an identical function in another client (function ??0CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabPaintManager.cpp