// roc 2008-06 00557230  unit: RBX::VRunService::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557230
//
// 00557230  6aff                 push -1
// 00557232  68598a7c00           push 0x7c8a59
// 00557237  64a100000000         mov eax, dword ptr fs:[0]
// 0055723d  50                   push eax
// 0055723e  64892500000000       mov dword ptr fs:[0], esp
// 00557245  83ec34               sub esp, 0x34
// 00557248  56                   push esi
// 00557249  8b742450             mov esi, dword ptr [esp + 0x50]
// 0055724d  57                   push edi
// 0055724e  c744240800000000     mov dword ptr [esp + 8], 0
// 00557256  56                   push esi
// 00557257  8d4c2414             lea ecx, [esp + 0x14]
// 0055725b  89742410             mov dword ptr [esp + 0x10], esi
// 0055725f  e8bc33ecff           call 0x41a620
// 00557264  56                   push esi
// 00557265  8d442414             lea eax, [esp + 0x14]
// 00557269  56                   push esi
// 0055726a  50                   push eax
// 0055726b  e8a061f2ff           call 0x47d410
// 00557270  83c40c               add esp, 0xc
// 00557273  8d4c240c             lea ecx, [esp + 0xc]
// 00557277  51                   push ecx
// 00557278  8d4c2418             lea ecx, [esp + 0x18]
// 0055727c  c744244801000000     mov dword ptr [esp + 0x48], 1
// 00557284  e807feffff           call 0x557090
// 00557289  8b542458             mov edx, dword ptr [esp + 0x58]
// 0055728d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00557291  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00557295  52                   push edx
// 00557296  8d442418             lea eax, [esp + 0x18]
// 0055729a  50                   push eax
// 0055729b  57                   push edi
// 0055729c  83c110               add ecx, 0x10
// 0055729f  c644245002           mov byte ptr [esp + 0x50], 2
// 005572a4  e817eeffff           call 0x5560c0
// 005572a9  8d4c2414             lea ecx, [esp + 0x14]
// 005572ad  c744240801000000     mov dword ptr [esp + 8], 1
// 005572b5  c644244401           mov byte ptr [esp + 0x44], 1
// 005572ba  e85184f4ff           call 0x49f710
// 005572bf  8b742410             mov esi, dword ptr [esp + 0x10]
// 005572c3  c644244400           mov byte ptr [esp + 0x44], 0
// 005572c8  85f6                 test esi, esi
// 005572ca  742a                 je 0x5572f6
// 005572cc  8d4e04               lea ecx, [esi + 4]
// 005572cf  83caff               or edx, 0xffffffff
// 005572d2  f00fc111             lock xadd dword ptr [ecx], edx
// 005572d6  751e                 jne 0x5572f6
// 005572d8  8b06                 mov eax, dword ptr [esi]
// 005572da  8b5004               mov edx, dword ptr [eax + 4]
// 005572dd  8bce                 mov ecx, esi
// 005572df  ffd2                 call edx
// 005572e1  8d4608               lea eax, [esi + 8]
// 005572e4  83c9ff               or ecx, 0xffffffff
// 005572e7  f00fc108             lock xadd dword ptr [eax], ecx
// 005572eb  7509                 jne 0x5572f6
// 005572ed  8b16                 mov edx, dword ptr [esi]
// 005572ef  8b4208               mov eax, dword ptr [edx + 8]
// 005572f2  8bce                 mov ecx, esi
// 005572f4  ffd0                 call eax
// 005572f6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005572fa  8bc7                 mov eax, edi
// 005572fc  5f                   pop edi
// 005572fd  5e                   pop esi
// 005572fe  64890d00000000       mov dword ptr fs:[0], ecx
// 00557305  83c440               add esp, 0x40
// 00557308  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
