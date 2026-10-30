// roc 2009-12 00877520  unit: CXTPControlGallery  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877520
//
// 00877520  56                   push esi
// 00877521  8bf1                 mov esi, ecx
// 00877523  8b06                 mov eax, dword ptr [esi]
// 00877525  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0087752b  ffd2                 call edx
// 0087752d  85c0                 test eax, eax
// 0087752f  7424                 je 0x877555
// 00877531  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 00877537  8b5024               mov edx, dword ptr [eax + 0x24]
// 0087753a  8d8e84010000         lea ecx, [esi + 0x184]
// 00877540  ffd2                 call edx
// 00877542  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00877546  8b10                 mov edx, dword ptr [eax]
// 00877548  8b520c               mov edx, dword ptr [edx + 0xc]
// 0087754b  56                   push esi
// 0087754c  51                   push ecx
// 0087754d  8bc8                 mov ecx, eax
// 0087754f  ffd2                 call edx
// 00877551  5e                   pop esi
// 00877552  c20400               ret 4
// 00877555  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0087755b  8b5024               mov edx, dword ptr [eax + 0x24]
// 0087755e  81c684010000         add esi, 0x184
// 00877564  8bce                 mov ecx, esi
// 00877566  ffd2                 call edx
// 00877568  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087756c  8b10                 mov edx, dword ptr [eax]
// 0087756e  8b5208               mov edx, dword ptr [edx + 8]
// 00877571  56                   push esi
// 00877572  51                   push ecx
// 00877573  8bc8                 mov ecx, eax
// 00877575  ffd2                 call edx
// 00877577  5e                   pop esi
// 00877578  c20400               ret 4
// copied from an identical function in another client (function ?DrawScrollBar@CXTPControlGallery@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp