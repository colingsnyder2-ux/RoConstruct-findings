// roc 2008-06 0063abc0  unit: RBX::N$1?sDoubleValue::V?$Value::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063abc0
//
// 0063abc0  6aff                 push -1
// 0063abc2  68598a7c00           push 0x7c8a59
// 0063abc7  64a100000000         mov eax, dword ptr fs:[0]
// 0063abcd  50                   push eax
// 0063abce  64892500000000       mov dword ptr fs:[0], esp
// 0063abd5  83ec34               sub esp, 0x34
// 0063abd8  56                   push esi
// 0063abd9  8b742450             mov esi, dword ptr [esp + 0x50]
// 0063abdd  57                   push edi
// 0063abde  c744240800000000     mov dword ptr [esp + 8], 0
// 0063abe6  56                   push esi
// 0063abe7  8d4c2414             lea ecx, [esp + 0x14]
// 0063abeb  89742410             mov dword ptr [esp + 0x10], esi
// 0063abef  e82cfaddff           call 0x41a620
// 0063abf4  56                   push esi
// 0063abf5  8d442414             lea eax, [esp + 0x14]
// 0063abf9  56                   push esi
// 0063abfa  50                   push eax
// 0063abfb  e81028e4ff           call 0x47d410
// 0063ac00  83c40c               add esp, 0xc
// 0063ac03  8d4c240c             lea ecx, [esp + 0xc]
// 0063ac07  51                   push ecx
// 0063ac08  8d4c2418             lea ecx, [esp + 0x18]
// 0063ac0c  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0063ac14  e847f9ffff           call 0x63a560
// 0063ac19  8b542458             mov edx, dword ptr [esp + 0x58]
// 0063ac1d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0063ac21  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0063ac25  52                   push edx
// 0063ac26  8d442418             lea eax, [esp + 0x18]
// 0063ac2a  50                   push eax
// 0063ac2b  57                   push edi
// 0063ac2c  83c110               add ecx, 0x10
// 0063ac2f  c644245002           mov byte ptr [esp + 0x50], 2
// 0063ac34  e82791ffff           call 0x633d60
// 0063ac39  8d4c2414             lea ecx, [esp + 0x14]
// 0063ac3d  c744240801000000     mov dword ptr [esp + 8], 1
// 0063ac45  c644244401           mov byte ptr [esp + 0x44], 1
// 0063ac4a  e8c14ae6ff           call 0x49f710
// 0063ac4f  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063ac53  c644244400           mov byte ptr [esp + 0x44], 0
// 0063ac58  85f6                 test esi, esi
// 0063ac5a  742a                 je 0x63ac86
// 0063ac5c  8d4e04               lea ecx, [esi + 4]
// 0063ac5f  83caff               or edx, 0xffffffff
// 0063ac62  f00fc111             lock xadd dword ptr [ecx], edx
// 0063ac66  751e                 jne 0x63ac86
// 0063ac68  8b06                 mov eax, dword ptr [esi]
// 0063ac6a  8b5004               mov edx, dword ptr [eax + 4]
// 0063ac6d  8bce                 mov ecx, esi
// 0063ac6f  ffd2                 call edx
// 0063ac71  8d4608               lea eax, [esi + 8]
// 0063ac74  83c9ff               or ecx, 0xffffffff
// 0063ac77  f00fc108             lock xadd dword ptr [eax], ecx
// 0063ac7b  7509                 jne 0x63ac86
// 0063ac7d  8b16                 mov edx, dword ptr [esi]
// 0063ac7f  8b4208               mov eax, dword ptr [edx + 8]
// 0063ac82  8bce                 mov ecx, esi
// 0063ac84  ffd0                 call eax
// 0063ac86  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0063ac8a  8bc7                 mov eax, edi
// 0063ac8c  5f                   pop edi
// 0063ac8d  5e                   pop esi
// 0063ac8e  64890d00000000       mov dword ptr fs:[0], ecx
// 0063ac95  83c440               add esp, 0x40
// 0063ac98  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
