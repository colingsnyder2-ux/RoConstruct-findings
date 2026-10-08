// from server: 100% by auto
// roc 2012-06 00854790  unit: lua_exception  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854790
//
// 00854790  83ec64               sub esp, 0x64
// 00854793  56                   push esi
// 00854794  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00854798  8b4644               mov eax, dword ptr [esi + 0x44]
// 0085479b  8944246c             mov dword ptr [esp + 0x6c], eax
// 0085479f  85c0                 test eax, eax
// 008547a1  0f84bc000000         je 0x854863
// 008547a7  807e3900             cmp byte ptr [esi + 0x39], 0
// 008547ab  0f84b2000000         je 0x854863
// 008547b1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008547b4  8b4614               mov eax, dword ptr [esi + 0x14]
// 008547b7  8b542474             mov edx, dword ptr [esp + 0x74]
// 008547bb  53                   push ebx
// 008547bc  8b5e08               mov ebx, dword ptr [esi + 8]
// 008547bf  55                   push ebp
// 008547c0  8b6808               mov ebp, dword ptr [eax + 8]
// 008547c3  57                   push edi
// 008547c4  8bfb                 mov edi, ebx
// 008547c6  2bf9                 sub edi, ecx
// 008547c8  2be9                 sub ebp, ecx
// 008547ca  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008547ce  894c2410             mov dword ptr [esp + 0x10], ecx
// 008547d2  89542424             mov dword ptr [esp + 0x24], edx
// 008547d6  83f904               cmp ecx, 4
// 008547d9  750a                 jne 0x8547e5
// 008547db  c744247000000000     mov dword ptr [esp + 0x70], 0
// 008547e3  eb1a                 jmp 0x8547ff
// 008547e5  2b4628               sub eax, dword ptr [esi + 0x28]
// 008547e8  8bc8                 mov ecx, eax
// 008547ea  b8abaaaa2a           mov eax, 0x2aaaaaab
// 008547ef  f7e9                 imul ecx
// 008547f1  c1fa02               sar edx, 2
// 008547f4  8bc2                 mov eax, edx
// 008547f6  c1e81f               shr eax, 0x1f
// 008547f9  03c2                 add eax, edx
// 008547fb  89442470             mov dword ptr [esp + 0x70], eax
// 008547ff  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00854802  2bcb                 sub ecx, ebx
// 00854804  81f940010000         cmp ecx, 0x140
// 0085480a  7f1b                 jg 0x854827
// 0085480c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0085480f  83f814               cmp eax, 0x14
// 00854812  7c06                 jl 0x85481a
// 00854814  8d1400               lea edx, [eax + eax]
// 00854817  52                   push edx
// 00854818  eb04                 jmp 0x85481e
// 0085481a  83c014               add eax, 0x14
// 0085481d  50                   push eax
// 0085481e  56                   push esi
// 0085481f  e85cfeffff           call 0x854680
// 00854824  83c408               add esp, 8
// 00854827  8b4608               mov eax, dword ptr [esi + 8]
// 0085482a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0085482d  8d542410             lea edx, [esp + 0x10]
// 00854831  0540010000           add eax, 0x140
// 00854836  52                   push edx
// 00854837  894108               mov dword ptr [ecx + 8], eax
// 0085483a  56                   push esi
// 0085483b  c6463900             mov byte ptr [esi + 0x39], 0
// 0085483f  ff942480000000       call dword ptr [esp + 0x80]
// 00854846  8b4620               mov eax, dword ptr [esi + 0x20]
// 00854849  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0085484c  03c5                 add eax, ebp
// 0085484e  83c408               add esp, 8
// 00854851  c6463901             mov byte ptr [esi + 0x39], 1
// 00854855  894108               mov dword ptr [ecx + 8], eax
// 00854858  8b5620               mov edx, dword ptr [esi + 0x20]
// 0085485b  03d7                 add edx, edi
// 0085485d  5f                   pop edi
// 0085485e  5d                   pop ebp
// 0085485f  895608               mov dword ptr [esi + 8], edx
// 00854862  5b                   pop ebx
// 00854863  5e                   pop esi
// 00854864  83c464               add esp, 0x64
// 00854867  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_callhook)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
