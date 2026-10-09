// roc 2008-06 005019f0  unit: boost::bad_lexical_cast  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005019f0
//
// 005019f0  6aff                 push -1
// 005019f2  68a5b37c00           push 0x7cb3a5
// 005019f7  64a100000000         mov eax, dword ptr fs:[0]
// 005019fd  50                   push eax
// 005019fe  64892500000000       mov dword ptr fs:[0], esp
// 00501a05  83ec60               sub esp, 0x60
// 00501a08  56                   push esi
// 00501a09  8b742474             mov esi, dword ptr [esp + 0x74]
// 00501a0d  57                   push edi
// 00501a0e  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00501a16  8b3d4c2d8000         mov edi, dword ptr [0x802d4c]
// 00501a1c  6a00                 push 0
// 00501a1e  ffd7                 call edi
// 00501a20  6a01                 push 1
// 00501a22  8944240c             mov dword ptr [esp + 0xc], eax
// 00501a26  ffd7                 call edi
// 00501a28  8944240c             mov dword ptr [esp + 0xc], eax
// 00501a2c  8d442408             lea eax, [esp + 8]
// 00501a30  50                   push eax
// 00501a31  8d4c2434             lea ecx, [esp + 0x34]
// 00501a35  51                   push ecx
// 00501a36  e895feffff           call 0x5018d0
// 00501a3b  8d542414             lea edx, [esp + 0x14]
// 00501a3f  52                   push edx
// 00501a40  8d442420             lea eax, [esp + 0x20]
// 00501a44  50                   push eax
// 00501a45  c784248000000001000000 mov dword ptr [esp + 0x80], 1
// 00501a50  e87bfeffff           call 0x5018d0
// 00501a55  68ccf08000           push 0x80f0cc
// 00501a5a  8d4c2444             lea ecx, [esp + 0x44]
// 00501a5e  51                   push ecx
// 00501a5f  8d542464             lea edx, [esp + 0x64]
// 00501a63  52                   push edx
// 00501a64  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 00501a6c  ff15e4238000         call dword ptr [0x8023e4]
// 00501a72  8d4c2430             lea ecx, [esp + 0x30]
// 00501a76  51                   push ecx
// 00501a77  50                   push eax
// 00501a78  56                   push esi
// 00501a79  c684249800000003     mov byte ptr [esp + 0x98], 3
// 00501a81  ff15a8248000         call dword ptr [0x8024a8]
// 00501a87  83c428               add esp, 0x28
// 00501a8a  8d4c244c             lea ecx, [esp + 0x4c]
// 00501a8e  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00501a96  c644247002           mov byte ptr [esp + 0x70], 2
// 00501a9b  ff1568248000         call dword ptr [0x802468]
// 00501aa1  8d4c2414             lea ecx, [esp + 0x14]
// 00501aa5  c644247001           mov byte ptr [esp + 0x70], 1
// 00501aaa  ff1568248000         call dword ptr [0x802468]
// 00501ab0  8d4c2430             lea ecx, [esp + 0x30]
// 00501ab4  c644247000           mov byte ptr [esp + 0x70], 0
// 00501ab9  ff1568248000         call dword ptr [0x802468]
// 00501abf  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00501ac3  5f                   pop edi
// 00501ac4  8bc6                 mov eax, esi
// 00501ac6  5e                   pop esi
// 00501ac7  64890d00000000       mov dword ptr fs:[0], ecx
// 00501ace  83c46c               add esp, 0x6c
// 00501ad1  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ?getMaxRes@Render@RBX@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
