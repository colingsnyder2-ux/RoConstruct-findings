// roc 2009-12 008d4c50  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio  size: 441 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d4c50
//
// 008d4c50  83ec20               sub esp, 0x20
// 008d4c53  53                   push ebx
// 008d4c54  55                   push ebp
// 008d4c55  56                   push esi
// 008d4c56  8b742434             mov esi, dword ptr [esp + 0x34]
// 008d4c5a  8b4644               mov eax, dword ptr [esi + 0x44]
// 008d4c5d  8b564c               mov edx, dword ptr [esi + 0x4c]
// 008d4c60  57                   push edi
// 008d4c61  8bf9                 mov edi, ecx
// 008d4c63  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008d4c66  89442410             mov dword ptr [esp + 0x10], eax
// 008d4c6a  8b4650               mov eax, dword ptr [esi + 0x50]
// 008d4c6d  894c2414             mov dword ptr [esp + 0x14], ecx
// 008d4c71  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d4c74  89542418             mov dword ptr [esp + 0x18], edx
// 008d4c78  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d4c7c  397104               cmp dword ptr [ecx + 4], esi
// 008d4c7f  0f84a8000000         je 0x8d4d2d
// 008d4c85  8b11                 mov edx, dword ptr [ecx]
// 008d4c87  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d4c8a  ffd0                 call eax
// 008d4c8c  83f802               cmp eax, 2
// 008d4c8f  7450                 je 0x8d4ce1
// 008d4c91  85c0                 test eax, eax
// 008d4c93  744c                 je 0x8d4ce1
// 008d4c95  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 008d4c98  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d4c9e  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d4ca1  83c044               add eax, 0x44
// 008d4ca4  83f9ff               cmp ecx, -1
// 008d4ca7  7505                 jne 0x8d4cae
// 008d4ca9  8b4004               mov eax, dword ptr [eax + 4]
// 008d4cac  eb02                 jmp 0x8d4cb0
// 008d4cae  8bc1                 mov eax, ecx
// 008d4cb0  83f8ff               cmp eax, -1
// 008d4cb3  0f8416010000         je 0x8d4dcf
// 008d4cb9  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d4cbd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d4cc1  50                   push eax
// 008d4cc2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d4cc6  2bd0                 sub edx, eax
// 008d4cc8  6a01                 push 1
// 008d4cca  83ea04               sub edx, 4
// 008d4ccd  52                   push edx
// 008d4cce  51                   push ecx
// 008d4ccf  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d4cd3  83c002               add eax, 2
// 008d4cd6  50                   push eax
// 008d4cd7  e8ba170500           call 0x926496
// 008d4cdc  e9ee000000           jmp 0x8d4dcf
// 008d4ce1  8b571c               mov edx, dword ptr [edi + 0x1c]
// 008d4ce4  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008d4cea  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d4ced  83c044               add eax, 0x44
// 008d4cf0  83f9ff               cmp ecx, -1
// 008d4cf3  7505                 jne 0x8d4cfa
// 008d4cf5  8b4004               mov eax, dword ptr [eax + 4]
// 008d4cf8  eb02                 jmp 0x8d4cfc
// 008d4cfa  8bc1                 mov eax, ecx
// 008d4cfc  83f8ff               cmp eax, -1
// 008d4cff  0f84ca000000         je 0x8d4dcf
// 008d4d05  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d4d09  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d4d0d  50                   push eax
// 008d4d0e  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d4d12  2bc8                 sub ecx, eax
// 008d4d14  83e904               sub ecx, 4
// 008d4d17  51                   push ecx
// 008d4d18  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d4d1c  6a01                 push 1
// 008d4d1e  83c002               add eax, 2
// 008d4d21  50                   push eax
// 008d4d22  52                   push edx
// 008d4d23  e86e170500           call 0x926496
// 008d4d28  e9a2000000           jmp 0x8d4dcf
// 008d4d2d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d4d30  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d4d36  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 008d4d39  8b11                 mov edx, dword ptr [ecx]
// 008d4d3b  8b5218               mov edx, dword ptr [edx + 0x18]
// 008d4d3e  56                   push esi
// 008d4d3f  83ec10               sub esp, 0x10
// 008d4d42  8bc4                 mov eax, esp
// 008d4d44  8918                 mov dword ptr [eax], ebx
// 008d4d46  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 008d4d49  895804               mov dword ptr [eax + 4], ebx
// 008d4d4c  8b5e4c               mov ebx, dword ptr [esi + 0x4c]
// 008d4d4f  895808               mov dword ptr [eax + 8], ebx
// 008d4d52  8b5e50               mov ebx, dword ptr [esi + 0x50]
// 008d4d55  89580c               mov dword ptr [eax + 0xc], ebx
// 008d4d58  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d4d5c  50                   push eax
// 008d4d5d  ffd2                 call edx
// 008d4d5f  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d4d62  8b01                 mov eax, dword ptr [ecx]
// 008d4d64  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d4d67  33ed                 xor ebp, ebp
// 008d4d69  33db                 xor ebx, ebx
// 008d4d6b  896c2428             mov dword ptr [esp + 0x28], ebp
// 008d4d6f  ffd2                 call edx
// 008d4d71  50                   push eax
// 008d4d72  83ec10               sub esp, 0x10
// 008d4d75  8bc4                 mov eax, esp
// 008d4d77  8918                 mov dword ptr [eax], ebx
// 008d4d79  896804               mov dword ptr [eax + 4], ebp
// 008d4d7c  8bcd                 mov ecx, ebp
// 008d4d7e  894808               mov dword ptr [eax + 8], ecx
// 008d4d81  8d542424             lea edx, [esp + 0x24]
// 008d4d85  b901000000           mov ecx, 1
// 008d4d8a  52                   push edx
// 008d4d8b  89480c               mov dword ptr [eax + 0xc], ecx
// 008d4d8e  e81df1ffff           call 0x8d3eb0
// 008d4d93  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d4d96  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d4d9c  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 008d4da2  83c418               add esp, 0x18
// 008d4da5  83f9ff               cmp ecx, -1
// 008d4da8  7506                 jne 0x8d4db0
// 008d4daa  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008d4db0  8b5070               mov edx, dword ptr [eax + 0x70]
// 008d4db3  83faff               cmp edx, -1
// 008d4db6  7505                 jne 0x8d4dbd
// 008d4db8  8b406c               mov eax, dword ptr [eax + 0x6c]
// 008d4dbb  eb02                 jmp 0x8d4dbf
// 008d4dbd  8bc2                 mov eax, edx
// 008d4dbf  51                   push ecx
// 008d4dc0  50                   push eax
// 008d4dc1  8d4c2418             lea ecx, [esp + 0x18]
// 008d4dc5  51                   push ecx
// 008d4dc6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d4dca  e829f8f1ff           call 0x7f45f8
// 008d4dcf  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 008d4dd2  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 008d4dd5  8b17                 mov edx, dword ptr [edi]
// 008d4dd7  8b5268               mov edx, dword ptr [edx + 0x68]
// 008d4dda  6a01                 push 1
// 008d4ddc  83ec10               sub esp, 0x10
// 008d4ddf  8bc4                 mov eax, esp
// 008d4de1  8908                 mov dword ptr [eax], ecx
// 008d4de3  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008d4de6  894804               mov dword ptr [eax + 4], ecx
// 008d4de9  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 008d4dec  894808               mov dword ptr [eax + 8], ecx
// 008d4def  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 008d4df2  89480c               mov dword ptr [eax + 0xc], ecx
// 008d4df5  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d4df9  56                   push esi
// 008d4dfa  50                   push eax
// 008d4dfb  8bcf                 mov ecx, edi
// 008d4dfd  ffd2                 call edx
// 008d4dff  5f                   pop edi
// 008d4e00  5e                   pop esi
// 008d4e01  5d                   pop ebp
// 008d4e02  5b                   pop ebx
// 008d4e03  83c420               add esp, 0x20
// 008d4e06  c20800               ret 8
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetVisualStudio@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp