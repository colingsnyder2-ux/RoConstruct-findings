// from server: 100% by auto
// roc 2011-06 0077e300  unit: lua_exception  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e300
//
// 0077e300  83ec64               sub esp, 0x64
// 0077e303  56                   push esi
// 0077e304  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0077e308  8b4644               mov eax, dword ptr [esi + 0x44]
// 0077e30b  8944246c             mov dword ptr [esp + 0x6c], eax
// 0077e30f  85c0                 test eax, eax
// 0077e311  0f84bc000000         je 0x77e3d3
// 0077e317  807e3900             cmp byte ptr [esi + 0x39], 0
// 0077e31b  0f84b2000000         je 0x77e3d3
// 0077e321  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0077e324  8b4614               mov eax, dword ptr [esi + 0x14]
// 0077e327  8b542474             mov edx, dword ptr [esp + 0x74]
// 0077e32b  53                   push ebx
// 0077e32c  8b5e08               mov ebx, dword ptr [esi + 8]
// 0077e32f  55                   push ebp
// 0077e330  8b6808               mov ebp, dword ptr [eax + 8]
// 0077e333  57                   push edi
// 0077e334  8bfb                 mov edi, ebx
// 0077e336  2bf9                 sub edi, ecx
// 0077e338  2be9                 sub ebp, ecx
// 0077e33a  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0077e33e  894c2410             mov dword ptr [esp + 0x10], ecx
// 0077e342  89542424             mov dword ptr [esp + 0x24], edx
// 0077e346  83f904               cmp ecx, 4
// 0077e349  750a                 jne 0x77e355
// 0077e34b  c744247000000000     mov dword ptr [esp + 0x70], 0
// 0077e353  eb1a                 jmp 0x77e36f
// 0077e355  2b4628               sub eax, dword ptr [esi + 0x28]
// 0077e358  8bc8                 mov ecx, eax
// 0077e35a  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0077e35f  f7e9                 imul ecx
// 0077e361  c1fa02               sar edx, 2
// 0077e364  8bc2                 mov eax, edx
// 0077e366  c1e81f               shr eax, 0x1f
// 0077e369  03c2                 add eax, edx
// 0077e36b  89442470             mov dword ptr [esp + 0x70], eax
// 0077e36f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0077e372  2bcb                 sub ecx, ebx
// 0077e374  81f940010000         cmp ecx, 0x140
// 0077e37a  7f1b                 jg 0x77e397
// 0077e37c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0077e37f  83f814               cmp eax, 0x14
// 0077e382  7c06                 jl 0x77e38a
// 0077e384  8d1400               lea edx, [eax + eax]
// 0077e387  52                   push edx
// 0077e388  eb04                 jmp 0x77e38e
// 0077e38a  83c014               add eax, 0x14
// 0077e38d  50                   push eax
// 0077e38e  56                   push esi
// 0077e38f  e85cfeffff           call 0x77e1f0
// 0077e394  83c408               add esp, 8
// 0077e397  8b4608               mov eax, dword ptr [esi + 8]
// 0077e39a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0077e39d  8d542410             lea edx, [esp + 0x10]
// 0077e3a1  0540010000           add eax, 0x140
// 0077e3a6  52                   push edx
// 0077e3a7  894108               mov dword ptr [ecx + 8], eax
// 0077e3aa  56                   push esi
// 0077e3ab  c6463900             mov byte ptr [esi + 0x39], 0
// 0077e3af  ff942480000000       call dword ptr [esp + 0x80]
// 0077e3b6  8b4620               mov eax, dword ptr [esi + 0x20]
// 0077e3b9  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0077e3bc  03c5                 add eax, ebp
// 0077e3be  83c408               add esp, 8
// 0077e3c1  c6463901             mov byte ptr [esi + 0x39], 1
// 0077e3c5  894108               mov dword ptr [ecx + 8], eax
// 0077e3c8  8b5620               mov edx, dword ptr [esi + 0x20]
// 0077e3cb  03d7                 add edx, edi
// 0077e3cd  5f                   pop edi
// 0077e3ce  5d                   pop ebp
// 0077e3cf  895608               mov dword ptr [esi + 8], edx
// 0077e3d2  5b                   pop ebx
// 0077e3d3  5e                   pop esi
// 0077e3d4  83c464               add esp, 0x64
// 0077e3d7  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_callhook)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
