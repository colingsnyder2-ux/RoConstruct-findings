// roc 2010-06 007a9878  unit: ActiveDocView  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9878
//
// 007a9878  8bff                 mov edi, edi
// 007a987a  55                   push ebp
// 007a987b  8bec                 mov ebp, esp
// 007a987d  83ec10               sub esp, 0x10
// 007a9880  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007a9885  8365f800             and dword ptr [ebp - 8], 0
// 007a9889  8365fc00             and dword ptr [ebp - 4], 0
// 007a988d  53                   push ebx
// 007a988e  57                   push edi
// 007a988f  bf4ee640bb           mov edi, 0xbb40e64e
// 007a9894  bb0000ffff           mov ebx, 0xffff0000
// 007a9899  3bc7                 cmp eax, edi
// 007a989b  740d                 je 0x7a98aa
// 007a989d  85c3                 test ebx, eax
// 007a989f  7409                 je 0x7a98aa
// 007a98a1  f7d0                 not eax
// 007a98a3  a3b45fbe00           mov dword ptr [0xbe5fb4], eax
// 007a98a8  eb60                 jmp 0x7a990a
// 007a98aa  56                   push esi
// 007a98ab  8d45f8               lea eax, [ebp - 8]
// 007a98ae  50                   push eax
// 007a98af  ff1550a39e00         call dword ptr [0x9ea350]
// 007a98b5  8b75fc               mov esi, dword ptr [ebp - 4]
// 007a98b8  3375f8               xor esi, dword ptr [ebp - 8]
// 007a98bb  ff15b4a39e00         call dword ptr [0x9ea3b4]
// 007a98c1  33f0                 xor esi, eax
// 007a98c3  ff1594a39e00         call dword ptr [0x9ea394]
// 007a98c9  33f0                 xor esi, eax
// 007a98cb  ff1524a39e00         call dword ptr [0x9ea324]
// 007a98d1  33f0                 xor esi, eax
// 007a98d3  8d45f0               lea eax, [ebp - 0x10]
// 007a98d6  50                   push eax
// 007a98d7  ff15a0a29e00         call dword ptr [0x9ea2a0]
// 007a98dd  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 007a98e0  3345f0               xor eax, dword ptr [ebp - 0x10]
// 007a98e3  33f0                 xor esi, eax
// 007a98e5  3bf7                 cmp esi, edi
// 007a98e7  7507                 jne 0x7a98f0
// 007a98e9  be4fe640bb           mov esi, 0xbb40e64f
// 007a98ee  eb0b                 jmp 0x7a98fb
// 007a98f0  85f3                 test ebx, esi
// 007a98f2  7507                 jne 0x7a98fb
// 007a98f4  8bc6                 mov eax, esi
// 007a98f6  c1e010               shl eax, 0x10
// 007a98f9  0bf0                 or esi, eax
// 007a98fb  8935b05fbe00         mov dword ptr [0xbe5fb0], esi
// 007a9901  f7d6                 not esi
// 007a9903  8935b45fbe00         mov dword ptr [0xbe5fb4], esi
// 007a9909  5e                   pop esi
// 007a990a  5f                   pop edi
// 007a990b  5b                   pop ebx
// 007a990c  c9                   leave 
// 007a990d  c3                   ret 
// copied from an identical function in another client (function ___security_init_cookie)

// roc-flags: /O2 /GS- /EHsc /MD
// roc-lang: cpp
// roc-cl: 21022
// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/gs_support.obj