// roc 2008-06 0078b790  unit: CXTColorPageCustom  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078b790
//
// 0078b790  83ec10               sub esp, 0x10
// 0078b793  56                   push esi
// 0078b794  57                   push edi
// 0078b795  8bf1                 mov esi, ecx
// 0078b797  e8ee56f1ff           call 0x6a0e8a
// 0078b79c  8d8614070000         lea eax, [esi + 0x714]
// 0078b7a2  85c0                 test eax, eax
// 0078b7a4  7403                 je 0x78b7a9
// 0078b7a6  8b4020               mov eax, dword ptr [eax + 0x20]
// 0078b7a9  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 0078b7af  6a00                 push 0
// 0078b7b1  50                   push eax
// 0078b7b2  8b8698030000         mov eax, dword ptr [esi + 0x398]
// 0078b7b8  6869040000           push 0x469
// 0078b7bd  50                   push eax
// 0078b7be  ffd7                 call edi
// 0078b7c0  50                   push eax
// 0078b7c1  e81854f1ff           call 0x6a0bde
// 0078b7c6  8b8e98030000         mov ecx, dword ptr [esi + 0x398]
// 0078b7cc  68ff000000           push 0xff
// 0078b7d1  6a00                 push 0
// 0078b7d3  6865040000           push 0x465
// 0078b7d8  51                   push ecx
// 0078b7d9  ffd7                 call edi
// 0078b7db  8d866c060000         lea eax, [esi + 0x66c]
// 0078b7e1  85c0                 test eax, eax
// 0078b7e3  7403                 je 0x78b7e8
// 0078b7e5  8b4020               mov eax, dword ptr [eax + 0x20]
// 0078b7e8  8b9640040000         mov edx, dword ptr [esi + 0x440]
// 0078b7ee  6a00                 push 0
// 0078b7f0  50                   push eax
// 0078b7f1  6869040000           push 0x469
// 0078b7f6  52                   push edx
// 0078b7f7  ffd7                 call edi
// 0078b7f9  50                   push eax
// 0078b7fa  e8df53f1ff           call 0x6a0bde
// 0078b7ff  8b8640040000         mov eax, dword ptr [esi + 0x440]
// 0078b805  68ff000000           push 0xff
// 0078b80a  6a00                 push 0
// 0078b80c  6865040000           push 0x465
// 0078b811  50                   push eax
// 0078b812  ffd7                 call edi
// 0078b814  8d8670050000         lea eax, [esi + 0x570]
// 0078b81a  85c0                 test eax, eax
// 0078b81c  7403                 je 0x78b821
// 0078b81e  8b4020               mov eax, dword ptr [eax + 0x20]
// 0078b821  8b8e94040000         mov ecx, dword ptr [esi + 0x494]
// 0078b827  6a00                 push 0
// 0078b829  50                   push eax
// 0078b82a  6869040000           push 0x469
// 0078b82f  51                   push ecx
// 0078b830  ffd7                 call edi
// 0078b832  50                   push eax
// 0078b833  e8a653f1ff           call 0x6a0bde
// 0078b838  8b9694040000         mov edx, dword ptr [esi + 0x494]
// 0078b83e  68ff000000           push 0xff
// 0078b843  6a00                 push 0
// 0078b845  6865040000           push 0x465
// 0078b84a  52                   push edx
// 0078b84b  ffd7                 call edi
// 0078b84d  8d86c0060000         lea eax, [esi + 0x6c0]
// 0078b853  85c0                 test eax, eax
// 0078b855  7403                 je 0x78b85a
// 0078b857  8b4020               mov eax, dword ptr [eax + 0x20]
// 0078b85a  6a00                 push 0
// 0078b85c  50                   push eax
// 0078b85d  8b86ec030000         mov eax, dword ptr [esi + 0x3ec]
// 0078b863  6869040000           push 0x469
// 0078b868  50                   push eax
// 0078b869  ffd7                 call edi
// 0078b86b  50                   push eax
// 0078b86c  e86d53f1ff           call 0x6a0bde
// 0078b871  8b8eec030000         mov ecx, dword ptr [esi + 0x3ec]
// 0078b877  68ff000000           push 0xff
// 0078b87c  6a00                 push 0
// 0078b87e  6865040000           push 0x465
// 0078b883  51                   push ecx
// 0078b884  ffd7                 call edi
// 0078b886  8d86c4050000         lea eax, [esi + 0x5c4]
// 0078b88c  85c0                 test eax, eax
// 0078b88e  7403                 je 0x78b893
// 0078b890  8b4020               mov eax, dword ptr [eax + 0x20]
// 0078b893  8b96e8040000         mov edx, dword ptr [esi + 0x4e8]
// 0078b899  6a00                 push 0
// 0078b89b  50                   push eax
// 0078b89c  6869040000           push 0x469
// 0078b8a1  52                   push edx
// 0078b8a2  ffd7                 call edi
// 0078b8a4  50                   push eax
// 0078b8a5  e83453f1ff           call 0x6a0bde
// 0078b8aa  8b86e8040000         mov eax, dword ptr [esi + 0x4e8]
// 0078b8b0  68ff000000           push 0xff
// 0078b8b5  6a00                 push 0
// 0078b8b7  6865040000           push 0x465
// 0078b8bc  50                   push eax
// 0078b8bd  ffd7                 call edi
// 0078b8bf  8d8618060000         lea eax, [esi + 0x618]
// 0078b8c5  85c0                 test eax, eax
// 0078b8c7  7403                 je 0x78b8cc
// 0078b8c9  8b4020               mov eax, dword ptr [eax + 0x20]
// 0078b8cc  8b8e3c050000         mov ecx, dword ptr [esi + 0x53c]
// 0078b8d2  6a00                 push 0
// 0078b8d4  50                   push eax
// 0078b8d5  6869040000           push 0x469
// 0078b8da  51                   push ecx
// 0078b8db  ffd7                 call edi
// 0078b8dd  50                   push eax
// 0078b8de  e8fb52f1ff           call 0x6a0bde
// 0078b8e3  8b963c050000         mov edx, dword ptr [esi + 0x53c]
// 0078b8e9  68ff000000           push 0xff
// 0078b8ee  6a00                 push 0
// 0078b8f0  6865040000           push 0x465
// 0078b8f5  52                   push edx
// 0078b8f6  ffd7                 call edi
// 0078b8f8  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0078b8fe  8d442408             lea eax, [esp + 8]
// 0078b902  50                   push eax
// 0078b903  51                   push ecx
// 0078b904  ff15342e8000         call dword ptr [0x802e34]
// 0078b90a  8d542408             lea edx, [esp + 8]
// 0078b90e  52                   push edx
// 0078b90f  8bce                 mov ecx, esi
// 0078b911  e8865bf1ff           call 0x6a149c
// 0078b916  6a04                 push 4
// 0078b918  6a00                 push 0
// 0078b91a  8d442410             lea eax, [esp + 0x10]
// 0078b91e  50                   push eax
// 0078b91f  ff15282d8000         call dword ptr [0x802d28]
// 0078b925  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078b929  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0078b92d  8b542410             mov edx, dword ptr [esp + 0x10]
// 0078b931  6a01                 push 1
// 0078b933  2bc8                 sub ecx, eax
// 0078b935  51                   push ecx
// 0078b936  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078b93a  2bd1                 sub edx, ecx
// 0078b93c  52                   push edx
// 0078b93d  50                   push eax
// 0078b93e  51                   push ecx
// 0078b93f  8d8e08010000         lea ecx, [esi + 0x108]
// 0078b945  e80251f1ff           call 0x6a0a4c
// 0078b94a  5f                   pop edi
// 0078b94b  b801000000           mov eax, 1
// 0078b950  5e                   pop esi
// 0078b951  83c410               add esp, 0x10
// 0078b954  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?OnInitDialog@CXTColorPageCustom@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
