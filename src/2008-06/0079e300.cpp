// roc 2008-06 0079e300  unit: CXTPScrollBase  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079e300
//
// 0079e300  56                   push esi
// 0079e301  57                   push edi
// 0079e302  8bf9                 mov edi, ecx
// 0079e304  8b7760               mov esi, dword ptr [edi + 0x60]
// 0079e307  85f6                 test esi, esi
// 0079e309  7473                 je 0x79e37e
// 0079e30b  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0079e312  ff15b42d8000         call dword ptr [0x802db4]
// 0079e318  837e3000             cmp dword ptr [esi + 0x30], 0
// 0079e31c  743a                 je 0x79e358
// 0079e31e  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0079e323  7409                 je 0x79e32e
// 0079e325  8b4634               mov eax, dword ptr [esi + 0x34]
// 0079e328  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0079e32b  894e24               mov dword ptr [esi + 0x24], ecx
// 0079e32e  8b4624               mov eax, dword ptr [esi + 0x24]
// 0079e331  8b17                 mov edx, dword ptr [edi]
// 0079e333  8b5218               mov edx, dword ptr [edx + 0x18]
// 0079e336  50                   push eax
// 0079e337  6a04                 push 4
// 0079e339  8bcf                 mov ecx, edi
// 0079e33b  ffd2                 call edx
// 0079e33d  8b07                 mov eax, dword ptr [edi]
// 0079e33f  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0079e342  8bcf                 mov ecx, edi
// 0079e344  ffd2                 call edx
// 0079e346  8b17                 mov edx, dword ptr [edi]
// 0079e348  8b4218               mov eax, dword ptr [edx + 0x18]
// 0079e34b  6a00                 push 0
// 0079e34d  6a08                 push 8
// 0079e34f  8bcf                 mov ecx, edi
// 0079e351  ffd0                 call eax
// 0079e353  5f                   pop edi
// 0079e354  5e                   pop esi
// 0079e355  c20400               ret 4
// 0079e358  8b4618               mov eax, dword ptr [esi + 0x18]
// 0079e35b  85c0                 test eax, eax
// 0079e35d  7412                 je 0x79e371
// 0079e35f  50                   push eax
// 0079e360  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0079e363  50                   push eax
// 0079e364  ff151c2e8000         call dword ptr [0x802e1c]
// 0079e36a  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0079e371  8b17                 mov edx, dword ptr [edi]
// 0079e373  8b4218               mov eax, dword ptr [edx + 0x18]
// 0079e376  6a00                 push 0
// 0079e378  6a08                 push 8
// 0079e37a  8bcf                 mov ecx, edi
// 0079e37c  ffd0                 call eax
// 0079e37e  5f                   pop edi
// 0079e37f  5e                   pop esi
// 0079e380  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?EndScroll@CXTPScrollBase@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
