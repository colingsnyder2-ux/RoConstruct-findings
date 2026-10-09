// roc 2008-06 005ec6e0  unit: RBX::Sky  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec6e0
//
// 005ec6e0  d9ee                 fldz 
// 005ec6e2  83ec24               sub esp, 0x24
// 005ec6e5  53                   push ebx
// 005ec6e6  bb01000000           mov ebx, 1
// 005ec6eb  56                   push esi
// 005ec6ec  841d00389700         test byte ptr [0x973800], bl
// 005ec6f2  751c                 jne 0x5ec710
// 005ec6f4  d9e8                 fld1 
// 005ec6f6  091d00389700         or dword ptr [0x973800], ebx
// 005ec6fc  d91df4379700         fstp dword ptr [0x9737f4]
// 005ec702  d915f8379700         fst dword ptr [0x9737f8]
// 005ec708  d91dfc379700         fstp dword ptr [0x9737fc]
// 005ec70e  eb02                 jmp 0x5ec712
// 005ec710  ddd8                 fstp st(0)
// 005ec712  8b542434             mov edx, dword ptr [esp + 0x34]
// 005ec716  52                   push edx
// 005ec717  8d442424             lea eax, [esp + 0x24]
// 005ec71b  68f4379700           push 0x9737f4
// 005ec720  50                   push eax
// 005ec721  e80afcffff           call 0x5ec330
// 005ec726  83c40c               add esp, 0xc
// 005ec729  841da4289700         test byte ptr [0x9728a4], bl
// 005ec72f  751c                 jne 0x5ec74d
// 005ec731  d9ee                 fldz 
// 005ec733  091da4289700         or dword ptr [0x9728a4], ebx
// 005ec739  d91598289700         fst dword ptr [0x972898]
// 005ec73f  d9e8                 fld1 
// 005ec741  d91d9c289700         fstp dword ptr [0x97289c]
// 005ec747  d91da0289700         fstp dword ptr [0x9728a0]
// 005ec74d  52                   push edx
// 005ec74e  8d4c2418             lea ecx, [esp + 0x18]
// 005ec752  6898289700           push 0x972898
// 005ec757  51                   push ecx
// 005ec758  e8d3fbffff           call 0x5ec330
// 005ec75d  83c40c               add esp, 0xc
// 005ec760  841da8ef9600         test byte ptr [0x96efa8], bl
// 005ec766  751c                 jne 0x5ec784
// 005ec768  d9ee                 fldz 
// 005ec76a  091da8ef9600         or dword ptr [0x96efa8], ebx
// 005ec770  d9159cef9600         fst dword ptr [0x96ef9c]
// 005ec776  d91da0ef9600         fstp dword ptr [0x96efa0]
// 005ec77c  d9e8                 fld1 
// 005ec77e  d91da4ef9600         fstp dword ptr [0x96efa4]
// 005ec784  52                   push edx
// 005ec785  689cef9600           push 0x96ef9c
// 005ec78a  8d542410             lea edx, [esp + 0x10]
// 005ec78e  52                   push edx
// 005ec78f  e89cfbffff           call 0x5ec330
// 005ec794  d944241c             fld dword ptr [esp + 0x1c]
// 005ec798  d95c2408             fstp dword ptr [esp + 8]
// 005ec79c  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005ec7a0  d9442428             fld dword ptr [esp + 0x28]
// 005ec7a4  83ec18               sub esp, 0x18
// 005ec7a7  d95c241c             fstp dword ptr [esp + 0x1c]
// 005ec7ab  8bce                 mov ecx, esi
// 005ec7ad  d944244c             fld dword ptr [esp + 0x4c]
// 005ec7b1  d95c2418             fstp dword ptr [esp + 0x18]
// 005ec7b5  d9442430             fld dword ptr [esp + 0x30]
// 005ec7b9  d95c2414             fstp dword ptr [esp + 0x14]
// 005ec7bd  d944243c             fld dword ptr [esp + 0x3c]
// 005ec7c1  d95c2410             fstp dword ptr [esp + 0x10]
// 005ec7c5  d9442448             fld dword ptr [esp + 0x48]
// 005ec7c9  d95c240c             fstp dword ptr [esp + 0xc]
// 005ec7cd  d944242c             fld dword ptr [esp + 0x2c]
// 005ec7d1  d95c2408             fstp dword ptr [esp + 8]
// 005ec7d5  d9442438             fld dword ptr [esp + 0x38]
// 005ec7d9  d95c2404             fstp dword ptr [esp + 4]
// 005ec7dd  d9442444             fld dword ptr [esp + 0x44]
// 005ec7e1  d91c24               fstp dword ptr [esp]
// 005ec7e4  e88773f2ff           call 0x513b70
// 005ec7e9  8bc6                 mov eax, esi
// 005ec7eb  5e                   pop esi
// 005ec7ec  5b                   pop ebx
// 005ec7ed  83c424               add esp, 0x24
// 005ec7f0  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ?normalIdToMatrix3Internal@RBX@@YA?AVMatrix3@G3D@@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
