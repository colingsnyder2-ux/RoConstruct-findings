// from server: 100% by auto
// roc 2010-06 0072fd10  unit: lua_exception  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072fd10
//
// 0072fd10  53                   push ebx
// 0072fd11  55                   push ebp
// 0072fd12  6a10                 push 0x10
// 0072fd14  57                   push edi
// 0072fd15  56                   push esi
// 0072fd16  e8b5b30400           call 0x77b0d0
// 0072fd1b  8bef                 mov ebp, edi
// 0072fd1d  2b6e20               sub ebp, dword ptr [esi + 0x20]
// 0072fd20  8bd8                 mov ebx, eax
// 0072fd22  83c40c               add esp, 0xc
// 0072fd25  837b0806             cmp dword ptr [ebx + 8], 6
// 0072fd29  740f                 je 0x72fd3a
// 0072fd2b  68e8dba400           push 0xa4dbe8
// 0072fd30  57                   push edi
// 0072fd31  56                   push esi
// 0072fd32  e899400000           call 0x733dd0
// 0072fd37  83c40c               add esp, 0xc
// 0072fd3a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0072fd3d  3bcf                 cmp ecx, edi
// 0072fd3f  761d                 jbe 0x72fd5e
// 0072fd41  8d41f0               lea eax, [ecx - 0x10]
// 0072fd44  8b10                 mov edx, dword ptr [eax]
// 0072fd46  8911                 mov dword ptr [ecx], edx
// 0072fd48  8b5004               mov edx, dword ptr [eax + 4]
// 0072fd4b  895104               mov dword ptr [ecx + 4], edx
// 0072fd4e  8b5008               mov edx, dword ptr [eax + 8]
// 0072fd51  895018               mov dword ptr [eax + 0x18], edx
// 0072fd54  83e910               sub ecx, 0x10
// 0072fd57  83e810               sub eax, 0x10
// 0072fd5a  3bcf                 cmp ecx, edi
// 0072fd5c  77e6                 ja 0x72fd44
// 0072fd5e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0072fd61  2b4608               sub eax, dword ptr [esi + 8]
// 0072fd64  83f810               cmp eax, 0x10
// 0072fd67  7f19                 jg 0x72fd82
// 0072fd69  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0072fd6c  83f801               cmp eax, 1
// 0072fd6f  7c06                 jl 0x72fd77
// 0072fd71  8d0c00               lea ecx, [eax + eax]
// 0072fd74  51                   push ecx
// 0072fd75  eb02                 jmp 0x72fd79
// 0072fd77  40                   inc eax
// 0072fd78  50                   push eax
// 0072fd79  56                   push esi
// 0072fd7a  e831fdffff           call 0x72fab0
// 0072fd7f  83c408               add esp, 8
// 0072fd82  83460810             add dword ptr [esi + 8], 0x10
// 0072fd86  8b4620               mov eax, dword ptr [esi + 0x20]
// 0072fd89  8b13                 mov edx, dword ptr [ebx]
// 0072fd8b  03c5                 add eax, ebp
// 0072fd8d  8910                 mov dword ptr [eax], edx
// 0072fd8f  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0072fd92  894804               mov dword ptr [eax + 4], ecx
// 0072fd95  8b5308               mov edx, dword ptr [ebx + 8]
// 0072fd98  5d                   pop ebp
// 0072fd99  895008               mov dword ptr [eax + 8], edx
// 0072fd9c  5b                   pop ebx
// 0072fd9d  c3                   ret 
// library lua-5.1.4/ldo.c (function _tryfuncTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
