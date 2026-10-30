// roc 2011-06 008747f0  unit: CXTPToolTipContext::CLunaToolTip  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008747f0
//
// 008747f0  56                   push esi
// 008747f1  8bf1                 mov esi, ecx
// 008747f3  e8e80bfdff           call 0x8453e0
// 008747f8  8bc8                 mov ecx, eax
// 008747fa  e8e109fdff           call 0x8451e0
// 008747ff  48                   dec eax
// 00874800  83f804               cmp eax, 4
// 00874803  0f87bb000000         ja 0x8748c4
// 00874809  ff248500498700       jmp dword ptr [eax*4 + 0x874900]
// 00874810  8b742408             mov esi, dword ptr [esp + 8]
// 00874814  6a00                 push 0
// 00874816  68fff2c800           push 0xc8f2ff
// 0087481b  68ffd49700           push 0x97d4ff
// 00874820  8d44241c             lea eax, [esp + 0x1c]
// 00874824  50                   push eax
// 00874825  56                   push esi
// 00874826  e855a5feff           call 0x85ed80
// 0087482b  8bc8                 mov ecx, eax
// 0087482d  e87ea5feff           call 0x85edb0
// 00874832  6800008000           push 0x800000
// 00874837  6800008000           push 0x800000
// 0087483c  8d4c2418             lea ecx, [esp + 0x18]
// 00874840  51                   push ecx
// 00874841  8bce                 mov ecx, esi
// 00874843  e8d265f9ff           call 0x80ae1a
// 00874848  5e                   pop esi
// 00874849  c21800               ret 0x18
// 0087484c  8b742408             mov esi, dword ptr [esp + 8]
// 00874850  6a00                 push 0
// 00874852  68fff2c800           push 0xc8f2ff
// 00874857  68ffd49700           push 0x97d4ff
// 0087485c  8d54241c             lea edx, [esp + 0x1c]
// 00874860  52                   push edx
// 00874861  56                   push esi
// 00874862  e819a5feff           call 0x85ed80
// 00874867  8bc8                 mov ecx, eax
// 00874869  e842a5feff           call 0x85edb0
// 0087486e  683f5d3800           push 0x385d3f
// 00874873  683f5d3800           push 0x385d3f
// 00874878  8d442418             lea eax, [esp + 0x18]
// 0087487c  50                   push eax
// 0087487d  8bce                 mov ecx, esi
// 0087487f  e89665f9ff           call 0x80ae1a
// 00874884  5e                   pop esi
// 00874885  c21800               ret 0x18
// 00874888  8b742408             mov esi, dword ptr [esp + 8]
// 0087488c  6a00                 push 0
// 0087488e  68fff2c800           push 0xc8f2ff
// 00874893  68ffd49700           push 0x97d4ff
// 00874898  8d4c241c             lea ecx, [esp + 0x1c]
// 0087489c  51                   push ecx
// 0087489d  56                   push esi
// 0087489e  e8dda4feff           call 0x85ed80
// 008748a3  8bc8                 mov ecx, eax
// 008748a5  e806a5feff           call 0x85edb0
// 008748aa  684b4b6f00           push 0x6f4b4b
// 008748af  684b4b6f00           push 0x6f4b4b
// 008748b4  8d542418             lea edx, [esp + 0x18]
// 008748b8  52                   push edx
// 008748b9  8bce                 mov ecx, esi
// 008748bb  e85a65f9ff           call 0x80ae1a
// 008748c0  5e                   pop esi
// 008748c1  c21800               ret 0x18
// 008748c4  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008748c7  6a00                 push 0
// 008748c9  68ffffff00           push 0xffffff
// 008748ce  e85dd1ffff           call 0x871a30
// 008748d3  8b742410             mov esi, dword ptr [esp + 0x10]
// 008748d7  50                   push eax
// 008748d8  8d44241c             lea eax, [esp + 0x1c]
// 008748dc  50                   push eax
// 008748dd  56                   push esi
// 008748de  e89da4feff           call 0x85ed80
// 008748e3  8bc8                 mov ecx, eax
// 008748e5  e8c6a4feff           call 0x85edb0
// 008748ea  6a00                 push 0
// 008748ec  6a00                 push 0
// 008748ee  8d4c2418             lea ecx, [esp + 0x18]
// 008748f2  51                   push ecx
// 008748f3  8bce                 mov ecx, esi
// 008748f5  e82065f9ff           call 0x80ae1a
// 008748fa  5e                   pop esi
// 008748fb  c21800               ret 0x18
// 008748fe  8bff                 mov edi, edi
// 00874900  104887               adc byte ptr [eax - 0x79], cl
// 00874903  004c4887             add byte ptr [eax + ecx*2 - 0x79], cl
// 00874907  008848870010         add byte ptr [eax + 0x10008748], cl
// 0087490d  48                   dec eax
// 0087490e  8700                 xchg dword ptr [eax], eax
// 00874910  104887               adc byte ptr [eax - 0x79], cl
// copied from an identical function in another client (function ?DrawBackground@CLunaToolTip@CXTPToolTipContext@@UAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp