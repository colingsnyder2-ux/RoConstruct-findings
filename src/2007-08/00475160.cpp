// roc 2007-08 00475160  unit: CInstanceRecord::CNameItem  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475160
//
// 00475160  d901                 fld dword ptr [ecx]
// 00475162  53                   push ebx
// 00475163  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00475167  d903                 fld dword ptr [ebx]
// 00475169  dae9                 fucompp 
// 0047516b  dfe0                 fnstsw ax
// 0047516d  f6c444               test ah, 0x44
// 00475170  0f8af8000000         jp 0x47526e
// 00475176  d94104               fld dword ptr [ecx + 4]
// 00475179  d94304               fld dword ptr [ebx + 4]
// 0047517c  dae9                 fucompp 
// 0047517e  dfe0                 fnstsw ax
// 00475180  f6c444               test ah, 0x44
// 00475183  0f8ae5000000         jp 0x47526e
// 00475189  d94108               fld dword ptr [ecx + 8]
// 0047518c  d94308               fld dword ptr [ebx + 8]
// 0047518f  dae9                 fucompp 
// 00475191  dfe0                 fnstsw ax
// 00475193  f6c444               test ah, 0x44
// 00475196  0f8ad2000000         jp 0x47526e
// 0047519c  d9410c               fld dword ptr [ecx + 0xc]
// 0047519f  d9430c               fld dword ptr [ebx + 0xc]
// 004751a2  dae9                 fucompp 
// 004751a4  dfe0                 fnstsw ax
// 004751a6  f6c444               test ah, 0x44
// 004751a9  0f8abf000000         jp 0x47526e
// 004751af  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004751b2  3b4310               cmp eax, dword ptr [ebx + 0x10]
// 004751b5  0f85b3000000         jne 0x47526e
// 004751bb  55                   push ebp
// 004751bc  56                   push esi
// 004751bd  57                   push edi
// 004751be  b840000000           mov eax, 0x40
// 004751c3  8d5314               lea edx, [ebx + 0x14]
// 004751c6  8d7114               lea esi, [ecx + 0x14]
// 004751c9  8da42400000000       lea esp, [esp]
// 004751d0  8b3e                 mov edi, dword ptr [esi]
// 004751d2  3b3a                 cmp edi, dword ptr [edx]
// 004751d4  7512                 jne 0x4751e8
// 004751d6  83e804               sub eax, 4
// 004751d9  83c204               add edx, 4
// 004751dc  83c604               add esi, 4
// 004751df  83f804               cmp eax, 4
// 004751e2  73ec                 jae 0x4751d0
// 004751e4  85c0                 test eax, eax
// 004751e6  745d                 je 0x475245
// 004751e8  0fb62a               movzx ebp, byte ptr [edx]
// 004751eb  0fb63e               movzx edi, byte ptr [esi]
// 004751ee  2bfd                 sub edi, ebp
// 004751f0  7545                 jne 0x475237
// 004751f2  83e801               sub eax, 1
// 004751f5  83c201               add edx, 1
// 004751f8  83c601               add esi, 1
// 004751fb  85c0                 test eax, eax
// 004751fd  7446                 je 0x475245
// 004751ff  0fb62a               movzx ebp, byte ptr [edx]
// 00475202  0fb63e               movzx edi, byte ptr [esi]
// 00475205  2bfd                 sub edi, ebp
// 00475207  752e                 jne 0x475237
// 00475209  83e801               sub eax, 1
// 0047520c  83c201               add edx, 1
// 0047520f  83c601               add esi, 1
// 00475212  85c0                 test eax, eax
// 00475214  742f                 je 0x475245
// 00475216  0fb62a               movzx ebp, byte ptr [edx]
// 00475219  0fb63e               movzx edi, byte ptr [esi]
// 0047521c  2bfd                 sub edi, ebp
// 0047521e  7517                 jne 0x475237
// 00475220  83e801               sub eax, 1
// 00475223  83c201               add edx, 1
// 00475226  83c601               add esi, 1
// 00475229  85c0                 test eax, eax
// 0047522b  7418                 je 0x475245
// 0047522d  0fb612               movzx edx, byte ptr [edx]
// 00475230  0fb63e               movzx edi, byte ptr [esi]
// 00475233  2bfa                 sub edi, edx
// 00475235  740e                 je 0x475245
// 00475237  85ff                 test edi, edi
// 00475239  b801000000           mov eax, 1
// 0047523e  7f07                 jg 0x475247
// 00475240  83c8ff               or eax, 0xffffffff
// 00475243  eb02                 jmp 0x475247
// 00475245  33c0                 xor eax, eax
// 00475247  85c0                 test eax, eax
// 00475249  5f                   pop edi
// 0047524a  5e                   pop esi
// 0047524b  5d                   pop ebp
// 0047524c  7520                 jne 0x47526e
// 0047524e  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00475251  3b4354               cmp eax, dword ptr [ebx + 0x54]
// 00475254  7518                 jne 0x47526e
// 00475256  d94158               fld dword ptr [ecx + 0x58]
// 00475259  d94358               fld dword ptr [ebx + 0x58]
// 0047525c  dae9                 fucompp 
// 0047525e  dfe0                 fnstsw ax
// 00475260  f6c444               test ah, 0x44
// 00475263  7a09                 jp 0x47526e
// 00475265  b801000000           mov eax, 1
// 0047526a  5b                   pop ebx
// 0047526b  c20400               ret 4
// 0047526e  33c0                 xor eax, eax
// 00475270  5b                   pop ebx
// 00475271  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??8TextureUnit@RenderState@RenderDevice@G3D@@QBE_NABV0123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
