// roc 2007-08 004f4210  unit: boost::bad_lexical_cast  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4210
//
// 004f4210  8b442404             mov eax, dword ptr [esp + 4]
// 004f4214  53                   push ebx
// 004f4215  55                   push ebp
// 004f4216  56                   push esi
// 004f4217  8bf1                 mov esi, ecx
// 004f4219  8b6e04               mov ebp, dword ptr [esi + 4]
// 004f421c  894604               mov dword ptr [esi + 4], eax
// 004f421f  f605acfb8b0001       test byte ptr [0x8bfbac], 1
// 004f4226  57                   push edi
// 004f4227  7514                 jne 0x4f423d
// 004f4229  830dacfb8b0001       or dword ptr [0x8bfbac], 1
// 004f4230  bb0a000000           mov ebx, 0xa
// 004f4235  891da8fb8b00         mov dword ptr [0x8bfba8], ebx
// 004f423b  eb06                 jmp 0x4f4243
// 004f423d  8b1da8fb8b00         mov ebx, dword ptr [0x8bfba8]
// 004f4243  8b7e04               mov edi, dword ptr [esi + 4]
// 004f4246  8b4e08               mov ecx, dword ptr [esi + 8]
// 004f4249  3bf9                 cmp edi, ecx
// 004f424b  7e76                 jle 0x4f42c3
// 004f424d  85c9                 test ecx, ecx
// 004f424f  7509                 jne 0x4f425a
// 004f4251  894608               mov dword ptr [esi + 8], eax
// 004f4254  55                   push ebp
// 004f4255  e98d000000           jmp 0x4f42e7
// 004f425a  3bfb                 cmp edi, ebx
// 004f425c  7d09                 jge 0x4f4267
// 004f425e  895e08               mov dword ptr [esi + 8], ebx
// 004f4261  55                   push ebp
// 004f4262  e980000000           jmp 0x4f42e7
// 004f4267  d905387b7900         fld dword ptr [0x797b38]
// 004f426d  8bc1                 mov eax, ecx
// 004f426f  03c0                 add eax, eax
// 004f4271  d95c2418             fstp dword ptr [esp + 0x18]
// 004f4275  03c0                 add eax, eax
// 004f4277  03c0                 add eax, eax
// 004f4279  3d801a0600           cmp eax, 0x61a80
// 004f427e  7608                 jbe 0x4f4288
// 004f4280  d905347b7900         fld dword ptr [0x797b34]
// 004f4286  eb0d                 jmp 0x4f4295
// 004f4288  3d00fa0000           cmp eax, 0xfa00
// 004f428d  760a                 jbe 0x4f4299
// 004f428f  d90588797900         fld dword ptr [0x797988]
// 004f4295  d95c2418             fstp dword ptr [esp + 0x18]
// 004f4299  8bd9                 mov ebx, ecx
// 004f429b  895c2414             mov dword ptr [esp + 0x14], ebx
// 004f429f  db442414             fild dword ptr [esp + 0x14]
// 004f42a3  d84c2418             fmul dword ptr [esp + 0x18]
// 004f42a7  e8b4ca1300           call 0x630d60
// 004f42ac  2bc3                 sub eax, ebx
// 004f42ae  03c7                 add eax, edi
// 004f42b0  894608               mov dword ptr [esi + 8], eax
// 004f42b3  8b0da8fb8b00         mov ecx, dword ptr [0x8bfba8]
// 004f42b9  3bc1                 cmp eax, ecx
// 004f42bb  7d03                 jge 0x4f42c0
// 004f42bd  894e08               mov dword ptr [esi + 8], ecx
// 004f42c0  55                   push ebp
// 004f42c1  eb24                 jmp 0x4f42e7
// 004f42c3  b856555555           mov eax, 0x55555556
// 004f42c8  f7e9                 imul ecx
// 004f42ca  8bc2                 mov eax, edx
// 004f42cc  c1e81f               shr eax, 0x1f
// 004f42cf  03c2                 add eax, edx
// 004f42d1  3bf8                 cmp edi, eax
// 004f42d3  7f19                 jg 0x4f42ee
// 004f42d5  807c241800           cmp byte ptr [esp + 0x18], 0
// 004f42da  7412                 je 0x4f42ee
// 004f42dc  3bfb                 cmp edi, ebx
// 004f42de  7e0e                 jle 0x4f42ee
// 004f42e0  3bfd                 cmp edi, ebp
// 004f42e2  7c02                 jl 0x4f42e6
// 004f42e4  8bfd                 mov edi, ebp
// 004f42e6  57                   push edi
// 004f42e7  8bce                 mov ecx, esi
// 004f42e9  e832fbffff           call 0x4f3e20
// 004f42ee  3b6e04               cmp ebp, dword ptr [esi + 4]
// 004f42f1  8bc5                 mov eax, ebp
// 004f42f3  7d1a                 jge 0x4f430f
// 004f42f5  d9ee                 fldz 
// 004f42f7  8b0e                 mov ecx, dword ptr [esi]
// 004f42f9  8d0cc1               lea ecx, [ecx + eax*8]
// 004f42fc  85c9                 test ecx, ecx
// 004f42fe  7405                 je 0x4f4305
// 004f4300  d911                 fst dword ptr [ecx]
// 004f4302  d95104               fst dword ptr [ecx + 4]
// 004f4305  83c001               add eax, 1
// 004f4308  3b4604               cmp eax, dword ptr [esi + 4]
// 004f430b  7cea                 jl 0x4f42f7
// 004f430d  ddd8                 fstp st(0)
// 004f430f  5f                   pop edi
// 004f4310  5e                   pop esi
// 004f4311  5d                   pop ebp
// 004f4312  5b                   pop ebx
// 004f4313  c20800               ret 8
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ?resize@?$Array@VVector2@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
