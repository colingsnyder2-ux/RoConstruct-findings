// roc 2009-06 007f4450  unit: CXTPTabManagerItem  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f4450
//
// 007f4450  56                   push esi
// 007f4451  57                   push edi
// 007f4452  8bf9                 mov edi, ecx
// 007f4454  33f6                 xor esi, esi
// 007f4456  397774               cmp dword ptr [edi + 0x74], esi
// 007f4459  7e26                 jle 0x7f4481
// 007f445b  eb03                 jmp 0x7f4460
// 007f445d  8d4900               lea ecx, [ecx]
// 007f4460  85f6                 test esi, esi
// 007f4462  7c2c                 jl 0x7f4490
// 007f4464  3b7774               cmp esi, dword ptr [edi + 0x74]
// 007f4467  7d27                 jge 0x7f4490
// 007f4469  8b4770               mov eax, dword ptr [edi + 0x70]
// 007f446c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007f446f  85c9                 test ecx, ecx
// 007f4471  7408                 je 0x7f447b
// 007f4473  8b11                 mov edx, dword ptr [ecx]
// 007f4475  8b02                 mov eax, dword ptr [edx]
// 007f4477  6a01                 push 1
// 007f4479  ffd0                 call eax
// 007f447b  46                   inc esi
// 007f447c  3b7774               cmp esi, dword ptr [edi + 0x74]
// 007f447f  7cdf                 jl 0x7f4460
// 007f4481  6aff                 push -1
// 007f4483  6a00                 push 0
// 007f4485  8d4f6c               lea ecx, [edi + 0x6c]
// 007f4488  e883e0f5ff           call 0x752510
// 007f448d  5f                   pop edi
// 007f448e  5e                   pop esi
// 007f448f  c3                   ret 
// 007f4490  e84f48f2ff           call 0x718ce4
// copied from an identical function in another client (function ?OnRemoved@CXTPTabManagerItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp