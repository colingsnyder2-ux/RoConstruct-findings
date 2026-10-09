// roc 2008-06 004b7d30  unit: RBX::Network::VReplicator::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b7d30
//
// 004b7d30  6aff                 push -1
// 004b7d32  68598a7c00           push 0x7c8a59
// 004b7d37  64a100000000         mov eax, dword ptr fs:[0]
// 004b7d3d  50                   push eax
// 004b7d3e  64892500000000       mov dword ptr fs:[0], esp
// 004b7d45  83ec34               sub esp, 0x34
// 004b7d48  56                   push esi
// 004b7d49  8b742450             mov esi, dword ptr [esp + 0x50]
// 004b7d4d  57                   push edi
// 004b7d4e  c744240800000000     mov dword ptr [esp + 8], 0
// 004b7d56  56                   push esi
// 004b7d57  8d4c2414             lea ecx, [esp + 0x14]
// 004b7d5b  89742410             mov dword ptr [esp + 0x10], esi
// 004b7d5f  e8bc28f6ff           call 0x41a620
// 004b7d64  56                   push esi
// 004b7d65  8d442414             lea eax, [esp + 0x14]
// 004b7d69  56                   push esi
// 004b7d6a  50                   push eax
// 004b7d6b  e8a056fcff           call 0x47d410
// 004b7d70  83c40c               add esp, 0xc
// 004b7d73  8d4c240c             lea ecx, [esp + 0xc]
// 004b7d77  51                   push ecx
// 004b7d78  8d4c2418             lea ecx, [esp + 0x18]
// 004b7d7c  c744244801000000     mov dword ptr [esp + 0x48], 1
// 004b7d84  e847e4ffff           call 0x4b61d0
// 004b7d89  8b542458             mov edx, dword ptr [esp + 0x58]
// 004b7d8d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 004b7d91  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 004b7d95  52                   push edx
// 004b7d96  8d442418             lea eax, [esp + 0x18]
// 004b7d9a  50                   push eax
// 004b7d9b  57                   push edi
// 004b7d9c  83c110               add ecx, 0x10
// 004b7d9f  c644245002           mov byte ptr [esp + 0x50], 2
// 004b7da4  e8d7a1ffff           call 0x4b1f80
// 004b7da9  8d4c2414             lea ecx, [esp + 0x14]
// 004b7dad  c744240801000000     mov dword ptr [esp + 8], 1
// 004b7db5  c644244401           mov byte ptr [esp + 0x44], 1
// 004b7dba  e85179feff           call 0x49f710
// 004b7dbf  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b7dc3  c644244400           mov byte ptr [esp + 0x44], 0
// 004b7dc8  85f6                 test esi, esi
// 004b7dca  742a                 je 0x4b7df6
// 004b7dcc  8d4e04               lea ecx, [esi + 4]
// 004b7dcf  83caff               or edx, 0xffffffff
// 004b7dd2  f00fc111             lock xadd dword ptr [ecx], edx
// 004b7dd6  751e                 jne 0x4b7df6
// 004b7dd8  8b06                 mov eax, dword ptr [esi]
// 004b7dda  8b5004               mov edx, dword ptr [eax + 4]
// 004b7ddd  8bce                 mov ecx, esi
// 004b7ddf  ffd2                 call edx
// 004b7de1  8d4608               lea eax, [esi + 8]
// 004b7de4  83c9ff               or ecx, 0xffffffff
// 004b7de7  f00fc108             lock xadd dword ptr [eax], ecx
// 004b7deb  7509                 jne 0x4b7df6
// 004b7ded  8b16                 mov edx, dword ptr [esi]
// 004b7def  8b4208               mov eax, dword ptr [edx + 8]
// 004b7df2  8bce                 mov ecx, esi
// 004b7df4  ffd0                 call eax
// 004b7df6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004b7dfa  8bc7                 mov eax, edi
// 004b7dfc  5f                   pop edi
// 004b7dfd  5e                   pop esi
// 004b7dfe  64890d00000000       mov dword ptr fs:[0], ecx
// 004b7e05  83c440               add esp, 0x40
// 004b7e08  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
