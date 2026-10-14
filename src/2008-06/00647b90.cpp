// roc 2008-06 00647b90  unit: RBX::Block  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647b90
//
// 00647b90  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00647b94  c70200000000         mov dword ptr [edx], 0
// 00647b9a  56                   push esi
// 00647b9b  8b7110               mov esi, dword ptr [ecx + 0x10]
// 00647b9e  d906                 fld dword ptr [esi]
// 00647ba0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647ba4  d819                 fcomp dword ptr [ecx]
// 00647ba6  57                   push edi
// 00647ba7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00647bab  dfe0                 fnstsw ax
// 00647bad  f6c405               test ah, 5
// 00647bb0  7a0e                 jp 0x647bc0
// 00647bb2  d906                 fld dword ptr [esi]
// 00647bb4  b801000000           mov eax, 1
// 00647bb9  d919                 fstp dword ptr [ecx]
// 00647bbb  ff02                 inc dword ptr [edx]
// 00647bbd  668907               mov word ptr [edi], ax
// 00647bc0  d906                 fld dword ptr [esi]
// 00647bc2  d9e0                 fchs 
// 00647bc4  d811                 fcom dword ptr [ecx]
// 00647bc6  dfe0                 fnstsw ax
// 00647bc8  f6c441               test ah, 0x41
// 00647bcb  750e                 jne 0x647bdb
// 00647bcd  d919                 fstp dword ptr [ecx]
// 00647bcf  ff02                 inc dword ptr [edx]
// 00647bd1  b8ffffffff           mov eax, 0xffffffff
// 00647bd6  668907               mov word ptr [edi], ax
// 00647bd9  eb02                 jmp 0x647bdd
// 00647bdb  ddd8                 fstp st(0)
// 00647bdd  d94604               fld dword ptr [esi + 4]
// 00647be0  d85904               fcomp dword ptr [ecx + 4]
// 00647be3  dfe0                 fnstsw ax
// 00647be5  f6c405               test ah, 5
// 00647be8  7a11                 jp 0x647bfb
// 00647bea  d94604               fld dword ptr [esi + 4]
// 00647bed  b801000000           mov eax, 1
// 00647bf2  d95904               fstp dword ptr [ecx + 4]
// 00647bf5  ff02                 inc dword ptr [edx]
// 00647bf7  66894702             mov word ptr [edi + 2], ax
// 00647bfb  d94604               fld dword ptr [esi + 4]
// 00647bfe  d9e0                 fchs 
// 00647c00  d85104               fcom dword ptr [ecx + 4]
// 00647c03  dfe0                 fnstsw ax
// 00647c05  f6c441               test ah, 0x41
// 00647c08  7510                 jne 0x647c1a
// 00647c0a  d95904               fstp dword ptr [ecx + 4]
// 00647c0d  ff02                 inc dword ptr [edx]
// 00647c0f  b8ffffffff           mov eax, 0xffffffff
// 00647c14  66894702             mov word ptr [edi + 2], ax
// 00647c18  eb02                 jmp 0x647c1c
// 00647c1a  ddd8                 fstp st(0)
// 00647c1c  d94608               fld dword ptr [esi + 8]
// 00647c1f  d85908               fcomp dword ptr [ecx + 8]
// 00647c22  dfe0                 fnstsw ax
// 00647c24  f6c405               test ah, 5
// 00647c27  7a11                 jp 0x647c3a
// 00647c29  d94608               fld dword ptr [esi + 8]
// 00647c2c  b801000000           mov eax, 1
// 00647c31  d95908               fstp dword ptr [ecx + 8]
// 00647c34  ff02                 inc dword ptr [edx]
// 00647c36  66894704             mov word ptr [edi + 4], ax
// 00647c3a  d94608               fld dword ptr [esi + 8]
// 00647c3d  d9e0                 fchs 
// 00647c3f  d85108               fcom dword ptr [ecx + 8]
// 00647c42  dfe0                 fnstsw ax
// 00647c44  f6c441               test ah, 0x41
// 00647c47  7511                 jne 0x647c5a
// 00647c49  d95908               fstp dword ptr [ecx + 8]
// 00647c4c  ff02                 inc dword ptr [edx]
// 00647c4e  83c9ff               or ecx, 0xffffffff
// 00647c51  66894f04             mov word ptr [edi + 4], cx
// 00647c55  5f                   pop edi
// 00647c56  5e                   pop esi
// 00647c57  c20c00               ret 0xc
// 00647c5a  5f                   pop edi
// 00647c5b  ddd8                 fstp st(0)
// 00647c5d  5e                   pop esi
// 00647c5e  c20c00               ret 0xc
// library rbxgs-dll/v8world\Block.cpp (function ?projectToFace@Block@RBX@@QAEXAAVVector3@G3D@@AAVVector3int16@4@AAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8world/Block.cpp
