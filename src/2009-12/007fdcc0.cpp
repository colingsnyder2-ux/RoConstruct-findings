// roc 2009-12 007fdcc0  unit: CXTPPaintManager  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fdcc0
//
// 007fdcc0  83ec08               sub esp, 8
// 007fdcc3  53                   push ebx
// 007fdcc4  56                   push esi
// 007fdcc5  8b742414             mov esi, dword ptr [esp + 0x14]
// 007fdcc9  57                   push edi
// 007fdcca  bf02000000           mov edi, 2
// 007fdccf  8bd9                 mov ebx, ecx
// 007fdcd1  39bef8000000         cmp dword ptr [esi + 0xf8], edi
// 007fdcd7  740b                 je 0x7fdce4
// 007fdcd9  5f                   pop edi
// 007fdcda  5e                   pop esi
// 007fdcdb  33c0                 xor eax, eax
// 007fdcdd  5b                   pop ebx
// 007fdcde  83c408               add esp, 8
// 007fdce1  c20400               ret 4
// 007fdce4  8b06                 mov eax, dword ptr [esi]
// 007fdce6  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 007fdcec  8bce                 mov ecx, esi
// 007fdcee  ffd2                 call edx
// 007fdcf0  85c0                 test eax, eax
// 007fdcf2  7409                 je 0x7fdcfd
// 007fdcf4  83be1002000000       cmp dword ptr [esi + 0x210], 0
// 007fdcfb  7505                 jne 0x7fdd02
// 007fdcfd  bf01000000           mov edi, 1
// 007fdd02  8b03                 mov eax, dword ptr [ebx]
// 007fdd04  8b9010010000         mov edx, dword ptr [eax + 0x110]
// 007fdd0a  56                   push esi
// 007fdd0b  8d4c2410             lea ecx, [esp + 0x10]
// 007fdd0f  51                   push ecx
// 007fdd10  8bcb                 mov ecx, ebx
// 007fdd12  ffd2                 call edx
// 007fdd14  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007fdd18  0fafc7               imul eax, edi
// 007fdd1b  5f                   pop edi
// 007fdd1c  5e                   pop esi
// 007fdd1d  40                   inc eax
// 007fdd1e  5b                   pop ebx
// 007fdd1f  83c408               add esp, 8
// 007fdd22  c20400               ret 4
// copied from an identical function in another client (function ?GetPopupBarGripperWidth@CXTPPaintManager@@UAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp