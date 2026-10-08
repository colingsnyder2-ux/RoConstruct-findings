// roc 2007-03 004f30f0  unit: seg_004f0000  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f30f0
//
// 004f30f0  53                   push ebx
// 004f30f1  55                   push ebp
// 004f30f2  56                   push esi
// 004f30f3  57                   push edi
// 004f30f4  8bf1                 mov esi, ecx
// 004f30f6  8dbe10280400         lea edi, [esi + 0x42810]
// 004f30fc  57                   push edi
// 004f30fd  ff15bcd27700         call dword ptr [0x77d2bc]
// 004f3103  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004f3107  83862828040001       add dword ptr [esi + 0x42828], 1
// 004f310e  81fd80000000         cmp ebp, 0x80
// 004f3114  7735                 ja 0x4f314b
// 004f3116  8b8608280400         mov eax, dword ptr [esi + 0x42808]
// 004f311c  85c0                 test eax, eax
// 004f311e  7e2b                 jle 0x4f314b
// 004f3120  83c0ff               add eax, -1
// 004f3123  898608280400         mov dword ptr [esi + 0x42808], eax
// 004f3129  8b9c8608400000       mov ebx, dword ptr [esi + eax*4 + 0x4008]
// 004f3130  85db                 test ebx, ebx
// 004f3132  7417                 je 0x4f314b
// 004f3134  83862c28040001       add dword ptr [esi + 0x4282c], 1
// 004f313b  57                   push edi
// 004f313c  ff15b8d27700         call dword ptr [0x77d2b8]
// 004f3142  5f                   pop edi
// 004f3143  5e                   pop esi
// 004f3144  5d                   pop ebp
// 004f3145  8bc3                 mov eax, ebx
// 004f3147  5b                   pop ebx
// 004f3148  c20400               ret 4
// 004f314b  81fd00040000         cmp ebp, 0x400
// 004f3151  772d                 ja 0x4f3180
// 004f3153  55                   push ebp
// 004f3154  8d8600200000         lea eax, [esi + 0x2000]
// 004f315a  50                   push eax
// 004f315b  56                   push esi
// 004f315c  8bce                 mov ecx, esi
// 004f315e  e83dffffff           call 0x4f30a0
// 004f3163  8bd8                 mov ebx, eax
// 004f3165  85db                 test ebx, ebx
// 004f3167  7452                 je 0x4f31bb
// 004f3169  83863028040001       add dword ptr [esi + 0x42830], 1
// 004f3170  57                   push edi
// 004f3171  ff15b8d27700         call dword ptr [0x77d2b8]
// 004f3177  5f                   pop edi
// 004f3178  5e                   pop esi
// 004f3179  5d                   pop ebp
// 004f317a  8bc3                 mov eax, ebx
// 004f317c  5b                   pop ebx
// 004f317d  c20400               ret 4
// 004f3180  81fd00100000         cmp ebp, 0x1000
// 004f3186  7733                 ja 0x4f31bb
// 004f3188  55                   push ebp
// 004f3189  8d8e04400000         lea ecx, [esi + 0x4004]
// 004f318f  51                   push ecx
// 004f3190  8d9604200000         lea edx, [esi + 0x2004]
// 004f3196  52                   push edx
// 004f3197  8bce                 mov ecx, esi
// 004f3199  e802ffffff           call 0x4f30a0
// 004f319e  8bd8                 mov ebx, eax
// 004f31a0  85db                 test ebx, ebx
// 004f31a2  7417                 je 0x4f31bb
// 004f31a4  83863428040001       add dword ptr [esi + 0x42834], 1
// 004f31ab  57                   push edi
// 004f31ac  ff15b8d27700         call dword ptr [0x77d2b8]
// 004f31b2  5f                   pop edi
// 004f31b3  5e                   pop esi
// 004f31b4  5d                   pop ebp
// 004f31b5  8bc3                 mov eax, ebx
// 004f31b7  5b                   pop ebx
// 004f31b8  c20400               ret 4
// 004f31bb  8d4504               lea eax, [ebp + 4]
// 004f31be  018638280400         add dword ptr [esi + 0x42838], eax
// 004f31c4  57                   push edi
// 004f31c5  ff15b8d27700         call dword ptr [0x77d2b8]
// 004f31cb  8b1d3ce97700         mov ebx, dword ptr [0x77e93c]
// 004f31d1  8d7d04               lea edi, [ebp + 4]
// 004f31d4  57                   push edi
// 004f31d5  ffd3                 call ebx
// 004f31d7  83c404               add esp, 4
// 004f31da  85c0                 test eax, eax
// 004f31dc  7567                 jne 0x4f3245
// 004f31de  8d8e00200000         lea ecx, [esi + 0x2000]
// 004f31e4  51                   push ecx
// 004f31e5  56                   push esi
// 004f31e6  8bce                 mov ecx, esi
// 004f31e8  e863feffff           call 0x4f3050
// 004f31ed  8d9604400000         lea edx, [esi + 0x4004]
// 004f31f3  52                   push edx
// 004f31f4  8d8604200000         lea eax, [esi + 0x2004]
// 004f31fa  50                   push eax
// 004f31fb  8bce                 mov ecx, esi
// 004f31fd  e84efeffff           call 0x4f3050
// 004f3202  57                   push edi
// 004f3203  ffd3                 call ebx
// 004f3205  83c404               add esp, 4
// 004f3208  85c0                 test eax, eax
// 004f320a  7539                 jne 0x4f3245
// 004f320c  a170ad8b00           mov eax, dword ptr [0x8bad70]
// 004f3211  85c0                 test eax, eax
// 004f3213  7427                 je 0x4f323c
// 004f3215  6a01                 push 1
// 004f3217  57                   push edi
// 004f3218  ffd0                 call eax
// 004f321a  83c408               add esp, 8
// 004f321d  3c01                 cmp al, 1
// 004f321f  750a                 jne 0x4f322b
// 004f3221  57                   push edi
// 004f3222  ffd3                 call ebx
// 004f3224  83c404               add esp, 4
// 004f3227  85c0                 test eax, eax
// 004f3229  751a                 jne 0x4f3245
// 004f322b  a170ad8b00           mov eax, dword ptr [0x8bad70]
// 004f3230  85c0                 test eax, eax
// 004f3232  7408                 je 0x4f323c
// 004f3234  6a00                 push 0
// 004f3236  57                   push edi
// 004f3237  ffd0                 call eax
// 004f3239  83c408               add esp, 8
// 004f323c  5f                   pop edi
// 004f323d  5e                   pop esi
// 004f323e  5d                   pop ebp
// 004f323f  33c0                 xor eax, eax
// 004f3241  5b                   pop ebx
// 004f3242  c20400               ret 4
// 004f3245  5f                   pop edi
// 004f3246  5e                   pop esi
// 004f3247  8928                 mov dword ptr [eax], ebp
// 004f3249  5d                   pop ebp
// 004f324a  83c004               add eax, 4
// 004f324d  5b                   pop ebx
// 004f324e  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?malloc@BufferPool@G3D@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
