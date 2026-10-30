// roc 2007-08 0054fba0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054fba0
//
// 0054fba0  64a100000000         mov eax, dword ptr fs:[0]
// 0054fba6  6aff                 push -1
// 0054fba8  68c8287500           push 0x7528c8
// 0054fbad  50                   push eax
// 0054fbae  64892500000000       mov dword ptr fs:[0], esp
// 0054fbb5  83ec48               sub esp, 0x48
// 0054fbb8  56                   push esi
// 0054fbb9  57                   push edi
// 0054fbba  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 0054fbbe  83ffff               cmp edi, -1
// 0054fbc1  8bf1                 mov esi, ecx
// 0054fbc3  7507                 jne 0x54fbcc
// 0054fbc5  bf80000000           mov edi, 0x80
// 0054fbca  eb04                 jmp 0x54fbd0
// 0054fbcc  85ff                 test edi, edi
// 0054fbce  740c                 je 0x54fbdc
// 0054fbd0  57                   push edi
// 0054fbd1  8d8e90000000         lea ecx, [esi + 0x90]
// 0054fbd7  e8d4b2ffff           call 0x54aeb0
// 0054fbdc  8b06                 mov eax, dword ptr [esi]
// 0054fbde  8b5058               mov edx, dword ptr [eax + 0x58]
// 0054fbe1  8bce                 mov ecx, esi
// 0054fbe3  ffd2                 call edx
// 0054fbe5  8b442460             mov eax, dword ptr [esp + 0x60]
// 0054fbe9  50                   push eax
// 0054fbea  8d4c240c             lea ecx, [esp + 0xc]
// 0054fbee  e8bdd6ffff           call 0x54d2b0
// 0054fbf3  8d4c2408             lea ecx, [esp + 8]
// 0054fbf7  51                   push ecx
// 0054fbf8  8d4e40               lea ecx, [esi + 0x40]
// 0054fbfb  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0054fc03  e828ebffff           call 0x54e730
// 0054fc08  8d4c2408             lea ecx, [esp + 8]
// 0054fc0c  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0054fc14  e847bdffff           call 0x54b960
// 0054fc19  838e9c00000001       or dword ptr [esi + 0x9c], 1
// 0054fc20  83ff01               cmp edi, 1
// 0054fc23  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0054fc29  c6463c00             mov byte ptr [esi + 0x3c], 0
// 0054fc2d  7e09                 jle 0x54fc38
// 0054fc2f  83c808               or eax, 8
// 0054fc32  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0054fc38  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0054fc3c  5f                   pop edi
// 0054fc3d  5e                   pop esi
// 0054fc3e  64890d00000000       mov dword ptr fs:[0], ecx
// 0054fc45  83c454               add esp, 0x54
// 0054fc48  c20c00               ret 0xc
// copied from an identical function in another client (function ?open@?$indirect_streambuf@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@QAEXABV?$basic_gzip_compressor@V?$allocator@D@std@@@34@HH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp