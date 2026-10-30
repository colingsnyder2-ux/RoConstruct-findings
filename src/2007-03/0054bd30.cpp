// roc 2007-03 0054bd30  unit: seg_00540000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054bd30
//
// 0054bd30  6aff                 push -1
// 0054bd32  68f8327500           push 0x7532f8
// 0054bd37  64a100000000         mov eax, dword ptr fs:[0]
// 0054bd3d  50                   push eax
// 0054bd3e  64892500000000       mov dword ptr fs:[0], esp
// 0054bd45  51                   push ecx
// 0054bd46  56                   push esi
// 0054bd47  8bf1                 mov esi, ecx
// 0054bd49  89742404             mov dword ptr [esp + 4], esi
// 0054bd4d  ff15e8e57700         call dword ptr [0x77e5e8]
// 0054bd53  33c0                 xor eax, eax
// 0054bd55  88463c               mov byte ptr [esi + 0x3c], al
// 0054bd58  884644               mov byte ptr [esi + 0x44], al
// 0054bd5b  894648               mov dword ptr [esi + 0x48], eax
// 0054bd5e  89464c               mov dword ptr [esi + 0x4c], eax
// 0054bd61  894650               mov dword ptr [esi + 0x50], eax
// 0054bd64  894654               mov dword ptr [esi + 0x54], eax
// 0054bd67  c7465810000000       mov dword ptr [esi + 0x58], 0x10
// 0054bd6e  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054bd72  89442410             mov dword ptr [esp + 0x10], eax
// 0054bd76  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054bd7a  c706c47a7a00         mov dword ptr [esi], 0x7a7ac4
// 0054bd80  8b08                 mov ecx, dword ptr [eax]
// 0054bd82  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054bd86  52                   push edx
// 0054bd87  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0054bd8b  50                   push eax
// 0054bd8c  8d4c2420             lea ecx, [esp + 0x20]
// 0054bd90  51                   push ecx
// 0054bd91  8bce                 mov ecx, esi
// 0054bd93  e838f6ffff           call 0x54b3d0
// 0054bd98  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054bd9c  8bc6                 mov eax, esi
// 0054bd9e  5e                   pop esi
// 0054bd9f  64890d00000000       mov dword ptr fs:[0], ecx
// 0054bda6  83c410               add esp, 0x10
// 0054bda9  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$stream_buffer@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@iostreams@boost@@QAE@ABV?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@2@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp