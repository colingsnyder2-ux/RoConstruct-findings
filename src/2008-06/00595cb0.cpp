// roc 2008-06 00595cb0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595cb0
//
// 00595cb0  6aff                 push -1
// 00595cb2  682b217d00           push 0x7d212b
// 00595cb7  64a100000000         mov eax, dword ptr fs:[0]
// 00595cbd  50                   push eax
// 00595cbe  64892500000000       mov dword ptr fs:[0], esp
// 00595cc5  83ec0c               sub esp, 0xc
// 00595cc8  53                   push ebx
// 00595cc9  56                   push esi
// 00595cca  8bf1                 mov esi, ecx
// 00595ccc  57                   push edi
// 00595ccd  8974240c             mov dword ptr [esp + 0xc], esi
// 00595cd1  8b3e                 mov edi, dword ptr [esi]
// 00595cd3  bb01000000           mov ebx, 1
// 00595cd8  8bcf                 mov ecx, edi
// 00595cda  895c2420             mov dword ptr [esp + 0x20], ebx
// 00595cde  897c2410             mov dword ptr [esp + 0x10], edi
// 00595ce2  e8f9efffff           call 0x594ce0
// 00595ce7  885c2414             mov byte ptr [esp + 0x14], bl
// 00595ceb  8b06                 mov eax, dword ptr [esi]
// 00595ced  885820               mov byte ptr [eax + 0x20], bl
// 00595cf0  8b06                 mov eax, dword ptr [esi]
// 00595cf2  8d4808               lea ecx, [eax + 8]
// 00595cf5  c644242002           mov byte ptr [esp + 0x20], 2
// 00595cfa  e831c00500           call 0x5f1d30
// 00595cff  8bcf                 mov ecx, edi
// 00595d01  885c2420             mov byte ptr [esp + 0x20], bl
// 00595d05  e8f6efffff           call 0x594d00
// 00595d0a  8d4e08               lea ecx, [esi + 8]
// 00595d0d  c644242000           mov byte ptr [esp + 0x20], 0
// 00595d12  e8290b0100           call 0x5a6840
// 00595d17  8b7604               mov esi, dword ptr [esi + 4]
// 00595d1a  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00595d22  85f6                 test esi, esi
// 00595d24  742a                 je 0x595d50
// 00595d26  8d4604               lea eax, [esi + 4]
// 00595d29  83c9ff               or ecx, 0xffffffff
// 00595d2c  f00fc108             lock xadd dword ptr [eax], ecx
// 00595d30  751e                 jne 0x595d50
// 00595d32  8b16                 mov edx, dword ptr [esi]
// 00595d34  8b4204               mov eax, dword ptr [edx + 4]
// 00595d37  8bce                 mov ecx, esi
// 00595d39  ffd0                 call eax
// 00595d3b  8d4e08               lea ecx, [esi + 8]
// 00595d3e  83caff               or edx, 0xffffffff
// 00595d41  f00fc111             lock xadd dword ptr [ecx], edx
// 00595d45  7509                 jne 0x595d50
// 00595d47  8b06                 mov eax, dword ptr [esi]
// 00595d49  8b5008               mov edx, dword ptr [eax + 8]
// 00595d4c  8bce                 mov ecx, esi
// 00595d4e  ffd2                 call edx
// 00595d50  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00595d54  5f                   pop edi
// 00595d55  5e                   pop esi
// 00595d56  5b                   pop ebx
// 00595d57  64890d00000000       mov dword ptr fs:[0], ecx
// 00595d5e  83c418               add esp, 0x18
// 00595d61  c3                   ret 
// library rbxgs/util\boost.cpp (function ??1worker_thread@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
