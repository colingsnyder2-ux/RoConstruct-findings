// roc 2008-06 00593f70  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00593f70
//
// 00593f70  6aff                 push -1
// 00593f72  68431f7d00           push 0x7d1f43
// 00593f77  64a100000000         mov eax, dword ptr fs:[0]
// 00593f7d  50                   push eax
// 00593f7e  64892500000000       mov dword ptr fs:[0], esp
// 00593f85  83ec0c               sub esp, 0xc
// 00593f88  56                   push esi
// 00593f89  8bf1                 mov esi, ecx
// 00593f8b  c706c8eb8000         mov dword ptr [esi], 0x80ebc8
// 00593f91  a16c5c9700           mov eax, dword ptr [0x975c6c]
// 00593f96  894604               mov dword ptr [esi + 4], eax
// 00593f99  8b0d705c9700         mov ecx, dword ptr [0x975c70]
// 00593f9f  8bc1                 mov eax, ecx
// 00593fa1  57                   push edi
// 00593fa2  89742408             mov dword ptr [esp + 8], esi
// 00593fa6  894e08               mov dword ptr [esi + 8], ecx
// 00593fa9  85c0                 test eax, eax
// 00593fab  740c                 je 0x593fb9
// 00593fad  83c004               add eax, 4
// 00593fb0  ba01000000           mov edx, 1
// 00593fb5  f00fc110             lock xadd dword ptr [eax], edx
// 00593fb9  8b442424             mov eax, dword ptr [esp + 0x24]
// 00593fbd  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00593fc0  8b7e04               mov edi, dword ptr [esi + 4]
// 00593fc3  894e0c               mov dword ptr [esi + 0xc], ecx
// 00593fc6  8b5018               mov edx, dword ptr [eax + 0x18]
// 00593fc9  8bcf                 mov ecx, edi
// 00593fcb  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00593fd3  895618               mov dword ptr [esi + 0x18], edx
// 00593fd6  897c240c             mov dword ptr [esp + 0xc], edi
// 00593fda  e8010d0000           call 0x594ce0
// 00593fdf  c644241001           mov byte ptr [esp + 0x10], 1
// 00593fe4  8b4618               mov eax, dword ptr [esi + 0x18]
// 00593fe7  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00593fec  85c0                 test eax, eax
// 00593fee  741a                 je 0x59400a
// 00593ff0  50                   push eax
// 00593ff1  e83ae40700           call 0x612430
// 00593ff6  8b4618               mov eax, dword ptr [esi + 0x18]
// 00593ff9  68f0d8ffff           push 0xffffd8f0
// 00593ffe  50                   push eax
// 00593fff  e8bcd00700           call 0x6110c0
// 00594004  83c40c               add esp, 0xc
// 00594007  89461c               mov dword ptr [esi + 0x1c], eax
// 0059400a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059400d  85c0                 test eax, eax
// 0059400f  7421                 je 0x594032
// 00594011  8b00                 mov eax, dword ptr [eax]
// 00594013  85c0                 test eax, eax
// 00594015  7408                 je 0x59401f
// 00594017  894614               mov dword ptr [esi + 0x14], eax
// 0059401a  897010               mov dword ptr [eax + 0x10], esi
// 0059401d  eb07                 jmp 0x594026
// 0059401f  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00594026  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00594029  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00594030  8931                 mov dword ptr [ecx], esi
// 00594032  8bcf                 mov ecx, edi
// 00594034  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00594039  e8c20c0000           call 0x594d00
// 0059403e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00594042  5f                   pop edi
// 00594043  8bc6                 mov eax, esi
// 00594045  5e                   pop esi
// 00594046  64890d00000000       mov dword ptr fs:[0], ecx
// 0059404d  83c418               add esp, 0x18
// 00594050  c20400               ret 4
// library rbxgs/script\ThreadRef.cpp (function ??0ThreadRef@Lua@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
