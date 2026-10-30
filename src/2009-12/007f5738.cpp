// roc 2009-12 007f5738  unit: ActiveDocView  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5738
//
// 007f5738  8bff                 mov edi, edi
// 007f573a  55                   push ebp
// 007f573b  8bec                 mov ebp, esp
// 007f573d  83ec10               sub esp, 0x10
// 007f5740  a10052b600           mov eax, dword ptr [0xb65200]
// 007f5745  8365f800             and dword ptr [ebp - 8], 0
// 007f5749  8365fc00             and dword ptr [ebp - 4], 0
// 007f574d  53                   push ebx
// 007f574e  57                   push edi
// 007f574f  bf4ee640bb           mov edi, 0xbb40e64e
// 007f5754  bb0000ffff           mov ebx, 0xffff0000
// 007f5759  3bc7                 cmp eax, edi
// 007f575b  740d                 je 0x7f576a
// 007f575d  85c3                 test ebx, eax
// 007f575f  7409                 je 0x7f576a
// 007f5761  f7d0                 not eax
// 007f5763  a30452b600           mov dword ptr [0xb65204], eax
// 007f5768  eb60                 jmp 0x7f57ca
// 007f576a  56                   push esi
// 007f576b  8d45f8               lea eax, [ebp - 8]
// 007f576e  50                   push eax
// 007f576f  ff15e0b19800         call dword ptr [0x98b1e0]
// 007f5775  8b75fc               mov esi, dword ptr [ebp - 4]
// 007f5778  3375f8               xor esi, dword ptr [ebp - 8]
// 007f577b  ff1544b29800         call dword ptr [0x98b244]
// 007f5781  33f0                 xor esi, eax
// 007f5783  ff1524b29800         call dword ptr [0x98b224]
// 007f5789  33f0                 xor esi, eax
// 007f578b  ff15fcb29800         call dword ptr [0x98b2fc]
// 007f5791  33f0                 xor esi, eax
// 007f5793  8d45f0               lea eax, [ebp - 0x10]
// 007f5796  50                   push eax
// 007f5797  ff15ccb29800         call dword ptr [0x98b2cc]
// 007f579d  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 007f57a0  3345f0               xor eax, dword ptr [ebp - 0x10]
// 007f57a3  33f0                 xor esi, eax
// 007f57a5  3bf7                 cmp esi, edi
// 007f57a7  7507                 jne 0x7f57b0
// 007f57a9  be4fe640bb           mov esi, 0xbb40e64f
// 007f57ae  eb0b                 jmp 0x7f57bb
// 007f57b0  85f3                 test ebx, esi
// 007f57b2  7507                 jne 0x7f57bb
// 007f57b4  8bc6                 mov eax, esi
// 007f57b6  c1e010               shl eax, 0x10
// 007f57b9  0bf0                 or esi, eax
// 007f57bb  89350052b600         mov dword ptr [0xb65200], esi
// 007f57c1  f7d6                 not esi
// 007f57c3  89350452b600         mov dword ptr [0xb65204], esi
// 007f57c9  5e                   pop esi
// 007f57ca  5f                   pop edi
// 007f57cb  5b                   pop ebx
// 007f57cc  c9                   leave 
// 007f57cd  c3                   ret 
// copied from an identical function in another client (function ___security_init_cookie)

// roc-lang: cpp
// roc-cl: 21022
// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/gs_support.obj