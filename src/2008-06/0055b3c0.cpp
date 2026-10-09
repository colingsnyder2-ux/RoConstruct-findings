// roc 2008-06 0055b3c0  unit: RBX::VInstance::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055b3c0
//
// 0055b3c0  6aff                 push -1
// 0055b3c2  68598a7c00           push 0x7c8a59
// 0055b3c7  64a100000000         mov eax, dword ptr fs:[0]
// 0055b3cd  50                   push eax
// 0055b3ce  64892500000000       mov dword ptr fs:[0], esp
// 0055b3d5  83ec34               sub esp, 0x34
// 0055b3d8  56                   push esi
// 0055b3d9  8b742450             mov esi, dword ptr [esp + 0x50]
// 0055b3dd  57                   push edi
// 0055b3de  c744240800000000     mov dword ptr [esp + 8], 0
// 0055b3e6  56                   push esi
// 0055b3e7  8d4c2414             lea ecx, [esp + 0x14]
// 0055b3eb  89742410             mov dword ptr [esp + 0x10], esi
// 0055b3ef  e82cf2ebff           call 0x41a620
// 0055b3f4  56                   push esi
// 0055b3f5  8d442414             lea eax, [esp + 0x14]
// 0055b3f9  56                   push esi
// 0055b3fa  50                   push eax
// 0055b3fb  e81020f2ff           call 0x47d410
// 0055b400  83c40c               add esp, 0xc
// 0055b403  8d4c240c             lea ecx, [esp + 0xc]
// 0055b407  51                   push ecx
// 0055b408  8d4c2418             lea ecx, [esp + 0x18]
// 0055b40c  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0055b414  e817f4ffff           call 0x55a830
// 0055b419  8b542458             mov edx, dword ptr [esp + 0x58]
// 0055b41d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0055b421  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0055b425  52                   push edx
// 0055b426  8d442418             lea eax, [esp + 0x18]
// 0055b42a  50                   push eax
// 0055b42b  57                   push edi
// 0055b42c  83c110               add ecx, 0x10
// 0055b42f  c644245002           mov byte ptr [esp + 0x50], 2
// 0055b434  e887e0ffff           call 0x5594c0
// 0055b439  8d4c2414             lea ecx, [esp + 0x14]
// 0055b43d  c744240801000000     mov dword ptr [esp + 8], 1
// 0055b445  c644244401           mov byte ptr [esp + 0x44], 1
// 0055b44a  e8c142f4ff           call 0x49f710
// 0055b44f  8b742410             mov esi, dword ptr [esp + 0x10]
// 0055b453  c644244400           mov byte ptr [esp + 0x44], 0
// 0055b458  85f6                 test esi, esi
// 0055b45a  742a                 je 0x55b486
// 0055b45c  8d4e04               lea ecx, [esi + 4]
// 0055b45f  83caff               or edx, 0xffffffff
// 0055b462  f00fc111             lock xadd dword ptr [ecx], edx
// 0055b466  751e                 jne 0x55b486
// 0055b468  8b06                 mov eax, dword ptr [esi]
// 0055b46a  8b5004               mov edx, dword ptr [eax + 4]
// 0055b46d  8bce                 mov ecx, esi
// 0055b46f  ffd2                 call edx
// 0055b471  8d4608               lea eax, [esi + 8]
// 0055b474  83c9ff               or ecx, 0xffffffff
// 0055b477  f00fc108             lock xadd dword ptr [eax], ecx
// 0055b47b  7509                 jne 0x55b486
// 0055b47d  8b16                 mov edx, dword ptr [esi]
// 0055b47f  8b4208               mov eax, dword ptr [edx + 8]
// 0055b482  8bce                 mov ecx, esi
// 0055b484  ffd0                 call eax
// 0055b486  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0055b48a  8bc7                 mov eax, edi
// 0055b48c  5f                   pop edi
// 0055b48d  5e                   pop esi
// 0055b48e  64890d00000000       mov dword ptr fs:[0], ecx
// 0055b495  83c440               add esp, 0x40
// 0055b498  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
