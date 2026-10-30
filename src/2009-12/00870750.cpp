// roc 2009-12 00870750  unit: PAVCXTPHookManagerHookAble::?$CArray  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870750
//
// 00870750  6aff                 push -1
// 00870752  6868fc9500           push 0x95fc68
// 00870757  64a100000000         mov eax, dword ptr fs:[0]
// 0087075d  50                   push eax
// 0087075e  51                   push ecx
// 0087075f  56                   push esi
// 00870760  57                   push edi
// 00870761  a10052b600           mov eax, dword ptr [0xb65200]
// 00870766  33c4                 xor eax, esp
// 00870768  50                   push eax
// 00870769  8d442410             lea eax, [esp + 0x10]
// 0087076d  64a300000000         mov dword ptr fs:[0], eax
// 00870773  8bf1                 mov esi, ecx
// 00870775  8974240c             mov dword ptr [esp + 0xc], esi
// 00870779  c706980da000         mov dword ptr [esi], 0xa00d98
// 0087077f  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00870783  8b4614               mov eax, dword ptr [esi + 0x14]
// 00870786  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00870789  50                   push eax
// 0087078a  6afc                 push -4
// 0087078c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00870794  51                   push ecx
// 00870795  7408                 je 0x87079f
// 00870797  ff1590c99800         call dword ptr [0x98c990]
// 0087079d  eb06                 jmp 0x8707a5
// 0087079f  ff15c0c99800         call dword ptr [0x98c9c0]
// 008707a5  8b4608               mov eax, dword ptr [esi + 8]
// 008707a8  8d78ff               lea edi, [eax - 1]
// 008707ab  85ff                 test edi, edi
// 008707ad  7c26                 jl 0x8707d5
// 008707af  90                   nop 
// 008707b0  85ff                 test edi, edi
// 008707b2  7c42                 jl 0x8707f6
// 008707b4  3b7e08               cmp edi, dword ptr [esi + 8]
// 008707b7  7d3d                 jge 0x8707f6
// 008707b9  8b4604               mov eax, dword ptr [esi + 4]
// 008707bc  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 008707bf  83790400             cmp dword ptr [ecx + 4], 0
// 008707c3  8d04b8               lea eax, [eax + edi*4]
// 008707c6  7408                 je 0x8707d0
// 008707c8  8b11                 mov edx, dword ptr [ecx]
// 008707ca  8b02                 mov eax, dword ptr [edx]
// 008707cc  6a01                 push 1
// 008707ce  ffd0                 call eax
// 008707d0  83ef01               sub edi, 1
// 008707d3  79db                 jns 0x8707b0
// 008707d5  8bce                 mov ecx, esi
// 008707d7  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008707df  e8ecfeffff           call 0x8706d0
// 008707e4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008707e8  64890d00000000       mov dword ptr fs:[0], ecx
// 008707ef  59                   pop ecx
// 008707f0  5f                   pop edi
// 008707f1  5e                   pop esi
// 008707f2  83c410               add esp, 0x10
// 008707f5  c3                   ret 
// 008707f6  e81133f8ff           call 0x7f3b0c
// copied from an identical function in another client (function ??1CHookSink@CXTPHookManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPHookManager.cpp