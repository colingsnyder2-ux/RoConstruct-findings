// roc 2010-06 00828680  unit: CXTPControlGallery  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00828680
//
// 00828680  83ec10               sub esp, 0x10
// 00828683  53                   push ebx
// 00828684  56                   push esi
// 00828685  57                   push edi
// 00828686  8bf9                 mov edi, ecx
// 00828688  837f6800             cmp dword ptr [edi + 0x68], 0
// 0082868c  7408                 je 0x828696
// 0082868e  8bb78c000000         mov esi, dword ptr [edi + 0x8c]
// 00828694  eb06                 jmp 0x82869c
// 00828696  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 0082869c  8d44240c             lea eax, [esp + 0xc]
// 008286a0  8d9f7cfeffff         lea ebx, [edi - 0x184]
// 008286a6  50                   push eax
// 008286a7  8bcb                 mov ecx, ebx
// 008286a9  e8a2cfffff           call 0x825650
// 008286ae  8bcb                 mov ecx, ebx
// 008286b0  e89bbeffff           call 0x824550
// 008286b5  85c0                 test eax, eax
// 008286b7  0f848a000000         je 0x828747
// 008286bd  55                   push ebp
// 008286be  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008286c2  83fd07               cmp ebp, 7
// 008286c5  7747                 ja 0x82870e
// 008286c7  ff24ad50878200       jmp dword ptr [ebp*4 + 0x828750]
// 008286ce  33f6                 xor esi, esi
// 008286d0  eb3c                 jmp 0x82870e
// 008286d2  8bb7a0000000         mov esi, dword ptr [edi + 0xa0]
// 008286d8  eb34                 jmp 0x82870e
// 008286da  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008286dd  2b7024               sub esi, dword ptr [eax + 0x24]
// 008286e0  894c2410             mov dword ptr [esp + 0x10], ecx
// 008286e4  eb28                 jmp 0x82870e
// 008286e6  8b5020               mov edx, dword ptr [eax + 0x20]
// 008286e9  037024               add esi, dword ptr [eax + 0x24]
// 008286ec  89542410             mov dword ptr [esp + 0x10], edx
// 008286f0  eb1c                 jmp 0x82870e
// 008286f2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008286f6  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 008286fa  03f0                 add esi, eax
// 008286fc  eb10                 jmp 0x82870e
// 008286fe  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00828702  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00828706  03f1                 add esi, ecx
// 00828708  eb04                 jmp 0x82870e
// 0082870a  8b742428             mov esi, dword ptr [esp + 0x28]
// 0082870e  8b13                 mov edx, dword ptr [ebx]
// 00828710  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 00828716  8bcb                 mov ecx, ebx
// 00828718  ffd0                 call eax
// 0082871a  85c0                 test eax, eax
// 0082871c  7420                 je 0x82873e
// 0082871e  85ed                 test ebp, ebp
// 00828720  740a                 je 0x82872c
// 00828722  83fd01               cmp ebp, 1
// 00828725  7405                 je 0x82872c
// 00828727  83fd08               cmp ebp, 8
// 0082872a  7512                 jne 0x82873e
// 0082872c  56                   push esi
// 0082872d  8bcb                 mov ecx, ebx
// 0082872f  e87ccfffff           call 0x8256b0
// 00828734  5d                   pop ebp
// 00828735  5f                   pop edi
// 00828736  5e                   pop esi
// 00828737  5b                   pop ebx
// 00828738  83c410               add esp, 0x10
// 0082873b  c20800               ret 8
// 0082873e  56                   push esi
// 0082873f  8bcb                 mov ecx, ebx
// 00828741  e8daf6ffff           call 0x827e20
// 00828746  5d                   pop ebp
// 00828747  5f                   pop edi
// 00828748  5e                   pop esi
// 00828749  5b                   pop ebx
// 0082874a  83c410               add esp, 0x10
// 0082874d  c20800               ret 8
// 00828750  da868200e686         fiadd dword ptr [esi - 0x7919ff7e]
// 00828756  8200f2               add byte ptr [eax], 0xf2
// 00828759  868200fe8682         xchg byte ptr [edx - 0x7d790200], al
// 0082875f  000e                 add byte ptr [esi], cl
// 00828761  8782000a8782         xchg dword ptr [edx - 0x7d78f600], eax
// 00828767  00ce                 add dh, cl
// 00828769  868200d28682         xchg byte ptr [edx - 0x7d792e00], al
// copied from an identical function in another client (function ?DoScroll@CXTPControlGallery@@MAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp