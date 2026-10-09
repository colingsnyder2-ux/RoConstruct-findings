// roc 2008-06 004915e0  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004915e0
//
// 004915e0  64a100000000         mov eax, dword ptr fs:[0]
// 004915e6  6aff                 push -1
// 004915e8  6868617c00           push 0x7c6168
// 004915ed  50                   push eax
// 004915ee  64892500000000       mov dword ptr fs:[0], esp
// 004915f5  56                   push esi
// 004915f6  8bf1                 mov esi, ecx
// 004915f8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00491600  e8cbac0e00           call 0x57c2d0
// 00491605  6a08                 push 8
// 00491607  e814f32000           call 0x6a0920
// 0049160c  83c404               add esp, 4
// 0049160f  85c0                 test eax, eax
// 00491611  7423                 je 0x491636
// 00491613  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00491617  8908                 mov dword ptr [eax], ecx
// 00491619  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049161d  895004               mov dword ptr [eax + 4], edx
// 00491620  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00491624  85c9                 test ecx, ecx
// 00491626  7414                 je 0x49163c
// 00491628  83c104               add ecx, 4
// 0049162b  ba01000000           mov edx, 1
// 00491630  f00fc111             lock xadd dword ptr [ecx], edx
// 00491634  eb02                 jmp 0x491638
// 00491636  33c0                 xor eax, eax
// 00491638  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049163c  894608               mov dword ptr [esi + 8], eax
// 0049163f  c7460408000000       mov dword ptr [esi + 4], 8
// 00491646  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0049164e  85c9                 test ecx, ecx
// 00491650  742c                 je 0x49167e
// 00491652  8bf1                 mov esi, ecx
// 00491654  83c104               add ecx, 4
// 00491657  83c8ff               or eax, 0xffffffff
// 0049165a  f00fc101             lock xadd dword ptr [ecx], eax
// 0049165e  751e                 jne 0x49167e
// 00491660  8b16                 mov edx, dword ptr [esi]
// 00491662  8b4204               mov eax, dword ptr [edx + 4]
// 00491665  8bce                 mov ecx, esi
// 00491667  ffd0                 call eax
// 00491669  8d4e08               lea ecx, [esi + 8]
// 0049166c  83caff               or edx, 0xffffffff
// 0049166f  f00fc111             lock xadd dword ptr [ecx], edx
// 00491673  7509                 jne 0x49167e
// 00491675  8b06                 mov eax, dword ptr [esi]
// 00491677  8b5008               mov edx, dword ptr [eax + 8]
// 0049167a  8bce                 mov ecx, esi
// 0049167c  ffd2                 call edx
// 0049167e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00491682  64890d00000000       mov dword ptr fs:[0], ecx
// 00491689  5e                   pop esi
// 0049168a  83c40c               add esp, 0xc
// 0049168d  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setValue@XmlNameValuePair@@QAEXVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
