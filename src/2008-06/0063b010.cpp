// roc 2008-06 0063b010  unit: G3D::VColor3::V?$Value::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b010
//
// 0063b010  6aff                 push -1
// 0063b012  68598a7c00           push 0x7c8a59
// 0063b017  64a100000000         mov eax, dword ptr fs:[0]
// 0063b01d  50                   push eax
// 0063b01e  64892500000000       mov dword ptr fs:[0], esp
// 0063b025  83ec34               sub esp, 0x34
// 0063b028  56                   push esi
// 0063b029  8b742450             mov esi, dword ptr [esp + 0x50]
// 0063b02d  57                   push edi
// 0063b02e  c744240800000000     mov dword ptr [esp + 8], 0
// 0063b036  56                   push esi
// 0063b037  8d4c2414             lea ecx, [esp + 0x14]
// 0063b03b  89742410             mov dword ptr [esp + 0x10], esi
// 0063b03f  e8dcf5ddff           call 0x41a620
// 0063b044  56                   push esi
// 0063b045  8d442414             lea eax, [esp + 0x14]
// 0063b049  56                   push esi
// 0063b04a  50                   push eax
// 0063b04b  e8c023e4ff           call 0x47d410
// 0063b050  83c40c               add esp, 0xc
// 0063b053  8d4c240c             lea ecx, [esp + 0xc]
// 0063b057  51                   push ecx
// 0063b058  8d4c2418             lea ecx, [esp + 0x18]
// 0063b05c  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0063b064  e837f7ffff           call 0x63a7a0
// 0063b069  8b542458             mov edx, dword ptr [esp + 0x58]
// 0063b06d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0063b071  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0063b075  52                   push edx
// 0063b076  8d442418             lea eax, [esp + 0x18]
// 0063b07a  50                   push eax
// 0063b07b  57                   push edi
// 0063b07c  83c110               add ecx, 0x10
// 0063b07f  c644245002           mov byte ptr [esp + 0x50], 2
// 0063b084  e86799ffff           call 0x6349f0
// 0063b089  8d4c2414             lea ecx, [esp + 0x14]
// 0063b08d  c744240801000000     mov dword ptr [esp + 8], 1
// 0063b095  c644244401           mov byte ptr [esp + 0x44], 1
// 0063b09a  e87146e6ff           call 0x49f710
// 0063b09f  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063b0a3  c644244400           mov byte ptr [esp + 0x44], 0
// 0063b0a8  85f6                 test esi, esi
// 0063b0aa  742a                 je 0x63b0d6
// 0063b0ac  8d4e04               lea ecx, [esi + 4]
// 0063b0af  83caff               or edx, 0xffffffff
// 0063b0b2  f00fc111             lock xadd dword ptr [ecx], edx
// 0063b0b6  751e                 jne 0x63b0d6
// 0063b0b8  8b06                 mov eax, dword ptr [esi]
// 0063b0ba  8b5004               mov edx, dword ptr [eax + 4]
// 0063b0bd  8bce                 mov ecx, esi
// 0063b0bf  ffd2                 call edx
// 0063b0c1  8d4608               lea eax, [esi + 8]
// 0063b0c4  83c9ff               or ecx, 0xffffffff
// 0063b0c7  f00fc108             lock xadd dword ptr [eax], ecx
// 0063b0cb  7509                 jne 0x63b0d6
// 0063b0cd  8b16                 mov edx, dword ptr [esi]
// 0063b0cf  8b4208               mov eax, dword ptr [edx + 8]
// 0063b0d2  8bce                 mov ecx, esi
// 0063b0d4  ffd0                 call eax
// 0063b0d6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0063b0da  8bc7                 mov eax, edi
// 0063b0dc  5f                   pop edi
// 0063b0dd  5e                   pop esi
// 0063b0de  64890d00000000       mov dword ptr fs:[0], ecx
// 0063b0e5  83c440               add esp, 0x40
// 0063b0e8  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
