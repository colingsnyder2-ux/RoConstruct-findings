// roc 2007-03 005001b0  unit: seg_00500000  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005001b0
//
// 005001b0  56                   push esi
// 005001b1  57                   push edi
// 005001b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005001b6  8bf1                 mov esi, ecx
// 005001b8  d906                 fld dword ptr [esi]
// 005001ba  d907                 fld dword ptr [edi]
// 005001bc  dae9                 fucompp 
// 005001be  dfe0                 fnstsw ax
// 005001c0  f6c444               test ah, 0x44
// 005001c3  0f8ad0000000         jp 0x500299
// 005001c9  d94604               fld dword ptr [esi + 4]
// 005001cc  d94704               fld dword ptr [edi + 4]
// 005001cf  dae9                 fucompp 
// 005001d1  dfe0                 fnstsw ax
// 005001d3  f6c444               test ah, 0x44
// 005001d6  0f8abd000000         jp 0x500299
// 005001dc  d94608               fld dword ptr [esi + 8]
// 005001df  d94708               fld dword ptr [edi + 8]
// 005001e2  dae9                 fucompp 
// 005001e4  dfe0                 fnstsw ax
// 005001e6  f6c444               test ah, 0x44
// 005001e9  0f8aaa000000         jp 0x500299
// 005001ef  d9460c               fld dword ptr [esi + 0xc]
// 005001f2  d9470c               fld dword ptr [edi + 0xc]
// 005001f5  dae9                 fucompp 
// 005001f7  dfe0                 fnstsw ax
// 005001f9  f6c444               test ah, 0x44
// 005001fc  0f8a97000000         jp 0x500299
// 00500202  d94610               fld dword ptr [esi + 0x10]
// 00500205  d94710               fld dword ptr [edi + 0x10]
// 00500208  dae9                 fucompp 
// 0050020a  dfe0                 fnstsw ax
// 0050020c  f6c444               test ah, 0x44
// 0050020f  0f8a84000000         jp 0x500299
// 00500215  d94614               fld dword ptr [esi + 0x14]
// 00500218  d94714               fld dword ptr [edi + 0x14]
// 0050021b  dae9                 fucompp 
// 0050021d  dfe0                 fnstsw ax
// 0050021f  f6c444               test ah, 0x44
// 00500222  7a75                 jp 0x500299
// 00500224  d94618               fld dword ptr [esi + 0x18]
// 00500227  d94718               fld dword ptr [edi + 0x18]
// 0050022a  dae9                 fucompp 
// 0050022c  dfe0                 fnstsw ax
// 0050022e  f6c444               test ah, 0x44
// 00500231  7a66                 jp 0x500299
// 00500233  dd4720               fld qword ptr [edi + 0x20]
// 00500236  dc5e20               fcomp qword ptr [esi + 0x20]
// 00500239  dfe0                 fnstsw ax
// 0050023b  f6c444               test ah, 0x44
// 0050023e  7a59                 jp 0x500299
// 00500240  dd4728               fld qword ptr [edi + 0x28]
// 00500243  dc5e28               fcomp qword ptr [esi + 0x28]
// 00500246  dfe0                 fnstsw ax
// 00500248  f6c444               test ah, 0x44
// 0050024b  7a4c                 jp 0x500299
// 0050024d  dd4730               fld qword ptr [edi + 0x30]
// 00500250  dc5e30               fcomp qword ptr [esi + 0x30]
// 00500253  dfe0                 fnstsw ax
// 00500255  f6c444               test ah, 0x44
// 00500258  7a3f                 jp 0x500299
// 0050025a  dd4738               fld qword ptr [edi + 0x38]
// 0050025d  dc5e38               fcomp qword ptr [esi + 0x38]
// 00500260  dfe0                 fnstsw ax
// 00500262  f6c444               test ah, 0x44
// 00500265  7a32                 jp 0x500299
// 00500267  8d4740               lea eax, [edi + 0x40]
// 0050026a  50                   push eax
// 0050026b  8d4e40               lea ecx, [esi + 0x40]
// 0050026e  e8edbcf3ff           call 0x43bf60
// 00500273  84c0                 test al, al
// 00500275  7422                 je 0x500299
// 00500277  8a4e4c               mov cl, byte ptr [esi + 0x4c]
// 0050027a  3a4f4c               cmp cl, byte ptr [edi + 0x4c]
// 0050027d  751a                 jne 0x500299
// 0050027f  8a564d               mov dl, byte ptr [esi + 0x4d]
// 00500282  3a574d               cmp dl, byte ptr [edi + 0x4d]
// 00500285  7512                 jne 0x500299
// 00500287  8a464e               mov al, byte ptr [esi + 0x4e]
// 0050028a  3a474e               cmp al, byte ptr [edi + 0x4e]
// 0050028d  750a                 jne 0x500299
// 0050028f  5f                   pop edi
// 00500290  b801000000           mov eax, 1
// 00500295  5e                   pop esi
// 00500296  c20400               ret 4
// 00500299  5f                   pop edi
// 0050029a  33c0                 xor eax, eax
// 0050029c  5e                   pop esi
// 0050029d  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GLight.cpp (function ??8GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GLight.cpp
