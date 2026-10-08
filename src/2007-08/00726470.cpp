// from server: 100% by auto
// roc 2007-08 00726470  unit: boost::thread_resource_error  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00726470
//
// 00726470  83ec14               sub esp, 0x14
// 00726473  53                   push ebx
// 00726474  8b1d20d27700         mov ebx, dword ptr [0x77d220]
// 0072647a  55                   push ebp
// 0072647b  56                   push esi
// 0072647c  8b742424             mov esi, dword ptr [esp + 0x24]
// 00726480  57                   push edi
// 00726481  33ed                 xor ebp, ebp
// 00726483  8b0e                 mov ecx, dword ptr [esi]
// 00726485  8b5604               mov edx, dword ptr [esi + 4]
// 00726488  8d442410             lea eax, [esp + 0x10]
// 0072648c  50                   push eax
// 0072648d  83ec10               sub esp, 0x10
// 00726490  8bc4                 mov eax, esp
// 00726492  8908                 mov dword ptr [eax], ecx
// 00726494  8b4e08               mov ecx, dword ptr [esi + 8]
// 00726497  895004               mov dword ptr [eax + 4], edx
// 0072649a  8b560c               mov edx, dword ptr [esi + 0xc]
// 0072649d  894808               mov dword ptr [eax + 8], ecx
// 007264a0  89500c               mov dword ptr [eax + 0xc], edx
// 007264a3  e838feffff           call 0x7262e0
// 007264a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 007264ac  83c414               add esp, 0x14
// 007264af  50                   push eax
// 007264b0  ffd3                 call ebx
// 007264b2  8d4c2414             lea ecx, [esp + 0x14]
// 007264b6  6a01                 push 1
// 007264b8  51                   push ecx
// 007264b9  e8c2020000           call 0x726780
// 007264be  8b06                 mov eax, dword ptr [esi]
// 007264c0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007264c4  8b4e04               mov ecx, dword ptr [esi + 4]
// 007264c7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007264cb  83c408               add esp, 8
// 007264ce  3bc2                 cmp eax, edx
// 007264d0  751f                 jne 0x7264f1
// 007264d2  3bcf                 cmp ecx, edi
// 007264d4  751d                 jne 0x7264f3
// 007264d6  8b4608               mov eax, dword ptr [esi + 8]
// 007264d9  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 007264dd  85c0                 test eax, eax
// 007264df  7e08                 jle 0x7264e9
// 007264e1  83c501               add ebp, 1
// 007264e4  83fd05               cmp ebp, 5
// 007264e7  7c9a                 jl 0x726483
// 007264e9  5f                   pop edi
// 007264ea  5e                   pop esi
// 007264eb  5d                   pop ebp
// 007264ec  5b                   pop ebx
// 007264ed  83c414               add esp, 0x14
// 007264f0  c3                   ret 
// 007264f1  3bcf                 cmp ecx, edi
// 007264f3  7cf4                 jl 0x7264e9
// 007264f5  7fea                 jg 0x7264e1
// 007264f7  3bc2                 cmp eax, edx
// 007264f9  76ee                 jbe 0x7264e9
// 007264fb  ebe4                 jmp 0x7264e1
// library boost-1.34.1/libs\thread\src\thread.cpp (function ?sleep@thread@boost@@SAXABUxtime@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/thread.cpp
