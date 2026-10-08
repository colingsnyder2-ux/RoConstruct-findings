// roc 2007-03 0052de50  unit: seg_00520000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052de50
//
// 0052de50  64a100000000         mov eax, dword ptr fs:[0]
// 0052de56  6aff                 push -1
// 0052de58  6828517500           push 0x755128
// 0052de5d  50                   push eax
// 0052de5e  64892500000000       mov dword ptr fs:[0], esp
// 0052de65  53                   push ebx
// 0052de66  56                   push esi
// 0052de67  57                   push edi
// 0052de68  8bd9                 mov ebx, ecx
// 0052de6a  8b742420             mov esi, dword ptr [esp + 0x20]
// 0052de6e  85f6                 test esi, esi
// 0052de70  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052de74  8903                 mov dword ptr [ebx], eax
// 0052de76  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0052de7e  897304               mov dword ptr [ebx + 4], esi
// 0052de81  740c                 je 0x52de8f
// 0052de83  8d4e04               lea ecx, [esi + 4]
// 0052de86  ba01000000           mov edx, 1
// 0052de8b  f00fc111             lock xadd dword ptr [ecx], edx
// 0052de8f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0052de93  85ff                 test edi, edi
// 0052de95  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052de99  894308               mov dword ptr [ebx + 8], eax
// 0052de9c  897b0c               mov dword ptr [ebx + 0xc], edi
// 0052de9f  740c                 je 0x52dead
// 0052dea1  8d4f04               lea ecx, [edi + 4]
// 0052dea4  ba01000000           mov edx, 1
// 0052dea9  f00fc111             lock xadd dword ptr [ecx], edx
// 0052dead  85f6                 test esi, esi
// 0052deaf  742a                 je 0x52dedb
// 0052deb1  8d4604               lea eax, [esi + 4]
// 0052deb4  83c9ff               or ecx, 0xffffffff
// 0052deb7  f00fc108             lock xadd dword ptr [eax], ecx
// 0052debb  751e                 jne 0x52dedb
// 0052debd  8b16                 mov edx, dword ptr [esi]
// 0052debf  8b4204               mov eax, dword ptr [edx + 4]
// 0052dec2  8bce                 mov ecx, esi
// 0052dec4  ffd0                 call eax
// 0052dec6  8d4e08               lea ecx, [esi + 8]
// 0052dec9  83caff               or edx, 0xffffffff
// 0052decc  f00fc111             lock xadd dword ptr [ecx], edx
// 0052ded0  7509                 jne 0x52dedb
// 0052ded2  8b06                 mov eax, dword ptr [esi]
// 0052ded4  8b5008               mov edx, dword ptr [eax + 8]
// 0052ded7  8bce                 mov ecx, esi
// 0052ded9  ffd2                 call edx
// 0052dedb  85ff                 test edi, edi
// 0052dedd  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0052dee5  742a                 je 0x52df11
// 0052dee7  8d4704               lea eax, [edi + 4]
// 0052deea  83c9ff               or ecx, 0xffffffff
// 0052deed  f00fc108             lock xadd dword ptr [eax], ecx
// 0052def1  751e                 jne 0x52df11
// 0052def3  8b17                 mov edx, dword ptr [edi]
// 0052def5  8b4204               mov eax, dword ptr [edx + 4]
// 0052def8  8bcf                 mov ecx, edi
// 0052defa  ffd0                 call eax
// 0052defc  8d4f08               lea ecx, [edi + 8]
// 0052deff  83caff               or edx, 0xffffffff
// 0052df02  f00fc111             lock xadd dword ptr [ecx], edx
// 0052df06  7509                 jne 0x52df11
// 0052df08  8b07                 mov eax, dword ptr [edi]
// 0052df0a  8b5008               mov edx, dword ptr [eax + 8]
// 0052df0d  8bcf                 mov ecx, edi
// 0052df0f  ffd2                 call edx
// 0052df11  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052df15  5f                   pop edi
// 0052df16  5e                   pop esi
// 0052df17  8bc3                 mov eax, ebx
// 0052df19  64890d00000000       mov dword ptr fs:[0], ecx
// 0052df20  5b                   pop ebx
// 0052df21  83c40c               add esp, 0xc
// 0052df24  c21000               ret 0x10
// library rbxgs/v8datamodel\Selection.cpp (function ??0SelectionChanged@RBX@@AAE@V?$shared_ptr@VInstance@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
