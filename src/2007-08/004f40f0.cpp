// from server: 100% by auto
// roc 2007-08 004f40f0  unit: boost::bad_lexical_cast  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f40f0
//
// 004f40f0  8b442404             mov eax, dword ptr [esp + 4]
// 004f40f4  53                   push ebx
// 004f40f5  55                   push ebp
// 004f40f6  56                   push esi
// 004f40f7  8bf1                 mov esi, ecx
// 004f40f9  8b6e04               mov ebp, dword ptr [esi + 4]
// 004f40fc  894604               mov dword ptr [esi + 4], eax
// 004f40ff  f605a4fb8b0001       test byte ptr [0x8bfba4], 1
// 004f4106  57                   push edi
// 004f4107  7514                 jne 0x4f411d
// 004f4109  830da4fb8b0001       or dword ptr [0x8bfba4], 1
// 004f4110  bb0a000000           mov ebx, 0xa
// 004f4115  891da0fb8b00         mov dword ptr [0x8bfba0], ebx
// 004f411b  eb06                 jmp 0x4f4123
// 004f411d  8b1da0fb8b00         mov ebx, dword ptr [0x8bfba0]
// 004f4123  8b7e04               mov edi, dword ptr [esi + 4]
// 004f4126  8b4e08               mov ecx, dword ptr [esi + 8]
// 004f4129  3bf9                 cmp edi, ecx
// 004f412b  7e77                 jle 0x4f41a4
// 004f412d  85c9                 test ecx, ecx
// 004f412f  7509                 jne 0x4f413a
// 004f4131  894608               mov dword ptr [esi + 8], eax
// 004f4134  55                   push ebp
// 004f4135  e98e000000           jmp 0x4f41c8
// 004f413a  3bfb                 cmp edi, ebx
// 004f413c  7d09                 jge 0x4f4147
// 004f413e  895e08               mov dword ptr [esi + 8], ebx
// 004f4141  55                   push ebp
// 004f4142  e981000000           jmp 0x4f41c8
// 004f4147  d905387b7900         fld dword ptr [0x797b38]
// 004f414d  8bc1                 mov eax, ecx
// 004f414f  8d0440               lea eax, [eax + eax*2]
// 004f4152  d95c2418             fstp dword ptr [esp + 0x18]
// 004f4156  03c0                 add eax, eax
// 004f4158  03c0                 add eax, eax
// 004f415a  3d801a0600           cmp eax, 0x61a80
// 004f415f  7608                 jbe 0x4f4169
// 004f4161  d905347b7900         fld dword ptr [0x797b34]
// 004f4167  eb0d                 jmp 0x4f4176
// 004f4169  3d00fa0000           cmp eax, 0xfa00
// 004f416e  760a                 jbe 0x4f417a
// 004f4170  d90588797900         fld dword ptr [0x797988]
// 004f4176  d95c2418             fstp dword ptr [esp + 0x18]
// 004f417a  8bd9                 mov ebx, ecx
// 004f417c  895c2414             mov dword ptr [esp + 0x14], ebx
// 004f4180  db442414             fild dword ptr [esp + 0x14]
// 004f4184  d84c2418             fmul dword ptr [esp + 0x18]
// 004f4188  e8d3cb1300           call 0x630d60
// 004f418d  2bc3                 sub eax, ebx
// 004f418f  03c7                 add eax, edi
// 004f4191  894608               mov dword ptr [esi + 8], eax
// 004f4194  8b0da0fb8b00         mov ecx, dword ptr [0x8bfba0]
// 004f419a  3bc1                 cmp eax, ecx
// 004f419c  7d03                 jge 0x4f41a1
// 004f419e  894e08               mov dword ptr [esi + 8], ecx
// 004f41a1  55                   push ebp
// 004f41a2  eb24                 jmp 0x4f41c8
// 004f41a4  b856555555           mov eax, 0x55555556
// 004f41a9  f7e9                 imul ecx
// 004f41ab  8bc2                 mov eax, edx
// 004f41ad  c1e81f               shr eax, 0x1f
// 004f41b0  03c2                 add eax, edx
// 004f41b2  3bf8                 cmp edi, eax
// 004f41b4  7f19                 jg 0x4f41cf
// 004f41b6  807c241800           cmp byte ptr [esp + 0x18], 0
// 004f41bb  7412                 je 0x4f41cf
// 004f41bd  3bfb                 cmp edi, ebx
// 004f41bf  7e0e                 jle 0x4f41cf
// 004f41c1  3bfd                 cmp edi, ebp
// 004f41c3  7c02                 jl 0x4f41c7
// 004f41c5  8bfd                 mov edi, ebp
// 004f41c7  57                   push edi
// 004f41c8  8bce                 mov ecx, esi
// 004f41ca  e851fbffff           call 0x4f3d20
// 004f41cf  3b6e04               cmp ebp, dword ptr [esi + 4]
// 004f41d2  8bd5                 mov edx, ebp
// 004f41d4  7d25                 jge 0x4f41fb
// 004f41d6  d9ee                 fldz 
// 004f41d8  8d4c6d00             lea ecx, [ebp + ebp*2]
// 004f41dc  03c9                 add ecx, ecx
// 004f41de  03c9                 add ecx, ecx
// 004f41e0  8b06                 mov eax, dword ptr [esi]
// 004f41e2  03c1                 add eax, ecx
// 004f41e4  7408                 je 0x4f41ee
// 004f41e6  d910                 fst dword ptr [eax]
// 004f41e8  d95004               fst dword ptr [eax + 4]
// 004f41eb  d95008               fst dword ptr [eax + 8]
// 004f41ee  83c201               add edx, 1
// 004f41f1  83c10c               add ecx, 0xc
// 004f41f4  3b5604               cmp edx, dword ptr [esi + 4]
// 004f41f7  7ce7                 jl 0x4f41e0
// 004f41f9  ddd8                 fstp st(0)
// 004f41fb  5f                   pop edi
// 004f41fc  5e                   pop esi
// 004f41fd  5d                   pop ebp
// 004f41fe  5b                   pop ebx
// 004f41ff  c20800               ret 8
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?resize@?$Array@VVector3@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
