// roc 2011-06 0080bf68  unit: boost::exception  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080bf68
//
// 0080bf68  8bff                 mov edi, edi
// 0080bf6a  55                   push ebp
// 0080bf6b  8bec                 mov ebp, esp
// 0080bf6d  83ec10               sub esp, 0x10
// 0080bf70  a12058c900           mov eax, dword ptr [0xc95820]
// 0080bf75  8365f800             and dword ptr [ebp - 8], 0
// 0080bf79  8365fc00             and dword ptr [ebp - 4], 0
// 0080bf7d  53                   push ebx
// 0080bf7e  57                   push edi
// 0080bf7f  bf4ee640bb           mov edi, 0xbb40e64e
// 0080bf84  bb0000ffff           mov ebx, 0xffff0000
// 0080bf89  3bc7                 cmp eax, edi
// 0080bf8b  740d                 je 0x80bf9a
// 0080bf8d  85c3                 test ebx, eax
// 0080bf8f  7409                 je 0x80bf9a
// 0080bf91  f7d0                 not eax
// 0080bf93  a32458c900           mov dword ptr [0xc95824], eax
// 0080bf98  eb60                 jmp 0x80bffa
// 0080bf9a  56                   push esi
// 0080bf9b  8d45f8               lea eax, [ebp - 8]
// 0080bf9e  50                   push eax
// 0080bf9f  ff152c03a400         call dword ptr [0xa4032c]
// 0080bfa5  8b75fc               mov esi, dword ptr [ebp - 4]
// 0080bfa8  3375f8               xor esi, dword ptr [ebp - 8]
// 0080bfab  ff159403a400         call dword ptr [0xa40394]
// 0080bfb1  33f0                 xor esi, eax
// 0080bfb3  ff157003a400         call dword ptr [0xa40370]
// 0080bfb9  33f0                 xor esi, eax
// 0080bfbb  ff15f802a400         call dword ptr [0xa402f8]
// 0080bfc1  33f0                 xor esi, eax
// 0080bfc3  8d45f0               lea eax, [ebp - 0x10]
// 0080bfc6  50                   push eax
// 0080bfc7  ff157802a400         call dword ptr [0xa40278]
// 0080bfcd  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0080bfd0  3345f0               xor eax, dword ptr [ebp - 0x10]
// 0080bfd3  33f0                 xor esi, eax
// 0080bfd5  3bf7                 cmp esi, edi
// 0080bfd7  7507                 jne 0x80bfe0
// 0080bfd9  be4fe640bb           mov esi, 0xbb40e64f
// 0080bfde  eb0b                 jmp 0x80bfeb
// 0080bfe0  85f3                 test ebx, esi
// 0080bfe2  7507                 jne 0x80bfeb
// 0080bfe4  8bc6                 mov eax, esi
// 0080bfe6  c1e010               shl eax, 0x10
// 0080bfe9  0bf0                 or esi, eax
// 0080bfeb  89352058c900         mov dword ptr [0xc95820], esi
// 0080bff1  f7d6                 not esi
// 0080bff3  89352458c900         mov dword ptr [0xc95824], esi
// 0080bff9  5e                   pop esi
// 0080bffa  5f                   pop edi
// 0080bffb  5b                   pop ebx
// 0080bffc  c9                   leave 
// 0080bffd  c3                   ret 
// copied from an identical function in another client (function ___security_init_cookie)

// roc-flags: /O2 /GS- /EHsc /MD
// roc-lang: cpp
// roc-cl: 21022
// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/gs_support.obj