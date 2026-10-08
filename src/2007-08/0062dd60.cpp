// roc 2007-08 0062dd60  unit: RBX::AdornG3D  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062dd60
//
// 0062dd60  6aff                 push -1
// 0062dd62  6850d77500           push 0x75d750
// 0062dd67  64a100000000         mov eax, dword ptr fs:[0]
// 0062dd6d  50                   push eax
// 0062dd6e  64892500000000       mov dword ptr fs:[0], esp
// 0062dd75  51                   push ecx
// 0062dd76  56                   push esi
// 0062dd77  57                   push edi
// 0062dd78  8b742420             mov esi, dword ptr [esp + 0x20]
// 0062dd7c  85f6                 test esi, esi
// 0062dd7e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0062dd86  0f84a5000000         je 0x62de31
// 0062dd8c  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062dd8f  8b06                 mov eax, dword ptr [esi]
// 0062dd91  8b400c               mov eax, dword ptr [eax + 0xc]
// 0062dd94  51                   push ecx
// 0062dd95  8d54240c             lea edx, [esp + 0xc]
// 0062dd99  52                   push edx
// 0062dd9a  8bce                 mov ecx, esi
// 0062dd9c  ffd0                 call eax
// 0062dd9e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062dda2  85c9                 test ecx, ecx
// 0062dda4  c644241401           mov byte ptr [esp + 0x14], 1
// 0062dda9  0f8482000000         je 0x62de31
// 0062ddaf  55                   push ebp
// 0062ddb0  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0062ddb4  55                   push ebp
// 0062ddb5  e8462ee4ff           call 0x470c00
// 0062ddba  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062ddbe  85c0                 test eax, eax
// 0062ddc0  8b3de8d27700         mov edi, dword ptr [0x77d2e8]
// 0062ddc6  c644241800           mov byte ptr [esp + 0x18], 0
// 0062ddcb  742b                 je 0x62ddf8
// 0062ddcd  83c004               add eax, 4
// 0062ddd0  50                   push eax
// 0062ddd1  ffd7                 call edi
// 0062ddd3  85c0                 test eax, eax
// 0062ddd5  7519                 jne 0x62ddf0
// 0062ddd7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062dddb  e8f09fe2ff           call 0x457dd0
// 0062dde0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062dde4  85c9                 test ecx, ecx
// 0062dde6  7408                 je 0x62ddf0
// 0062dde8  8b11                 mov edx, dword ptr [ecx]
// 0062ddea  8b02                 mov eax, dword ptr [edx]
// 0062ddec  6a01                 push 1
// 0062ddee  ffd0                 call eax
// 0062ddf0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0062ddf8  8d4e04               lea ecx, [esi + 4]
// 0062ddfb  51                   push ecx
// 0062ddfc  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0062de04  ffd7                 call edi
// 0062de06  85c0                 test eax, eax
// 0062de08  7511                 jne 0x62de1b
// 0062de0a  8bce                 mov ecx, esi
// 0062de0c  e8bf9fe2ff           call 0x457dd0
// 0062de11  8b16                 mov edx, dword ptr [esi]
// 0062de13  8b02                 mov eax, dword ptr [edx]
// 0062de15  6a01                 push 1
// 0062de17  8bce                 mov ecx, esi
// 0062de19  ffd0                 call eax
// 0062de1b  8bc5                 mov eax, ebp
// 0062de1d  5d                   pop ebp
// 0062de1e  5f                   pop edi
// 0062de1f  5e                   pop esi
// 0062de20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062de24  64890d00000000       mov dword ptr fs:[0], ecx
// 0062de2b  83c410               add esp, 0x10
// 0062de2e  c20800               ret 8
// 0062de31  85f6                 test esi, esi
// 0062de33  d9ee                 fldz 
// 0062de35  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0062de39  d917                 fst dword ptr [edi]
// 0062de3b  d95704               fst dword ptr [edi + 4]
// 0062de3e  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0062de46  d95708               fst dword ptr [edi + 8]
// 0062de49  d95f0c               fstp dword ptr [edi + 0xc]
// 0062de4c  741f                 je 0x62de6d
// 0062de4e  8d4e04               lea ecx, [esi + 4]
// 0062de51  51                   push ecx
// 0062de52  ff15e8d27700         call dword ptr [0x77d2e8]
// 0062de58  85c0                 test eax, eax
// 0062de5a  7511                 jne 0x62de6d
// 0062de5c  8bce                 mov ecx, esi
// 0062de5e  e86d9fe2ff           call 0x457dd0
// 0062de63  8b16                 mov edx, dword ptr [esi]
// 0062de65  8b02                 mov eax, dword ptr [edx]
// 0062de67  6a01                 push 1
// 0062de69  8bce                 mov ecx, esi
// 0062de6b  ffd0                 call eax
// 0062de6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062de71  8bc7                 mov eax, edi
// 0062de73  5f                   pop edi
// 0062de74  5e                   pop esi
// 0062de75  64890d00000000       mov dword ptr fs:[0], ecx
// 0062de7c  83c410               add esp, 0x10
// 0062de7f  c20800               ret 8
// library rbxgs-appdraw/AdornG3D.cpp (function ?getTextureSize@AdornG3D@RBX@@UBE?AVRect2D@G3D@@V?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
