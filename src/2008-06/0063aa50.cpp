// roc 2008-06 0063aa50  unit: RBX::H$1?sIntValue::V?$Value::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063aa50
//
// 0063aa50  6aff                 push -1
// 0063aa52  68598a7c00           push 0x7c8a59
// 0063aa57  64a100000000         mov eax, dword ptr fs:[0]
// 0063aa5d  50                   push eax
// 0063aa5e  64892500000000       mov dword ptr fs:[0], esp
// 0063aa65  83ec34               sub esp, 0x34
// 0063aa68  56                   push esi
// 0063aa69  8b742450             mov esi, dword ptr [esp + 0x50]
// 0063aa6d  57                   push edi
// 0063aa6e  c744240800000000     mov dword ptr [esp + 8], 0
// 0063aa76  56                   push esi
// 0063aa77  8d4c2414             lea ecx, [esp + 0x14]
// 0063aa7b  89742410             mov dword ptr [esp + 0x10], esi
// 0063aa7f  e89cfbddff           call 0x41a620
// 0063aa84  56                   push esi
// 0063aa85  8d442414             lea eax, [esp + 0x14]
// 0063aa89  56                   push esi
// 0063aa8a  50                   push eax
// 0063aa8b  e88029e4ff           call 0x47d410
// 0063aa90  83c40c               add esp, 0xc
// 0063aa93  8d4c240c             lea ecx, [esp + 0xc]
// 0063aa97  51                   push ecx
// 0063aa98  8d4c2418             lea ecx, [esp + 0x18]
// 0063aa9c  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0063aaa4  e8f7f9ffff           call 0x63a4a0
// 0063aaa9  8b542458             mov edx, dword ptr [esp + 0x58]
// 0063aaad  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0063aab1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0063aab5  52                   push edx
// 0063aab6  8d442418             lea eax, [esp + 0x18]
// 0063aaba  50                   push eax
// 0063aabb  57                   push edi
// 0063aabc  83c110               add ecx, 0x10
// 0063aabf  c644245002           mov byte ptr [esp + 0x50], 2
// 0063aac4  e8978effff           call 0x633960
// 0063aac9  8d4c2414             lea ecx, [esp + 0x14]
// 0063aacd  c744240801000000     mov dword ptr [esp + 8], 1
// 0063aad5  c644244401           mov byte ptr [esp + 0x44], 1
// 0063aada  e8314ce6ff           call 0x49f710
// 0063aadf  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063aae3  c644244400           mov byte ptr [esp + 0x44], 0
// 0063aae8  85f6                 test esi, esi
// 0063aaea  742a                 je 0x63ab16
// 0063aaec  8d4e04               lea ecx, [esi + 4]
// 0063aaef  83caff               or edx, 0xffffffff
// 0063aaf2  f00fc111             lock xadd dword ptr [ecx], edx
// 0063aaf6  751e                 jne 0x63ab16
// 0063aaf8  8b06                 mov eax, dword ptr [esi]
// 0063aafa  8b5004               mov edx, dword ptr [eax + 4]
// 0063aafd  8bce                 mov ecx, esi
// 0063aaff  ffd2                 call edx
// 0063ab01  8d4608               lea eax, [esi + 8]
// 0063ab04  83c9ff               or ecx, 0xffffffff
// 0063ab07  f00fc108             lock xadd dword ptr [eax], ecx
// 0063ab0b  7509                 jne 0x63ab16
// 0063ab0d  8b16                 mov edx, dword ptr [esi]
// 0063ab0f  8b4208               mov eax, dword ptr [edx + 8]
// 0063ab12  8bce                 mov ecx, esi
// 0063ab14  ffd0                 call eax
// 0063ab16  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0063ab1a  8bc7                 mov eax, edi
// 0063ab1c  5f                   pop edi
// 0063ab1d  5e                   pop esi
// 0063ab1e  64890d00000000       mov dword ptr fs:[0], ecx
// 0063ab25  83c440               add esp, 0x40
// 0063ab28  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
