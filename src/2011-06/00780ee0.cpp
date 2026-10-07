// roc 2011-06 00780ee0  unit: lua_exception  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00780ee0
//
// 00780ee0  83c0cf               add eax, -0x31
// 00780ee3  55                   push ebp
// 00780ee4  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00780ee8  56                   push esi
// 00780ee9  57                   push edi
// 00780eea  8bf1                 mov esi, ecx
// 00780eec  780c                 js 0x780efa
// 00780eee  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00780ef1  7d07                 jge 0x780efa
// 00780ef3  837cc614ff           cmp dword ptr [esi + eax*8 + 0x14], -1
// 00780ef8  7511                 jne 0x780f0b
// 00780efa  8b4608               mov eax, dword ptr [esi + 8]
// 00780efd  68187dab00           push 0xab7d18
// 00780f02  50                   push eax
// 00780f03  e80828feff           call 0x763710
// 00780f08  83c408               add esp, 8
// 00780f0b  8b4e04               mov ecx, dword ptr [esi + 4]
// 00780f0e  8b7cc614             mov edi, dword ptr [esi + eax*8 + 0x14]
// 00780f12  2bcd                 sub ecx, ebp
// 00780f14  3bcf                 cmp ecx, edi
// 00780f16  724c                 jb 0x780f64
// 00780f18  8b74c610             mov esi, dword ptr [esi + eax*8 + 0x10]
// 00780f1c  8bcf                 mov ecx, edi
// 00780f1e  8bd5                 mov edx, ebp
// 00780f20  83ff04               cmp edi, 4
// 00780f23  7214                 jb 0x780f39
// 00780f25  8b06                 mov eax, dword ptr [esi]
// 00780f27  3b02                 cmp eax, dword ptr [edx]
// 00780f29  7539                 jne 0x780f64
// 00780f2b  83e904               sub ecx, 4
// 00780f2e  83c204               add edx, 4
// 00780f31  83c604               add esi, 4
// 00780f34  83f904               cmp ecx, 4
// 00780f37  73ec                 jae 0x780f25
// 00780f39  85c9                 test ecx, ecx
// 00780f3b  7420                 je 0x780f5d
// 00780f3d  8a02                 mov al, byte ptr [edx]
// 00780f3f  3a06                 cmp al, byte ptr [esi]
// 00780f41  7521                 jne 0x780f64
// 00780f43  83f901               cmp ecx, 1
// 00780f46  7615                 jbe 0x780f5d
// 00780f48  8a4201               mov al, byte ptr [edx + 1]
// 00780f4b  3a4601               cmp al, byte ptr [esi + 1]
// 00780f4e  7514                 jne 0x780f64
// 00780f50  83f902               cmp ecx, 2
// 00780f53  7608                 jbe 0x780f5d
// 00780f55  8a4a02               mov cl, byte ptr [edx + 2]
// 00780f58  3a4e02               cmp cl, byte ptr [esi + 2]
// 00780f5b  7507                 jne 0x780f64
// 00780f5d  8d042f               lea eax, [edi + ebp]
// 00780f60  5f                   pop edi
// 00780f61  5e                   pop esi
// 00780f62  5d                   pop ebp
// 00780f63  c3                   ret 
// 00780f64  5f                   pop edi
// 00780f65  5e                   pop esi
// 00780f66  33c0                 xor eax, eax
// 00780f68  5d                   pop ebp
// 00780f69  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _match_capture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
