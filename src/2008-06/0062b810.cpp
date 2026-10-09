// roc 2008-06 0062b810  unit: RBX::VExplosion::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062b810
//
// 0062b810  6aff                 push -1
// 0062b812  68598a7c00           push 0x7c8a59
// 0062b817  64a100000000         mov eax, dword ptr fs:[0]
// 0062b81d  50                   push eax
// 0062b81e  64892500000000       mov dword ptr fs:[0], esp
// 0062b825  83ec34               sub esp, 0x34
// 0062b828  56                   push esi
// 0062b829  8b742450             mov esi, dword ptr [esp + 0x50]
// 0062b82d  57                   push edi
// 0062b82e  c744240800000000     mov dword ptr [esp + 8], 0
// 0062b836  56                   push esi
// 0062b837  8d4c2414             lea ecx, [esp + 0x14]
// 0062b83b  89742410             mov dword ptr [esp + 0x10], esi
// 0062b83f  e8dceddeff           call 0x41a620
// 0062b844  56                   push esi
// 0062b845  8d442414             lea eax, [esp + 0x14]
// 0062b849  56                   push esi
// 0062b84a  50                   push eax
// 0062b84b  e8c01be5ff           call 0x47d410
// 0062b850  83c40c               add esp, 0xc
// 0062b853  8d4c240c             lea ecx, [esp + 0xc]
// 0062b857  51                   push ecx
// 0062b858  8d4c2418             lea ecx, [esp + 0x18]
// 0062b85c  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0062b864  e897fcffff           call 0x62b500
// 0062b869  8b542458             mov edx, dword ptr [esp + 0x58]
// 0062b86d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0062b871  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0062b875  52                   push edx
// 0062b876  8d442418             lea eax, [esp + 0x18]
// 0062b87a  50                   push eax
// 0062b87b  57                   push edi
// 0062b87c  83c110               add ecx, 0x10
// 0062b87f  c644245002           mov byte ptr [esp + 0x50], 2
// 0062b884  e897ecffff           call 0x62a520
// 0062b889  8d4c2414             lea ecx, [esp + 0x14]
// 0062b88d  c744240801000000     mov dword ptr [esp + 8], 1
// 0062b895  c644244401           mov byte ptr [esp + 0x44], 1
// 0062b89a  e8713ee7ff           call 0x49f710
// 0062b89f  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062b8a3  c644244400           mov byte ptr [esp + 0x44], 0
// 0062b8a8  85f6                 test esi, esi
// 0062b8aa  742a                 je 0x62b8d6
// 0062b8ac  8d4e04               lea ecx, [esi + 4]
// 0062b8af  83caff               or edx, 0xffffffff
// 0062b8b2  f00fc111             lock xadd dword ptr [ecx], edx
// 0062b8b6  751e                 jne 0x62b8d6
// 0062b8b8  8b06                 mov eax, dword ptr [esi]
// 0062b8ba  8b5004               mov edx, dword ptr [eax + 4]
// 0062b8bd  8bce                 mov ecx, esi
// 0062b8bf  ffd2                 call edx
// 0062b8c1  8d4608               lea eax, [esi + 8]
// 0062b8c4  83c9ff               or ecx, 0xffffffff
// 0062b8c7  f00fc108             lock xadd dword ptr [eax], ecx
// 0062b8cb  7509                 jne 0x62b8d6
// 0062b8cd  8b16                 mov edx, dword ptr [esi]
// 0062b8cf  8b4208               mov eax, dword ptr [edx + 8]
// 0062b8d2  8bce                 mov ecx, esi
// 0062b8d4  ffd0                 call eax
// 0062b8d6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0062b8da  8bc7                 mov eax, edi
// 0062b8dc  5f                   pop edi
// 0062b8dd  5e                   pop esi
// 0062b8de  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b8e5  83c440               add esp, 0x40
// 0062b8e8  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
