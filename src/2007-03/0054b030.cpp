// roc 2007-03 0054b030  unit: seg_00540000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054b030
//
// 0054b030  6aff                 push -1
// 0054b032  68e3317500           push 0x7531e3
// 0054b037  64a100000000         mov eax, dword ptr fs:[0]
// 0054b03d  50                   push eax
// 0054b03e  64892500000000       mov dword ptr fs:[0], esp
// 0054b045  83ec08               sub esp, 8
// 0054b048  56                   push esi
// 0054b049  8bf1                 mov esi, ecx
// 0054b04b  89742408             mov dword ptr [esp + 8], esi
// 0054b04f  8b4648               mov eax, dword ptr [esi + 0x48]
// 0054b052  85c0                 test eax, eax
// 0054b054  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0054b05c  740f                 je 0x54b06d
// 0054b05e  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0054b061  51                   push ecx
// 0054b062  50                   push eax
// 0054b063  8d4c240f             lea ecx, [esp + 0xf]
// 0054b067  ff1560e77700         call dword ptr [0x77e760]
// 0054b06d  807e4100             cmp byte ptr [esi + 0x41], 0
// 0054b071  7404                 je 0x54b077
// 0054b073  c6464100             mov byte ptr [esi + 0x41], 0
// 0054b077  8bce                 mov ecx, esi
// 0054b079  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0054b081  ff15ece57700         call dword ptr [0x77e5ec]
// 0054b087  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054b08b  5e                   pop esi
// 0054b08c  64890d00000000       mov dword ptr fs:[0], ecx
// 0054b093  83c414               add esp, 0x14
// 0054b096  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp