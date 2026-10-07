// roc 2012-06 005a24f0  unit: RBX::Network::ClientReplicator  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a24f0
//
// 005a24f0  51                   push ecx
// 005a24f1  56                   push esi
// 005a24f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a24f6  57                   push edi
// 005a24f7  8b3d283eb200         mov edi, dword ptr [0xb23e28]
// 005a24fd  6a04                 push 4
// 005a24ff  8d44240c             lea eax, [esp + 0xc]
// 005a2503  50                   push eax
// 005a2504  6802100000           push 0x1002
// 005a2509  68ffff0000           push 0xffff
// 005a250e  56                   push esi
// 005a250f  c744241c00000400     mov dword ptr [esp + 0x1c], 0x40000
// 005a2517  ffd7                 call edi
// 005a2519  6a04                 push 4
// 005a251b  8d4c240c             lea ecx, [esp + 0xc]
// 005a251f  51                   push ecx
// 005a2520  6880000000           push 0x80
// 005a2525  68ffff0000           push 0xffff
// 005a252a  56                   push esi
// 005a252b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005a2533  ffd7                 call edi
// 005a2535  6a04                 push 4
// 005a2537  8d54240c             lea edx, [esp + 0xc]
// 005a253b  52                   push edx
// 005a253c  6801100000           push 0x1001
// 005a2541  68ffff0000           push 0xffff
// 005a2546  56                   push esi
// 005a2547  c744241c00400000     mov dword ptr [esp + 0x1c], 0x4000
// 005a254f  ffd7                 call edi
// 005a2551  6a04                 push 4
// 005a2553  8d44240c             lea eax, [esp + 0xc]
// 005a2557  50                   push eax
// 005a2558  6a20                 push 0x20
// 005a255a  68ffff0000           push 0xffff
// 005a255f  56                   push esi
// 005a2560  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 005a2568  ffd7                 call edi
// 005a256a  5f                   pop edi
// 005a256b  5e                   pop esi
// 005a256c  59                   pop ecx
// 005a256d  c3                   ret 
// library rbx2016-raknet/SocketLayer.cpp (function ?SetSocketOptions@SocketLayer@RakNet@@CAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SocketLayer.cpp
