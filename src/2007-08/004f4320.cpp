// roc 2007-08 004f4320  unit: boost::bad_lexical_cast  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4320
//
// 004f4320  6aff                 push -1
// 004f4322  6839db7400           push 0x74db39
// 004f4327  64a100000000         mov eax, dword ptr fs:[0]
// 004f432d  50                   push eax
// 004f432e  51                   push ecx
// 004f432f  53                   push ebx
// 004f4330  55                   push ebp
// 004f4331  56                   push esi
// 004f4332  57                   push edi
// 004f4333  a188518b00           mov eax, dword ptr [0x8b5188]
// 004f4338  33c4                 xor eax, esp
// 004f433a  50                   push eax
// 004f433b  8d442418             lea eax, [esp + 0x18]
// 004f433f  64a300000000         mov dword ptr fs:[0], eax
// 004f4345  8bf1                 mov esi, ecx
// 004f4347  89742414             mov dword ptr [esp + 0x14], esi
// 004f434b  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f434f  8b5e04               mov ebx, dword ptr [esi + 4]
// 004f4352  894604               mov dword ptr [esi + 4], eax
// 004f4355  f605b4fb8b0001       test byte ptr [0x8bfbb4], 1
// 004f435c  7514                 jne 0x4f4372
// 004f435e  830db4fb8b0001       or dword ptr [0x8bfbb4], 1
// 004f4365  bf0a000000           mov edi, 0xa
// 004f436a  893db0fb8b00         mov dword ptr [0x8bfbb0], edi
// 004f4370  eb06                 jmp 0x4f4378
// 004f4372  8b3db0fb8b00         mov edi, dword ptr [0x8bfbb0]
// 004f4378  8b6e04               mov ebp, dword ptr [esi + 4]
// 004f437b  8b4e08               mov ecx, dword ptr [esi + 8]
// 004f437e  3be9                 cmp ebp, ecx
// 004f4380  7e70                 jle 0x4f43f2
// 004f4382  85c9                 test ecx, ecx
// 004f4384  7509                 jne 0x4f438f
// 004f4386  894608               mov dword ptr [esi + 8], eax
// 004f4389  53                   push ebx
// 004f438a  e987000000           jmp 0x4f4416
// 004f438f  3bef                 cmp ebp, edi
// 004f4391  7d06                 jge 0x4f4399
// 004f4393  897e08               mov dword ptr [esi + 8], edi
// 004f4396  53                   push ebx
// 004f4397  eb7d                 jmp 0x4f4416
// 004f4399  d905387b7900         fld dword ptr [0x797b38]
// 004f439f  8bc1                 mov eax, ecx
// 004f43a1  c1e004               shl eax, 4
// 004f43a4  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f43a8  3d801a0600           cmp eax, 0x61a80
// 004f43ad  7608                 jbe 0x4f43b7
// 004f43af  d905347b7900         fld dword ptr [0x797b34]
// 004f43b5  eb0d                 jmp 0x4f43c4
// 004f43b7  3d00fa0000           cmp eax, 0xfa00
// 004f43bc  760a                 jbe 0x4f43c8
// 004f43be  d90588797900         fld dword ptr [0x797988]
// 004f43c4  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f43c8  8bf9                 mov edi, ecx
// 004f43ca  897c2428             mov dword ptr [esp + 0x28], edi
// 004f43ce  db442428             fild dword ptr [esp + 0x28]
// 004f43d2  d84c242c             fmul dword ptr [esp + 0x2c]
// 004f43d6  e885c91300           call 0x630d60
// 004f43db  2bc7                 sub eax, edi
// 004f43dd  03c5                 add eax, ebp
// 004f43df  894608               mov dword ptr [esi + 8], eax
// 004f43e2  8b0db0fb8b00         mov ecx, dword ptr [0x8bfbb0]
// 004f43e8  3bc1                 cmp eax, ecx
// 004f43ea  7d03                 jge 0x4f43ef
// 004f43ec  894e08               mov dword ptr [esi + 8], ecx
// 004f43ef  53                   push ebx
// 004f43f0  eb24                 jmp 0x4f4416
// 004f43f2  b856555555           mov eax, 0x55555556
// 004f43f7  f7e9                 imul ecx
// 004f43f9  8bc2                 mov eax, edx
// 004f43fb  c1e81f               shr eax, 0x1f
// 004f43fe  03c2                 add eax, edx
// 004f4400  3be8                 cmp ebp, eax
// 004f4402  7f19                 jg 0x4f441d
// 004f4404  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004f4409  7412                 je 0x4f441d
// 004f440b  3bef                 cmp ebp, edi
// 004f440d  7e0e                 jle 0x4f441d
// 004f440f  3beb                 cmp ebp, ebx
// 004f4411  7c02                 jl 0x4f4415
// 004f4413  8beb                 mov ebp, ebx
// 004f4415  55                   push ebp
// 004f4416  8bce                 mov ecx, esi
// 004f4418  e8d3faffff           call 0x4f3ef0
// 004f441d  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004f4420  8bfb                 mov edi, ebx
// 004f4422  897c242c             mov dword ptr [esp + 0x2c], edi
// 004f4426  7d32                 jge 0x4f445a
// 004f4428  83cbff               or ebx, 0xffffffff
// 004f442b  eb03                 jmp 0x4f4430
// 004f442d  8d4900               lea ecx, [ecx]
// 004f4430  8bcf                 mov ecx, edi
// 004f4432  c1e104               shl ecx, 4
// 004f4435  030e                 add ecx, dword ptr [esi]
// 004f4437  894c2428             mov dword ptr [esp + 0x28], ecx
// 004f443b  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004f4443  7405                 je 0x4f444a
// 004f4445  e886b20100           call 0x50f6d0
// 004f444a  83c701               add edi, 1
// 004f444d  3b7e04               cmp edi, dword ptr [esi + 4]
// 004f4450  895c2420             mov dword ptr [esp + 0x20], ebx
// 004f4454  897c242c             mov dword ptr [esp + 0x2c], edi
// 004f4458  7cd6                 jl 0x4f4430
// 004f445a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f445e  64890d00000000       mov dword ptr fs:[0], ecx
// 004f4465  59                   pop ecx
// 004f4466  5f                   pop edi
// 004f4467  5e                   pop esi
// 004f4468  5d                   pop ebp
// 004f4469  5b                   pop ebx
// 004f446a  83c410               add esp, 0x10
// 004f446d  c20800               ret 8
// library g3d-6.09/G3Dcpp\Discovery.cpp (function ?resize@?$Array@VNetAddress@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Discovery.cpp
