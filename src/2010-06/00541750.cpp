// roc 2010-06 00541750  unit: RBX::AggregatingSceneManager  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00541750
//
// 00541750  83ec08               sub esp, 8
// 00541753  53                   push ebx
// 00541754  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 00541757  55                   push ebp
// 00541758  56                   push esi
// 00541759  8d710c               lea esi, [ecx + 0xc]
// 0054175c  57                   push edi
// 0054175d  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00541760  7606                 jbe 0x541768
// 00541762  ff150ca99e00         call dword ptr [0x9ea90c]
// 00541768  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0054176b  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0054176e  7606                 jbe 0x541776
// 00541770  ff150ca99e00         call dword ptr [0x9ea90c]
// 00541776  8b2e                 mov ebp, dword ptr [esi]
// 00541778  897c2414             mov dword ptr [esp + 0x14], edi
// 0054177c  3bfb                 cmp edi, ebx
// 0054177e  7411                 je 0x541791
// 00541780  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00541784  8b00                 mov eax, dword ptr [eax]
// 00541786  3907                 cmp dword ptr [edi], eax
// 00541788  7407                 je 0x541791
// 0054178a  83c704               add edi, 4
// 0054178d  3bfb                 cmp edi, ebx
// 0054178f  75f5                 jne 0x541786
// 00541791  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00541794  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00541797  7606                 jbe 0x54179f
// 00541799  ff150ca99e00         call dword ptr [0x9ea90c]
// 0054179f  8b06                 mov eax, dword ptr [esi]
// 005417a1  85ed                 test ebp, ebp
// 005417a3  7404                 je 0x5417a9
// 005417a5  3be8                 cmp ebp, eax
// 005417a7  7406                 je 0x5417af
// 005417a9  ff150ca99e00         call dword ptr [0x9ea90c]
// 005417af  3bfb                 cmp edi, ebx
// 005417b1  741a                 je 0x5417cd
// 005417b3  57                   push edi
// 005417b4  55                   push ebp
// 005417b5  8d4c2418             lea ecx, [esp + 0x18]
// 005417b9  51                   push ecx
// 005417ba  8bce                 mov ecx, esi
// 005417bc  e89ff4ffff           call 0x540c60
// 005417c1  5f                   pop edi
// 005417c2  5e                   pop esi
// 005417c3  5d                   pop ebp
// 005417c4  b001                 mov al, 1
// 005417c6  5b                   pop ebx
// 005417c7  83c408               add esp, 8
// 005417ca  c20400               ret 4
// 005417cd  5f                   pop edi
// 005417ce  5e                   pop esi
// 005417cf  5d                   pop ebp
// 005417d0  32c0                 xor al, al
// 005417d2  5b                   pop ebx
// 005417d3  83c408               add esp, 8
// 005417d6  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?dequeueSleepingChunk@Bucket@AggregatingSceneManager@Render@RBX@@QAE_NABV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
