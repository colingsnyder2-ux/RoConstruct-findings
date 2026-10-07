// roc 2012-06 008548e0  unit: lua_exception  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008548e0
//
// 008548e0  53                   push ebx
// 008548e1  55                   push ebp
// 008548e2  6a10                 push 0x10
// 008548e4  57                   push edi
// 008548e5  56                   push esi
// 008548e6  e835ec0d00           call 0x933520
// 008548eb  8bef                 mov ebp, edi
// 008548ed  2b6e20               sub ebp, dword ptr [esi + 0x20]
// 008548f0  8bd8                 mov ebx, eax
// 008548f2  83c40c               add esp, 0xc
// 008548f5  837b0806             cmp dword ptr [ebx + 8], 6
// 008548f9  740f                 je 0x85490a
// 008548fb  680439bd00           push 0xbd3904
// 00854900  57                   push edi
// 00854901  56                   push esi
// 00854902  e839c8ffff           call 0x851140
// 00854907  83c40c               add esp, 0xc
// 0085490a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0085490d  3bcf                 cmp ecx, edi
// 0085490f  761d                 jbe 0x85492e
// 00854911  8d41f0               lea eax, [ecx - 0x10]
// 00854914  8b10                 mov edx, dword ptr [eax]
// 00854916  8911                 mov dword ptr [ecx], edx
// 00854918  8b5004               mov edx, dword ptr [eax + 4]
// 0085491b  895104               mov dword ptr [ecx + 4], edx
// 0085491e  8b5008               mov edx, dword ptr [eax + 8]
// 00854921  895018               mov dword ptr [eax + 0x18], edx
// 00854924  83e910               sub ecx, 0x10
// 00854927  83e810               sub eax, 0x10
// 0085492a  3bcf                 cmp ecx, edi
// 0085492c  77e6                 ja 0x854914
// 0085492e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00854931  2b4608               sub eax, dword ptr [esi + 8]
// 00854934  83f810               cmp eax, 0x10
// 00854937  7f19                 jg 0x854952
// 00854939  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0085493c  83f801               cmp eax, 1
// 0085493f  7c06                 jl 0x854947
// 00854941  8d0c00               lea ecx, [eax + eax]
// 00854944  51                   push ecx
// 00854945  eb02                 jmp 0x854949
// 00854947  40                   inc eax
// 00854948  50                   push eax
// 00854949  56                   push esi
// 0085494a  e831fdffff           call 0x854680
// 0085494f  83c408               add esp, 8
// 00854952  83460810             add dword ptr [esi + 8], 0x10
// 00854956  8b4620               mov eax, dword ptr [esi + 0x20]
// 00854959  8b13                 mov edx, dword ptr [ebx]
// 0085495b  03c5                 add eax, ebp
// 0085495d  8910                 mov dword ptr [eax], edx
// 0085495f  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00854962  894804               mov dword ptr [eax + 4], ecx
// 00854965  8b5308               mov edx, dword ptr [ebx + 8]
// 00854968  5d                   pop ebp
// 00854969  895008               mov dword ptr [eax + 8], edx
// 0085496c  5b                   pop ebx
// 0085496d  c3                   ret 
// library lua-5.1.4/ldo.c (function _tryfuncTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
