// roc 2007-03 005279c0  unit: seg_00520000  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005279c0
//
// 005279c0  56                   push esi
// 005279c1  57                   push edi
// 005279c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005279c6  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005279c9  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 005279cf  8b11                 mov edx, dword ptr [ecx]
// 005279d1  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 005279d7  895610               mov dword ptr [esi + 0x10], edx
// 005279da  8944240c             mov dword ptr [esp + 0xc], eax
// 005279de  8b4718               mov eax, dword ptr [edi + 0x18]
// 005279e1  8b4804               mov ecx, dword ptr [eax + 4]
// 005279e4  894e14               mov dword ptr [esi + 0x14], ecx
// 005279e7  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 005279ee  7414                 je 0x527a04
// 005279f0  837e4400             cmp dword ptr [esi + 0x44], 0
// 005279f4  750e                 jne 0x527a04
// 005279f6  8b5648               mov edx, dword ptr [esi + 0x48]
// 005279f9  52                   push edx
// 005279fa  8bc6                 mov eax, esi
// 005279fc  e81ffcffff           call 0x527620
// 00527a01  83c404               add esp, 4
// 00527a04  53                   push ebx
// 00527a05  33db                 xor ebx, ebx
// 00527a07  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 00527a0d  7e33                 jle 0x527a42
// 00527a0f  55                   push ebp
// 00527a10  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00527a14  8b449d00             mov eax, dword ptr [ebp + ebx*4]
// 00527a18  668b10               mov dx, word ptr [eax]
// 00527a1b  668b4c2414           mov cx, word ptr [esp + 0x14]
// 00527a20  66d3fa               sar dx, cl
// 00527a23  8bce                 mov ecx, esi
// 00527a25  0fbfc2               movsx eax, dx
// 00527a28  50                   push eax
// 00527a29  b801000000           mov eax, 1
// 00527a2e  e82dfaffff           call 0x527460
// 00527a33  83c301               add ebx, 1
// 00527a36  83c404               add esp, 4
// 00527a39  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 00527a3f  7cd3                 jl 0x527a14
// 00527a41  5d                   pop ebp
// 00527a42  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00527a45  8b5610               mov edx, dword ptr [esi + 0x10]
// 00527a48  8911                 mov dword ptr [ecx], edx
// 00527a4a  8b4718               mov eax, dword ptr [edi + 0x18]
// 00527a4d  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00527a50  894804               mov dword ptr [eax + 4], ecx
// 00527a53  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 00527a59  85ff                 test edi, edi
// 00527a5b  5b                   pop ebx
// 00527a5c  7419                 je 0x527a77
// 00527a5e  837e4400             cmp dword ptr [esi + 0x44], 0
// 00527a62  750f                 jne 0x527a73
// 00527a64  8b5648               mov edx, dword ptr [esi + 0x48]
// 00527a67  83c201               add edx, 1
// 00527a6a  83e207               and edx, 7
// 00527a6d  897e44               mov dword ptr [esi + 0x44], edi
// 00527a70  895648               mov dword ptr [esi + 0x48], edx
// 00527a73  834644ff             add dword ptr [esi + 0x44], -1
// 00527a77  5f                   pop edi
// 00527a78  b001                 mov al, 1
// 00527a7a  5e                   pop esi
// 00527a7b  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
