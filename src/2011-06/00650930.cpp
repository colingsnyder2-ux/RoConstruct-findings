// roc 2011-06 00650930  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00650930
//
// 00650930  6aff                 push -1
// 00650932  688cc69e00           push 0x9ec68c
// 00650937  64a100000000         mov eax, dword ptr fs:[0]
// 0065093d  50                   push eax
// 0065093e  64892500000000       mov dword ptr fs:[0], esp
// 00650945  83ec20               sub esp, 0x20
// 00650948  53                   push ebx
// 00650949  56                   push esi
// 0065094a  57                   push edi
// 0065094b  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0065094f  33db                 xor ebx, ebx
// 00650951  895c240c             mov dword ptr [esp + 0xc], ebx
// 00650955  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00650959  57                   push edi
// 0065095a  56                   push esi
// 0065095b  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0065095f  e84cfbffff           call 0x6504b0
// 00650964  83c408               add esp, 8
// 00650967  68e888a600           push 0xa688e8
// 0065096c  8bce                 mov ecx, esi
// 0065096e  895c2438             mov dword ptr [esp + 0x38], ebx
// 00650972  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0065097a  ff15b004a400         call dword ptr [0xa404b0]
// 00650980  8d4704               lea eax, [edi + 4]
// 00650983  50                   push eax
// 00650984  8d4c2414             lea ecx, [esp + 0x14]
// 00650988  51                   push ecx
// 00650989  e822fbffff           call 0x6504b0
// 0065098e  83c408               add esp, 8
// 00650991  50                   push eax
// 00650992  8bce                 mov ecx, esi
// 00650994  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0065099c  ff15b804a400         call dword ptr [0xa404b8]
// 006509a2  8d4c2410             lea ecx, [esp + 0x10]
// 006509a6  885c2434             mov byte ptr [esp + 0x34], bl
// 006509aa  ff15d004a400         call dword ptr [0xa404d0]
// 006509b0  68e888a600           push 0xa688e8
// 006509b5  8bce                 mov ecx, esi
// 006509b7  ff15b004a400         call dword ptr [0xa404b0]
// 006509bd  83c708               add edi, 8
// 006509c0  8d542410             lea edx, [esp + 0x10]
// 006509c4  57                   push edi
// 006509c5  52                   push edx
// 006509c6  e8e5faffff           call 0x6504b0
// 006509cb  83c408               add esp, 8
// 006509ce  50                   push eax
// 006509cf  8bce                 mov ecx, esi
// 006509d1  c744243802000000     mov dword ptr [esp + 0x38], 2
// 006509d9  ff15b804a400         call dword ptr [0xa404b8]
// 006509df  8d4c2410             lea ecx, [esp + 0x10]
// 006509e3  885c2434             mov byte ptr [esp + 0x34], bl
// 006509e7  ff15d004a400         call dword ptr [0xa404d0]
// 006509ed  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006509f1  5f                   pop edi
// 006509f2  8bc6                 mov eax, esi
// 006509f4  5e                   pop esi
// 006509f5  5b                   pop ebx
// 006509f6  64890d00000000       mov dword ptr fs:[0], ecx
// 006509fd  83c42c               add esp, 0x2c
// 00650a00  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@VVector3@G3D@@@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
