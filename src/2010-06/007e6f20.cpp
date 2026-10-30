// roc 2010-06 007e6f20  unit: CXTTreeBase  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e6f20
//
// 007e6f20  53                   push ebx
// 007e6f21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007e6f25  817b0400010000       cmp dword ptr [ebx + 4], 0x100
// 007e6f2c  56                   push esi
// 007e6f2d  57                   push edi
// 007e6f2e  8bf1                 mov esi, ecx
// 007e6f30  7571                 jne 0x7e6fa3
// 007e6f32  e839eaffff           call 0x7e5970
// 007e6f37  8b3d54ba9e00         mov edi, dword ptr [0x9eba54]
// 007e6f3d  84c0                 test al, al
// 007e6f3f  7435                 je 0x7e6f76
// 007e6f41  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e6f44  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e6f47  6a00                 push 0
// 007e6f49  6a00                 push 0
// 007e6f4b  680f110000           push 0x110f
// 007e6f50  50                   push eax
// 007e6f51  ffd7                 call edi
// 007e6f53  50                   push eax
// 007e6f54  e8110dfcff           call 0x7a7c6a
// 007e6f59  85c0                 test eax, eax
// 007e6f5b  7419                 je 0x7e6f76
// 007e6f5d  53                   push ebx
// 007e6f5e  ff1504bc9e00         call dword ptr [0x9ebc04]
// 007e6f64  53                   push ebx
// 007e6f65  ff1508bc9e00         call dword ptr [0x9ebc08]
// 007e6f6b  5f                   pop edi
// 007e6f6c  5e                   pop esi
// 007e6f6d  b801000000           mov eax, 1
// 007e6f72  5b                   pop ebx
// 007e6f73  c20400               ret 4
// 007e6f76  837b080d             cmp dword ptr [ebx + 8], 0xd
// 007e6f7a  7527                 jne 0x7e6fa3
// 007e6f7c  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e6f7f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e6f82  6a00                 push 0
// 007e6f84  6a09                 push 9
// 007e6f86  680a110000           push 0x110a
// 007e6f8b  51                   push ecx
// 007e6f8c  ffd7                 call edi
// 007e6f8e  85c0                 test eax, eax
// 007e6f90  7411                 je 0x7e6fa3
// 007e6f92  8b5634               mov edx, dword ptr [esi + 0x34]
// 007e6f95  50                   push eax
// 007e6f96  8b4220               mov eax, dword ptr [edx + 0x20]
// 007e6f99  6a03                 push 3
// 007e6f9b  6802110000           push 0x1102
// 007e6fa0  50                   push eax
// 007e6fa1  ffd7                 call edi
// 007e6fa3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e6fa6  53                   push ebx
// 007e6fa7  e8f40ffcff           call 0x7a7fa0
// 007e6fac  5f                   pop edi
// 007e6fad  5e                   pop esi
// 007e6fae  5b                   pop ebx
// 007e6faf  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@CXTTreeBase@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp