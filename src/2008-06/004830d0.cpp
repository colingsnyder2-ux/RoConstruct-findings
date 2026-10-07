// roc 2008-06 004830d0  unit: G3D::Win32Window  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004830d0
//
// 004830d0  6aff                 push -1
// 004830d2  68b7547c00           push 0x7c54b7
// 004830d7  64a100000000         mov eax, dword ptr fs:[0]
// 004830dd  50                   push eax
// 004830de  64892500000000       mov dword ptr fs:[0], esp
// 004830e5  81eca4010000         sub esp, 0x1a4
// 004830eb  53                   push ebx
// 004830ec  56                   push esi
// 004830ed  57                   push edi
// 004830ee  8d4c2414             lea ecx, [esp + 0x14]
// 004830f2  ff1560248000         call dword ptr [0x802460]
// 004830f8  33f6                 xor esi, esi
// 004830fa  89742440             mov dword ptr [esp + 0x40], esi
// 004830fe  89742444             mov dword ptr [esp + 0x44], esi
// 00483102  8974243c             mov dword ptr [esp + 0x3c], esi
// 00483106  8bbc24c0010000       mov edi, dword ptr [esp + 0x1c0]
// 0048310d  8b9c24c4010000       mov ebx, dword ptr [esp + 0x1c4]
// 00483114  8b03                 mov eax, dword ptr [ebx]
// 00483116  8b08                 mov ecx, dword ptr [eax]
// 00483118  56                   push esi
// 00483119  8d542414             lea edx, [esp + 0x14]
// 0048311d  52                   push edx
// 0048311e  8d5704               lea edx, [edi + 4]
// 00483121  52                   push edx
// 00483122  50                   push eax
// 00483123  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00483126  c78424c801000001000000 mov dword ptr [esp + 0x1c8], 1
// 00483131  ffd0                 call eax
// 00483133  85c0                 test eax, eax
// 00483135  0f85c5000000         jne 0x483200
// 0048313b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048313f  8b5310               mov edx, dword ptr [ebx + 0x10]
// 00483142  8b08                 mov ecx, dword ptr [eax]
// 00483144  6a06                 push 6
// 00483146  52                   push edx
// 00483147  50                   push eax
// 00483148  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0048314b  ffd0                 call eax
// 0048314d  85c0                 test eax, eax
// 0048314f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00483153  8b08                 mov ecx, dword ptr [eax]
// 00483155  7515                 jne 0x48316c
// 00483157  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 0048315a  6810f08100           push 0x81f010
// 0048315f  50                   push eax
// 00483160  ffd2                 call edx
// 00483162  85c0                 test eax, eax
// 00483164  8b442410             mov eax, dword ptr [esp + 0x10]
// 00483168  740d                 je 0x483177
// 0048316a  8b08                 mov ecx, dword ptr [eax]
// 0048316c  8b5108               mov edx, dword ptr [ecx + 8]
// 0048316f  50                   push eax
// 00483170  ffd2                 call edx
// 00483172  e989000000           jmp 0x483200
// 00483177  8d542448             lea edx, [esp + 0x48]
// 0048317b  c74424482c000000     mov dword ptr [esp + 0x48], 0x2c
// 00483183  8b08                 mov ecx, dword ptr [eax]
// 00483185  52                   push edx
// 00483186  50                   push eax
// 00483187  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0048318a  ffd0                 call eax
// 0048318c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00483190  81c72c010000         add edi, 0x12c
// 00483196  894c2438             mov dword ptr [esp + 0x38], ecx
// 0048319a  57                   push edi
// 0048319b  8d4c2418             lea ecx, [esp + 0x18]
// 0048319f  ff154c248000         call dword ptr [0x80244c]
// 004831a5  bf3c010000           mov edi, 0x13c
// 004831aa  8d9b00000000         lea ebx, [ebx]
// 004831b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004831b4  6a01                 push 1
// 004831b6  8d0cb500000000       lea ecx, [esi*4]
// 004831bd  51                   push ecx
// 004831be  8d4c247c             lea ecx, [esp + 0x7c]
// 004831c2  897c247c             mov dword ptr [esp + 0x7c], edi
// 004831c6  8b10                 mov edx, dword ptr [eax]
// 004831c8  8b5238               mov edx, dword ptr [edx + 0x38]
// 004831cb  51                   push ecx
// 004831cc  50                   push eax
// 004831cd  ffd2                 call edx
// 004831cf  85c0                 test eax, eax
// 004831d1  7512                 jne 0x4831e5
// 004831d3  8d44240c             lea eax, [esp + 0xc]
// 004831d7  50                   push eax
// 004831d8  8d4c2440             lea ecx, [esp + 0x40]
// 004831dc  89742410             mov dword ptr [esp + 0x10], esi
// 004831e0  e80bd9ffff           call 0x480af0
// 004831e5  46                   inc esi
// 004831e6  83fe08               cmp esi, 8
// 004831e9  7cc5                 jl 0x4831b0
// 004831eb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004831ef  8d542410             lea edx, [esp + 0x10]
// 004831f3  894c2434             mov dword ptr [esp + 0x34], ecx
// 004831f7  52                   push edx
// 004831f8  8d4b04               lea ecx, [ebx + 4]
// 004831fb  e8d0fdffff           call 0x482fd0
// 00483200  8d4c2410             lea ecx, [esp + 0x10]
// 00483204  c78424b8010000ffffffff mov dword ptr [esp + 0x1b8], 0xffffffff
// 0048320f  e86cc9ffff           call 0x47fb80
// 00483214  8b8c24b0010000       mov ecx, dword ptr [esp + 0x1b0]
// 0048321b  5f                   pop edi
// 0048321c  5e                   pop esi
// 0048321d  b801000000           mov eax, 1
// 00483222  5b                   pop ebx
// 00483223  64890d00000000       mov dword ptr fs:[0], ecx
// 0048322a  81c4b0010000         add esp, 0x1b0
// 00483230  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?enumJoysticksCallback@_DirectInput@_internal@G3D@@CGHPBUDIDEVICEINSTANCEA@3@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
