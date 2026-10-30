// roc 2009-12 0086f640  unit: PAVCXTPCommandBar::?$CArray  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f640
//
// 0086f640  56                   push esi
// 0086f641  57                   push edi
// 0086f642  8bf1                 mov esi, ecx
// 0086f644  e8d544f8ff           call 0x7f3b1e
// 0086f649  837e1000             cmp dword ptr [esi + 0x10], 0
// 0086f64d  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0086f651  894644               mov dword ptr [esi + 0x44], eax
// 0086f654  7515                 jne 0x86f66b
// 0086f656  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086f659  85c9                 test ecx, ecx
// 0086f65b  740e                 je 0x86f66b
// 0086f65d  3bcf                 cmp ecx, edi
// 0086f65f  740a                 je 0x86f66b
// 0086f661  8b01                 mov eax, dword ptr [ecx]
// 0086f663  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 0086f669  ffd2                 call edx
// 0086f66b  8b5610               mov edx, dword ptr [esi + 0x10]
// 0086f66e  8d4e08               lea ecx, [esi + 8]
// 0086f671  33c0                 xor eax, eax
// 0086f673  85d2                 test edx, edx
// 0086f675  7e2d                 jle 0x86f6a4
// 0086f677  85c0                 test eax, eax
// 0086f679  7c1f                 jl 0x86f69a
// 0086f67b  3bc2                 cmp eax, edx
// 0086f67d  7d1b                 jge 0x86f69a
// 0086f67f  8b7104               mov esi, dword ptr [ecx + 4]
// 0086f682  3b3c86               cmp edi, dword ptr [esi + eax*4]
// 0086f685  7418                 je 0x86f69f
// 0086f687  40                   inc eax
// 0086f688  3bc2                 cmp eax, edx
// 0086f68a  7ceb                 jl 0x86f677
// 0086f68c  57                   push edi
// 0086f68d  8bc2                 mov eax, edx
// 0086f68f  50                   push eax
// 0086f690  e8dbb5ffff           call 0x86ac70
// 0086f695  5f                   pop edi
// 0086f696  5e                   pop esi
// 0086f697  c20800               ret 8
// 0086f69a  e86d44f8ff           call 0x7f3b0c
// 0086f69f  83f8ff               cmp eax, -1
// 0086f6a2  7509                 jne 0x86f6ad
// 0086f6a4  57                   push edi
// 0086f6a5  8bc2                 mov eax, edx
// 0086f6a7  50                   push eax
// 0086f6a8  e8c3b5ffff           call 0x86ac70
// 0086f6ad  5f                   pop edi
// 0086f6ae  5e                   pop esi
// 0086f6af  c20800               ret 8
// copied from an identical function in another client (function ?SetTrack@CXTPMouseManager@@QAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp