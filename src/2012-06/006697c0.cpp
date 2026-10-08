// from server: 100% by auto
// roc 2012-06 006697c0  unit: seg_00660000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006697c0
//
// 006697c0  53                   push ebx
// 006697c1  56                   push esi
// 006697c2  57                   push edi
// 006697c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006697c7  8b4704               mov eax, dword ptr [edi + 4]
// 006697ca  8b08                 mov ecx, dword ptr [eax]
// 006697cc  6a30                 push 0x30
// 006697ce  6a01                 push 1
// 006697d0  57                   push edi
// 006697d1  ffd1                 call ecx
// 006697d3  8bf0                 mov esi, eax
// 006697d5  89b758010000         mov dword ptr [edi + 0x158], esi
// 006697db  c706908b6600         mov dword ptr [esi], 0x668b90
// 006697e1  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 006697e7  33db                 xor ebx, ebx
// 006697e9  83c40c               add esp, 0xc
// 006697ec  2bc3                 sub eax, ebx
// 006697ee  7438                 je 0x669828
// 006697f0  83e801               sub eax, 1
// 006697f3  742a                 je 0x66981f
// 006697f5  83e801               sub eax, 1
// 006697f8  7415                 je 0x66980f
// 006697fa  8b17                 mov edx, dword ptr [edi]
// 006697fc  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 00669803  8b07                 mov eax, dword ptr [edi]
// 00669805  8b08                 mov ecx, dword ptr [eax]
// 00669807  57                   push edi
// 00669808  ffd1                 call ecx
// 0066980a  83c404               add esp, 4
// 0066980d  eb27                 jmp 0x669836
// 0066980f  c74604f0916600       mov dword ptr [esi + 4], 0x6691f0
// 00669816  c7461c80d96600       mov dword ptr [esi + 0x1c], 0x66d980
// 0066981d  eb17                 jmp 0x669836
// 0066981f  c74608b0d26600       mov dword ptr [esi + 8], 0x66d2b0
// 00669826  eb07                 jmp 0x66982f
// 00669828  c7460890cf6600       mov dword ptr [esi + 8], 0x66cf90
// 0066982f  c74604708e6600       mov dword ptr [esi + 4], 0x668e70
// 00669836  5f                   pop edi
// 00669837  895e0c               mov dword ptr [esi + 0xc], ebx
// 0066983a  895e20               mov dword ptr [esi + 0x20], ebx
// 0066983d  895e10               mov dword ptr [esi + 0x10], ebx
// 00669840  895e24               mov dword ptr [esi + 0x24], ebx
// 00669843  895e14               mov dword ptr [esi + 0x14], ebx
// 00669846  895e28               mov dword ptr [esi + 0x28], ebx
// 00669849  895e18               mov dword ptr [esi + 0x18], ebx
// 0066984c  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0066984f  5e                   pop esi
// 00669850  5b                   pop ebx
// 00669851  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _jinit_forward_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
