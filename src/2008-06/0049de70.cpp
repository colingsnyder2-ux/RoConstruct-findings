// roc 2008-06 0049de70  unit: RBX::VInstance::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049de70
//
// 0049de70  6aff                 push -1
// 0049de72  68598a7c00           push 0x7c8a59
// 0049de77  64a100000000         mov eax, dword ptr fs:[0]
// 0049de7d  50                   push eax
// 0049de7e  64892500000000       mov dword ptr fs:[0], esp
// 0049de85  83ec34               sub esp, 0x34
// 0049de88  56                   push esi
// 0049de89  8b742450             mov esi, dword ptr [esp + 0x50]
// 0049de8d  57                   push edi
// 0049de8e  c744240800000000     mov dword ptr [esp + 8], 0
// 0049de96  56                   push esi
// 0049de97  8d4c2414             lea ecx, [esp + 0x14]
// 0049de9b  89742410             mov dword ptr [esp + 0x10], esi
// 0049de9f  e87cc7f7ff           call 0x41a620
// 0049dea4  56                   push esi
// 0049dea5  8d442414             lea eax, [esp + 0x14]
// 0049dea9  56                   push esi
// 0049deaa  50                   push eax
// 0049deab  e860f5fdff           call 0x47d410
// 0049deb0  83c40c               add esp, 0xc
// 0049deb3  8d4c240c             lea ecx, [esp + 0xc]
// 0049deb7  51                   push ecx
// 0049deb8  8d4c2418             lea ecx, [esp + 0x18]
// 0049debc  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0049dec4  e8c7f4ffff           call 0x49d390
// 0049dec9  8b542458             mov edx, dword ptr [esp + 0x58]
// 0049decd  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0049ded1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0049ded5  52                   push edx
// 0049ded6  8d442418             lea eax, [esp + 0x18]
// 0049deda  50                   push eax
// 0049dedb  57                   push edi
// 0049dedc  83c110               add ecx, 0x10
// 0049dedf  c644245002           mov byte ptr [esp + 0x50], 2
// 0049dee4  e8b7bbffff           call 0x499aa0
// 0049dee9  8d4c2414             lea ecx, [esp + 0x14]
// 0049deed  c744240801000000     mov dword ptr [esp + 8], 1
// 0049def5  c644244401           mov byte ptr [esp + 0x44], 1
// 0049defa  e811180000           call 0x49f710
// 0049deff  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049df03  c644244400           mov byte ptr [esp + 0x44], 0
// 0049df08  85f6                 test esi, esi
// 0049df0a  742a                 je 0x49df36
// 0049df0c  8d4e04               lea ecx, [esi + 4]
// 0049df0f  83caff               or edx, 0xffffffff
// 0049df12  f00fc111             lock xadd dword ptr [ecx], edx
// 0049df16  751e                 jne 0x49df36
// 0049df18  8b06                 mov eax, dword ptr [esi]
// 0049df1a  8b5004               mov edx, dword ptr [eax + 4]
// 0049df1d  8bce                 mov ecx, esi
// 0049df1f  ffd2                 call edx
// 0049df21  8d4608               lea eax, [esi + 8]
// 0049df24  83c9ff               or ecx, 0xffffffff
// 0049df27  f00fc108             lock xadd dword ptr [eax], ecx
// 0049df2b  7509                 jne 0x49df36
// 0049df2d  8b16                 mov edx, dword ptr [esi]
// 0049df2f  8b4208               mov eax, dword ptr [edx + 8]
// 0049df32  8bce                 mov ecx, esi
// 0049df34  ffd0                 call eax
// 0049df36  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0049df3a  8bc7                 mov eax, edi
// 0049df3c  5f                   pop edi
// 0049df3d  5e                   pop esi
// 0049df3e  64890d00000000       mov dword ptr fs:[0], ecx
// 0049df45  83c440               add esp, 0x40
// 0049df48  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
