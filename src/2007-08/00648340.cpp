// from server: 100% by auto
// roc 2007-08 00648340  unit: CXTPCommandBar  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648340
//
// 00648340  8b442404             mov eax, dword ptr [esp + 4]
// 00648344  83ec0c               sub esp, 0xc
// 00648347  57                   push edi
// 00648348  6a00                 push 0
// 0064834a  6880000000           push 0x80
// 0064834f  6a03                 push 3
// 00648351  6a00                 push 0
// 00648353  6a00                 push 0
// 00648355  6800000080           push 0x80000000
// 0064835a  50                   push eax
// 0064835b  ff1534d27700         call dword ptr [0x77d234]
// 00648361  8bf8                 mov edi, eax
// 00648363  83ffff               cmp edi, -1
// 00648366  0f84de000000         je 0x64844a
// 0064836c  6a00                 push 0
// 0064836e  8d4c240c             lea ecx, [esp + 0xc]
// 00648372  51                   push ecx
// 00648373  6a04                 push 4
// 00648375  8d542418             lea edx, [esp + 0x18]
// 00648379  52                   push edx
// 0064837a  57                   push edi
// 0064837b  c644241889           mov byte ptr [esp + 0x18], 0x89
// 00648380  c644241950           mov byte ptr [esp + 0x19], 0x50
// 00648385  c644241a4e           mov byte ptr [esp + 0x1a], 0x4e
// 0064838a  c644241b47           mov byte ptr [esp + 0x1b], 0x47
// 0064838f  ff15b8d17700         call dword ptr [0x77d1b8]
// 00648395  85c0                 test eax, eax
// 00648397  0f84a6000000         je 0x648443
// 0064839d  837c240804           cmp dword ptr [esp + 8], 4
// 006483a2  0f859b000000         jne 0x648443
// 006483a8  53                   push ebx
// 006483a9  56                   push esi
// 006483aa  b804000000           mov eax, 4
// 006483af  8d54240c             lea edx, [esp + 0xc]
// 006483b3  8d742414             lea esi, [esp + 0x14]
// 006483b7  8b0e                 mov ecx, dword ptr [esi]
// 006483b9  3b0a                 cmp ecx, dword ptr [edx]
// 006483bb  7512                 jne 0x6483cf
// 006483bd  83e804               sub eax, 4
// 006483c0  83c204               add edx, 4
// 006483c3  83c604               add esi, 4
// 006483c6  83f804               cmp eax, 4
// 006483c9  73ec                 jae 0x6483b7
// 006483cb  85c0                 test eax, eax
// 006483cd  745d                 je 0x64842c
// 006483cf  0fb61a               movzx ebx, byte ptr [edx]
// 006483d2  0fb60e               movzx ecx, byte ptr [esi]
// 006483d5  2bcb                 sub ecx, ebx
// 006483d7  7545                 jne 0x64841e
// 006483d9  83e801               sub eax, 1
// 006483dc  83c201               add edx, 1
// 006483df  83c601               add esi, 1
// 006483e2  85c0                 test eax, eax
// 006483e4  7446                 je 0x64842c
// 006483e6  0fb61a               movzx ebx, byte ptr [edx]
// 006483e9  0fb60e               movzx ecx, byte ptr [esi]
// 006483ec  2bcb                 sub ecx, ebx
// 006483ee  752e                 jne 0x64841e
// 006483f0  83e801               sub eax, 1
// 006483f3  83c201               add edx, 1
// 006483f6  83c601               add esi, 1
// 006483f9  85c0                 test eax, eax
// 006483fb  742f                 je 0x64842c
// 006483fd  0fb61a               movzx ebx, byte ptr [edx]
// 00648400  0fb60e               movzx ecx, byte ptr [esi]
// 00648403  2bcb                 sub ecx, ebx
// 00648405  7517                 jne 0x64841e
// 00648407  83e801               sub eax, 1
// 0064840a  83c201               add edx, 1
// 0064840d  83c601               add esi, 1
// 00648410  85c0                 test eax, eax
// 00648412  7418                 je 0x64842c
// 00648414  0fb612               movzx edx, byte ptr [edx]
// 00648417  0fb60e               movzx ecx, byte ptr [esi]
// 0064841a  2bca                 sub ecx, edx
// 0064841c  740e                 je 0x64842c
// 0064841e  85c9                 test ecx, ecx
// 00648420  be01000000           mov esi, 1
// 00648425  7f07                 jg 0x64842e
// 00648427  83ceff               or esi, 0xffffffff
// 0064842a  eb02                 jmp 0x64842e
// 0064842c  33f6                 xor esi, esi
// 0064842e  57                   push edi
// 0064842f  ff153cd27700         call dword ptr [0x77d23c]
// 00648435  33c0                 xor eax, eax
// 00648437  85f6                 test esi, esi
// 00648439  5e                   pop esi
// 0064843a  5b                   pop ebx
// 0064843b  0f94c0               sete al
// 0064843e  5f                   pop edi
// 0064843f  83c40c               add esp, 0xc
// 00648442  c3                   ret 
// 00648443  57                   push edi
// 00648444  ff153cd27700         call dword ptr [0x77d23c]
// 0064844a  33c0                 xor eax, eax
// 0064844c  5f                   pop edi
// 0064844d  83c40c               add esp, 0xc
// 00648450  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?IsPngBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
