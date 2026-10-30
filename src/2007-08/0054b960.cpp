// roc 2007-08 0054b960  unit: UString_sink::?$stream_buffer  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b960
//
// 0054b960  6aff                 push -1
// 0054b962  68b4247500           push 0x7524b4
// 0054b967  64a100000000         mov eax, dword ptr fs:[0]
// 0054b96d  50                   push eax
// 0054b96e  64892500000000       mov dword ptr fs:[0], esp
// 0054b975  51                   push ecx
// 0054b976  56                   push esi
// 0054b977  8bf1                 mov esi, ecx
// 0054b979  89742404             mov dword ptr [esp + 4], esi
// 0054b97d  8d4e24               lea ecx, [esi + 0x24]
// 0054b980  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0054b988  ff15ace67700         call dword ptr [0x77e6ac]
// 0054b98e  8d4e08               lea ecx, [esi + 8]
// 0054b991  c644241000           mov byte ptr [esp + 0x10], 0
// 0054b996  ff15ace67700         call dword ptr [0x77e6ac]
// 0054b99c  8b7604               mov esi, dword ptr [esi + 4]
// 0054b99f  85f6                 test esi, esi
// 0054b9a1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0054b9a9  742a                 je 0x54b9d5
// 0054b9ab  8d4604               lea eax, [esi + 4]
// 0054b9ae  83c9ff               or ecx, 0xffffffff
// 0054b9b1  f00fc108             lock xadd dword ptr [eax], ecx
// 0054b9b5  751e                 jne 0x54b9d5
// 0054b9b7  8b16                 mov edx, dword ptr [esi]
// 0054b9b9  8b4204               mov eax, dword ptr [edx + 4]
// 0054b9bc  8bce                 mov ecx, esi
// 0054b9be  ffd0                 call eax
// 0054b9c0  8d4e08               lea ecx, [esi + 8]
// 0054b9c3  83caff               or edx, 0xffffffff
// 0054b9c6  f00fc111             lock xadd dword ptr [ecx], edx
// 0054b9ca  7509                 jne 0x54b9d5
// 0054b9cc  8b06                 mov eax, dword ptr [esi]
// 0054b9ce  8b5008               mov edx, dword ptr [eax + 8]
// 0054b9d1  8bce                 mov ecx, esi
// 0054b9d3  ffd2                 call edx
// 0054b9d5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054b9d9  5e                   pop esi
// 0054b9da  64890d00000000       mov dword ptr fs:[0], ecx
// 0054b9e1  83c410               add esp, 0x10
// 0054b9e4  c3                   ret 
// copied from an identical function in another client (function ??1?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp