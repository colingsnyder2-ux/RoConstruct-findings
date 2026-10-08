// roc 2011-06 0043adb0  unit: AsyncResult  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043adb0
//
// 0043adb0  6aff                 push -1
// 0043adb2  6898d99f00           push 0x9fd998
// 0043adb7  64a100000000         mov eax, dword ptr fs:[0]
// 0043adbd  50                   push eax
// 0043adbe  64892500000000       mov dword ptr fs:[0], esp
// 0043adc5  51                   push ecx
// 0043adc6  56                   push esi
// 0043adc7  57                   push edi
// 0043adc8  8bf9                 mov edi, ecx
// 0043adca  897c2408             mov dword ptr [esp + 8], edi
// 0043adce  8b770c               mov esi, dword ptr [edi + 0xc]
// 0043add1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0043add9  85f6                 test esi, esi
// 0043addb  742a                 je 0x43ae07
// 0043addd  8d4604               lea eax, [esi + 4]
// 0043ade0  83c9ff               or ecx, 0xffffffff
// 0043ade3  f00fc108             lock xadd dword ptr [eax], ecx
// 0043ade7  751e                 jne 0x43ae07
// 0043ade9  8b16                 mov edx, dword ptr [esi]
// 0043adeb  8b4204               mov eax, dword ptr [edx + 4]
// 0043adee  8bce                 mov ecx, esi
// 0043adf0  ffd0                 call eax
// 0043adf2  8d4e08               lea ecx, [esi + 8]
// 0043adf5  83caff               or edx, 0xffffffff
// 0043adf8  f00fc111             lock xadd dword ptr [ecx], edx
// 0043adfc  7509                 jne 0x43ae07
// 0043adfe  8b06                 mov eax, dword ptr [esi]
// 0043ae00  8b5008               mov edx, dword ptr [eax + 8]
// 0043ae03  8bce                 mov ecx, esi
// 0043ae05  ffd2                 call edx
// 0043ae07  8b7704               mov esi, dword ptr [edi + 4]
// 0043ae0a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0043ae12  85f6                 test esi, esi
// 0043ae14  742a                 je 0x43ae40
// 0043ae16  8d4604               lea eax, [esi + 4]
// 0043ae19  83c9ff               or ecx, 0xffffffff
// 0043ae1c  f00fc108             lock xadd dword ptr [eax], ecx
// 0043ae20  751e                 jne 0x43ae40
// 0043ae22  8b16                 mov edx, dword ptr [esi]
// 0043ae24  8b4204               mov eax, dword ptr [edx + 4]
// 0043ae27  8bce                 mov ecx, esi
// 0043ae29  ffd0                 call eax
// 0043ae2b  8d4e08               lea ecx, [esi + 8]
// 0043ae2e  83caff               or edx, 0xffffffff
// 0043ae31  f00fc111             lock xadd dword ptr [ecx], edx
// 0043ae35  7509                 jne 0x43ae40
// 0043ae37  8b06                 mov eax, dword ptr [esi]
// 0043ae39  8b5008               mov edx, dword ptr [eax + 8]
// 0043ae3c  8bce                 mov ecx, esi
// 0043ae3e  ffd2                 call edx
// 0043ae40  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043ae44  5f                   pop edi
// 0043ae45  5e                   pop esi
// 0043ae46  64890d00000000       mov dword ptr fs:[0], ecx
// 0043ae4d  83c410               add esp, 0x10
// 0043ae50  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
