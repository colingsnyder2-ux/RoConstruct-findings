// roc 2011-06 0077e450  unit: lua_exception  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e450
//
// 0077e450  53                   push ebx
// 0077e451  55                   push ebp
// 0077e452  6a10                 push 0x10
// 0077e454  57                   push edi
// 0077e455  56                   push esi
// 0077e456  e8b58f0500           call 0x7d7410
// 0077e45b  8bef                 mov ebp, edi
// 0077e45d  2b6e20               sub ebp, dword ptr [esi + 0x20]
// 0077e460  8bd8                 mov ebx, eax
// 0077e462  83c40c               add esp, 0xc
// 0077e465  837b0806             cmp dword ptr [ebx + 8], 6
// 0077e469  740f                 je 0x77e47a
// 0077e46b  683478ab00           push 0xab7834
// 0077e470  57                   push edi
// 0077e471  56                   push esi
// 0077e472  e8a9f9ffff           call 0x77de20
// 0077e477  83c40c               add esp, 0xc
// 0077e47a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077e47d  3bcf                 cmp ecx, edi
// 0077e47f  761d                 jbe 0x77e49e
// 0077e481  8d41f0               lea eax, [ecx - 0x10]
// 0077e484  8b10                 mov edx, dword ptr [eax]
// 0077e486  8911                 mov dword ptr [ecx], edx
// 0077e488  8b5004               mov edx, dword ptr [eax + 4]
// 0077e48b  895104               mov dword ptr [ecx + 4], edx
// 0077e48e  8b5008               mov edx, dword ptr [eax + 8]
// 0077e491  895018               mov dword ptr [eax + 0x18], edx
// 0077e494  83e910               sub ecx, 0x10
// 0077e497  83e810               sub eax, 0x10
// 0077e49a  3bcf                 cmp ecx, edi
// 0077e49c  77e6                 ja 0x77e484
// 0077e49e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0077e4a1  2b4608               sub eax, dword ptr [esi + 8]
// 0077e4a4  83f810               cmp eax, 0x10
// 0077e4a7  7f19                 jg 0x77e4c2
// 0077e4a9  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0077e4ac  83f801               cmp eax, 1
// 0077e4af  7c06                 jl 0x77e4b7
// 0077e4b1  8d0c00               lea ecx, [eax + eax]
// 0077e4b4  51                   push ecx
// 0077e4b5  eb02                 jmp 0x77e4b9
// 0077e4b7  40                   inc eax
// 0077e4b8  50                   push eax
// 0077e4b9  56                   push esi
// 0077e4ba  e831fdffff           call 0x77e1f0
// 0077e4bf  83c408               add esp, 8
// 0077e4c2  83460810             add dword ptr [esi + 8], 0x10
// 0077e4c6  8b4620               mov eax, dword ptr [esi + 0x20]
// 0077e4c9  8b13                 mov edx, dword ptr [ebx]
// 0077e4cb  03c5                 add eax, ebp
// 0077e4cd  8910                 mov dword ptr [eax], edx
// 0077e4cf  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0077e4d2  894804               mov dword ptr [eax + 4], ecx
// 0077e4d5  8b5308               mov edx, dword ptr [ebx + 8]
// 0077e4d8  5d                   pop ebp
// 0077e4d9  895008               mov dword ptr [eax + 8], edx
// 0077e4dc  5b                   pop ebx
// 0077e4dd  c3                   ret 
// library lua-5.1.4/ldo.c (function _tryfuncTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
