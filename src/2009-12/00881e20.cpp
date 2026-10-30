// roc 2009-12 00881e20  unit: CXTPControlGalleryOffice2007Theme  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00881e20
//
// 00881e20  53                   push ebx
// 00881e21  56                   push esi
// 00881e22  57                   push edi
// 00881e23  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00881e27  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 00881e2d  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 00881e34  8bd9                 mov ebx, ecx
// 00881e36  7515                 jne 0x881e4d
// 00881e38  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00881e3f  750c                 jne 0x881e4d
// 00881e41  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 00881e44  6a29                 push 0x29
// 00881e46  e8f5b7f7ff           call 0x7fd640
// 00881e4b  eb33                 jmp 0x881e80
// 00881e4d  8b07                 mov eax, dword ptr [edi]
// 00881e4f  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00881e52  8bcf                 mov ecx, edi
// 00881e54  ffd2                 call edx
// 00881e56  85c0                 test eax, eax
// 00881e58  7423                 je 0x881e7d
// 00881e5a  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 00881e60  83f8ff               cmp eax, -1
// 00881e63  750f                 jne 0x881e74
// 00881e65  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 00881e6b  85c9                 test ecx, ecx
// 00881e6d  7405                 je 0x881e74
// 00881e6f  e83c47f7ff           call 0x7f65b0
// 00881e74  85c0                 test eax, eax
// 00881e76  7405                 je 0x881e7d
// 00881e78  8b4330               mov eax, dword ptr [ebx + 0x30]
// 00881e7b  eb03                 jmp 0x881e80
// 00881e7d  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00881e80  8b742410             mov esi, dword ptr [esp + 0x10]
// 00881e84  50                   push eax
// 00881e85  8d44241c             lea eax, [esp + 0x1c]
// 00881e89  50                   push eax
// 00881e8a  8bce                 mov ecx, esi
// 00881e8c  e86d27f7ff           call 0x7f45fe
// 00881e91  83bf3002000000       cmp dword ptr [edi + 0x230], 0
// 00881e98  7411                 je 0x881eab
// 00881e9a  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00881e9d  50                   push eax
// 00881e9e  50                   push eax
// 00881e9f  8d4c2420             lea ecx, [esp + 0x20]
// 00881ea3  51                   push ecx
// 00881ea4  8bce                 mov ecx, esi
// 00881ea6  e84d27f7ff           call 0x7f45f8
// 00881eab  8bcf                 mov ecx, edi
// 00881ead  e8ae55ffff           call 0x877460
// 00881eb2  85c0                 test eax, eax
// 00881eb4  7422                 je 0x881ed8
// 00881eb6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00881eba  8b542420             mov edx, dword ptr [esp + 0x20]
// 00881ebe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00881ec2  68c5c5c500           push 0xc5c5c5
// 00881ec7  6a01                 push 1
// 00881ec9  2bd0                 sub edx, eax
// 00881ecb  52                   push edx
// 00881ecc  83c1fe               add ecx, -2
// 00881ecf  51                   push ecx
// 00881ed0  50                   push eax
// 00881ed1  8bce                 mov ecx, esi
// 00881ed3  e8be450a00           call 0x926496
// 00881ed8  5f                   pop edi
// 00881ed9  5e                   pop esi
// 00881eda  5b                   pop ebx
// 00881edb  c21800               ret 0x18
// copied from an identical function in another client (function ?FillControl@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPControlGallery@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp