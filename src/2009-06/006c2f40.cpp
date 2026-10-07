// roc 2009-06 006c2f40  unit: lua_exception  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c2f40
//
// 006c2f40  53                   push ebx
// 006c2f41  55                   push ebp
// 006c2f42  6a10                 push 0x10
// 006c2f44  57                   push edi
// 006c2f45  56                   push esi
// 006c2f46  e8e56e0200           call 0x6e9e30
// 006c2f4b  8bef                 mov ebp, edi
// 006c2f4d  2b6e20               sub ebp, dword ptr [esi + 0x20]
// 006c2f50  8bd8                 mov ebx, eax
// 006c2f52  83c40c               add esp, 0xc
// 006c2f55  837b0806             cmp dword ptr [ebx + 8], 6
// 006c2f59  740f                 je 0x6c2f6a
// 006c2f5b  68b4b68e00           push 0x8eb6b4
// 006c2f60  57                   push edi
// 006c2f61  56                   push esi
// 006c2f62  e8095b0000           call 0x6c8a70
// 006c2f67  83c40c               add esp, 0xc
// 006c2f6a  8b4e08               mov ecx, dword ptr [esi + 8]
// 006c2f6d  3bcf                 cmp ecx, edi
// 006c2f6f  761d                 jbe 0x6c2f8e
// 006c2f71  8d41f0               lea eax, [ecx - 0x10]
// 006c2f74  8b10                 mov edx, dword ptr [eax]
// 006c2f76  8911                 mov dword ptr [ecx], edx
// 006c2f78  8b5004               mov edx, dword ptr [eax + 4]
// 006c2f7b  895104               mov dword ptr [ecx + 4], edx
// 006c2f7e  8b5008               mov edx, dword ptr [eax + 8]
// 006c2f81  895018               mov dword ptr [eax + 0x18], edx
// 006c2f84  83e910               sub ecx, 0x10
// 006c2f87  83e810               sub eax, 0x10
// 006c2f8a  3bcf                 cmp ecx, edi
// 006c2f8c  77e6                 ja 0x6c2f74
// 006c2f8e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006c2f91  2b4608               sub eax, dword ptr [esi + 8]
// 006c2f94  83f810               cmp eax, 0x10
// 006c2f97  7f19                 jg 0x6c2fb2
// 006c2f99  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006c2f9c  83f801               cmp eax, 1
// 006c2f9f  7c06                 jl 0x6c2fa7
// 006c2fa1  8d0c00               lea ecx, [eax + eax]
// 006c2fa4  51                   push ecx
// 006c2fa5  eb02                 jmp 0x6c2fa9
// 006c2fa7  40                   inc eax
// 006c2fa8  50                   push eax
// 006c2fa9  56                   push esi
// 006c2faa  e831fdffff           call 0x6c2ce0
// 006c2faf  83c408               add esp, 8
// 006c2fb2  83460810             add dword ptr [esi + 8], 0x10
// 006c2fb6  8b4620               mov eax, dword ptr [esi + 0x20]
// 006c2fb9  8b13                 mov edx, dword ptr [ebx]
// 006c2fbb  03c5                 add eax, ebp
// 006c2fbd  8910                 mov dword ptr [eax], edx
// 006c2fbf  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006c2fc2  894804               mov dword ptr [eax + 4], ecx
// 006c2fc5  8b5308               mov edx, dword ptr [ebx + 8]
// 006c2fc8  5d                   pop ebp
// 006c2fc9  895008               mov dword ptr [eax + 8], edx
// 006c2fcc  5b                   pop ebx
// 006c2fcd  c3                   ret 
// library lua-5.1.4/ldo.c (function _tryfuncTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
