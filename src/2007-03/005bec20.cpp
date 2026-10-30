// roc 2007-03 005bec20  unit: seg_005b0000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bec20
//
// 005bec20  6aff                 push -1
// 005bec22  68e8a37500           push 0x75a3e8
// 005bec27  64a100000000         mov eax, dword ptr fs:[0]
// 005bec2d  50                   push eax
// 005bec2e  64892500000000       mov dword ptr fs:[0], esp
// 005bec35  83ec10               sub esp, 0x10
// 005bec38  56                   push esi
// 005bec39  8b742428             mov esi, dword ptr [esp + 0x28]
// 005bec3d  85f6                 test esi, esi
// 005bec3f  c744240400000000     mov dword ptr [esp + 4], 0
// 005bec47  742c                 je 0x5bec75
// 005bec49  8b0e                 mov ecx, dword ptr [esi]
// 005bec4b  85c9                 test ecx, ecx
// 005bec4d  7409                 je 0x5bec58
// 005bec4f  8b01                 mov eax, dword ptr [ecx]
// 005bec51  8b5004               mov edx, dword ptr [eax + 4]
// 005bec54  ffd2                 call edx
// 005bec56  eb05                 jmp 0x5bec5d
// 005bec58  b87c198800           mov eax, 0x88197c
// 005bec5d  68f0358800           push 0x8835f0
// 005bec62  8bc8                 mov ecx, eax
// 005bec64  ff1574e97700         call dword ptr [0x77e974]
// 005bec6a  84c0                 test al, al
// 005bec6c  7407                 je 0x5bec75
// 005bec6e  8b0e                 mov ecx, dword ptr [esi]
// 005bec70  83c104               add ecx, 4
// 005bec73  7529                 jne 0x5bec9e
// 005bec75  68ac5e7800           push 0x785eac
// 005bec7a  8d4c240c             lea ecx, [esp + 0xc]
// 005bec7e  ff1580e97700         call dword ptr [0x77e980]
// 005bec84  c7442408a45e7800     mov dword ptr [esp + 8], 0x785ea4
// 005bec8c  8d442408             lea eax, [esp + 8]
// 005bec90  50                   push eax
// 005bec91  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005bec99  e8f23ae5ff           call 0x412790
// 005bec9e  8b11                 mov edx, dword ptr [ecx]
// 005beca0  8b442424             mov eax, dword ptr [esp + 0x24]
// 005beca4  8910                 mov dword ptr [eax], edx
// 005beca6  8b4904               mov ecx, dword ptr [ecx + 4]
// 005beca9  85c9                 test ecx, ecx
// 005becab  894804               mov dword ptr [eax + 4], ecx
// 005becae  740c                 je 0x5becbc
// 005becb0  83c104               add ecx, 4
// 005becb3  ba01000000           mov edx, 1
// 005becb8  f00fc111             lock xadd dword ptr [ecx], edx
// 005becbc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005becc0  5e                   pop esi
// 005becc1  64890d00000000       mov dword ptr fs:[0], ecx
// 005becc8  83c41c               add esp, 0x1c
// 005beccb  c3                   ret 
// copied from an identical function in another client (function ?cast_shared@@YA?AUShared@@PBUAny@@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_finish_0c14e773d5c0ba02.cpp