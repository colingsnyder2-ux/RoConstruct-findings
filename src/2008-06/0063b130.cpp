// roc 2008-06 0063b130  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b130
//
// 0063b130  6aff                 push -1
// 0063b132  68598a7c00           push 0x7c8a59
// 0063b137  64a100000000         mov eax, dword ptr fs:[0]
// 0063b13d  50                   push eax
// 0063b13e  64892500000000       mov dword ptr fs:[0], esp
// 0063b145  83ec34               sub esp, 0x34
// 0063b148  56                   push esi
// 0063b149  8b742450             mov esi, dword ptr [esp + 0x50]
// 0063b14d  57                   push edi
// 0063b14e  c744240800000000     mov dword ptr [esp + 8], 0
// 0063b156  56                   push esi
// 0063b157  8d4c2414             lea ecx, [esp + 0x14]
// 0063b15b  89742410             mov dword ptr [esp + 0x10], esi
// 0063b15f  e8bcf4ddff           call 0x41a620
// 0063b164  56                   push esi
// 0063b165  8d442414             lea eax, [esp + 0x14]
// 0063b169  56                   push esi
// 0063b16a  50                   push eax
// 0063b16b  e8a022e4ff           call 0x47d410
// 0063b170  83c40c               add esp, 0xc
// 0063b173  8d4c240c             lea ecx, [esp + 0xc]
// 0063b177  51                   push ecx
// 0063b178  8d4c2418             lea ecx, [esp + 0x18]
// 0063b17c  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0063b184  e8d7f6ffff           call 0x63a860
// 0063b189  8b542458             mov edx, dword ptr [esp + 0x58]
// 0063b18d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0063b191  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0063b195  52                   push edx
// 0063b196  8d442418             lea eax, [esp + 0x18]
// 0063b19a  50                   push eax
// 0063b19b  57                   push edi
// 0063b19c  83c110               add ecx, 0x10
// 0063b19f  c644245002           mov byte ptr [esp + 0x50], 2
// 0063b1a4  e8479cffff           call 0x634df0
// 0063b1a9  8d4c2414             lea ecx, [esp + 0x14]
// 0063b1ad  c744240801000000     mov dword ptr [esp + 8], 1
// 0063b1b5  c644244401           mov byte ptr [esp + 0x44], 1
// 0063b1ba  e85145e6ff           call 0x49f710
// 0063b1bf  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063b1c3  c644244400           mov byte ptr [esp + 0x44], 0
// 0063b1c8  85f6                 test esi, esi
// 0063b1ca  742a                 je 0x63b1f6
// 0063b1cc  8d4e04               lea ecx, [esi + 4]
// 0063b1cf  83caff               or edx, 0xffffffff
// 0063b1d2  f00fc111             lock xadd dword ptr [ecx], edx
// 0063b1d6  751e                 jne 0x63b1f6
// 0063b1d8  8b06                 mov eax, dword ptr [esi]
// 0063b1da  8b5004               mov edx, dword ptr [eax + 4]
// 0063b1dd  8bce                 mov ecx, esi
// 0063b1df  ffd2                 call edx
// 0063b1e1  8d4608               lea eax, [esi + 8]
// 0063b1e4  83c9ff               or ecx, 0xffffffff
// 0063b1e7  f00fc108             lock xadd dword ptr [eax], ecx
// 0063b1eb  7509                 jne 0x63b1f6
// 0063b1ed  8b16                 mov edx, dword ptr [esi]
// 0063b1ef  8b4208               mov eax, dword ptr [edx + 8]
// 0063b1f2  8bce                 mov ecx, esi
// 0063b1f4  ffd0                 call eax
// 0063b1f6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0063b1fa  8bc7                 mov eax, edi
// 0063b1fc  5f                   pop edi
// 0063b1fd  5e                   pop esi
// 0063b1fe  64890d00000000       mov dword ptr fs:[0], ecx
// 0063b205  83c440               add esp, 0x40
// 0063b208  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
