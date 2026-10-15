// roc 2008-06 005ce480  unit: RBX::Camera  size: 598 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ce480
//
// 005ce480  83ec7c               sub esp, 0x7c
// 005ce483  d905608b8200         fld dword ptr [0x828b60]
// 005ce489  53                   push ebx
// 005ce48a  56                   push esi
// 005ce48b  d95c2408             fstp dword ptr [esp + 8]
// 005ce48f  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 005ce496  6a02                 push 2
// 005ce498  8d44241c             lea eax, [esp + 0x1c]
// 005ce49c  8bd9                 mov ebx, ecx
// 005ce49e  50                   push eax
// 005ce49f  8bce                 mov ecx, esi
// 005ce4a1  e89a4df4ff           call 0x513240
// 005ce4a6  d94004               fld dword ptr [eax + 4]
// 005ce4a9  d9442408             fld dword ptr [esp + 8]
// 005ce4ad  dcc9                 fmul st(1), st(0)
// 005ce4af  d94008               fld dword ptr [eax + 8]
// 005ce4b2  d8c9                 fmul st(1)
// 005ce4b4  d900                 fld dword ptr [eax]
// 005ce4b6  deca                 fmulp st(2)
// 005ce4b8  d9ca                 fxch st(2)
// 005ce4ba  d9e1                 fabs 
// 005ce4bc  dc1da0838200         fcomp qword ptr [0x8283a0]
// 005ce4c2  dfe0                 fnstsw ax
// 005ce4c4  f6c441               test ah, 0x41
// 005ce4c7  754d                 jne 0x5ce516
// 005ce4c9  ddd9                 fstp st(1)
// 005ce4cb  b801000000           mov eax, 1
// 005ce4d0  ddd8                 fstp st(0)
// 005ce4d2  d9ee                 fldz 
// 005ce4d4  8405a8ef9600         test byte ptr [0x96efa8], al
// 005ce4da  751c                 jne 0x5ce4f8
// 005ce4dc  0905a8ef9600         or dword ptr [0x96efa8], eax
// 005ce4e2  d9159cef9600         fst dword ptr [0x96ef9c]
// 005ce4e8  d91da0ef9600         fstp dword ptr [0x96efa0]
// 005ce4ee  d9e8                 fld1 
// 005ce4f0  d91da4ef9600         fstp dword ptr [0x96efa4]
// 005ce4f6  eb02                 jmp 0x5ce4fa
// 005ce4f8  ddd8                 fstp st(0)
// 005ce4fa  d9059cef9600         fld dword ptr [0x96ef9c]
// 005ce500  d9e0                 fchs 
// 005ce502  d905a0ef9600         fld dword ptr [0x96efa0]
// 005ce508  d9e0                 fchs 
// 005ce50a  d905a4ef9600         fld dword ptr [0x96efa4]
// 005ce510  d9e0                 fchs 
// 005ce512  d9ca                 fxch st(2)
// 005ce514  eb22                 jmp 0x5ce538
// 005ce516  d9c0                 fld st(0)
// 005ce518  d8c9                 fmul st(1)
// 005ce51a  d9c2                 fld st(2)
// 005ce51c  d8cb                 fmul st(3)
// 005ce51e  dec1                 faddp st(1)
// 005ce520  d9fa                 fsqrt 
// 005ce522  d9e8                 fld1 
// 005ce524  def1                 fdivrp st(1)
// 005ce526  d9c0                 fld st(0)
// 005ce528  deca                 fmulp st(2)
// 005ce52a  d905c4358100         fld dword ptr [0x8135c4]
// 005ce530  d8c9                 fmul st(1)
// 005ce532  d9c9                 fxch st(1)
// 005ce534  decb                 fmulp st(3)
// 005ce536  d9c9                 fxch st(1)
// 005ce538  d95c240c             fstp dword ptr [esp + 0xc]
// 005ce53c  8d4c2454             lea ecx, [esp + 0x54]
// 005ce540  d95c2410             fstp dword ptr [esp + 0x10]
// 005ce544  d95c2414             fstp dword ptr [esp + 0x14]
// 005ce548  e8839deaff           call 0x4782d0
// 005ce54d  8d4c240c             lea ecx, [esp + 0xc]
// 005ce551  51                   push ecx
// 005ce552  8d4c2458             lea ecx, [esp + 0x58]
// 005ce556  e8c5a8f4ff           call 0x518e20
// 005ce55b  d9ee                 fldz 
// 005ce55d  83ec0c               sub esp, 0xc
// 005ce560  d95c2408             fstp dword ptr [esp + 8]
// 005ce564  d905e8a68300         fld dword ptr [0x83a6e8]
// 005ce56a  8d542430             lea edx, [esp + 0x30]
// 005ce56e  d95c2404             fstp dword ptr [esp + 4]
// 005ce572  d905b0718200         fld dword ptr [0x8271b0]
// 005ce578  d91c24               fstp dword ptr [esp]
// 005ce57b  52                   push edx
// 005ce57c  e83f57f4ff           call 0x513cc0
// 005ce581  83c410               add esp, 0x10
// 005ce584  50                   push eax
// 005ce585  8d4c2458             lea ecx, [esp + 0x58]
// 005ce589  e8324ef4ff           call 0x5133c0
// 005ce58e  d905608b8200         fld dword ptr [0x828b60]
// 005ce594  6a02                 push 2
// 005ce596  d95c240c             fstp dword ptr [esp + 0xc]
// 005ce59a  8d44241c             lea eax, [esp + 0x1c]
// 005ce59e  50                   push eax
// 005ce59f  8d4c245c             lea ecx, [esp + 0x5c]
// 005ce5a3  e8984cf4ff           call 0x513240
// 005ce5a8  d900                 fld dword ptr [eax]
// 005ce5aa  d9442408             fld dword ptr [esp + 8]
// 005ce5ae  83c624               add esi, 0x24
// 005ce5b1  dcc9                 fmul st(1), st(0)
// 005ce5b3  56                   push esi
// 005ce5b4  d94004               fld dword ptr [eax + 4]
// 005ce5b7  8d4c2458             lea ecx, [esp + 0x58]
// 005ce5bb  d8c9                 fmul st(1)
// 005ce5bd  d94008               fld dword ptr [eax + 8]
// 005ce5c0  deca                 fmulp st(2)
// 005ce5c2  d9ca                 fxch st(2)
// 005ce5c4  d9542410             fst dword ptr [esp + 0x10]
// 005ce5c8  d9ca                 fxch st(2)
// 005ce5ca  d9542414             fst dword ptr [esp + 0x14]
// 005ce5ce  d9c9                 fxch st(1)
// 005ce5d0  d9542418             fst dword ptr [esp + 0x18]
// 005ce5d4  d90590748200         fld dword ptr [0x827490]
// 005ce5da  dccb                 fmul st(3), st(0)
// 005ce5dc  dcca                 fmul st(2), st(0)
// 005ce5de  dec9                 fmulp st(1)
// 005ce5e0  d9ca                 fxch st(2)
// 005ce5e2  d806                 fadd dword ptr [esi]
// 005ce5e4  d94604               fld dword ptr [esi + 4]
// 005ce5e7  dec2                 faddp st(2)
// 005ce5e9  d94608               fld dword ptr [esi + 8]
// 005ce5ec  dec3                 faddp st(3)
// 005ce5ee  d95c247c             fstp dword ptr [esp + 0x7c]
// 005ce5f2  d99c2480000000       fstp dword ptr [esp + 0x80]
// 005ce5f9  d99c2484000000       fstp dword ptr [esp + 0x84]
// 005ce600  e81ba8f4ff           call 0x518e20
// 005ce605  83bbd401000000       cmp dword ptr [ebx + 0x1d4], 0
// 005ce60c  742a                 je 0x5ce638
// 005ce60e  68b09a9700           push 0x979ab0
// 005ce613  8bcb                 mov ecx, ebx
// 005ce615  c783d401000000000000 mov dword ptr [ebx + 0x1d4], 0
// 005ce61f  e8dcf4e3ff           call 0x40db00
// 005ce624  8bcb                 mov ecx, ebx
// 005ce626  e825d9ffff           call 0x5cbf50
// 005ce62b  85c0                 test eax, eax
// 005ce62d  7409                 je 0x5ce638
// 005ce62f  8b10                 mov edx, dword ptr [eax]
// 005ce631  8bc8                 mov ecx, eax
// 005ce633  8b420c               mov eax, dword ptr [edx + 0xc]
// 005ce636  ffd0                 call eax
// 005ce638  57                   push edi
// 005ce639  e8e257f4ff           call 0x513e20
// 005ce63e  50                   push eax
// 005ce63f  8d4c242c             lea ecx, [esp + 0x2c]
// 005ce643  e8d84bf4ff           call 0x513220
// 005ce648  d906                 fld dword ptr [esi]
// 005ce64a  d95c244c             fstp dword ptr [esp + 0x4c]
// 005ce64e  8d4c2428             lea ecx, [esp + 0x28]
// 005ce652  d94604               fld dword ptr [esi + 4]
// 005ce655  51                   push ecx
// 005ce656  d95c2454             fstp dword ptr [esp + 0x54]
// 005ce65a  8bcb                 mov ecx, ebx
// 005ce65c  d94608               fld dword ptr [esi + 8]
// 005ce65f  d95c2458             fstp dword ptr [esp + 0x58]
// 005ce663  e898f8ffff           call 0x5cdf00
// 005ce668  d944247c             fld dword ptr [esp + 0x7c]
// 005ce66c  8d8374010000         lea eax, [ebx + 0x174]
// 005ce672  8bf8                 mov edi, eax
// 005ce674  b909000000           mov ecx, 9
// 005ce679  8d742458             lea esi, [esp + 0x58]
// 005ce67d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005ce67f  d95824               fstp dword ptr [eax + 0x24]
// 005ce682  d9842480000000       fld dword ptr [esp + 0x80]
// 005ce689  d95828               fstp dword ptr [eax + 0x28]
// 005ce68c  d9842484000000       fld dword ptr [esp + 0x84]
// 005ce693  d9582c               fstp dword ptr [eax + 0x2c]
// 005ce696  8bcb                 mov ecx, ebx
// 005ce698  e8d3f8ffff           call 0x5cdf70
// 005ce69d  8bcb                 mov ecx, ebx
// 005ce69f  e8acd8ffff           call 0x5cbf50
// 005ce6a4  5f                   pop edi
// 005ce6a5  85c0                 test eax, eax
// 005ce6a7  741e                 je 0x5ce6c7
// 005ce6a9  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 005ce6b0  6a00                 push 0
// 005ce6b2  52                   push edx
// 005ce6b3  8b10                 mov edx, dword ptr [eax]
// 005ce6b5  83ec18               sub esp, 0x18
// 005ce6b8  8bc8                 mov ecx, eax
// 005ce6ba  8b4210               mov eax, dword ptr [edx + 0x10]
// 005ce6bd  54                   push esp
// 005ce6be  ffd0                 call eax
// 005ce6c0  8bcb                 mov ecx, ebx
// 005ce6c2  e809faffff           call 0x5ce0d0
// 005ce6c7  8bcb                 mov ecx, ebx
// 005ce6c9  e8a2f8ffff           call 0x5cdf70
// 005ce6ce  5e                   pop esi
// 005ce6cf  5b                   pop ebx
// 005ce6d0  83c47c               add esp, 0x7c
// 005ce6d3  c20800               ret 8
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?setImageServerViewNoLerp@Camera@RBX@@QAEXABVCoordinateFrame@G3D@@ABVRect2D@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
