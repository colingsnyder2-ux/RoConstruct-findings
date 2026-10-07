// roc 2009-06 006c2df0  unit: lua_exception  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c2df0
//
// 006c2df0  83ec64               sub esp, 0x64
// 006c2df3  56                   push esi
// 006c2df4  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 006c2df8  8b4644               mov eax, dword ptr [esi + 0x44]
// 006c2dfb  8944246c             mov dword ptr [esp + 0x6c], eax
// 006c2dff  85c0                 test eax, eax
// 006c2e01  0f84bc000000         je 0x6c2ec3
// 006c2e07  807e3900             cmp byte ptr [esi + 0x39], 0
// 006c2e0b  0f84b2000000         je 0x6c2ec3
// 006c2e11  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c2e14  8b4614               mov eax, dword ptr [esi + 0x14]
// 006c2e17  8b542474             mov edx, dword ptr [esp + 0x74]
// 006c2e1b  53                   push ebx
// 006c2e1c  8b5e08               mov ebx, dword ptr [esi + 8]
// 006c2e1f  55                   push ebp
// 006c2e20  8b6808               mov ebp, dword ptr [eax + 8]
// 006c2e23  57                   push edi
// 006c2e24  8bfb                 mov edi, ebx
// 006c2e26  2bf9                 sub edi, ecx
// 006c2e28  2be9                 sub ebp, ecx
// 006c2e2a  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 006c2e2e  894c2410             mov dword ptr [esp + 0x10], ecx
// 006c2e32  89542424             mov dword ptr [esp + 0x24], edx
// 006c2e36  83f904               cmp ecx, 4
// 006c2e39  750a                 jne 0x6c2e45
// 006c2e3b  c744247000000000     mov dword ptr [esp + 0x70], 0
// 006c2e43  eb1a                 jmp 0x6c2e5f
// 006c2e45  2b4628               sub eax, dword ptr [esi + 0x28]
// 006c2e48  8bc8                 mov ecx, eax
// 006c2e4a  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006c2e4f  f7e9                 imul ecx
// 006c2e51  c1fa02               sar edx, 2
// 006c2e54  8bc2                 mov eax, edx
// 006c2e56  c1e81f               shr eax, 0x1f
// 006c2e59  03c2                 add eax, edx
// 006c2e5b  89442470             mov dword ptr [esp + 0x70], eax
// 006c2e5f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006c2e62  2bcb                 sub ecx, ebx
// 006c2e64  81f940010000         cmp ecx, 0x140
// 006c2e6a  7f1b                 jg 0x6c2e87
// 006c2e6c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006c2e6f  83f814               cmp eax, 0x14
// 006c2e72  7c06                 jl 0x6c2e7a
// 006c2e74  8d1400               lea edx, [eax + eax]
// 006c2e77  52                   push edx
// 006c2e78  eb04                 jmp 0x6c2e7e
// 006c2e7a  83c014               add eax, 0x14
// 006c2e7d  50                   push eax
// 006c2e7e  56                   push esi
// 006c2e7f  e85cfeffff           call 0x6c2ce0
// 006c2e84  83c408               add esp, 8
// 006c2e87  8b4608               mov eax, dword ptr [esi + 8]
// 006c2e8a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006c2e8d  8d542410             lea edx, [esp + 0x10]
// 006c2e91  0540010000           add eax, 0x140
// 006c2e96  52                   push edx
// 006c2e97  894108               mov dword ptr [ecx + 8], eax
// 006c2e9a  56                   push esi
// 006c2e9b  c6463900             mov byte ptr [esi + 0x39], 0
// 006c2e9f  ff942480000000       call dword ptr [esp + 0x80]
// 006c2ea6  8b4620               mov eax, dword ptr [esi + 0x20]
// 006c2ea9  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006c2eac  03c5                 add eax, ebp
// 006c2eae  83c408               add esp, 8
// 006c2eb1  c6463901             mov byte ptr [esi + 0x39], 1
// 006c2eb5  894108               mov dword ptr [ecx + 8], eax
// 006c2eb8  8b5620               mov edx, dword ptr [esi + 0x20]
// 006c2ebb  03d7                 add edx, edi
// 006c2ebd  5f                   pop edi
// 006c2ebe  5d                   pop ebp
// 006c2ebf  895608               mov dword ptr [esi + 8], edx
// 006c2ec2  5b                   pop ebx
// 006c2ec3  5e                   pop esi
// 006c2ec4  83c464               add esp, 0x64
// 006c2ec7  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_callhook)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
