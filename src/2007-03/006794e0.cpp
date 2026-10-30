// roc 2007-03 006794e0  unit: seg_00670000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006794e0
//
// 006794e0  56                   push esi
// 006794e1  57                   push edi
// 006794e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006794e6  8bf1                 mov esi, ecx
// 006794e8  8b06                 mov eax, dword ptr [esi]
// 006794ea  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006794ed  57                   push edi
// 006794ee  ffd2                 call edx
// 006794f0  8b442420             mov eax, dword ptr [esp + 0x20]
// 006794f4  85c0                 test eax, eax
// 006794f6  7409                 je 0x679501
// 006794f8  833800               cmp dword ptr [eax], 0
// 006794fb  0f8486000000         je 0x679587
// 00679501  85ff                 test edi, edi
// 00679503  8b442410             mov eax, dword ptr [esp + 0x10]
// 00679507  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067950b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067950f  89461c               mov dword ptr [esi + 0x1c], eax
// 00679512  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00679516  894e20               mov dword ptr [esi + 0x20], ecx
// 00679519  895624               mov dword ptr [esi + 0x24], edx
// 0067951c  894628               mov dword ptr [esi + 0x28], eax
// 0067951f  7466                 je 0x679587
// 00679521  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00679524  85c9                 test ecx, ecx
// 00679526  745f                 je 0x679587
// 00679528  8b01                 mov eax, dword ptr [ecx]
// 0067952a  8b7f20               mov edi, dword ptr [edi + 0x20]
// 0067952d  6a02                 push 2
// 0067952f  8d542414             lea edx, [esp + 0x14]
// 00679533  52                   push edx
// 00679534  8b5020               mov edx, dword ptr [eax + 0x20]
// 00679537  ffd2                 call edx
// 00679539  50                   push eax
// 0067953a  57                   push edi
// 0067953b  ff15dcee7700         call dword ptr [0x77eedc]
// 00679541  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00679547  85c0                 test eax, eax
// 00679549  7421                 je 0x67956c
// 0067954b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067954f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00679553  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00679557  6a01                 push 1
// 00679559  2bd1                 sub edx, ecx
// 0067955b  52                   push edx
// 0067955c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00679560  2bfa                 sub edi, edx
// 00679562  57                   push edi
// 00679563  51                   push ecx
// 00679564  52                   push edx
// 00679565  50                   push eax
// 00679566  ff15dced7700         call dword ptr [0x77eddc]
// 0067956c  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00679572  85c0                 test eax, eax
// 00679574  7411                 je 0x679587
// 00679576  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0067957c  83e101               and ecx, 1
// 0067957f  51                   push ecx
// 00679580  50                   push eax
// 00679581  ff1568ee7700         call dword ptr [0x77ee68]
// 00679587  5f                   pop edi
// 00679588  5e                   pop esi
// 00679589  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?OnSizeParent@CXTPDockingPane@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
