// roc 2008-06 0063aec0  unit: G3D::VCoordinateFrame::V?$Value::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063aec0
//
// 0063aec0  6aff                 push -1
// 0063aec2  68598a7c00           push 0x7c8a59
// 0063aec7  64a100000000         mov eax, dword ptr fs:[0]
// 0063aecd  50                   push eax
// 0063aece  64892500000000       mov dword ptr fs:[0], esp
// 0063aed5  83ec34               sub esp, 0x34
// 0063aed8  56                   push esi
// 0063aed9  8b742450             mov esi, dword ptr [esp + 0x50]
// 0063aedd  57                   push edi
// 0063aede  c744240800000000     mov dword ptr [esp + 8], 0
// 0063aee6  56                   push esi
// 0063aee7  8d4c2414             lea ecx, [esp + 0x14]
// 0063aeeb  89742410             mov dword ptr [esp + 0x10], esi
// 0063aeef  e82cf7ddff           call 0x41a620
// 0063aef4  56                   push esi
// 0063aef5  8d442414             lea eax, [esp + 0x14]
// 0063aef9  56                   push esi
// 0063aefa  50                   push eax
// 0063aefb  e81025e4ff           call 0x47d410
// 0063af00  83c40c               add esp, 0xc
// 0063af03  8d4c240c             lea ecx, [esp + 0xc]
// 0063af07  51                   push ecx
// 0063af08  8d4c2418             lea ecx, [esp + 0x18]
// 0063af0c  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0063af14  e8c7f7ffff           call 0x63a6e0
// 0063af19  8b542458             mov edx, dword ptr [esp + 0x58]
// 0063af1d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0063af21  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0063af25  52                   push edx
// 0063af26  8d442418             lea eax, [esp + 0x18]
// 0063af2a  50                   push eax
// 0063af2b  57                   push edi
// 0063af2c  83c110               add ecx, 0x10
// 0063af2f  c644245002           mov byte ptr [esp + 0x50], 2
// 0063af34  e82796ffff           call 0x634560
// 0063af39  8d4c2414             lea ecx, [esp + 0x14]
// 0063af3d  c744240801000000     mov dword ptr [esp + 8], 1
// 0063af45  c644244401           mov byte ptr [esp + 0x44], 1
// 0063af4a  e8c147e6ff           call 0x49f710
// 0063af4f  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063af53  c644244400           mov byte ptr [esp + 0x44], 0
// 0063af58  85f6                 test esi, esi
// 0063af5a  742a                 je 0x63af86
// 0063af5c  8d4e04               lea ecx, [esi + 4]
// 0063af5f  83caff               or edx, 0xffffffff
// 0063af62  f00fc111             lock xadd dword ptr [ecx], edx
// 0063af66  751e                 jne 0x63af86
// 0063af68  8b06                 mov eax, dword ptr [esi]
// 0063af6a  8b5004               mov edx, dword ptr [eax + 4]
// 0063af6d  8bce                 mov ecx, esi
// 0063af6f  ffd2                 call edx
// 0063af71  8d4608               lea eax, [esi + 8]
// 0063af74  83c9ff               or ecx, 0xffffffff
// 0063af77  f00fc108             lock xadd dword ptr [eax], ecx
// 0063af7b  7509                 jne 0x63af86
// 0063af7d  8b16                 mov edx, dword ptr [esi]
// 0063af7f  8b4208               mov eax, dword ptr [edx + 8]
// 0063af82  8bce                 mov ecx, esi
// 0063af84  ffd0                 call eax
// 0063af86  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0063af8a  8bc7                 mov eax, edi
// 0063af8c  5f                   pop edi
// 0063af8d  5e                   pop esi
// 0063af8e  64890d00000000       mov dword ptr fs:[0], ecx
// 0063af95  83c440               add esp, 0x40
// 0063af98  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
