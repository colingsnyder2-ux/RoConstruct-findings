// roc 2007-03 0054bbb0  unit: seg_00540000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054bbb0
//
// 0054bbb0  6aff                 push -1
// 0054bbb2  68f8327500           push 0x7532f8
// 0054bbb7  64a100000000         mov eax, dword ptr fs:[0]
// 0054bbbd  50                   push eax
// 0054bbbe  64892500000000       mov dword ptr fs:[0], esp
// 0054bbc5  51                   push ecx
// 0054bbc6  56                   push esi
// 0054bbc7  8bf1                 mov esi, ecx
// 0054bbc9  89742404             mov dword ptr [esp + 4], esi
// 0054bbcd  ff15e8e57700         call dword ptr [0x77e5e8]
// 0054bbd3  33c0                 xor eax, eax
// 0054bbd5  88463c               mov byte ptr [esi + 0x3c], al
// 0054bbd8  884644               mov byte ptr [esi + 0x44], al
// 0054bbdb  894648               mov dword ptr [esi + 0x48], eax
// 0054bbde  89464c               mov dword ptr [esi + 0x4c], eax
// 0054bbe1  894650               mov dword ptr [esi + 0x50], eax
// 0054bbe4  894654               mov dword ptr [esi + 0x54], eax
// 0054bbe7  c7465810000000       mov dword ptr [esi + 0x58], 0x10
// 0054bbee  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054bbf2  89442410             mov dword ptr [esp + 0x10], eax
// 0054bbf6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054bbfa  c706647a7a00         mov dword ptr [esi], 0x7a7a64
// 0054bc00  8b08                 mov ecx, dword ptr [eax]
// 0054bc02  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054bc06  52                   push edx
// 0054bc07  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0054bc0b  50                   push eax
// 0054bc0c  8d4c2420             lea ecx, [esp + 0x20]
// 0054bc10  51                   push ecx
// 0054bc11  8bce                 mov ecx, esi
// 0054bc13  e8b8f7ffff           call 0x54b3d0
// 0054bc18  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054bc1c  8bc6                 mov eax, esi
// 0054bc1e  5e                   pop esi
// 0054bc1f  64890d00000000       mov dword ptr fs:[0], ecx
// 0054bc26  83c410               add esp, 0x10
// 0054bc29  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$stream_buffer@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@iostreams@boost@@QAE@ABV?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@2@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp