// roc 2011-06 0052f3e0  unit: RBX::Network::ProfiledRakPeer  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052f3e0
//
// 0052f3e0  83ec10               sub esp, 0x10
// 0052f3e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052f3e7  53                   push ebx
// 0052f3e8  55                   push ebp
// 0052f3e9  56                   push esi
// 0052f3ea  8b31                 mov esi, dword ptr [ecx]
// 0052f3ec  c1e004               shl eax, 4
// 0052f3ef  8b543008             mov edx, dword ptr [eax + esi + 8]
// 0052f3f3  8b5c3004             mov ebx, dword ptr [eax + esi + 4]
// 0052f3f7  03c6                 add eax, esi
// 0052f3f9  89542414             mov dword ptr [esp + 0x14], edx
// 0052f3fd  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052f400  89542418             mov dword ptr [esp + 0x18], edx
// 0052f404  8b542424             mov edx, dword ptr [esp + 0x24]
// 0052f408  c1e204               shl edx, 4
// 0052f40b  8b2c32               mov ebp, dword ptr [edx + esi]
// 0052f40e  57                   push edi
// 0052f40f  8b38                 mov edi, dword ptr [eax]
// 0052f411  8928                 mov dword ptr [eax], ebp
// 0052f413  8b6c3204             mov ebp, dword ptr [edx + esi + 4]
// 0052f417  896804               mov dword ptr [eax + 4], ebp
// 0052f41a  8b6c3208             mov ebp, dword ptr [edx + esi + 8]
// 0052f41e  896808               mov dword ptr [eax + 8], ebp
// 0052f421  8b74320c             mov esi, dword ptr [edx + esi + 0xc]
// 0052f425  89700c               mov dword ptr [eax + 0xc], esi
// 0052f428  8b01                 mov eax, dword ptr [ecx]
// 0052f42a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052f42e  03c2                 add eax, edx
// 0052f430  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052f434  8938                 mov dword ptr [eax], edi
// 0052f436  5f                   pop edi
// 0052f437  5e                   pop esi
// 0052f438  895804               mov dword ptr [eax + 4], ebx
// 0052f43b  5d                   pop ebp
// 0052f43c  894808               mov dword ptr [eax + 8], ecx
// 0052f43f  89500c               mov dword ptr [eax + 0xc], edx
// 0052f442  5b                   pop ebx
// 0052f443  83c410               add esp, 0x10
// 0052f446  c20800               ret 8
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Swap@?$Heap@_KPAUInternalPacket@RakNet@@$0A@@DataStructures@@IAEXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
