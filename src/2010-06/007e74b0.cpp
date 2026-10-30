// roc 2010-06 007e74b0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e74b0
//
// 007e74b0  51                   push ecx
// 007e74b1  56                   push esi
// 007e74b2  8bf1                 mov esi, ecx
// 007e74b4  837e0400             cmp dword ptr [esi + 4], 0
// 007e74b8  0f84d2000000         je 0x7e7590
// 007e74be  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e74c2  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e74c6  53                   push ebx
// 007e74c7  55                   push ebp
// 007e74c8  57                   push edi
// 007e74c9  8d442410             lea eax, [esp + 0x10]
// 007e74cd  50                   push eax
// 007e74ce  51                   push ecx
// 007e74cf  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e74d2  52                   push edx
// 007e74d3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007e74db  e8740efcff           call 0x7a8354
// 007e74e0  8b2d54ba9e00         mov ebp, dword ptr [0x9eba54]
// 007e74e6  6a00                 push 0
// 007e74e8  8bd8                 mov ebx, eax
// 007e74ea  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e74ed  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e74f0  6a09                 push 9
// 007e74f2  680a110000           push 0x110a
// 007e74f7  50                   push eax
// 007e74f8  ffd5                 call ebp
// 007e74fa  f644241050           test byte ptr [esp + 0x10], 0x50
// 007e74ff  8bf8                 mov edi, eax
// 007e7501  7537                 jne 0x7e753a
// 007e7503  8bce                 mov ecx, esi
// 007e7505  e866e4ffff           call 0x7e5970
// 007e750a  84c0                 test al, al
// 007e750c  7460                 je 0x7e756e
// 007e750e  f64424180c           test byte ptr [esp + 0x18], 0xc
// 007e7513  8a442410             mov al, byte ptr [esp + 0x10]
// 007e7517  7531                 jne 0x7e754a
// 007e7519  a804                 test al, 4
// 007e751b  742d                 je 0x7e754a
// 007e751d  807e3900             cmp byte ptr [esi + 0x39], 0
// 007e7521  7427                 je 0x7e754a
// 007e7523  3bdf                 cmp ebx, edi
// 007e7525  7523                 jne 0x7e754a
// 007e7527  6a00                 push 0
// 007e7529  6a00                 push 0
// 007e752b  8bce                 mov ecx, esi
// 007e752d  e89ef2ffff           call 0x7e67d0
// 007e7532  53                   push ebx
// 007e7533  8bce                 mov ecx, esi
// 007e7535  e856f1ffff           call 0x7e6690
// 007e753a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e753d  e82e0afcff           call 0x7a7f70
// 007e7542  5f                   pop edi
// 007e7543  5d                   pop ebp
// 007e7544  5b                   pop ebx
// 007e7545  5e                   pop esi
// 007e7546  59                   pop ecx
// 007e7547  c20c00               ret 0xc
// 007e754a  a846                 test al, 0x46
// 007e754c  7506                 jne 0x7e7554
// 007e754e  c6463900             mov byte ptr [esi + 0x39], 0
// 007e7552  eb1a                 jmp 0x7e756e
// 007e7554  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e7557  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e755a  6a00                 push 0
// 007e755c  6a09                 push 9
// 007e755e  680a110000           push 0x110a
// 007e7563  51                   push ecx
// 007e7564  ffd5                 call ebp
// 007e7566  3bc7                 cmp eax, edi
// 007e7568  7504                 jne 0x7e756e
// 007e756a  c6463901             mov byte ptr [esi + 0x39], 1
// 007e756e  8b442420             mov eax, dword ptr [esp + 0x20]
// 007e7572  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007e7576  8b16                 mov edx, dword ptr [esi]
// 007e7578  8b5254               mov edx, dword ptr [edx + 0x54]
// 007e757b  50                   push eax
// 007e757c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007e7580  51                   push ecx
// 007e7581  50                   push eax
// 007e7582  6a01                 push 1
// 007e7584  8bce                 mov ecx, esi
// 007e7586  ffd2                 call edx
// 007e7588  5f                   pop edi
// 007e7589  5d                   pop ebp
// 007e758a  5b                   pop ebx
// 007e758b  5e                   pop esi
// 007e758c  59                   pop ecx
// 007e758d  c20c00               ret 0xc
// 007e7590  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e7593  e8d809fcff           call 0x7a7f70
// 007e7598  5e                   pop esi
// 007e7599  59                   pop ecx
// 007e759a  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp