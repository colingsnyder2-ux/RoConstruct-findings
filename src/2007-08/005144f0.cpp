// roc 2007-08 005144f0  unit: G3D::_internal::DialogTemplate  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005144f0
//
// 005144f0  57                   push edi
// 005144f1  8b7c2408             mov edi, dword ptr [esp + 8]
// 005144f5  85ff                 test edi, edi
// 005144f7  7476                 je 0x51456f
// 005144f9  56                   push esi
// 005144fa  8b742410             mov esi, dword ptr [esp + 0x10]
// 005144fe  85f6                 test esi, esi
// 00514500  746c                 je 0x51456e
// 00514502  53                   push ebx
// 00514503  6a00                 push 0
// 00514505  6800100000           push 0x1000
// 0051450a  56                   push esi
// 0051450b  57                   push edi
// 0051450c  e85f0a0000           call 0x514f70
// 00514511  6800030000           push 0x300
// 00514516  57                   push edi
// 00514517  e864a70000           call 0x51ec80
// 0051451c  6800030000           push 0x300
// 00514521  6a00                 push 0
// 00514523  50                   push eax
// 00514524  898714010000         mov dword ptr [edi + 0x114], eax
// 0051452a  e85dc61100           call 0x630b8c
// 0051452f  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00514533  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00514537  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 0051453d  8d045b               lea eax, [ebx + ebx*2]
// 00514540  50                   push eax
// 00514541  51                   push ecx
// 00514542  52                   push edx
// 00514543  e804c81100           call 0x630d4c
// 00514548  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 0051454e  83c430               add esp, 0x30
// 00514551  894610               mov dword ptr [esi + 0x10], eax
// 00514554  66899f18010000       mov word ptr [edi + 0x118], bx
// 0051455b  818eb800000000100000 or dword ptr [esi + 0xb8], 0x1000
// 00514565  834e0808             or dword ptr [esi + 8], 8
// 00514569  66895e14             mov word ptr [esi + 0x14], bx
// 0051456d  5b                   pop ebx
// 0051456e  5e                   pop esi
// 0051456f  5f                   pop edi
// 00514570  c3                   ret 
// library libpng-1.2.6/pngset.c (function _png_set_PLTE)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngset.c
