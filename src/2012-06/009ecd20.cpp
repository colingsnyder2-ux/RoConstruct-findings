// roc 2012-06 009ecd20  unit: CXTPToolTipContext::CLunaToolTip  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ecd20
//
// 009ecd20  56                   push esi
// 009ecd21  8bf1                 mov esi, ecx
// 009ecd23  e8380bfdff           call 0x9bd860
// 009ecd28  8bc8                 mov ecx, eax
// 009ecd2a  e8e108fdff           call 0x9bd610
// 009ecd2f  48                   dec eax
// 009ecd30  83f804               cmp eax, 4
// 009ecd33  0f87bb000000         ja 0x9ecdf4
// 009ecd39  ff248530ce9e00       jmp dword ptr [eax*4 + 0x9ece30]
// 009ecd40  8b742408             mov esi, dword ptr [esp + 8]
// 009ecd44  6a00                 push 0
// 009ecd46  68fff2c800           push 0xc8f2ff
// 009ecd4b  68ffd49700           push 0x97d4ff
// 009ecd50  8d44241c             lea eax, [esp + 0x1c]
// 009ecd54  50                   push eax
// 009ecd55  56                   push esi
// 009ecd56  e835a4feff           call 0x9d7190
// 009ecd5b  8bc8                 mov ecx, eax
// 009ecd5d  e85ea4feff           call 0x9d71c0
// 009ecd62  6800008000           push 0x800000
// 009ecd67  6800008000           push 0x800000
// 009ecd6c  8d4c2418             lea ecx, [esp + 0x18]
// 009ecd70  51                   push ecx
// 009ecd71  8bce                 mov ecx, esi
// 009ecd73  e82e61f9ff           call 0x982ea6
// 009ecd78  5e                   pop esi
// 009ecd79  c21800               ret 0x18
// 009ecd7c  8b742408             mov esi, dword ptr [esp + 8]
// 009ecd80  6a00                 push 0
// 009ecd82  68fff2c800           push 0xc8f2ff
// 009ecd87  68ffd49700           push 0x97d4ff
// 009ecd8c  8d54241c             lea edx, [esp + 0x1c]
// 009ecd90  52                   push edx
// 009ecd91  56                   push esi
// 009ecd92  e8f9a3feff           call 0x9d7190
// 009ecd97  8bc8                 mov ecx, eax
// 009ecd99  e822a4feff           call 0x9d71c0
// 009ecd9e  683f5d3800           push 0x385d3f
// 009ecda3  683f5d3800           push 0x385d3f
// 009ecda8  8d442418             lea eax, [esp + 0x18]
// 009ecdac  50                   push eax
// 009ecdad  8bce                 mov ecx, esi
// 009ecdaf  e8f260f9ff           call 0x982ea6
// 009ecdb4  5e                   pop esi
// 009ecdb5  c21800               ret 0x18
// 009ecdb8  8b742408             mov esi, dword ptr [esp + 8]
// 009ecdbc  6a00                 push 0
// 009ecdbe  68fff2c800           push 0xc8f2ff
// 009ecdc3  68ffd49700           push 0x97d4ff
// 009ecdc8  8d4c241c             lea ecx, [esp + 0x1c]
// 009ecdcc  51                   push ecx
// 009ecdcd  56                   push esi
// 009ecdce  e8bda3feff           call 0x9d7190
// 009ecdd3  8bc8                 mov ecx, eax
// 009ecdd5  e8e6a3feff           call 0x9d71c0
// 009ecdda  684b4b6f00           push 0x6f4b4b
// 009ecddf  684b4b6f00           push 0x6f4b4b
// 009ecde4  8d542418             lea edx, [esp + 0x18]
// 009ecde8  52                   push edx
// 009ecde9  8bce                 mov ecx, esi
// 009ecdeb  e8b660f9ff           call 0x982ea6
// 009ecdf0  5e                   pop esi
// 009ecdf1  c21800               ret 0x18
// 009ecdf4  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 009ecdf7  6a00                 push 0
// 009ecdf9  68ffffff00           push 0xffffff
// 009ecdfe  e87dd1ffff           call 0x9e9f80
// 009ece03  8b742410             mov esi, dword ptr [esp + 0x10]
// 009ece07  50                   push eax
// 009ece08  8d44241c             lea eax, [esp + 0x1c]
// 009ece0c  50                   push eax
// 009ece0d  56                   push esi
// 009ece0e  e87da3feff           call 0x9d7190
// 009ece13  8bc8                 mov ecx, eax
// 009ece15  e8a6a3feff           call 0x9d71c0
// 009ece1a  6a00                 push 0
// 009ece1c  6a00                 push 0
// 009ece1e  8d4c2418             lea ecx, [esp + 0x18]
// 009ece22  51                   push ecx
// 009ece23  8bce                 mov ecx, esi
// 009ece25  e87c60f9ff           call 0x982ea6
// 009ece2a  5e                   pop esi
// 009ece2b  c21800               ret 0x18
// 009ece2e  8bff                 mov edi, edi
// 009ece30  40                   inc eax
// 009ece31  cd9e                 int 0x9e
// 009ece33  007ccd9e             add byte ptr [ebp + ecx*8 - 0x62], bh
// 009ece37  00b8cd9e0040         add byte ptr [eax + 0x40009ecd], bh
// 009ece3d  cd9e                 int 0x9e
// 009ece3f  0040cd               add byte ptr [eax - 0x33], al
// 009ece42  9e                   sahf 
// copied from an identical function in another client (function ?DrawBackground@CLunaToolTip@CXTPToolTipContext@@UAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp