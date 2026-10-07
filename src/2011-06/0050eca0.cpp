// roc 2011-06 0050eca0  unit: RBX::Network::VMarker::?$EventDesc  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050eca0
//
// 0050eca0  51                   push ecx
// 0050eca1  56                   push esi
// 0050eca2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0050eca6  57                   push edi
// 0050eca7  8b3da01da400         mov edi, dword ptr [0xa41da0]
// 0050ecad  6a04                 push 4
// 0050ecaf  8d44240c             lea eax, [esp + 0xc]
// 0050ecb3  50                   push eax
// 0050ecb4  6802100000           push 0x1002
// 0050ecb9  68ffff0000           push 0xffff
// 0050ecbe  56                   push esi
// 0050ecbf  c744241c00000400     mov dword ptr [esp + 0x1c], 0x40000
// 0050ecc7  ffd7                 call edi
// 0050ecc9  6a04                 push 4
// 0050eccb  8d4c240c             lea ecx, [esp + 0xc]
// 0050eccf  51                   push ecx
// 0050ecd0  6880000000           push 0x80
// 0050ecd5  68ffff0000           push 0xffff
// 0050ecda  56                   push esi
// 0050ecdb  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0050ece3  ffd7                 call edi
// 0050ece5  6a04                 push 4
// 0050ece7  8d54240c             lea edx, [esp + 0xc]
// 0050eceb  52                   push edx
// 0050ecec  6801100000           push 0x1001
// 0050ecf1  68ffff0000           push 0xffff
// 0050ecf6  56                   push esi
// 0050ecf7  c744241c00400000     mov dword ptr [esp + 0x1c], 0x4000
// 0050ecff  ffd7                 call edi
// 0050ed01  6a04                 push 4
// 0050ed03  8d44240c             lea eax, [esp + 0xc]
// 0050ed07  50                   push eax
// 0050ed08  6a20                 push 0x20
// 0050ed0a  68ffff0000           push 0xffff
// 0050ed0f  56                   push esi
// 0050ed10  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0050ed18  ffd7                 call edi
// 0050ed1a  5f                   pop edi
// 0050ed1b  5e                   pop esi
// 0050ed1c  59                   pop ecx
// 0050ed1d  c3                   ret 
// library rbx2016-raknet/SocketLayer.cpp (function ?SetSocketOptions@SocketLayer@RakNet@@CAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SocketLayer.cpp
