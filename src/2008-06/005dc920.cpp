// roc 2008-06 005dc920  unit: RBX::VHumanoid::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dc920
//
// 005dc920  6aff                 push -1
// 005dc922  68598a7c00           push 0x7c8a59
// 005dc927  64a100000000         mov eax, dword ptr fs:[0]
// 005dc92d  50                   push eax
// 005dc92e  64892500000000       mov dword ptr fs:[0], esp
// 005dc935  83ec34               sub esp, 0x34
// 005dc938  56                   push esi
// 005dc939  8b742450             mov esi, dword ptr [esp + 0x50]
// 005dc93d  57                   push edi
// 005dc93e  c744240800000000     mov dword ptr [esp + 8], 0
// 005dc946  56                   push esi
// 005dc947  8d4c2414             lea ecx, [esp + 0x14]
// 005dc94b  89742410             mov dword ptr [esp + 0x10], esi
// 005dc94f  e8ccdce3ff           call 0x41a620
// 005dc954  56                   push esi
// 005dc955  8d442414             lea eax, [esp + 0x14]
// 005dc959  56                   push esi
// 005dc95a  50                   push eax
// 005dc95b  e8b00aeaff           call 0x47d410
// 005dc960  83c40c               add esp, 0xc
// 005dc963  8d4c240c             lea ecx, [esp + 0xc]
// 005dc967  51                   push ecx
// 005dc968  8d4c2418             lea ecx, [esp + 0x18]
// 005dc96c  c744244801000000     mov dword ptr [esp + 0x48], 1
// 005dc974  e837f4ffff           call 0x5dbdb0
// 005dc979  8b542458             mov edx, dword ptr [esp + 0x58]
// 005dc97d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 005dc981  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005dc985  52                   push edx
// 005dc986  8d442418             lea eax, [esp + 0x18]
// 005dc98a  50                   push eax
// 005dc98b  57                   push edi
// 005dc98c  83c110               add ecx, 0x10
// 005dc98f  c644245002           mov byte ptr [esp + 0x50], 2
// 005dc994  e827d7ffff           call 0x5da0c0
// 005dc999  8d4c2414             lea ecx, [esp + 0x14]
// 005dc99d  c744240801000000     mov dword ptr [esp + 8], 1
// 005dc9a5  c644244401           mov byte ptr [esp + 0x44], 1
// 005dc9aa  e8612decff           call 0x49f710
// 005dc9af  8b742410             mov esi, dword ptr [esp + 0x10]
// 005dc9b3  c644244400           mov byte ptr [esp + 0x44], 0
// 005dc9b8  85f6                 test esi, esi
// 005dc9ba  742a                 je 0x5dc9e6
// 005dc9bc  8d4e04               lea ecx, [esi + 4]
// 005dc9bf  83caff               or edx, 0xffffffff
// 005dc9c2  f00fc111             lock xadd dword ptr [ecx], edx
// 005dc9c6  751e                 jne 0x5dc9e6
// 005dc9c8  8b06                 mov eax, dword ptr [esi]
// 005dc9ca  8b5004               mov edx, dword ptr [eax + 4]
// 005dc9cd  8bce                 mov ecx, esi
// 005dc9cf  ffd2                 call edx
// 005dc9d1  8d4608               lea eax, [esi + 8]
// 005dc9d4  83c9ff               or ecx, 0xffffffff
// 005dc9d7  f00fc108             lock xadd dword ptr [eax], ecx
// 005dc9db  7509                 jne 0x5dc9e6
// 005dc9dd  8b16                 mov edx, dword ptr [esi]
// 005dc9df  8b4208               mov eax, dword ptr [edx + 8]
// 005dc9e2  8bce                 mov ecx, esi
// 005dc9e4  ffd0                 call eax
// 005dc9e6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005dc9ea  8bc7                 mov eax, edi
// 005dc9ec  5f                   pop edi
// 005dc9ed  5e                   pop esi
// 005dc9ee  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc9f5  83c440               add esp, 0x40
// 005dc9f8  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
