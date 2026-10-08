// roc 2008-06 004ce570  unit: RBX::Network::PhysicsSender  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce570
//
// 004ce570  83ec18               sub esp, 0x18
// 004ce573  56                   push esi
// 004ce574  6a00                 push 0
// 004ce576  6a02                 push 2
// 004ce578  6a02                 push 2
// 004ce57a  ff15e02e8000         call dword ptr [0x802ee0]
// 004ce580  8bf0                 mov esi, eax
// 004ce582  83feff               cmp esi, -1
// 004ce585  750a                 jne 0x4ce591
// 004ce587  83c8ff               or eax, 0xffffffff
// 004ce58a  5e                   pop esi
// 004ce58b  83c418               add esp, 0x18
// 004ce58e  c20c00               ret 0xc
// 004ce591  57                   push edi
// 004ce592  8b3db42e8000         mov edi, dword ptr [0x802eb4]
// 004ce598  6a04                 push 4
// 004ce59a  8d44240c             lea eax, [esp + 0xc]
// 004ce59e  50                   push eax
// 004ce59f  6a04                 push 4
// 004ce5a1  68ffff0000           push 0xffff
// 004ce5a6  56                   push esi
// 004ce5a7  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004ce5af  ffd7                 call edi
// 004ce5b1  6a04                 push 4
// 004ce5b3  8d4c240c             lea ecx, [esp + 0xc]
// 004ce5b7  51                   push ecx
// 004ce5b8  6802100000           push 0x1002
// 004ce5bd  68ffff0000           push 0xffff
// 004ce5c2  56                   push esi
// 004ce5c3  c744241c00000400     mov dword ptr [esp + 0x1c], 0x40000
// 004ce5cb  ffd7                 call edi
// 004ce5cd  6a04                 push 4
// 004ce5cf  8d54240c             lea edx, [esp + 0xc]
// 004ce5d3  52                   push edx
// 004ce5d4  6801100000           push 0x1001
// 004ce5d9  68ffff0000           push 0xffff
// 004ce5de  56                   push esi
// 004ce5df  c744241c00400000     mov dword ptr [esp + 0x1c], 0x4000
// 004ce5e7  ffd7                 call edi
// 004ce5e9  8d44240c             lea eax, [esp + 0xc]
// 004ce5ed  50                   push eax
// 004ce5ee  687e660480           push 0x8004667e
// 004ce5f3  56                   push esi
// 004ce5f4  c744241801000000     mov dword ptr [esp + 0x18], 1
// 004ce5fc  ff15dc2e8000         call dword ptr [0x802edc]
// 004ce602  6a04                 push 4
// 004ce604  8d4c240c             lea ecx, [esp + 0xc]
// 004ce608  51                   push ecx
// 004ce609  6a20                 push 0x20
// 004ce60b  68ffff0000           push 0xffff
// 004ce610  56                   push esi
// 004ce611  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004ce619  ffd7                 call edi
// 004ce61b  8b542424             mov edx, dword ptr [esp + 0x24]
// 004ce61f  52                   push edx
// 004ce620  ff15d42e8000         call dword ptr [0x802ed4]
// 004ce626  6689442412           mov word ptr [esp + 0x12], ax
// 004ce62b  b802000000           mov eax, 2
// 004ce630  6689442410           mov word ptr [esp + 0x10], ax
// 004ce635  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004ce639  5f                   pop edi
// 004ce63a  85c0                 test eax, eax
// 004ce63c  7412                 je 0x4ce650
// 004ce63e  803800               cmp byte ptr [eax], 0
// 004ce641  740d                 je 0x4ce650
// 004ce643  50                   push eax
// 004ce644  ff15bc2e8000         call dword ptr [0x802ebc]
// 004ce64a  89442410             mov dword ptr [esp + 0x10], eax
// 004ce64e  eb08                 jmp 0x4ce658
// 004ce650  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ce658  6a10                 push 0x10
// 004ce65a  8d4c2410             lea ecx, [esp + 0x10]
// 004ce65e  51                   push ecx
// 004ce65f  56                   push esi
// 004ce660  ff15d82e8000         call dword ptr [0x802ed8]
// 004ce666  83f8ff               cmp eax, -1
// 004ce669  0f8418ffffff         je 0x4ce587
// 004ce66f  8bc6                 mov eax, esi
// 004ce671  5e                   pop esi
// 004ce672  83c418               add esp, 0x18
// 004ce675  c20c00               ret 0xc
// library rbxgs-raknet/SocketLayer.cpp (function ?CreateBoundSocket@SocketLayer@@QAEIG_NPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
