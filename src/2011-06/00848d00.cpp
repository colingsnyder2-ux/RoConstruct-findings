// roc 2011-06 00848d00  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848d00
//
// 00848d00  51                   push ecx
// 00848d01  56                   push esi
// 00848d02  8bf1                 mov esi, ecx
// 00848d04  837e0400             cmp dword ptr [esi + 4], 0
// 00848d08  0f84d2000000         je 0x848de0
// 00848d0e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00848d12  8b542410             mov edx, dword ptr [esp + 0x10]
// 00848d16  53                   push ebx
// 00848d17  55                   push ebp
// 00848d18  57                   push edi
// 00848d19  8d442410             lea eax, [esp + 0x10]
// 00848d1d  50                   push eax
// 00848d1e  51                   push ecx
// 00848d1f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848d22  52                   push edx
// 00848d23  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00848d2b  e8e21cfcff           call 0x80aa12
// 00848d30  8b2dc019a400         mov ebp, dword ptr [0xa419c0]
// 00848d36  6a00                 push 0
// 00848d38  8bd8                 mov ebx, eax
// 00848d3a  8b4634               mov eax, dword ptr [esi + 0x34]
// 00848d3d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00848d40  6a09                 push 9
// 00848d42  680a110000           push 0x110a
// 00848d47  50                   push eax
// 00848d48  ffd5                 call ebp
// 00848d4a  f644241050           test byte ptr [esp + 0x10], 0x50
// 00848d4f  8bf8                 mov edi, eax
// 00848d51  7537                 jne 0x848d8a
// 00848d53  8bce                 mov ecx, esi
// 00848d55  e8d6e4ffff           call 0x847230
// 00848d5a  84c0                 test al, al
// 00848d5c  7460                 je 0x848dbe
// 00848d5e  f64424180c           test byte ptr [esp + 0x18], 0xc
// 00848d63  8a442410             mov al, byte ptr [esp + 0x10]
// 00848d67  7531                 jne 0x848d9a
// 00848d69  a804                 test al, 4
// 00848d6b  742d                 je 0x848d9a
// 00848d6d  807e3900             cmp byte ptr [esi + 0x39], 0
// 00848d71  7427                 je 0x848d9a
// 00848d73  3bdf                 cmp ebx, edi
// 00848d75  7523                 jne 0x848d9a
// 00848d77  6a00                 push 0
// 00848d79  6a00                 push 0
// 00848d7b  8bce                 mov ecx, esi
// 00848d7d  e89ef2ffff           call 0x848020
// 00848d82  53                   push ebx
// 00848d83  8bce                 mov ecx, esi
// 00848d85  e856f1ffff           call 0x847ee0
// 00848d8a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848d8d  e89c18fcff           call 0x80a62e
// 00848d92  5f                   pop edi
// 00848d93  5d                   pop ebp
// 00848d94  5b                   pop ebx
// 00848d95  5e                   pop esi
// 00848d96  59                   pop ecx
// 00848d97  c20c00               ret 0xc
// 00848d9a  a846                 test al, 0x46
// 00848d9c  7506                 jne 0x848da4
// 00848d9e  c6463900             mov byte ptr [esi + 0x39], 0
// 00848da2  eb1a                 jmp 0x848dbe
// 00848da4  8b4634               mov eax, dword ptr [esi + 0x34]
// 00848da7  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00848daa  6a00                 push 0
// 00848dac  6a09                 push 9
// 00848dae  680a110000           push 0x110a
// 00848db3  51                   push ecx
// 00848db4  ffd5                 call ebp
// 00848db6  3bc7                 cmp eax, edi
// 00848db8  7504                 jne 0x848dbe
// 00848dba  c6463901             mov byte ptr [esi + 0x39], 1
// 00848dbe  8b442420             mov eax, dword ptr [esp + 0x20]
// 00848dc2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00848dc6  8b16                 mov edx, dword ptr [esi]
// 00848dc8  8b5254               mov edx, dword ptr [edx + 0x54]
// 00848dcb  50                   push eax
// 00848dcc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00848dd0  51                   push ecx
// 00848dd1  50                   push eax
// 00848dd2  6a01                 push 1
// 00848dd4  8bce                 mov ecx, esi
// 00848dd6  ffd2                 call edx
// 00848dd8  5f                   pop edi
// 00848dd9  5d                   pop ebp
// 00848dda  5b                   pop ebx
// 00848ddb  5e                   pop esi
// 00848ddc  59                   pop ecx
// 00848ddd  c20c00               ret 0xc
// 00848de0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848de3  e84618fcff           call 0x80a62e
// 00848de8  5e                   pop esi
// 00848de9  59                   pop ecx
// 00848dea  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp