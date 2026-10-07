// roc 2009-06 004f8910  unit: RBX::Network::ClientReplicator  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f8910
//
// 004f8910  6aff                 push -1
// 004f8912  68c8ce8500           push 0x85cec8
// 004f8917  64a100000000         mov eax, dword ptr fs:[0]
// 004f891d  50                   push eax
// 004f891e  64892500000000       mov dword ptr fs:[0], esp
// 004f8925  51                   push ecx
// 004f8926  56                   push esi
// 004f8927  8bf1                 mov esi, ecx
// 004f8929  57                   push edi
// 004f892a  89742408             mov dword ptr [esp + 8], esi
// 004f892e  837e0800             cmp dword ptr [esi + 8], 0
// 004f8932  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004f893a  7437                 je 0x4f8973
// 004f893c  8b06                 mov eax, dword ptr [esi]
// 004f893e  85c0                 test eax, eax
// 004f8940  741d                 je 0x4f895f
// 004f8942  8b48fc               mov ecx, dword ptr [eax - 4]
// 004f8945  8d78fc               lea edi, [eax - 4]
// 004f8948  68e0496700           push 0x6749e0
// 004f894d  51                   push ecx
// 004f894e  6a08                 push 8
// 004f8950  50                   push eax
// 004f8951  e820122200           call 0x719b76
// 004f8956  57                   push edi
// 004f8957  e882032200           call 0x718cde
// 004f895c  83c404               add esp, 4
// 004f895f  c7460800000000       mov dword ptr [esi + 8], 0
// 004f8966  c70600000000         mov dword ptr [esi], 0
// 004f896c  c7460400000000       mov dword ptr [esi + 4], 0
// 004f8973  837e0800             cmp dword ptr [esi + 8], 0
// 004f8977  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004f897f  7623                 jbe 0x4f89a4
// 004f8981  8b36                 mov esi, dword ptr [esi]
// 004f8983  85f6                 test esi, esi
// 004f8985  741d                 je 0x4f89a4
// 004f8987  8b56fc               mov edx, dword ptr [esi - 4]
// 004f898a  68e0496700           push 0x6749e0
// 004f898f  8d7efc               lea edi, [esi - 4]
// 004f8992  52                   push edx
// 004f8993  6a08                 push 8
// 004f8995  56                   push esi
// 004f8996  e8db112200           call 0x719b76
// 004f899b  57                   push edi
// 004f899c  e83d032200           call 0x718cde
// 004f89a1  83c404               add esp, 4
// 004f89a4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f89a8  5f                   pop edi
// 004f89a9  5e                   pop esi
// 004f89aa  64890d00000000       mov dword ptr fs:[0], ecx
// 004f89b1  83c410               add esp, 0x10
// 004f89b4  c3                   ret 
// library rbx2016-raknet/CloudServer.cpp (function ??1?$OrderedList@UCloudKey@RakNet@@U12@$1?CloudKeyComp@2@YAHABU12@0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
