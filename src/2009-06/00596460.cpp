// from server: 100% by auto
// roc 2009-06 00596460  unit: seg_00590000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00596460
//
// 00596460  83ec0c               sub esp, 0xc
// 00596463  53                   push ebx
// 00596464  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00596468  56                   push esi
// 00596469  8b742418             mov esi, dword ptr [esp + 0x18]
// 0059646d  8b4668               mov eax, dword ptr [esi + 0x68]
// 00596470  a801                 test al, 1
// 00596472  7534                 jne 0x5964a8
// 00596474  68c4298d00           push 0x8d29c4
// 00596479  56                   push esi
// 0059647a  e8e17cffff           call 0x58e160
// 0059647f  83c408               add esp, 8
// 00596482  57                   push edi
// 00596483  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00596487  83ff09               cmp edi, 9
// 0059648a  7468                 je 0x5964f4
// 0059648c  68a8298d00           push 0x8d29a8
// 00596491  56                   push esi
// 00596492  e8797dffff           call 0x58e210
// 00596497  57                   push edi
// 00596498  56                   push esi
// 00596499  e842e7ffff           call 0x594be0
// 0059649e  83c410               add esp, 0x10
// 005964a1  5f                   pop edi
// 005964a2  5e                   pop esi
// 005964a3  5b                   pop ebx
// 005964a4  83c40c               add esp, 0xc
// 005964a7  c3                   ret 
// 005964a8  a804                 test al, 4
// 005964aa  741f                 je 0x5964cb
// 005964ac  6890298d00           push 0x8d2990
// 005964b1  56                   push esi
// 005964b2  e8597dffff           call 0x58e210
// 005964b7  8b442428             mov eax, dword ptr [esp + 0x28]
// 005964bb  50                   push eax
// 005964bc  56                   push esi
// 005964bd  e81ee7ffff           call 0x594be0
// 005964c2  83c410               add esp, 0x10
// 005964c5  5e                   pop esi
// 005964c6  5b                   pop ebx
// 005964c7  83c40c               add esp, 0xc
// 005964ca  c3                   ret 
// 005964cb  85db                 test ebx, ebx
// 005964cd  74b3                 je 0x596482
// 005964cf  f6430880             test byte ptr [ebx + 8], 0x80
// 005964d3  74ad                 je 0x596482
// 005964d5  6878298d00           push 0x8d2978
// 005964da  56                   push esi
// 005964db  e8307dffff           call 0x58e210
// 005964e0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005964e4  51                   push ecx
// 005964e5  56                   push esi
// 005964e6  e8f5e6ffff           call 0x594be0
// 005964eb  83c410               add esp, 0x10
// 005964ee  5e                   pop esi
// 005964ef  5b                   pop ebx
// 005964f0  83c40c               add esp, 0xc
// 005964f3  c3                   ret 
// 005964f4  6a09                 push 9
// 005964f6  8d542410             lea edx, [esp + 0x10]
// 005964fa  52                   push edx
// 005964fb  56                   push esi
// 005964fc  e8ff27ffff           call 0x588d00
// 00596501  6a09                 push 9
// 00596503  8d44241c             lea eax, [esp + 0x1c]
// 00596507  50                   push eax
// 00596508  56                   push esi
// 00596509  e8b2b3feff           call 0x5818c0
// 0059650e  6a00                 push 0
// 00596510  56                   push esi
// 00596511  e8cae6ffff           call 0x594be0
// 00596516  83c420               add esp, 0x20
// 00596519  85c0                 test eax, eax
// 0059651b  7558                 jne 0x596575
// 0059651d  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 00596522  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 00596527  0fb6442411           movzx eax, byte ptr [esp + 0x11]
// 0059652c  51                   push ecx
// 0059652d  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 00596532  c1e208               shl edx, 8
// 00596535  03d0                 add edx, eax
// 00596537  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 0059653c  c1e208               shl edx, 8
// 0059653f  03d1                 add edx, ecx
// 00596541  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 00596546  c1e208               shl edx, 8
// 00596549  03d0                 add edx, eax
// 0059654b  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 00596550  52                   push edx
// 00596551  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 00596556  c1e108               shl ecx, 8
// 00596559  03ca                 add ecx, edx
// 0059655b  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 00596560  c1e108               shl ecx, 8
// 00596563  03c8                 add ecx, eax
// 00596565  c1e108               shl ecx, 8
// 00596568  03ca                 add ecx, edx
// 0059656a  51                   push ecx
// 0059656b  53                   push ebx
// 0059656c  56                   push esi
// 0059656d  e8aea7feff           call 0x580d20
// 00596572  83c414               add esp, 0x14
// 00596575  5f                   pop edi
// 00596576  5e                   pop esi
// 00596577  5b                   pop ebx
// 00596578  83c40c               add esp, 0xc
// 0059657b  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
