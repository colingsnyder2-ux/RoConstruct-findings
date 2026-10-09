// roc 2008-06 004a1480  unit: RBX::Network::VClient::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a1480
//
// 004a1480  6aff                 push -1
// 004a1482  68598a7c00           push 0x7c8a59
// 004a1487  64a100000000         mov eax, dword ptr fs:[0]
// 004a148d  50                   push eax
// 004a148e  64892500000000       mov dword ptr fs:[0], esp
// 004a1495  83ec34               sub esp, 0x34
// 004a1498  56                   push esi
// 004a1499  8b742450             mov esi, dword ptr [esp + 0x50]
// 004a149d  57                   push edi
// 004a149e  c744240800000000     mov dword ptr [esp + 8], 0
// 004a14a6  56                   push esi
// 004a14a7  8d4c2414             lea ecx, [esp + 0x14]
// 004a14ab  89742410             mov dword ptr [esp + 0x10], esi
// 004a14af  e86c91f7ff           call 0x41a620
// 004a14b4  56                   push esi
// 004a14b5  8d442414             lea eax, [esp + 0x14]
// 004a14b9  56                   push esi
// 004a14ba  50                   push eax
// 004a14bb  e850bffdff           call 0x47d410
// 004a14c0  83c40c               add esp, 0xc
// 004a14c3  8d4c240c             lea ecx, [esp + 0xc]
// 004a14c7  51                   push ecx
// 004a14c8  8d4c2418             lea ecx, [esp + 0x18]
// 004a14cc  c744244801000000     mov dword ptr [esp + 0x48], 1
// 004a14d4  e8d7faffff           call 0x4a0fb0
// 004a14d9  8b542458             mov edx, dword ptr [esp + 0x58]
// 004a14dd  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 004a14e1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 004a14e5  52                   push edx
// 004a14e6  8d442418             lea eax, [esp + 0x18]
// 004a14ea  50                   push eax
// 004a14eb  57                   push edi
// 004a14ec  83c110               add ecx, 0x10
// 004a14ef  c644245002           mov byte ptr [esp + 0x50], 2
// 004a14f4  e807e3ffff           call 0x49f800
// 004a14f9  8d4c2414             lea ecx, [esp + 0x14]
// 004a14fd  c744240801000000     mov dword ptr [esp + 8], 1
// 004a1505  c644244401           mov byte ptr [esp + 0x44], 1
// 004a150a  e801e2ffff           call 0x49f710
// 004a150f  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a1513  c644244400           mov byte ptr [esp + 0x44], 0
// 004a1518  85f6                 test esi, esi
// 004a151a  742a                 je 0x4a1546
// 004a151c  8d4e04               lea ecx, [esi + 4]
// 004a151f  83caff               or edx, 0xffffffff
// 004a1522  f00fc111             lock xadd dword ptr [ecx], edx
// 004a1526  751e                 jne 0x4a1546
// 004a1528  8b06                 mov eax, dword ptr [esi]
// 004a152a  8b5004               mov edx, dword ptr [eax + 4]
// 004a152d  8bce                 mov ecx, esi
// 004a152f  ffd2                 call edx
// 004a1531  8d4608               lea eax, [esi + 8]
// 004a1534  83c9ff               or ecx, 0xffffffff
// 004a1537  f00fc108             lock xadd dword ptr [eax], ecx
// 004a153b  7509                 jne 0x4a1546
// 004a153d  8b16                 mov edx, dword ptr [esi]
// 004a153f  8b4208               mov eax, dword ptr [edx + 8]
// 004a1542  8bce                 mov ecx, esi
// 004a1544  ffd0                 call eax
// 004a1546  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004a154a  8bc7                 mov eax, edi
// 004a154c  5f                   pop edi
// 004a154d  5e                   pop esi
// 004a154e  64890d00000000       mov dword ptr fs:[0], ecx
// 004a1555  83c440               add esp, 0x40
// 004a1558  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
