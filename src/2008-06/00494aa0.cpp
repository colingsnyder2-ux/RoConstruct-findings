// roc 2008-06 00494aa0  unit: RBX::VRunService::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494aa0
//
// 00494aa0  6aff                 push -1
// 00494aa2  68598a7c00           push 0x7c8a59
// 00494aa7  64a100000000         mov eax, dword ptr fs:[0]
// 00494aad  50                   push eax
// 00494aae  64892500000000       mov dword ptr fs:[0], esp
// 00494ab5  83ec34               sub esp, 0x34
// 00494ab8  56                   push esi
// 00494ab9  8b742450             mov esi, dword ptr [esp + 0x50]
// 00494abd  57                   push edi
// 00494abe  c744240800000000     mov dword ptr [esp + 8], 0
// 00494ac6  56                   push esi
// 00494ac7  8d4c2414             lea ecx, [esp + 0x14]
// 00494acb  89742410             mov dword ptr [esp + 0x10], esi
// 00494acf  e84c5bf8ff           call 0x41a620
// 00494ad4  56                   push esi
// 00494ad5  8d442414             lea eax, [esp + 0x14]
// 00494ad9  56                   push esi
// 00494ada  50                   push eax
// 00494adb  e83089feff           call 0x47d410
// 00494ae0  83c40c               add esp, 0xc
// 00494ae3  8d4c240c             lea ecx, [esp + 0xc]
// 00494ae7  51                   push ecx
// 00494ae8  8d4c2418             lea ecx, [esp + 0x18]
// 00494aec  c744244801000000     mov dword ptr [esp + 0x48], 1
// 00494af4  e8d7f7ffff           call 0x4942d0
// 00494af9  8b542458             mov edx, dword ptr [esp + 0x58]
// 00494afd  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00494b01  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00494b05  52                   push edx
// 00494b06  8d442418             lea eax, [esp + 0x18]
// 00494b0a  50                   push eax
// 00494b0b  57                   push edi
// 00494b0c  83c110               add ecx, 0x10
// 00494b0f  c644245002           mov byte ptr [esp + 0x50], 2
// 00494b14  e85796ffff           call 0x48e170
// 00494b19  8d4c2414             lea ecx, [esp + 0x14]
// 00494b1d  c744240801000000     mov dword ptr [esp + 8], 1
// 00494b25  c644244401           mov byte ptr [esp + 0x44], 1
// 00494b2a  e8e1ab0000           call 0x49f710
// 00494b2f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00494b33  c644244400           mov byte ptr [esp + 0x44], 0
// 00494b38  85f6                 test esi, esi
// 00494b3a  742a                 je 0x494b66
// 00494b3c  8d4e04               lea ecx, [esi + 4]
// 00494b3f  83caff               or edx, 0xffffffff
// 00494b42  f00fc111             lock xadd dword ptr [ecx], edx
// 00494b46  751e                 jne 0x494b66
// 00494b48  8b06                 mov eax, dword ptr [esi]
// 00494b4a  8b5004               mov edx, dword ptr [eax + 4]
// 00494b4d  8bce                 mov ecx, esi
// 00494b4f  ffd2                 call edx
// 00494b51  8d4608               lea eax, [esi + 8]
// 00494b54  83c9ff               or ecx, 0xffffffff
// 00494b57  f00fc108             lock xadd dword ptr [eax], ecx
// 00494b5b  7509                 jne 0x494b66
// 00494b5d  8b16                 mov edx, dword ptr [esi]
// 00494b5f  8b4208               mov eax, dword ptr [edx + 8]
// 00494b62  8bce                 mov ecx, esi
// 00494b64  ffd0                 call eax
// 00494b66  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00494b6a  8bc7                 mov eax, edi
// 00494b6c  5f                   pop edi
// 00494b6d  5e                   pop esi
// 00494b6e  64890d00000000       mov dword ptr fs:[0], ecx
// 00494b75  83c440               add esp, 0x40
// 00494b78  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
