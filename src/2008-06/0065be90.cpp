// from server: 100% by auto
// roc 2008-06 0065be90  unit: RBX::BallBallContact  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065be90
//
// 0065be90  56                   push esi
// 0065be91  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0065be94  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065be97  8bc1                 mov eax, ecx
// 0065be99  99                   cdq 
// 0065be9a  83e203               and edx, 3
// 0065be9d  03c2                 add eax, edx
// 0065be9f  c1f802               sar eax, 2
// 0065bea2  394604               cmp dword ptr [esi + 4], eax
// 0065bea5  7316                 jae 0x65bebd
// 0065bea7  83f940               cmp ecx, 0x40
// 0065beaa  7e11                 jle 0x65bebd
// 0065beac  8bc1                 mov eax, ecx
// 0065beae  99                   cdq 
// 0065beaf  2bc2                 sub eax, edx
// 0065beb1  d1f8                 sar eax, 1
// 0065beb3  50                   push eax
// 0065beb4  53                   push ebx
// 0065beb5  e8e6320000           call 0x65f1a0
// 0065beba  83c408               add esp, 8
// 0065bebd  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0065bec0  83f840               cmp eax, 0x40
// 0065bec3  7635                 jbe 0x65befa
// 0065bec5  57                   push edi
// 0065bec6  8bf8                 mov edi, eax
// 0065bec8  d1ef                 shr edi, 1
// 0065beca  8d4f01               lea ecx, [edi + 1]
// 0065becd  83f9fd               cmp ecx, -3
// 0065bed0  7718                 ja 0x65beea
// 0065bed2  8b5634               mov edx, dword ptr [esi + 0x34]
// 0065bed5  57                   push edi
// 0065bed6  50                   push eax
// 0065bed7  52                   push edx
// 0065bed8  53                   push ebx
// 0065bed9  e812480000           call 0x6606f0
// 0065bede  83c410               add esp, 0x10
// 0065bee1  897e3c               mov dword ptr [esi + 0x3c], edi
// 0065bee4  5f                   pop edi
// 0065bee5  894634               mov dword ptr [esi + 0x34], eax
// 0065bee8  5e                   pop esi
// 0065bee9  c3                   ret 
// 0065beea  53                   push ebx
// 0065beeb  e8e0470000           call 0x6606d0
// 0065bef0  83c404               add esp, 4
// 0065bef3  897e3c               mov dword ptr [esi + 0x3c], edi
// 0065bef6  894634               mov dword ptr [esi + 0x34], eax
// 0065bef9  5f                   pop edi
// 0065befa  5e                   pop esi
// 0065befb  c3                   ret 
// library lua-5.1.4/lgc.c (function _checkSizes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
