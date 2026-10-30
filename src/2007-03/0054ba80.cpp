// roc 2007-03 0054ba80  unit: seg_00540000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054ba80
//
// 0054ba80  55                   push ebp
// 0054ba81  8bec                 mov ebp, esp
// 0054ba83  6aff                 push -1
// 0054ba85  68b0327500           push 0x7532b0
// 0054ba8a  64a100000000         mov eax, dword ptr fs:[0]
// 0054ba90  50                   push eax
// 0054ba91  64892500000000       mov dword ptr fs:[0], esp
// 0054ba98  83ec08               sub esp, 8
// 0054ba9b  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0054ba9e  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054baa1  8b00                 mov eax, dword ptr [eax]
// 0054baa3  8b12                 mov edx, dword ptr [edx]
// 0054baa5  53                   push ebx
// 0054baa6  56                   push esi
// 0054baa7  2bc2                 sub eax, edx
// 0054baa9  85c0                 test eax, eax
// 0054baab  57                   push edi
// 0054baac  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054baaf  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054bab6  7e0f                 jle 0x54bac7
// 0054bab8  8b7144               mov esi, dword ptr [ecx + 0x44]
// 0054babb  50                   push eax
// 0054babc  52                   push edx
// 0054babd  56                   push esi
// 0054babe  83c140               add ecx, 0x40
// 0054bac1  51                   push ecx
// 0054bac2  e809f0ffff           call 0x54aad0
// 0054bac7  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 0054baca  85c9                 test ecx, ecx
// 0054bacc  7406                 je 0x54bad4
// 0054bace  ff1558e77700         call dword ptr [0x77e758]
// 0054bad4  33c0                 xor eax, eax
// 0054bad6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054bad9  64890d00000000       mov dword ptr fs:[0], ecx
// 0054bae0  5f                   pop edi
// 0054bae1  5e                   pop esi
// 0054bae2  5b                   pop ebx
// 0054bae3  8be5                 mov esp, ebp
// 0054bae5  5d                   pop ebp
// 0054bae6  c3                   ret 
// 0054bae7  b8edba5400           mov eax, 0x54baed
// 0054baec  c3                   ret 
// 0054baed  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054baf0  5f                   pop edi
// 0054baf1  5e                   pop esi
// 0054baf2  83c8ff               or eax, 0xffffffff
// 0054baf5  64890d00000000       mov dword ptr fs:[0], ecx
// 0054bafc  5b                   pop ebx
// 0054bafd  8be5                 mov esp, ebp
// 0054baff  5d                   pop ebp
// 0054bb00  c3                   ret 
// copied from an identical function in another client (function ?sync@?$indirect_streambuf@U?$basic_null_source@D@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp