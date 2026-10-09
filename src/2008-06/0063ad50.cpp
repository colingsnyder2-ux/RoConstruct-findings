// roc 2008-06 0063ad50  unit: G3D::VVector3::V?$Value::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ad50
//
// 0063ad50  6aff                 push -1
// 0063ad52  68598a7c00           push 0x7c8a59
// 0063ad57  64a100000000         mov eax, dword ptr fs:[0]
// 0063ad5d  50                   push eax
// 0063ad5e  64892500000000       mov dword ptr fs:[0], esp
// 0063ad65  83ec34               sub esp, 0x34
// 0063ad68  56                   push esi
// 0063ad69  8b742450             mov esi, dword ptr [esp + 0x50]
// 0063ad6d  57                   push edi
// 0063ad6e  c744240800000000     mov dword ptr [esp + 8], 0
// 0063ad76  56                   push esi
// 0063ad77  8d4c2414             lea ecx, [esp + 0x14]
// 0063ad7b  89742410             mov dword ptr [esp + 0x10], esi
// 0063ad7f  e89cf8ddff           call 0x41a620
// 0063ad84  56                   push esi
// 0063ad85  8d442414             lea eax, [esp + 0x14]
// 0063ad89  56                   push esi
// 0063ad8a  50                   push eax
// 0063ad8b  e88026e4ff           call 0x47d410
// 0063ad90  83c40c               add esp, 0xc
// 0063ad93  8d4c240c             lea ecx, [esp + 0xc]
// 0063ad97  51                   push ecx
// 0063ad98  8d4c2418             lea ecx, [esp + 0x18]
// 0063ad9c  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0063ada4  e877f8ffff           call 0x63a620
// 0063ada9  8b542458             mov edx, dword ptr [esp + 0x58]
// 0063adad  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0063adb1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0063adb5  52                   push edx
// 0063adb6  8d442418             lea eax, [esp + 0x18]
// 0063adba  50                   push eax
// 0063adbb  57                   push edi
// 0063adbc  83c110               add ecx, 0x10
// 0063adbf  c644245002           mov byte ptr [esp + 0x50], 2
// 0063adc4  e89793ffff           call 0x634160
// 0063adc9  8d4c2414             lea ecx, [esp + 0x14]
// 0063adcd  c744240801000000     mov dword ptr [esp + 8], 1
// 0063add5  c644244401           mov byte ptr [esp + 0x44], 1
// 0063adda  e83149e6ff           call 0x49f710
// 0063addf  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063ade3  c644244400           mov byte ptr [esp + 0x44], 0
// 0063ade8  85f6                 test esi, esi
// 0063adea  742a                 je 0x63ae16
// 0063adec  8d4e04               lea ecx, [esi + 4]
// 0063adef  83caff               or edx, 0xffffffff
// 0063adf2  f00fc111             lock xadd dword ptr [ecx], edx
// 0063adf6  751e                 jne 0x63ae16
// 0063adf8  8b06                 mov eax, dword ptr [esi]
// 0063adfa  8b5004               mov edx, dword ptr [eax + 4]
// 0063adfd  8bce                 mov ecx, esi
// 0063adff  ffd2                 call edx
// 0063ae01  8d4608               lea eax, [esi + 8]
// 0063ae04  83c9ff               or ecx, 0xffffffff
// 0063ae07  f00fc108             lock xadd dword ptr [eax], ecx
// 0063ae0b  7509                 jne 0x63ae16
// 0063ae0d  8b16                 mov edx, dword ptr [esi]
// 0063ae0f  8b4208               mov eax, dword ptr [edx + 8]
// 0063ae12  8bce                 mov ecx, esi
// 0063ae14  ffd0                 call eax
// 0063ae16  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0063ae1a  8bc7                 mov eax, edi
// 0063ae1c  5f                   pop edi
// 0063ae1d  5e                   pop esi
// 0063ae1e  64890d00000000       mov dword ptr fs:[0], ecx
// 0063ae25  83c440               add esp, 0x40
// 0063ae28  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
