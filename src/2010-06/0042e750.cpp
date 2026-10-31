// roc 2010-06 0042e750  unit: CObjectBrowser  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042e750
//
// 0042e750  8b442404             mov eax, dword ptr [esp + 4]
// 0042e754  83ec14               sub esp, 0x14
// 0042e757  57                   push edi
// 0042e758  50                   push eax
// 0042e759  8bf9                 mov edi, ecx
// 0042e75b  e85c9d3700           call 0x7a84bc
// 0042e760  83f8ff               cmp eax, -1
// 0042e763  7509                 jne 0x42e76e
// 0042e765  0bc0                 or eax, eax
// 0042e767  5f                   pop edi
// 0042e768  83c414               add esp, 0x14
// 0042e76b  c20400               ret 4
// 0042e76e  8b5758               mov edx, dword ptr [edi + 0x58]
// 0042e771  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0042e777  56                   push esi
// 0042e778  6800e90000           push 0xe900
// 0042e77d  6800000050           push 0x50000000
// 0042e782  6a02                 push 2
// 0042e784  8d7758               lea esi, [edi + 0x58]
// 0042e787  6a01                 push 1
// 0042e789  57                   push edi
// 0042e78a  8bce                 mov ecx, esi
// 0042e78c  ffd0                 call eax
// 0042e78e  85c0                 test eax, eax
// 0042e790  750b                 jne 0x42e79d
// 0042e792  5e                   pop esi
// 0042e793  83c8ff               or eax, 0xffffffff
// 0042e796  5f                   pop edi
// 0042e797  83c414               add esp, 0x14
// 0042e79a  c20400               ret 4
// 0042e79d  8b16                 mov edx, dword ptr [esi]
// 0042e79f  8b82d0010000         mov eax, dword ptr [edx + 0x1d0]
// 0042e7a5  53                   push ebx
// 0042e7a6  6a04                 push 4
// 0042e7a8  8bce                 mov ecx, esi
// 0042e7aa  ffd0                 call eax
// 0042e7ac  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 0042e7af  8b16                 mov edx, dword ptr [esi]
// 0042e7b1  33c0                 xor eax, eax
// 0042e7b3  89442410             mov dword ptr [esp + 0x10], eax
// 0042e7b7  894c2410             mov dword ptr [esp + 0x10], ecx
// 0042e7bb  8d5c240c             lea ebx, [esp + 0xc]
// 0042e7bf  53                   push ebx
// 0042e7c0  89442410             mov dword ptr [esp + 0x10], eax
// 0042e7c4  89442418             mov dword ptr [esp + 0x18], eax
// 0042e7c8  8944241c             mov dword ptr [esp + 0x1c], eax
// 0042e7cc  89442420             mov dword ptr [esp + 0x20], eax
// 0042e7d0  b958020000           mov ecx, 0x258
// 0042e7d5  51                   push ecx
// 0042e7d6  b8c8000000           mov eax, 0xc8
// 0042e7db  50                   push eax
// 0042e7dc  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0042e7e2  688465a000           push 0xa06584
// 0042e7e7  6a00                 push 0
// 0042e7e9  6a00                 push 0
// 0042e7eb  8bce                 mov ecx, esi
// 0042e7ed  ffd0                 call eax
// 0042e7ef  85c0                 test eax, eax
// 0042e7f1  0f8480000000         je 0x42e877
// 0042e7f7  8b9f70010000         mov ebx, dword ptr [edi + 0x170]
// 0042e7fd  6a01                 push 1
// 0042e7ff  81c770010000         add edi, 0x170
// 0042e805  6a00                 push 0
// 0042e807  8bce                 mov ecx, esi
// 0042e809  e81e9c3700           call 0x7a842c
// 0042e80e  8b9348010000         mov edx, dword ptr [ebx + 0x148]
// 0042e814  50                   push eax
// 0042e815  6800008050           push 0x50800000
// 0042e81a  6a01                 push 1
// 0042e81c  6a02                 push 2
// 0042e81e  56                   push esi
// 0042e81f  8bcf                 mov ecx, edi
// 0042e821  ffd2                 call edx
// 0042e823  85c0                 test eax, eax
// 0042e825  7450                 je 0x42e877
// 0042e827  8b17                 mov edx, dword ptr [edi]
// 0042e829  8d5c240c             lea ebx, [esp + 0xc]
// 0042e82d  53                   push ebx
// 0042e82e  b9c8000000           mov ecx, 0xc8
// 0042e833  51                   push ecx
// 0042e834  b82c010000           mov eax, 0x12c
// 0042e839  50                   push eax
// 0042e83a  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0042e840  68bc65a000           push 0xa065bc
// 0042e845  6a00                 push 0
// 0042e847  6a00                 push 0
// 0042e849  8bcf                 mov ecx, edi
// 0042e84b  ffd0                 call eax
// 0042e84d  85c0                 test eax, eax
// 0042e84f  7426                 je 0x42e877
// 0042e851  8b17                 mov edx, dword ptr [edi]
// 0042e853  53                   push ebx
// 0042e854  b9be000000           mov ecx, 0xbe
// 0042e859  51                   push ecx
// 0042e85a  b864000000           mov eax, 0x64
// 0042e85f  50                   push eax
// 0042e860  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0042e866  686865a000           push 0xa06568
// 0042e86b  6a00                 push 0
// 0042e86d  6a01                 push 1
// 0042e86f  8bcf                 mov ecx, edi
// 0042e871  ffd0                 call eax
// 0042e873  85c0                 test eax, eax
// 0042e875  750c                 jne 0x42e883
// 0042e877  5b                   pop ebx
// 0042e878  5e                   pop esi
// 0042e879  83c8ff               or eax, 0xffffffff
// 0042e87c  5f                   pop edi
// 0042e87d  83c414               add esp, 0x14
// 0042e880  c20400               ret 4
// 0042e883  6a00                 push 0
// 0042e885  6a00                 push 0
// 0042e887  8bce                 mov ecx, esi
// 0042e889  e83a9c3700           call 0x7a84c8
// 0042e88e  6a00                 push 0
// 0042e890  6a00                 push 0
// 0042e892  8bcf                 mov ecx, edi
// 0042e894  8bf0                 mov esi, eax
// 0042e896  e82d9c3700           call 0x7a84c8
// 0042e89b  6a00                 push 0
// 0042e89d  6a01                 push 1
// 0042e89f  8bcf                 mov ecx, edi
// 0042e8a1  8bd8                 mov ebx, eax
// 0042e8a3  e8209c3700           call 0x7a84c8
// 0042e8a8  899ea8000000         mov dword ptr [esi + 0xa8], ebx
// 0042e8ae  8986ac000000         mov dword ptr [esi + 0xac], eax
// 0042e8b4  8983b0000000         mov dword ptr [ebx + 0xb0], eax
// 0042e8ba  5b                   pop ebx
// 0042e8bb  5e                   pop esi
// 0042e8bc  33c0                 xor eax, eax
// 0042e8be  5f                   pop edi
// 0042e8bf  83c414               add esp, 0x14
// 0042e8c2  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CObjectBrowser@@QAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_7576742091a0fd5e.cpp