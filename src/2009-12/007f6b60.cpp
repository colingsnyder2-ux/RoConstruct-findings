// roc 2009-12 007f6b60  unit: CRobloxControlColorSelector  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6b60
//
// 007f6b60  57                   push edi
// 007f6b61  8bf9                 mov edi, ecx
// 007f6b63  8b07                 mov eax, dword ptr [edi]
// 007f6b65  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 007f6b6b  ffd2                 call edx
// 007f6b6d  85c0                 test eax, eax
// 007f6b6f  7451                 je 0x7f6bc2
// 007f6b71  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f6b75  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f6b79  56                   push esi
// 007f6b7a  50                   push eax
// 007f6b7b  51                   push ecx
// 007f6b7c  8db7c0000000         lea esi, [edi + 0xc0]
// 007f6b82  56                   push esi
// 007f6b83  ff155cca9800         call dword ptr [0x98ca5c]
// 007f6b89  85c0                 test eax, eax
// 007f6b8b  7434                 je 0x7f6bc1
// 007f6b8d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f6b91  8bd0                 mov edx, eax
// 007f6b93  2b16                 sub edx, dword ptr [esi]
// 007f6b95  83fa02               cmp edx, 2
// 007f6b98  7e0d                 jle 0x7f6ba7
// 007f6b9a  8b8fc8000000         mov ecx, dword ptr [edi + 0xc8]
// 007f6ba0  2bc8                 sub ecx, eax
// 007f6ba2  83f902               cmp ecx, 2
// 007f6ba5  7f1a                 jg 0x7f6bc1
// 007f6ba7  e8f47c0700           call 0x86e8a0
// 007f6bac  8b10                 mov edx, dword ptr [eax]
// 007f6bae  8bc8                 mov ecx, eax
// 007f6bb0  8b4218               mov eax, dword ptr [edx + 0x18]
// 007f6bb3  68f4260000           push 0x26f4
// 007f6bb8  ffd0                 call eax
// 007f6bba  50                   push eax
// 007f6bbb  ff1520ca9800         call dword ptr [0x98ca20]
// 007f6bc1  5e                   pop esi
// 007f6bc2  5f                   pop edi
// 007f6bc3  c20800               ret 8
// copied from an identical function in another client (function ?OnCustomizeMouseMove@CXTPControl@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp