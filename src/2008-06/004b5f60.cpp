// roc 2008-06 004b5f60  unit: RBX::VPartInstance::?$SignalDesc  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5f60
//
// 004b5f60  6aff                 push -1
// 004b5f62  68598a7c00           push 0x7c8a59
// 004b5f67  64a100000000         mov eax, dword ptr fs:[0]
// 004b5f6d  50                   push eax
// 004b5f6e  64892500000000       mov dword ptr fs:[0], esp
// 004b5f75  83ec34               sub esp, 0x34
// 004b5f78  56                   push esi
// 004b5f79  8b742450             mov esi, dword ptr [esp + 0x50]
// 004b5f7d  57                   push edi
// 004b5f7e  c744240800000000     mov dword ptr [esp + 8], 0
// 004b5f86  56                   push esi
// 004b5f87  8d4c2414             lea ecx, [esp + 0x14]
// 004b5f8b  89742410             mov dword ptr [esp + 0x10], esi
// 004b5f8f  e88c46f6ff           call 0x41a620
// 004b5f94  56                   push esi
// 004b5f95  8d442414             lea eax, [esp + 0x14]
// 004b5f99  56                   push esi
// 004b5f9a  50                   push eax
// 004b5f9b  e87074fcff           call 0x47d410
// 004b5fa0  83c40c               add esp, 0xc
// 004b5fa3  8d4c240c             lea ecx, [esp + 0xc]
// 004b5fa7  51                   push ecx
// 004b5fa8  8d4c2418             lea ecx, [esp + 0x18]
// 004b5fac  c744244801000000     mov dword ptr [esp + 0x48], 1
// 004b5fb4  e827fcffff           call 0x4b5be0
// 004b5fb9  8b542458             mov edx, dword ptr [esp + 0x58]
// 004b5fbd  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 004b5fc1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 004b5fc5  52                   push edx
// 004b5fc6  8d442418             lea eax, [esp + 0x18]
// 004b5fca  50                   push eax
// 004b5fcb  57                   push edi
// 004b5fcc  83c110               add ecx, 0x10
// 004b5fcf  c644245002           mov byte ptr [esp + 0x50], 2
// 004b5fd4  e827bbffff           call 0x4b1b00
// 004b5fd9  8d4c2414             lea ecx, [esp + 0x14]
// 004b5fdd  c744240801000000     mov dword ptr [esp + 8], 1
// 004b5fe5  c644244401           mov byte ptr [esp + 0x44], 1
// 004b5fea  e82197feff           call 0x49f710
// 004b5fef  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b5ff3  c644244400           mov byte ptr [esp + 0x44], 0
// 004b5ff8  85f6                 test esi, esi
// 004b5ffa  742a                 je 0x4b6026
// 004b5ffc  8d4e04               lea ecx, [esi + 4]
// 004b5fff  83caff               or edx, 0xffffffff
// 004b6002  f00fc111             lock xadd dword ptr [ecx], edx
// 004b6006  751e                 jne 0x4b6026
// 004b6008  8b06                 mov eax, dword ptr [esi]
// 004b600a  8b5004               mov edx, dword ptr [eax + 4]
// 004b600d  8bce                 mov ecx, esi
// 004b600f  ffd2                 call edx
// 004b6011  8d4608               lea eax, [esi + 8]
// 004b6014  83c9ff               or ecx, 0xffffffff
// 004b6017  f00fc108             lock xadd dword ptr [eax], ecx
// 004b601b  7509                 jne 0x4b6026
// 004b601d  8b16                 mov edx, dword ptr [esi]
// 004b601f  8b4208               mov eax, dword ptr [edx + 8]
// 004b6022  8bce                 mov ecx, esi
// 004b6024  ffd0                 call eax
// 004b6026  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004b602a  8bc7                 mov eax, edi
// 004b602c  5f                   pop edi
// 004b602d  5e                   pop esi
// 004b602e  64890d00000000       mov dword ptr fs:[0], ecx
// 004b6035  83c440               add esp, 0x40
// 004b6038  c21000               ret 0x10
// library openrbx-client/App\util\RunStateOwner.cpp (function ?connectGeneric@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@MBE?AVconnection@signals@boost@@PAVSignalInstance@23@PAVGenericSlotWrapper@23@W4connect_position@56@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
