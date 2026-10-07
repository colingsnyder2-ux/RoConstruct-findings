// roc 2008-06 00621cd0  unit: lua_exception  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00621cd0
//
// 00621cd0  53                   push ebx
// 00621cd1  55                   push ebp
// 00621cd2  6a10                 push 0x10
// 00621cd4  57                   push edi
// 00621cd5  56                   push esi
// 00621cd6  e825a90300           call 0x65c600
// 00621cdb  8bef                 mov ebp, edi
// 00621cdd  2b6e20               sub ebp, dword ptr [esi + 0x20]
// 00621ce0  8bd8                 mov ebx, eax
// 00621ce2  83c40c               add esp, 0xc
// 00621ce5  837b0806             cmp dword ptr [ebx + 8], 6
// 00621ce9  740f                 je 0x621cfa
// 00621ceb  68d4478400           push 0x8447d4
// 00621cf0  57                   push edi
// 00621cf1  56                   push esi
// 00621cf2  e8091d0000           call 0x623a00
// 00621cf7  83c40c               add esp, 0xc
// 00621cfa  8b4e08               mov ecx, dword ptr [esi + 8]
// 00621cfd  3bcf                 cmp ecx, edi
// 00621cff  761d                 jbe 0x621d1e
// 00621d01  8d41f0               lea eax, [ecx - 0x10]
// 00621d04  8b10                 mov edx, dword ptr [eax]
// 00621d06  8911                 mov dword ptr [ecx], edx
// 00621d08  8b5004               mov edx, dword ptr [eax + 4]
// 00621d0b  895104               mov dword ptr [ecx + 4], edx
// 00621d0e  8b5008               mov edx, dword ptr [eax + 8]
// 00621d11  895018               mov dword ptr [eax + 0x18], edx
// 00621d14  83e910               sub ecx, 0x10
// 00621d17  83e810               sub eax, 0x10
// 00621d1a  3bcf                 cmp ecx, edi
// 00621d1c  77e6                 ja 0x621d04
// 00621d1e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00621d21  2b4608               sub eax, dword ptr [esi + 8]
// 00621d24  83f810               cmp eax, 0x10
// 00621d27  7f19                 jg 0x621d42
// 00621d29  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00621d2c  83f801               cmp eax, 1
// 00621d2f  7c06                 jl 0x621d37
// 00621d31  8d0c00               lea ecx, [eax + eax]
// 00621d34  51                   push ecx
// 00621d35  eb02                 jmp 0x621d39
// 00621d37  40                   inc eax
// 00621d38  50                   push eax
// 00621d39  56                   push esi
// 00621d3a  e831fdffff           call 0x621a70
// 00621d3f  83c408               add esp, 8
// 00621d42  83460810             add dword ptr [esi + 8], 0x10
// 00621d46  8b4620               mov eax, dword ptr [esi + 0x20]
// 00621d49  8b13                 mov edx, dword ptr [ebx]
// 00621d4b  03c5                 add eax, ebp
// 00621d4d  8910                 mov dword ptr [eax], edx
// 00621d4f  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00621d52  894804               mov dword ptr [eax + 4], ecx
// 00621d55  8b5308               mov edx, dword ptr [ebx + 8]
// 00621d58  5d                   pop ebp
// 00621d59  895008               mov dword ptr [eax + 8], edx
// 00621d5c  5b                   pop ebx
// 00621d5d  c3                   ret 
// library lua-5.1.4/ldo.c (function _tryfuncTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
