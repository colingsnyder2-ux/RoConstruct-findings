// roc 2009-12 0087ab20  unit: CXTPControlGallery  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087ab20
//
// 0087ab20  83ec08               sub esp, 8
// 0087ab23  56                   push esi
// 0087ab24  8bf1                 mov esi, ecx
// 0087ab26  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 0087ab2c  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0087ab32  89442408             mov dword ptr [esp + 8], eax
// 0087ab36  2bc1                 sub eax, ecx
// 0087ab38  99                   cdq 
// 0087ab39  33c2                 xor eax, edx
// 0087ab3b  2bc2                 sub eax, edx
// 0087ab3d  89442404             mov dword ptr [esp + 4], eax
// 0087ab41  57                   push edi
// 0087ab42  db442408             fild dword ptr [esp + 8]
// 0087ab46  dd8694000000         fld qword ptr [esi + 0x94]
// 0087ab4c  d9e1                 fabs 
// 0087ab4e  ded9                 fcompp 
// 0087ab50  dfe0                 fnstsw ax
// 0087ab52  f6c405               test ah, 5
// 0087ab55  7a17                 jp 0x87ab6e
// 0087ab57  db44240c             fild dword ptr [esp + 0xc]
// 0087ab5b  dc8694000000         fadd qword ptr [esi + 0x94]
// 0087ab61  e88aa1f7ff           call 0x7f4cf0
// 0087ab66  898688000000         mov dword ptr [esi + 0x88], eax
// 0087ab6c  eb26                 jmp 0x87ab94
// 0087ab6e  8b867cffffff         mov eax, dword ptr [esi - 0x84]
// 0087ab74  c7466800000000       mov dword ptr [esi + 0x68], 0
// 0087ab7b  898e88000000         mov dword ptr [esi + 0x88], ecx
// 0087ab81  85c0                 test eax, eax
// 0087ab83  7403                 je 0x87ab88
// 0087ab85  8b4020               mov eax, dword ptr [eax + 0x20]
// 0087ab88  68325b0000           push 0x5b32
// 0087ab8d  50                   push eax
// 0087ab8e  ff15d0cb9800         call dword ptr [0x98cbd0]
// 0087ab94  8dbe7cfeffff         lea edi, [esi - 0x184]
// 0087ab9a  8bcf                 mov ecx, edi
// 0087ab9c  e85ff8ffff           call 0x87a400
// 0087aba1  8b07                 mov eax, dword ptr [edi]
// 0087aba3  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0087aba9  8bcf                 mov ecx, edi
// 0087abab  ffd2                 call edx
// 0087abad  6a00                 push 0
// 0087abaf  6a00                 push 0
// 0087abb1  8bcf                 mov ecx, edi
// 0087abb3  e868d6ffff           call 0x878220
// 0087abb8  8b867cffffff         mov eax, dword ptr [esi - 0x84]
// 0087abbe  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0087abc1  51                   push ecx
// 0087abc2  ff15a4ca9800         call dword ptr [0x98caa4]
// 0087abc8  5f                   pop edi
// 0087abc9  5e                   pop esi
// 0087abca  83c408               add esp, 8
// 0087abcd  c3                   ret 
// copied from an identical function in another client (function ?DoAnimate@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp