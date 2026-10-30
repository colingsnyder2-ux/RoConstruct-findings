// roc 2009-06 0071a918  unit: ActiveDocView  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071a918
//
// 0071a918  8bff                 mov edi, edi
// 0071a91a  55                   push ebp
// 0071a91b  8bec                 mov ebp, esp
// 0071a91d  83ec10               sub esp, 0x10
// 0071a920  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0071a925  8365f800             and dword ptr [ebp - 8], 0
// 0071a929  8365fc00             and dword ptr [ebp - 4], 0
// 0071a92d  53                   push ebx
// 0071a92e  57                   push edi
// 0071a92f  bf4ee640bb           mov edi, 0xbb40e64e
// 0071a934  bb0000ffff           mov ebx, 0xffff0000
// 0071a939  3bc7                 cmp eax, edi
// 0071a93b  740d                 je 0x71a94a
// 0071a93d  85c3                 test ebx, eax
// 0071a93f  7409                 je 0x71a94a
// 0071a941  f7d0                 not eax
// 0071a943  a3344fa200           mov dword ptr [0xa24f34], eax
// 0071a948  eb60                 jmp 0x71a9aa
// 0071a94a  56                   push esi
// 0071a94b  8d45f8               lea eax, [ebp - 8]
// 0071a94e  50                   push eax
// 0071a94f  ff15cce18900         call dword ptr [0x89e1cc]
// 0071a955  8b75fc               mov esi, dword ptr [ebp - 4]
// 0071a958  3375f8               xor esi, dword ptr [ebp - 8]
// 0071a95b  ff153ce38900         call dword ptr [0x89e33c]
// 0071a961  33f0                 xor esi, eax
// 0071a963  ff15ece18900         call dword ptr [0x89e1ec]
// 0071a969  33f0                 xor esi, eax
// 0071a96b  ff1518e28900         call dword ptr [0x89e218]
// 0071a971  33f0                 xor esi, eax
// 0071a973  8d45f0               lea eax, [ebp - 0x10]
// 0071a976  50                   push eax
// 0071a977  ff15a8e28900         call dword ptr [0x89e2a8]
// 0071a97d  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0071a980  3345f0               xor eax, dword ptr [ebp - 0x10]
// 0071a983  33f0                 xor esi, eax
// 0071a985  3bf7                 cmp esi, edi
// 0071a987  7507                 jne 0x71a990
// 0071a989  be4fe640bb           mov esi, 0xbb40e64f
// 0071a98e  eb0b                 jmp 0x71a99b
// 0071a990  85f3                 test ebx, esi
// 0071a992  7507                 jne 0x71a99b
// 0071a994  8bc6                 mov eax, esi
// 0071a996  c1e010               shl eax, 0x10
// 0071a999  0bf0                 or esi, eax
// 0071a99b  8935304fa200         mov dword ptr [0xa24f30], esi
// 0071a9a1  f7d6                 not esi
// 0071a9a3  8935344fa200         mov dword ptr [0xa24f34], esi
// 0071a9a9  5e                   pop esi
// 0071a9aa  5f                   pop edi
// 0071a9ab  5b                   pop ebx
// 0071a9ac  c9                   leave 
// 0071a9ad  c3                   ret 
// copied from an identical function in another client (function ___security_init_cookie)

// roc-lang: cpp
// roc-cl: 21022
// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/gs_support.obj