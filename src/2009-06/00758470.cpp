// roc 2009-06 00758470  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00758470
//
// 00758470  51                   push ecx
// 00758471  56                   push esi
// 00758472  8bf1                 mov esi, ecx
// 00758474  837e0400             cmp dword ptr [esi + 4], 0
// 00758478  0f84d2000000         je 0x758550
// 0075847e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00758482  8b542410             mov edx, dword ptr [esp + 0x10]
// 00758486  53                   push ebx
// 00758487  55                   push ebp
// 00758488  57                   push edi
// 00758489  8d442410             lea eax, [esp + 0x10]
// 0075848d  50                   push eax
// 0075848e  51                   push ecx
// 0075848f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00758492  52                   push edx
// 00758493  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0075849b  e84c0ffcff           call 0x7193ec
// 007584a0  8b2d90ee8900         mov ebp, dword ptr [0x89ee90]
// 007584a6  6a00                 push 0
// 007584a8  8bd8                 mov ebx, eax
// 007584aa  8b4634               mov eax, dword ptr [esi + 0x34]
// 007584ad  8b4020               mov eax, dword ptr [eax + 0x20]
// 007584b0  6a09                 push 9
// 007584b2  680a110000           push 0x110a
// 007584b7  50                   push eax
// 007584b8  ffd5                 call ebp
// 007584ba  f644241050           test byte ptr [esp + 0x10], 0x50
// 007584bf  8bf8                 mov edi, eax
// 007584c1  7537                 jne 0x7584fa
// 007584c3  8bce                 mov ecx, esi
// 007584c5  e8a6e4ffff           call 0x756970
// 007584ca  84c0                 test al, al
// 007584cc  7460                 je 0x75852e
// 007584ce  f64424180c           test byte ptr [esp + 0x18], 0xc
// 007584d3  8a442410             mov al, byte ptr [esp + 0x10]
// 007584d7  7531                 jne 0x75850a
// 007584d9  a804                 test al, 4
// 007584db  742d                 je 0x75850a
// 007584dd  807e3900             cmp byte ptr [esi + 0x39], 0
// 007584e1  7427                 je 0x75850a
// 007584e3  3bdf                 cmp ebx, edi
// 007584e5  7523                 jne 0x75850a
// 007584e7  6a00                 push 0
// 007584e9  6a00                 push 0
// 007584eb  8bce                 mov ecx, esi
// 007584ed  e89ef2ffff           call 0x757790
// 007584f2  53                   push ebx
// 007584f3  8bce                 mov ecx, esi
// 007584f5  e856f1ffff           call 0x757650
// 007584fa  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007584fd  e8060bfcff           call 0x719008
// 00758502  5f                   pop edi
// 00758503  5d                   pop ebp
// 00758504  5b                   pop ebx
// 00758505  5e                   pop esi
// 00758506  59                   pop ecx
// 00758507  c20c00               ret 0xc
// 0075850a  a846                 test al, 0x46
// 0075850c  7506                 jne 0x758514
// 0075850e  c6463900             mov byte ptr [esi + 0x39], 0
// 00758512  eb1a                 jmp 0x75852e
// 00758514  8b4634               mov eax, dword ptr [esi + 0x34]
// 00758517  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0075851a  6a00                 push 0
// 0075851c  6a09                 push 9
// 0075851e  680a110000           push 0x110a
// 00758523  51                   push ecx
// 00758524  ffd5                 call ebp
// 00758526  3bc7                 cmp eax, edi
// 00758528  7504                 jne 0x75852e
// 0075852a  c6463901             mov byte ptr [esi + 0x39], 1
// 0075852e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00758532  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00758536  8b16                 mov edx, dword ptr [esi]
// 00758538  8b5254               mov edx, dword ptr [edx + 0x54]
// 0075853b  50                   push eax
// 0075853c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00758540  51                   push ecx
// 00758541  50                   push eax
// 00758542  6a01                 push 1
// 00758544  8bce                 mov ecx, esi
// 00758546  ffd2                 call edx
// 00758548  5f                   pop edi
// 00758549  5d                   pop ebp
// 0075854a  5b                   pop ebx
// 0075854b  5e                   pop esi
// 0075854c  59                   pop ecx
// 0075854d  c20c00               ret 0xc
// 00758550  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00758553  e8b00afcff           call 0x719008
// 00758558  5e                   pop esi
// 00758559  59                   pop ecx
// 0075855a  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTTreeBase@@IAEXIVCPoint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp