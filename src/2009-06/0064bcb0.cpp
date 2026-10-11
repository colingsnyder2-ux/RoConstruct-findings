// roc 2009-06 0064bcb0  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064bcb0
//
// 0064bcb0  6aff                 push -1
// 0064bcb2  68dcad8600           push 0x86addc
// 0064bcb7  64a100000000         mov eax, dword ptr fs:[0]
// 0064bcbd  50                   push eax
// 0064bcbe  64892500000000       mov dword ptr fs:[0], esp
// 0064bcc5  83ec20               sub esp, 0x20
// 0064bcc8  53                   push ebx
// 0064bcc9  56                   push esi
// 0064bcca  57                   push edi
// 0064bccb  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0064bccf  33db                 xor ebx, ebx
// 0064bcd1  895c240c             mov dword ptr [esp + 0xc], ebx
// 0064bcd5  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0064bcd9  57                   push edi
// 0064bcda  56                   push esi
// 0064bcdb  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0064bcdf  e8acf9ffff           call 0x64b690
// 0064bce4  83c408               add esp, 8
// 0064bce7  68f0338b00           push 0x8b33f0
// 0064bcec  8bce                 mov ecx, esi
// 0064bcee  895c2438             mov dword ptr [esp + 0x38], ebx
// 0064bcf2  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0064bcfa  ff15a4e48900         call dword ptr [0x89e4a4]
// 0064bd00  8d4704               lea eax, [edi + 4]
// 0064bd03  50                   push eax
// 0064bd04  8d4c2414             lea ecx, [esp + 0x14]
// 0064bd08  51                   push ecx
// 0064bd09  e882f9ffff           call 0x64b690
// 0064bd0e  83c408               add esp, 8
// 0064bd11  50                   push eax
// 0064bd12  8bce                 mov ecx, esi
// 0064bd14  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0064bd1c  ff15ace48900         call dword ptr [0x89e4ac]
// 0064bd22  8d4c2410             lea ecx, [esp + 0x10]
// 0064bd26  885c2434             mov byte ptr [esp + 0x34], bl
// 0064bd2a  ff15c4e48900         call dword ptr [0x89e4c4]
// 0064bd30  68f0338b00           push 0x8b33f0
// 0064bd35  8bce                 mov ecx, esi
// 0064bd37  ff15a4e48900         call dword ptr [0x89e4a4]
// 0064bd3d  83c708               add edi, 8
// 0064bd40  8d542410             lea edx, [esp + 0x10]
// 0064bd44  57                   push edi
// 0064bd45  52                   push edx
// 0064bd46  e845f9ffff           call 0x64b690
// 0064bd4b  83c408               add esp, 8
// 0064bd4e  50                   push eax
// 0064bd4f  8bce                 mov ecx, esi
// 0064bd51  c744243802000000     mov dword ptr [esp + 0x38], 2
// 0064bd59  ff15ace48900         call dword ptr [0x89e4ac]
// 0064bd5f  8d4c2410             lea ecx, [esp + 0x10]
// 0064bd63  885c2434             mov byte ptr [esp + 0x34], bl
// 0064bd67  ff15c4e48900         call dword ptr [0x89e4c4]
// 0064bd6d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0064bd71  5f                   pop edi
// 0064bd72  8bc6                 mov eax, esi
// 0064bd74  5e                   pop esi
// 0064bd75  5b                   pop ebx
// 0064bd76  64890d00000000       mov dword ptr fs:[0], ecx
// 0064bd7d  83c42c               add esp, 0x2c
// 0064bd80  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@VVector3@G3D@@@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
