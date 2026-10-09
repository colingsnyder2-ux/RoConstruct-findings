// roc 2009-06 00565420  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00565420
//
// 00565420  6aff                 push -1
// 00565422  6885f68500           push 0x85f685
// 00565427  64a100000000         mov eax, dword ptr fs:[0]
// 0056542d  50                   push eax
// 0056542e  64892500000000       mov dword ptr fs:[0], esp
// 00565435  83ec60               sub esp, 0x60
// 00565438  56                   push esi
// 00565439  8b742474             mov esi, dword ptr [esp + 0x74]
// 0056543d  57                   push edi
// 0056543e  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00565446  8b3ddced8900         mov edi, dword ptr [0x89eddc]
// 0056544c  6a00                 push 0
// 0056544e  ffd7                 call edi
// 00565450  6a01                 push 1
// 00565452  8944240c             mov dword ptr [esp + 0xc], eax
// 00565456  ffd7                 call edi
// 00565458  8944240c             mov dword ptr [esp + 0xc], eax
// 0056545c  8d442408             lea eax, [esp + 8]
// 00565460  50                   push eax
// 00565461  8d4c2434             lea ecx, [esp + 0x34]
// 00565465  51                   push ecx
// 00565466  e885ffffff           call 0x5653f0
// 0056546b  8d542414             lea edx, [esp + 0x14]
// 0056546f  52                   push edx
// 00565470  8d442420             lea eax, [esp + 0x20]
// 00565474  50                   push eax
// 00565475  c784248000000001000000 mov dword ptr [esp + 0x80], 1
// 00565480  e86bffffff           call 0x5653f0
// 00565485  6854508b00           push 0x8b5054
// 0056548a  8d4c2444             lea ecx, [esp + 0x44]
// 0056548e  51                   push ecx
// 0056548f  8d542464             lea edx, [esp + 0x64]
// 00565493  52                   push edx
// 00565494  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 0056549c  ff1548e48900         call dword ptr [0x89e448]
// 005654a2  8d4c2430             lea ecx, [esp + 0x30]
// 005654a6  51                   push ecx
// 005654a7  50                   push eax
// 005654a8  56                   push esi
// 005654a9  c684249800000003     mov byte ptr [esp + 0x98], 3
// 005654b1  ff150ce58900         call dword ptr [0x89e50c]
// 005654b7  83c428               add esp, 0x28
// 005654ba  8d4c244c             lea ecx, [esp + 0x4c]
// 005654be  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005654c6  c644247002           mov byte ptr [esp + 0x70], 2
// 005654cb  ff15c4e48900         call dword ptr [0x89e4c4]
// 005654d1  8d4c2414             lea ecx, [esp + 0x14]
// 005654d5  c644247001           mov byte ptr [esp + 0x70], 1
// 005654da  ff15c4e48900         call dword ptr [0x89e4c4]
// 005654e0  8d4c2430             lea ecx, [esp + 0x30]
// 005654e4  c644247000           mov byte ptr [esp + 0x70], 0
// 005654e9  ff15c4e48900         call dword ptr [0x89e4c4]
// 005654ef  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 005654f3  5f                   pop edi
// 005654f4  8bc6                 mov eax, esi
// 005654f6  5e                   pop esi
// 005654f7  64890d00000000       mov dword ptr fs:[0], ecx
// 005654fe  83c46c               add esp, 0x6c
// 00565501  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ?getMaxRes@Render@RBX@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
