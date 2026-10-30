// roc 2009-12 0086e110  unit: CXTPResourceManager  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e110
//
// 0086e110  53                   push ebx
// 0086e111  56                   push esi
// 0086e112  57                   push edi
// 0086e113  e8a8ffffff           call 0x86e0c0
// 0086e118  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0086e11c  8b1decb19800         mov ebx, dword ptr [0x98b1ec]
// 0086e122  6a05                 push 5
// 0086e124  8bf0                 mov esi, eax
// 0086e126  57                   push edi
// 0086e127  56                   push esi
// 0086e128  ffd3                 call ebx
// 0086e12a  85c0                 test eax, eax
// 0086e12c  7520                 jne 0x86e14e
// 0086e12e  6a05                 push 5
// 0086e130  57                   push edi
// 0086e131  e8a860f8ff           call 0x7f41de
// 0086e136  8bf0                 mov esi, eax
// 0086e138  85f6                 test esi, esi
// 0086e13a  7508                 jne 0x86e144
// 0086e13c  5f                   pop edi
// 0086e13d  5e                   pop esi
// 0086e13e  33c0                 xor eax, eax
// 0086e140  5b                   pop ebx
// 0086e141  c20400               ret 4
// 0086e144  6a05                 push 5
// 0086e146  57                   push edi
// 0086e147  56                   push esi
// 0086e148  ffd3                 call ebx
// 0086e14a  85c0                 test eax, eax
// 0086e14c  74ee                 je 0x86e13c
// 0086e14e  50                   push eax
// 0086e14f  56                   push esi
// 0086e150  ff15f0b19800         call dword ptr [0x98b1f0]
// 0086e156  5f                   pop edi
// 0086e157  5e                   pop esi
// 0086e158  5b                   pop ebx
// 0086e159  c20400               ret 4
// copied from an identical function in another client (function ?LoadDialogTemplate2@CXTPResourceManager@@UAEPAXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp