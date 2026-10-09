// roc 2008-06 0057b680  unit: RBX::VInstance::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b680
//
// 0057b680  6aff                 push -1
// 0057b682  68598a7c00           push 0x7c8a59
// 0057b687  64a100000000         mov eax, dword ptr fs:[0]
// 0057b68d  50                   push eax
// 0057b68e  64892500000000       mov dword ptr fs:[0], esp
// 0057b695  83ec34               sub esp, 0x34
// 0057b698  56                   push esi
// 0057b699  8b742450             mov esi, dword ptr [esp + 0x50]
// 0057b69d  57                   push edi
// 0057b69e  c744240800000000     mov dword ptr [esp + 8], 0
// 0057b6a6  56                   push esi
// 0057b6a7  8d4c2414             lea ecx, [esp + 0x14]
// 0057b6ab  89742410             mov dword ptr [esp + 0x10], esi
// 0057b6af  e86cefe9ff           call 0x41a620
// 0057b6b4  56                   push esi
// 0057b6b5  8d442414             lea eax, [esp + 0x14]
// 0057b6b9  56                   push esi
// 0057b6ba  50                   push eax
// 0057b6bb  e8501df0ff           call 0x47d410
// 0057b6c0  83c40c               add esp, 0xc
// 0057b6c3  8d4c240c             lea ecx, [esp + 0xc]
// 0057b6c7  51                   push ecx
// 0057b6c8  8d4c2418             lea ecx, [esp + 0x18]
// 0057b6cc  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0057b6d4  e8d7f5ffff           call 0x57acb0
// 0057b6d9  8b542458             mov edx, dword ptr [esp + 0x58]
// 0057b6dd  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0057b6e1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0057b6e5  52                   push edx
// 0057b6e6  8d442418             lea eax, [esp + 0x18]
// 0057b6ea  50                   push eax
// 0057b6eb  57                   push edi
// 0057b6ec  83c110               add ecx, 0x10
// 0057b6ef  c644245002           mov byte ptr [esp + 0x50], 2
// 0057b6f4  e867c6ffff           call 0x577d60
// 0057b6f9  8d4c2414             lea ecx, [esp + 0x14]
// 0057b6fd  c744240801000000     mov dword ptr [esp + 8], 1
// 0057b705  c644244401           mov byte ptr [esp + 0x44], 1
// 0057b70a  e80140f2ff           call 0x49f710
// 0057b70f  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057b713  c644244400           mov byte ptr [esp + 0x44], 0
// 0057b718  85f6                 test esi, esi
// 0057b71a  742a                 je 0x57b746
// 0057b71c  8d4e04               lea ecx, [esi + 4]
// 0057b71f  83caff               or edx, 0xffffffff
// 0057b722  f00fc111             lock xadd dword ptr [ecx], edx
// 0057b726  751e                 jne 0x57b746
// 0057b728  8b06                 mov eax, dword ptr [esi]
// 0057b72a  8b5004               mov edx, dword ptr [eax + 4]
// 0057b72d  8bce                 mov ecx, esi
// 0057b72f  ffd2                 call edx
// 0057b731  8d4608               lea eax, [esi + 8]
// 0057b734  83c9ff               or ecx, 0xffffffff
// 0057b737  f00fc108             lock xadd dword ptr [eax], ecx
// 0057b73b  7509                 jne 0x57b746
// 0057b73d  8b16                 mov edx, dword ptr [esi]
// 0057b73f  8b4208               mov eax, dword ptr [edx + 8]
// 0057b742  8bce                 mov ecx, esi
// 0057b744  ffd0                 call eax
// 0057b746  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0057b74a  8bc7                 mov eax, edi
// 0057b74c  5f                   pop edi
// 0057b74d  5e                   pop esi
// 0057b74e  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b755  83c440               add esp, 0x40
// 0057b758  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
