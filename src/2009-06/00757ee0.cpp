// roc 2009-06 00757ee0  unit: CXTTreeBase  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00757ee0
//
// 00757ee0  53                   push ebx
// 00757ee1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00757ee5  817b0400010000       cmp dword ptr [ebx + 4], 0x100
// 00757eec  56                   push esi
// 00757eed  57                   push edi
// 00757eee  8bf1                 mov esi, ecx
// 00757ef0  7571                 jne 0x757f63
// 00757ef2  e879eaffff           call 0x756970
// 00757ef7  8b3d90ee8900         mov edi, dword ptr [0x89ee90]
// 00757efd  84c0                 test al, al
// 00757eff  7435                 je 0x757f36
// 00757f01  8b4634               mov eax, dword ptr [esi + 0x34]
// 00757f04  8b4020               mov eax, dword ptr [eax + 0x20]
// 00757f07  6a00                 push 0
// 00757f09  6a00                 push 0
// 00757f0b  680f110000           push 0x110f
// 00757f10  50                   push eax
// 00757f11  ffd7                 call edi
// 00757f13  50                   push eax
// 00757f14  e8e90dfcff           call 0x718d02
// 00757f19  85c0                 test eax, eax
// 00757f1b  7419                 je 0x757f36
// 00757f1d  53                   push ebx
// 00757f1e  ff1548ed8900         call dword ptr [0x89ed48]
// 00757f24  53                   push ebx
// 00757f25  ff154ced8900         call dword ptr [0x89ed4c]
// 00757f2b  5f                   pop edi
// 00757f2c  5e                   pop esi
// 00757f2d  b801000000           mov eax, 1
// 00757f32  5b                   pop ebx
// 00757f33  c20400               ret 4
// 00757f36  837b080d             cmp dword ptr [ebx + 8], 0xd
// 00757f3a  7527                 jne 0x757f63
// 00757f3c  8b4634               mov eax, dword ptr [esi + 0x34]
// 00757f3f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00757f42  6a00                 push 0
// 00757f44  6a09                 push 9
// 00757f46  680a110000           push 0x110a
// 00757f4b  51                   push ecx
// 00757f4c  ffd7                 call edi
// 00757f4e  85c0                 test eax, eax
// 00757f50  7411                 je 0x757f63
// 00757f52  8b5634               mov edx, dword ptr [esi + 0x34]
// 00757f55  50                   push eax
// 00757f56  8b4220               mov eax, dword ptr [edx + 0x20]
// 00757f59  6a03                 push 3
// 00757f5b  6802110000           push 0x1102
// 00757f60  50                   push eax
// 00757f61  ffd7                 call edi
// 00757f63  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00757f66  53                   push ebx
// 00757f67  e8cc10fcff           call 0x719038
// 00757f6c  5f                   pop edi
// 00757f6d  5e                   pop esi
// 00757f6e  5b                   pop ebx
// 00757f6f  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@CXTTreeBase@@MAEHPAUtagMSG@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp