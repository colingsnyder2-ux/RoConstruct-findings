// from server: 100% by auto
// roc 2008-06 0051d2f0  unit: seg_00510000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d2f0
//
// 0051d2f0  57                   push edi
// 0051d2f1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0051d2f5  85ff                 test edi, edi
// 0051d2f7  7476                 je 0x51d36f
// 0051d2f9  56                   push esi
// 0051d2fa  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051d2fe  85f6                 test esi, esi
// 0051d300  746c                 je 0x51d36e
// 0051d302  53                   push ebx
// 0051d303  6a00                 push 0
// 0051d305  6800100000           push 0x1000
// 0051d30a  56                   push esi
// 0051d30b  57                   push edi
// 0051d30c  e8bf0a0000           call 0x51ddd0
// 0051d311  6800030000           push 0x300
// 0051d316  57                   push edi
// 0051d317  e884d10000           call 0x52a4a0
// 0051d31c  6800030000           push 0x300
// 0051d321  6a00                 push 0
// 0051d323  50                   push eax
// 0051d324  898714010000         mov dword ptr [edi + 0x114], eax
// 0051d32a  e8d5431800           call 0x6a1704
// 0051d32f  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0051d333  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0051d337  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 0051d33d  8d045b               lea eax, [ebx + ebx*2]
// 0051d340  50                   push eax
// 0051d341  51                   push ecx
// 0051d342  52                   push edx
// 0051d343  e898441800           call 0x6a17e0
// 0051d348  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 0051d34e  83c430               add esp, 0x30
// 0051d351  894610               mov dword ptr [esi + 0x10], eax
// 0051d354  66899f18010000       mov word ptr [edi + 0x118], bx
// 0051d35b  818eb800000000100000 or dword ptr [esi + 0xb8], 0x1000
// 0051d365  834e0808             or dword ptr [esi + 8], 8
// 0051d369  66895e14             mov word ptr [esi + 0x14], bx
// 0051d36d  5b                   pop ebx
// 0051d36e  5e                   pop esi
// 0051d36f  5f                   pop edi
// 0051d370  c3                   ret 
// library libpng-1.2.6/pngset.c (function _png_set_PLTE)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngset.c
