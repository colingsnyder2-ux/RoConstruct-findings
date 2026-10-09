// roc 2007-03 00693450  unit: seg_00690000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00693450
//
// 00693450  83ec3c               sub esp, 0x3c
// 00693453  53                   push ebx
// 00693454  55                   push ebp
// 00693455  56                   push esi
// 00693456  6a2c                 push 0x2c
// 00693458  33ed                 xor ebp, ebp
// 0069345a  8d442420             lea eax, [esp + 0x20]
// 0069345e  55                   push ebp
// 0069345f  50                   push eax
// 00693460  e8b7bbf8ff           call 0x61f01c
// 00693465  8b742460             mov esi, dword ptr [esp + 0x60]
// 00693469  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 0069346d  83c40c               add esp, 0xc
// 00693470  55                   push ebp
// 00693471  55                   push ebp
// 00693472  8d542418             lea edx, [esp + 0x18]
// 00693476  52                   push edx
// 00693477  55                   push ebp
// 00693478  8d44242c             lea eax, [esp + 0x2c]
// 0069347c  8bce                 mov ecx, esi
// 0069347e  50                   push eax
// 0069347f  f7d9                 neg ecx
// 00693481  55                   push ebp
// 00693482  c744243428000000     mov dword ptr [esp + 0x34], 0x28
// 0069348a  895c2438             mov dword ptr [esp + 0x38], ebx
// 0069348e  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00693492  66c74424400100       mov word ptr [esp + 0x40], 1
// 00693499  66c74424422000       mov word ptr [esp + 0x42], 0x20
// 006934a0  896c2444             mov dword ptr [esp + 0x44], ebp
// 006934a4  ff15c8d07700         call dword ptr [0x77d0c8]
// 006934aa  8bc8                 mov ecx, eax
// 006934ac  3bcd                 cmp ecx, ebp
// 006934ae  894c2418             mov dword ptr [esp + 0x18], ecx
// 006934b2  0f84a9000000         je 0x693561
// 006934b8  396c2410             cmp dword ptr [esp + 0x10], ebp
// 006934bc  0f849f000000         je 0x693561
// 006934c2  57                   push edi
// 006934c3  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 006934c7  8bc3                 mov eax, ebx
// 006934c9  0fafc7               imul eax, edi
// 006934cc  3bf5                 cmp esi, ebp
// 006934ce  89442418             mov dword ptr [esp + 0x18], eax
// 006934d2  0f8e7d000000         jle 0x693555
// 006934d8  896c2410             mov dword ptr [esp + 0x10], ebp
// 006934dc  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 006934e0  89742450             mov dword ptr [esp + 0x50], esi
// 006934e4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006934e8  8b742410             mov esi, dword ptr [esp + 0x10]
// 006934ec  03ce                 add ecx, esi
// 006934ee  85db                 test ebx, ebx
// 006934f0  8bd5                 mov edx, ebp
// 006934f2  7e49                 jle 0x69353d
// 006934f4  8bf3                 mov esi, ebx
// 006934f6  8a02                 mov al, byte ptr [edx]
// 006934f8  0fb65a01             movzx ebx, byte ptr [edx + 1]
// 006934fc  83c201               add edx, 1
// 006934ff  83c201               add edx, 1
// 00693502  885c245c             mov byte ptr [esp + 0x5c], bl
// 00693506  8a1a                 mov bl, byte ptr [edx]
// 00693508  8819                 mov byte ptr [ecx], bl
// 0069350a  0fb65c245c           movzx ebx, byte ptr [esp + 0x5c]
// 0069350f  83c101               add ecx, 1
// 00693512  8819                 mov byte ptr [ecx], bl
// 00693514  83c101               add ecx, 1
// 00693517  8801                 mov byte ptr [ecx], al
// 00693519  83c201               add edx, 1
// 0069351c  83c101               add ecx, 1
// 0069351f  32c0                 xor al, al
// 00693521  83ff04               cmp edi, 4
// 00693524  7505                 jne 0x69352b
// 00693526  8a02                 mov al, byte ptr [edx]
// 00693528  83c201               add edx, 1
// 0069352b  8801                 mov byte ptr [ecx], al
// 0069352d  83c101               add ecx, 1
// 00693530  83ee01               sub esi, 1
// 00693533  75c1                 jne 0x6934f6
// 00693535  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00693539  8b442418             mov eax, dword ptr [esp + 0x18]
// 0069353d  8d0c9d00000000       lea ecx, [ebx*4]
// 00693544  014c2410             add dword ptr [esp + 0x10], ecx
// 00693548  03e8                 add ebp, eax
// 0069354a  836c245001           sub dword ptr [esp + 0x50], 1
// 0069354f  7593                 jne 0x6934e4
// 00693551  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00693555  5f                   pop edi
// 00693556  5e                   pop esi
// 00693557  5d                   pop ebp
// 00693558  8bc1                 mov eax, ecx
// 0069355a  5b                   pop ebx
// 0069355b  83c43c               add esp, 0x3c
// 0069355e  c21000               ret 0x10
// 00693561  5e                   pop esi
// 00693562  5d                   pop ebp
// 00693563  33c0                 xor eax, eax
// 00693565  5b                   pop ebx
// 00693566  83c43c               add esp, 0x3c
// 00693569  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ?ConvertToBitmap@CXTPGraphicBitmapPng@@ABEPAUHBITMAP__@@PAEVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
