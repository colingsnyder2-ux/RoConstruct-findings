// roc 2009-12 00726050  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00726050
//
// 00726050  6aff                 push -1
// 00726052  6801759200           push 0x927501
// 00726057  64a100000000         mov eax, dword ptr fs:[0]
// 0072605d  50                   push eax
// 0072605e  64892500000000       mov dword ptr fs:[0], esp
// 00726065  83ec20               sub esp, 0x20
// 00726068  56                   push esi
// 00726069  8bf1                 mov esi, ecx
// 0072606b  68dcff9d00           push 0x9dffdc
// 00726070  8d4c240c             lea ecx, [esp + 0xc]
// 00726074  89742408             mov dword ptr [esp + 8], esi
// 00726078  ff15f4b69800         call dword ptr [0x98b6f4]
// 0072607e  8d442408             lea eax, [esp + 8]
// 00726082  50                   push eax
// 00726083  8bce                 mov ecx, esi
// 00726085  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0072608d  e8fe32ceff           call 0x409390
// 00726092  c7061cfd9d00         mov dword ptr [esi], 0x9dfd1c
// 00726098  8d4c2408             lea ecx, [esp + 8]
// 0072609c  c644242c02           mov byte ptr [esp + 0x2c], 2
// 007260a1  ff15e4b69800         call dword ptr [0x98b6e4]
// 007260a7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007260ab  894e28               mov dword ptr [esi + 0x28], ecx
// 007260ae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007260b2  c706d4ff9d00         mov dword ptr [esi], 0x9dffd4
// 007260b8  8b1550fc9e00         mov edx, dword ptr [0x9efc50]
// 007260be  89562c               mov dword ptr [esi + 0x2c], edx
// 007260c1  8bc6                 mov eax, esi
// 007260c3  5e                   pop esi
// 007260c4  64890d00000000       mov dword ptr fs:[0], ecx
// 007260cb  83c42c               add esp, 0x2c
// 007260ce  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp