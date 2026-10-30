// from server: 100% by auto
// roc 2010-06 0072fbc0  unit: lua_exception  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072fbc0
//
// 0072fbc0  83ec64               sub esp, 0x64
// 0072fbc3  56                   push esi
// 0072fbc4  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0072fbc8  8b4644               mov eax, dword ptr [esi + 0x44]
// 0072fbcb  8944246c             mov dword ptr [esp + 0x6c], eax
// 0072fbcf  85c0                 test eax, eax
// 0072fbd1  0f84bc000000         je 0x72fc93
// 0072fbd7  807e3900             cmp byte ptr [esi + 0x39], 0
// 0072fbdb  0f84b2000000         je 0x72fc93
// 0072fbe1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0072fbe4  8b4614               mov eax, dword ptr [esi + 0x14]
// 0072fbe7  8b542474             mov edx, dword ptr [esp + 0x74]
// 0072fbeb  53                   push ebx
// 0072fbec  8b5e08               mov ebx, dword ptr [esi + 8]
// 0072fbef  55                   push ebp
// 0072fbf0  8b6808               mov ebp, dword ptr [eax + 8]
// 0072fbf3  57                   push edi
// 0072fbf4  8bfb                 mov edi, ebx
// 0072fbf6  2bf9                 sub edi, ecx
// 0072fbf8  2be9                 sub ebp, ecx
// 0072fbfa  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0072fbfe  894c2410             mov dword ptr [esp + 0x10], ecx
// 0072fc02  89542424             mov dword ptr [esp + 0x24], edx
// 0072fc06  83f904               cmp ecx, 4
// 0072fc09  750a                 jne 0x72fc15
// 0072fc0b  c744247000000000     mov dword ptr [esp + 0x70], 0
// 0072fc13  eb1a                 jmp 0x72fc2f
// 0072fc15  2b4628               sub eax, dword ptr [esi + 0x28]
// 0072fc18  8bc8                 mov ecx, eax
// 0072fc1a  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0072fc1f  f7e9                 imul ecx
// 0072fc21  c1fa02               sar edx, 2
// 0072fc24  8bc2                 mov eax, edx
// 0072fc26  c1e81f               shr eax, 0x1f
// 0072fc29  03c2                 add eax, edx
// 0072fc2b  89442470             mov dword ptr [esp + 0x70], eax
// 0072fc2f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0072fc32  2bcb                 sub ecx, ebx
// 0072fc34  81f940010000         cmp ecx, 0x140
// 0072fc3a  7f1b                 jg 0x72fc57
// 0072fc3c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0072fc3f  83f814               cmp eax, 0x14
// 0072fc42  7c06                 jl 0x72fc4a
// 0072fc44  8d1400               lea edx, [eax + eax]
// 0072fc47  52                   push edx
// 0072fc48  eb04                 jmp 0x72fc4e
// 0072fc4a  83c014               add eax, 0x14
// 0072fc4d  50                   push eax
// 0072fc4e  56                   push esi
// 0072fc4f  e85cfeffff           call 0x72fab0
// 0072fc54  83c408               add esp, 8
// 0072fc57  8b4608               mov eax, dword ptr [esi + 8]
// 0072fc5a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0072fc5d  8d542410             lea edx, [esp + 0x10]
// 0072fc61  0540010000           add eax, 0x140
// 0072fc66  52                   push edx
// 0072fc67  894108               mov dword ptr [ecx + 8], eax
// 0072fc6a  56                   push esi
// 0072fc6b  c6463900             mov byte ptr [esi + 0x39], 0
// 0072fc6f  ff942480000000       call dword ptr [esp + 0x80]
// 0072fc76  8b4620               mov eax, dword ptr [esi + 0x20]
// 0072fc79  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0072fc7c  03c5                 add eax, ebp
// 0072fc7e  83c408               add esp, 8
// 0072fc81  c6463901             mov byte ptr [esi + 0x39], 1
// 0072fc85  894108               mov dword ptr [ecx + 8], eax
// 0072fc88  8b5620               mov edx, dword ptr [esi + 0x20]
// 0072fc8b  03d7                 add edx, edi
// 0072fc8d  5f                   pop edi
// 0072fc8e  5d                   pop ebp
// 0072fc8f  895608               mov dword ptr [esi + 8], edx
// 0072fc92  5b                   pop ebx
// 0072fc93  5e                   pop esi
// 0072fc94  83c464               add esp, 0x64
// 0072fc97  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_callhook)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
