// roc 2008-06 00494860  unit: RBX::Network::VPlayer::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494860
//
// 00494860  6aff                 push -1
// 00494862  68598a7c00           push 0x7c8a59
// 00494867  64a100000000         mov eax, dword ptr fs:[0]
// 0049486d  50                   push eax
// 0049486e  64892500000000       mov dword ptr fs:[0], esp
// 00494875  83ec34               sub esp, 0x34
// 00494878  56                   push esi
// 00494879  8b742450             mov esi, dword ptr [esp + 0x50]
// 0049487d  57                   push edi
// 0049487e  c744240800000000     mov dword ptr [esp + 8], 0
// 00494886  56                   push esi
// 00494887  8d4c2414             lea ecx, [esp + 0x14]
// 0049488b  89742410             mov dword ptr [esp + 0x10], esi
// 0049488f  e88c5df8ff           call 0x41a620
// 00494894  56                   push esi
// 00494895  8d442414             lea eax, [esp + 0x14]
// 00494899  56                   push esi
// 0049489a  50                   push eax
// 0049489b  e8708bfeff           call 0x47d410
// 004948a0  83c40c               add esp, 0xc
// 004948a3  8d4c240c             lea ecx, [esp + 0xc]
// 004948a7  51                   push ecx
// 004948a8  8d4c2418             lea ecx, [esp + 0x18]
// 004948ac  c744244801000000     mov dword ptr [esp + 0x48], 1
// 004948b4  e857f8ffff           call 0x494110
// 004948b9  8b542458             mov edx, dword ptr [esp + 0x58]
// 004948bd  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 004948c1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 004948c5  52                   push edx
// 004948c6  8d442418             lea eax, [esp + 0x18]
// 004948ca  50                   push eax
// 004948cb  57                   push edi
// 004948cc  83c110               add ecx, 0x10
// 004948cf  c644245002           mov byte ptr [esp + 0x50], 2
// 004948d4  e87795ffff           call 0x48de50
// 004948d9  8d4c2414             lea ecx, [esp + 0x14]
// 004948dd  c744240801000000     mov dword ptr [esp + 8], 1
// 004948e5  c644244401           mov byte ptr [esp + 0x44], 1
// 004948ea  e821ae0000           call 0x49f710
// 004948ef  8b742410             mov esi, dword ptr [esp + 0x10]
// 004948f3  c644244400           mov byte ptr [esp + 0x44], 0
// 004948f8  85f6                 test esi, esi
// 004948fa  742a                 je 0x494926
// 004948fc  8d4e04               lea ecx, [esi + 4]
// 004948ff  83caff               or edx, 0xffffffff
// 00494902  f00fc111             lock xadd dword ptr [ecx], edx
// 00494906  751e                 jne 0x494926
// 00494908  8b06                 mov eax, dword ptr [esi]
// 0049490a  8b5004               mov edx, dword ptr [eax + 4]
// 0049490d  8bce                 mov ecx, esi
// 0049490f  ffd2                 call edx
// 00494911  8d4608               lea eax, [esi + 8]
// 00494914  83c9ff               or ecx, 0xffffffff
// 00494917  f00fc108             lock xadd dword ptr [eax], ecx
// 0049491b  7509                 jne 0x494926
// 0049491d  8b16                 mov edx, dword ptr [esi]
// 0049491f  8b4208               mov eax, dword ptr [edx + 8]
// 00494922  8bce                 mov ecx, esi
// 00494924  ffd0                 call eax
// 00494926  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0049492a  8bc7                 mov eax, edi
// 0049492c  5f                   pop edi
// 0049492d  5e                   pop esi
// 0049492e  64890d00000000       mov dword ptr fs:[0], ecx
// 00494935  83c440               add esp, 0x40
// 00494938  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
