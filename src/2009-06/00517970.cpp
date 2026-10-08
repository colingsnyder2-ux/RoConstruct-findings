// roc 2009-06 00517970  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00517970
//
// 00517970  6aff                 push -1
// 00517972  6808b08600           push 0x86b008
// 00517977  64a100000000         mov eax, dword ptr fs:[0]
// 0051797d  50                   push eax
// 0051797e  64892500000000       mov dword ptr fs:[0], esp
// 00517985  51                   push ecx
// 00517986  56                   push esi
// 00517987  8bd1                 mov edx, ecx
// 00517989  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051798d  83ec08               sub esp, 8
// 00517990  8bc4                 mov eax, esp
// 00517992  8908                 mov dword ptr [eax], ecx
// 00517994  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00517998  894804               mov dword ptr [eax + 4], ecx
// 0051799b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0051799f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005179a7  8964240c             mov dword ptr [esp + 0xc], esp
// 005179ab  85c0                 test eax, eax
// 005179ad  740c                 je 0x5179bb
// 005179af  83c004               add eax, 4
// 005179b2  b901000000           mov ecx, 1
// 005179b7  f00fc108             lock xadd dword ptr [eax], ecx
// 005179bb  8b4a04               mov ecx, dword ptr [edx + 4]
// 005179be  034c2420             add ecx, dword ptr [esp + 0x20]
// 005179c2  8b12                 mov edx, dword ptr [edx]
// 005179c4  ffd2                 call edx
// 005179c6  8b742420             mov esi, dword ptr [esp + 0x20]
// 005179ca  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005179d2  85f6                 test esi, esi
// 005179d4  742a                 je 0x517a00
// 005179d6  8d4604               lea eax, [esi + 4]
// 005179d9  83c9ff               or ecx, 0xffffffff
// 005179dc  f00fc108             lock xadd dword ptr [eax], ecx
// 005179e0  751e                 jne 0x517a00
// 005179e2  8b16                 mov edx, dword ptr [esi]
// 005179e4  8b4204               mov eax, dword ptr [edx + 4]
// 005179e7  8bce                 mov ecx, esi
// 005179e9  ffd0                 call eax
// 005179eb  8d4e08               lea ecx, [esi + 8]
// 005179ee  83caff               or edx, 0xffffffff
// 005179f1  f00fc111             lock xadd dword ptr [ecx], edx
// 005179f5  7509                 jne 0x517a00
// 005179f7  8b06                 mov eax, dword ptr [esi]
// 005179f9  8b5008               mov edx, dword ptr [eax + 8]
// 005179fc  8bce                 mov ecx, esi
// 005179fe  ffd2                 call edx
// 00517a00  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00517a04  64890d00000000       mov dword ptr fs:[0], ecx
// 00517a0b  5e                   pop esi
// 00517a0c  83c410               add esp, 0x10
// 00517a0f  c20c00               ret 0xc
// library rbxgs-net/IdManager.cpp (function ??R?$mf1@XVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@QBEXPAVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
