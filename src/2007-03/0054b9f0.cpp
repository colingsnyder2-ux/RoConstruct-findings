// roc 2007-03 0054b9f0  unit: seg_00540000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054b9f0
//
// 0054b9f0  55                   push ebp
// 0054b9f1  8bec                 mov ebp, esp
// 0054b9f3  6aff                 push -1
// 0054b9f5  68a0327500           push 0x7532a0
// 0054b9fa  64a100000000         mov eax, dword ptr fs:[0]
// 0054ba00  50                   push eax
// 0054ba01  64892500000000       mov dword ptr fs:[0], esp
// 0054ba08  51                   push ecx
// 0054ba09  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0054ba0c  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054ba0f  8b00                 mov eax, dword ptr [eax]
// 0054ba11  8b12                 mov edx, dword ptr [edx]
// 0054ba13  53                   push ebx
// 0054ba14  56                   push esi
// 0054ba15  2bc2                 sub eax, edx
// 0054ba17  85c0                 test eax, eax
// 0054ba19  57                   push edi
// 0054ba1a  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054ba1d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054ba24  7e0f                 jle 0x54ba35
// 0054ba26  8b7144               mov esi, dword ptr [ecx + 0x44]
// 0054ba29  50                   push eax
// 0054ba2a  52                   push edx
// 0054ba2b  56                   push esi
// 0054ba2c  83c140               add ecx, 0x40
// 0054ba2f  51                   push ecx
// 0054ba30  e89bf0ffff           call 0x54aad0
// 0054ba35  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 0054ba38  85c9                 test ecx, ecx
// 0054ba3a  b301                 mov bl, 1
// 0054ba3c  740d                 je 0x54ba4b
// 0054ba3e  ff1558e77700         call dword ptr [0x77e758]
// 0054ba44  83f8ff               cmp eax, -1
// 0054ba47  7502                 jne 0x54ba4b
// 0054ba49  32db                 xor bl, bl
// 0054ba4b  8ac3                 mov al, bl
// 0054ba4d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054ba50  64890d00000000       mov dword ptr fs:[0], ecx
// 0054ba57  5f                   pop edi
// 0054ba58  5e                   pop esi
// 0054ba59  5b                   pop ebx
// 0054ba5a  8be5                 mov esp, ebp
// 0054ba5c  5d                   pop ebp
// 0054ba5d  c3                   ret 
// 0054ba5e  b864ba5400           mov eax, 0x54ba64
// 0054ba63  c3                   ret 
// 0054ba64  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054ba67  5f                   pop edi
// 0054ba68  5e                   pop esi
// 0054ba69  32c0                 xor al, al
// 0054ba6b  64890d00000000       mov dword ptr fs:[0], ecx
// 0054ba72  5b                   pop ebx
// 0054ba73  8be5                 mov esp, ebp
// 0054ba75  5d                   pop ebp
// 0054ba76  c3                   ret 
// copied from an identical function in another client (function ?strict_sync@?$indirect_streambuf@U?$basic_null_source@D@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@UAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp