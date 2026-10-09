// roc 2008-06 0041d3d0  unit: VDHTMLWindow::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041d3d0
//
// 0041d3d0  6aff                 push -1
// 0041d3d2  68598a7c00           push 0x7c8a59
// 0041d3d7  64a100000000         mov eax, dword ptr fs:[0]
// 0041d3dd  50                   push eax
// 0041d3de  64892500000000       mov dword ptr fs:[0], esp
// 0041d3e5  83ec34               sub esp, 0x34
// 0041d3e8  56                   push esi
// 0041d3e9  8b742450             mov esi, dword ptr [esp + 0x50]
// 0041d3ed  57                   push edi
// 0041d3ee  c744240800000000     mov dword ptr [esp + 8], 0
// 0041d3f6  56                   push esi
// 0041d3f7  8d4c2414             lea ecx, [esp + 0x14]
// 0041d3fb  89742410             mov dword ptr [esp + 0x10], esi
// 0041d3ff  e81cd2ffff           call 0x41a620
// 0041d404  56                   push esi
// 0041d405  8d442414             lea eax, [esp + 0x14]
// 0041d409  56                   push esi
// 0041d40a  50                   push eax
// 0041d40b  e800000600           call 0x47d410
// 0041d410  83c40c               add esp, 0xc
// 0041d413  8d4c240c             lea ecx, [esp + 0xc]
// 0041d417  51                   push ecx
// 0041d418  8d4c2418             lea ecx, [esp + 0x18]
// 0041d41c  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0041d424  e8e7feffff           call 0x41d310
// 0041d429  8b542458             mov edx, dword ptr [esp + 0x58]
// 0041d42d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0041d431  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0041d435  52                   push edx
// 0041d436  8d442418             lea eax, [esp + 0x18]
// 0041d43a  50                   push eax
// 0041d43b  57                   push edi
// 0041d43c  83c110               add ecx, 0x10
// 0041d43f  c644245002           mov byte ptr [esp + 0x50], 2
// 0041d444  e8d7d7ffff           call 0x41ac20
// 0041d449  8d4c2414             lea ecx, [esp + 0x14]
// 0041d44d  c744240801000000     mov dword ptr [esp + 8], 1
// 0041d455  c644244401           mov byte ptr [esp + 0x44], 1
// 0041d45a  e8b1220800           call 0x49f710
// 0041d45f  8b742410             mov esi, dword ptr [esp + 0x10]
// 0041d463  c644244400           mov byte ptr [esp + 0x44], 0
// 0041d468  85f6                 test esi, esi
// 0041d46a  742a                 je 0x41d496
// 0041d46c  8d4e04               lea ecx, [esi + 4]
// 0041d46f  83caff               or edx, 0xffffffff
// 0041d472  f00fc111             lock xadd dword ptr [ecx], edx
// 0041d476  751e                 jne 0x41d496
// 0041d478  8b06                 mov eax, dword ptr [esi]
// 0041d47a  8b5004               mov edx, dword ptr [eax + 4]
// 0041d47d  8bce                 mov ecx, esi
// 0041d47f  ffd2                 call edx
// 0041d481  8d4608               lea eax, [esi + 8]
// 0041d484  83c9ff               or ecx, 0xffffffff
// 0041d487  f00fc108             lock xadd dword ptr [eax], ecx
// 0041d48b  7509                 jne 0x41d496
// 0041d48d  8b16                 mov edx, dword ptr [esi]
// 0041d48f  8b4208               mov eax, dword ptr [edx + 8]
// 0041d492  8bce                 mov ecx, esi
// 0041d494  ffd0                 call eax
// 0041d496  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0041d49a  8bc7                 mov eax, edi
// 0041d49c  5f                   pop edi
// 0041d49d  5e                   pop esi
// 0041d49e  64890d00000000       mov dword ptr fs:[0], ecx
// 0041d4a5  83c440               add esp, 0x40
// 0041d4a8  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
