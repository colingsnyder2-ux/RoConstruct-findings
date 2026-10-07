// roc 2007-08 00507590  unit: G3D::GCamera  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00507590
//
// 00507590  8b542404             mov edx, dword ptr [esp + 4]
// 00507594  53                   push ebx
// 00507595  56                   push esi
// 00507596  8bf1                 mov esi, ecx
// 00507598  8b5e04               mov ebx, dword ptr [esi + 4]
// 0050759b  3bd3                 cmp edx, ebx
// 0050759d  57                   push edi
// 0050759e  895604               mov dword ptr [esi + 4], edx
// 005075a1  7d1f                 jge 0x5075c2
// 005075a3  8d04d2               lea eax, [edx + edx*8]
// 005075a6  03c0                 add eax, eax
// 005075a8  8bcb                 mov ecx, ebx
// 005075aa  03c0                 add eax, eax
// 005075ac  2bca                 sub ecx, edx
// 005075ae  8bff                 mov edi, edi
// 005075b0  8b3e                 mov edi, dword ptr [esi]
// 005075b2  c7443810fc057a00     mov dword ptr [eax + edi + 0x10], 0x7a05fc
// 005075ba  83c024               add eax, 0x24
// 005075bd  83e901               sub ecx, 1
// 005075c0  75ee                 jne 0x5075b0
// 005075c2  f605a4098c0001       test byte ptr [0x8c09a4], 1
// 005075c9  55                   push ebp
// 005075ca  7514                 jne 0x5075e0
// 005075cc  830da4098c0001       or dword ptr [0x8c09a4], 1
// 005075d3  bd0a000000           mov ebp, 0xa
// 005075d8  892da0098c00         mov dword ptr [0x8c09a0], ebp
// 005075de  eb06                 jmp 0x5075e6
// 005075e0  8b2da0098c00         mov ebp, dword ptr [0x8c09a0]
// 005075e6  8b7e04               mov edi, dword ptr [esi + 4]
// 005075e9  8b4e08               mov ecx, dword ptr [esi + 8]
// 005075ec  3bf9                 cmp edi, ecx
// 005075ee  7e77                 jle 0x507667
// 005075f0  85c9                 test ecx, ecx
// 005075f2  7509                 jne 0x5075fd
// 005075f4  895608               mov dword ptr [esi + 8], edx
// 005075f7  53                   push ebx
// 005075f8  e98e000000           jmp 0x50768b
// 005075fd  3bfd                 cmp edi, ebp
// 005075ff  7d09                 jge 0x50760a
// 00507601  896e08               mov dword ptr [esi + 8], ebp
// 00507604  53                   push ebx
// 00507605  e981000000           jmp 0x50768b
// 0050760a  d905387b7900         fld dword ptr [0x797b38]
// 00507610  8bc1                 mov eax, ecx
// 00507612  8d04c0               lea eax, [eax + eax*8]
// 00507615  d95c2418             fstp dword ptr [esp + 0x18]
// 00507619  03c0                 add eax, eax
// 0050761b  03c0                 add eax, eax
// 0050761d  3d801a0600           cmp eax, 0x61a80
// 00507622  7608                 jbe 0x50762c
// 00507624  d905347b7900         fld dword ptr [0x797b34]
// 0050762a  eb0d                 jmp 0x507639
// 0050762c  3d00fa0000           cmp eax, 0xfa00
// 00507631  760a                 jbe 0x50763d
// 00507633  d90588797900         fld dword ptr [0x797988]
// 00507639  d95c2418             fstp dword ptr [esp + 0x18]
// 0050763d  8be9                 mov ebp, ecx
// 0050763f  896c2414             mov dword ptr [esp + 0x14], ebp
// 00507643  db442414             fild dword ptr [esp + 0x14]
// 00507647  d84c2418             fmul dword ptr [esp + 0x18]
// 0050764b  e810971200           call 0x630d60
// 00507650  2bc5                 sub eax, ebp
// 00507652  03c7                 add eax, edi
// 00507654  894608               mov dword ptr [esi + 8], eax
// 00507657  8b0da0098c00         mov ecx, dword ptr [0x8c09a0]
// 0050765d  3bc1                 cmp eax, ecx
// 0050765f  7d03                 jge 0x507664
// 00507661  894e08               mov dword ptr [esi + 8], ecx
// 00507664  53                   push ebx
// 00507665  eb24                 jmp 0x50768b
// 00507667  b856555555           mov eax, 0x55555556
// 0050766c  f7e9                 imul ecx
// 0050766e  8bc2                 mov eax, edx
// 00507670  c1e81f               shr eax, 0x1f
// 00507673  03c2                 add eax, edx
// 00507675  3bf8                 cmp edi, eax
// 00507677  7f19                 jg 0x507692
// 00507679  807c241800           cmp byte ptr [esp + 0x18], 0
// 0050767e  7412                 je 0x507692
// 00507680  3bfd                 cmp edi, ebp
// 00507682  7e0e                 jle 0x507692
// 00507684  3bfb                 cmp edi, ebx
// 00507686  7c02                 jl 0x50768a
// 00507688  8bfb                 mov edi, ebx
// 0050768a  57                   push edi
// 0050768b  8bce                 mov ecx, esi
// 0050768d  e80efcffff           call 0x5072a0
// 00507692  3b5e04               cmp ebx, dword ptr [esi + 4]
// 00507695  8bfb                 mov edi, ebx
// 00507697  5d                   pop ebp
// 00507698  7d6f                 jge 0x507709
// 0050769a  d9ee                 fldz 
// 0050769c  8d0cdb               lea ecx, [ebx + ebx*8]
// 0050769f  d9e8                 fld1 
// 005076a1  03c9                 add ecx, ecx
// 005076a3  03c9                 add ecx, ecx
// 005076a5  8b06                 mov eax, dword ptr [esi]
// 005076a7  03c1                 add eax, ecx
// 005076a9  744f                 je 0x5076fa
// 005076ab  c74010fc057a00       mov dword ptr [eax + 0x10], 0x7a05fc
// 005076b2  f605f4fb8b0001       test byte ptr [0x8bfbf4], 1
// 005076b9  751d                 jne 0x5076d8
// 005076bb  830df4fb8b0001       or dword ptr [0x8bfbf4], 1
// 005076c2  d9c9                 fxch st(1)
// 005076c4  d915e8fb8b00         fst dword ptr [0x8bfbe8]
// 005076ca  d915f0fb8b00         fst dword ptr [0x8bfbf0]
// 005076d0  d9c9                 fxch st(1)
// 005076d2  d915ecfb8b00         fst dword ptr [0x8bfbec]
// 005076d8  d905e8fb8b00         fld dword ptr [0x8bfbe8]
// 005076de  d95814               fstp dword ptr [eax + 0x14]
// 005076e1  d905ecfb8b00         fld dword ptr [0x8bfbec]
// 005076e7  d95818               fstp dword ptr [eax + 0x18]
// 005076ea  d905f0fb8b00         fld dword ptr [0x8bfbf0]
// 005076f0  d9581c               fstp dword ptr [eax + 0x1c]
// 005076f3  d9c9                 fxch st(1)
// 005076f5  d95020               fst dword ptr [eax + 0x20]
// 005076f8  d9c9                 fxch st(1)
// 005076fa  83c701               add edi, 1
// 005076fd  83c124               add ecx, 0x24
// 00507700  3b7e04               cmp edi, dword ptr [esi + 4]
// 00507703  7ca0                 jl 0x5076a5
// 00507705  ddd9                 fstp st(1)
// 00507707  ddd8                 fstp st(0)
// 00507709  5f                   pop edi
// 0050770a  5e                   pop esi
// 0050770b  5b                   pop ebx
// 0050770c  c20800               ret 8
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?resize@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
