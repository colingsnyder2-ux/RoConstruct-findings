// roc 2011-06 0050cc80  unit: RBX::Network::ServerReplicator  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050cc80
//
// 0050cc80  6aff                 push -1
// 0050cc82  6818d39d00           push 0x9dd318
// 0050cc87  64a100000000         mov eax, dword ptr fs:[0]
// 0050cc8d  50                   push eax
// 0050cc8e  64892500000000       mov dword ptr fs:[0], esp
// 0050cc95  51                   push ecx
// 0050cc96  53                   push ebx
// 0050cc97  56                   push esi
// 0050cc98  8bf1                 mov esi, ecx
// 0050cc9a  57                   push edi
// 0050cc9b  8974240c             mov dword ptr [esp + 0xc], esi
// 0050cc9f  33db                 xor ebx, ebx
// 0050cca1  33ff                 xor edi, edi
// 0050cca3  895c2418             mov dword ptr [esp + 0x18], ebx
// 0050cca7  395e04               cmp dword ptr [esi + 4], ebx
// 0050ccaa  7625                 jbe 0x50ccd1
// 0050ccac  55                   push ebp
// 0050ccad  8d4900               lea ecx, [ecx]
// 0050ccb0  8b06                 mov eax, dword ptr [esi]
// 0050ccb2  8b6cf804             mov ebp, dword ptr [eax + edi*8 + 4]
// 0050ccb6  3beb                 cmp ebp, ebx
// 0050ccb8  7410                 je 0x50ccca
// 0050ccba  8bcd                 mov ecx, ebp
// 0050ccbc  e80f220100           call 0x51eed0
// 0050ccc1  55                   push ebp
// 0050ccc2  e891d32f00           call 0x80a058
// 0050ccc7  83c404               add esp, 4
// 0050ccca  47                   inc edi
// 0050cccb  3b7e04               cmp edi, dword ptr [esi + 4]
// 0050ccce  72e0                 jb 0x50ccb0
// 0050ccd0  5d                   pop ebp
// 0050ccd1  885e14               mov byte ptr [esi + 0x14], bl
// 0050ccd4  395e08               cmp dword ptr [esi + 8], ebx
// 0050ccd7  7439                 je 0x50cd12
// 0050ccd9  8b0e                 mov ecx, dword ptr [esi]
// 0050ccdb  51                   push ecx
// 0050ccdc  e823d62f00           call 0x80a304
// 0050cce1  83c404               add esp, 4
// 0050cce4  895e08               mov dword ptr [esi + 8], ebx
// 0050cce7  891e                 mov dword ptr [esi], ebx
// 0050cce9  895e04               mov dword ptr [esi + 4], ebx
// 0050ccec  3bdb                 cmp ebx, ebx
// 0050ccee  7422                 je 0x50cd12
// 0050ccf0  8bd3                 mov edx, ebx
// 0050ccf2  52                   push edx
// 0050ccf3  e80cd62f00           call 0x80a304
// 0050ccf8  83c404               add esp, 4
// 0050ccfb  895e08               mov dword ptr [esi + 8], ebx
// 0050ccfe  891e                 mov dword ptr [esi], ebx
// 0050cd00  895e04               mov dword ptr [esi + 4], ebx
// 0050cd03  3bdb                 cmp ebx, ebx
// 0050cd05  760b                 jbe 0x50cd12
// 0050cd07  8bc3                 mov eax, ebx
// 0050cd09  50                   push eax
// 0050cd0a  e8f5d52f00           call 0x80a304
// 0050cd0f  83c404               add esp, 4
// 0050cd12  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050cd16  5f                   pop edi
// 0050cd17  5e                   pop esi
// 0050cd18  5b                   pop ebx
// 0050cd19  64890d00000000       mov dword ptr fs:[0], ecx
// 0050cd20  83c410               add esp, 0x10
// 0050cd23  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ??1StringCompressor@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp
