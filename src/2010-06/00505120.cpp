// roc 2010-06 00505120  unit: RBX::Network::ClientReplicator  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00505120
//
// 00505120  6aff                 push -1
// 00505122  68c8d29800           push 0x98d2c8
// 00505127  64a100000000         mov eax, dword ptr fs:[0]
// 0050512d  50                   push eax
// 0050512e  64892500000000       mov dword ptr fs:[0], esp
// 00505135  51                   push ecx
// 00505136  56                   push esi
// 00505137  8bf1                 mov esi, ecx
// 00505139  57                   push edi
// 0050513a  89742408             mov dword ptr [esp + 8], esi
// 0050513e  837e0800             cmp dword ptr [esi + 8], 0
// 00505142  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0050514a  7437                 je 0x505183
// 0050514c  8b06                 mov eax, dword ptr [esi]
// 0050514e  85c0                 test eax, eax
// 00505150  741d                 je 0x50516f
// 00505152  8b48fc               mov ecx, dword ptr [eax - 4]
// 00505155  8d78fc               lea edi, [eax - 4]
// 00505158  68b0454500           push 0x4545b0
// 0050515d  51                   push ecx
// 0050515e  6a08                 push 8
// 00505160  50                   push eax
// 00505161  e878392a00           call 0x7a8ade
// 00505166  57                   push edi
// 00505167  e8da2a2a00           call 0x7a7c46
// 0050516c  83c404               add esp, 4
// 0050516f  c7460800000000       mov dword ptr [esi + 8], 0
// 00505176  c70600000000         mov dword ptr [esi], 0
// 0050517c  c7460400000000       mov dword ptr [esi + 4], 0
// 00505183  837e0800             cmp dword ptr [esi + 8], 0
// 00505187  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0050518f  7623                 jbe 0x5051b4
// 00505191  8b36                 mov esi, dword ptr [esi]
// 00505193  85f6                 test esi, esi
// 00505195  741d                 je 0x5051b4
// 00505197  8b56fc               mov edx, dword ptr [esi - 4]
// 0050519a  68b0454500           push 0x4545b0
// 0050519f  8d7efc               lea edi, [esi - 4]
// 005051a2  52                   push edx
// 005051a3  6a08                 push 8
// 005051a5  56                   push esi
// 005051a6  e833392a00           call 0x7a8ade
// 005051ab  57                   push edi
// 005051ac  e8952a2a00           call 0x7a7c46
// 005051b1  83c404               add esp, 4
// 005051b4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005051b8  5f                   pop edi
// 005051b9  5e                   pop esi
// 005051ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005051c1  83c410               add esp, 0x10
// 005051c4  c3                   ret 
// library rbx2016-raknet/CloudServer.cpp (function ??1?$OrderedList@UCloudKey@RakNet@@U12@$1?CloudKeyComp@2@YAHABU12@0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
