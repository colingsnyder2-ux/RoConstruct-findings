// roc 2009-12 0086ce20  unit: CSelectionCaption  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ce20
//
// 0086ce20  83ec10               sub esp, 0x10
// 0086ce23  56                   push esi
// 0086ce24  57                   push edi
// 0086ce25  8bf1                 mov esi, ecx
// 0086ce27  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086ce2a  8d442408             lea eax, [esp + 8]
// 0086ce2e  50                   push eax
// 0086ce2f  51                   push ecx
// 0086ce30  ff1550cc9800         call dword ptr [0x98cc50]
// 0086ce36  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086ce39  52                   push edx
// 0086ce3a  ff15e0cb9800         call dword ptr [0x98cbe0]
// 0086ce40  50                   push eax
// 0086ce41  e8ea950b00           call 0x926430
// 0086ce46  8bf8                 mov edi, eax
// 0086ce48  8b06                 mov eax, dword ptr [esi]
// 0086ce4a  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0086ce50  8d4c2408             lea ecx, [esp + 8]
// 0086ce54  51                   push ecx
// 0086ce55  57                   push edi
// 0086ce56  8bce                 mov ecx, esi
// 0086ce58  ffd2                 call edx
// 0086ce5a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086ce5e  85c0                 test eax, eax
// 0086ce60  741a                 je 0x86ce7c
// 0086ce62  50                   push eax
// 0086ce63  8d8ed0000000         lea ecx, [esi + 0xd0]
// 0086ce69  ff155cde9800         call dword ptr [0x98de5c]
// 0086ce6f  8b06                 mov eax, dword ptr [esi]
// 0086ce71  8b9078010000         mov edx, dword ptr [eax + 0x178]
// 0086ce77  57                   push edi
// 0086ce78  8bce                 mov ecx, esi
// 0086ce7a  ffd2                 call edx
// 0086ce7c  8b442420             mov eax, dword ptr [esp + 0x20]
// 0086ce80  85c0                 test eax, eax
// 0086ce82  7418                 je 0x86ce9c
// 0086ce84  8d4c2408             lea ecx, [esp + 8]
// 0086ce88  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0086ce8e  8b06                 mov eax, dword ptr [esi]
// 0086ce90  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 0086ce96  51                   push ecx
// 0086ce97  57                   push edi
// 0086ce98  8bce                 mov ecx, esi
// 0086ce9a  ffd2                 call edx
// 0086ce9c  8b4704               mov eax, dword ptr [edi + 4]
// 0086ce9f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086cea2  50                   push eax
// 0086cea3  51                   push ecx
// 0086cea4  ff15d8cb9800         call dword ptr [0x98cbd8]
// 0086ceaa  5f                   pop edi
// 0086ceab  5e                   pop esi
// 0086ceac  83c410               add esp, 0x10
// 0086ceaf  c20800               ret 8
// copied from an identical function in another client (function ?UpdateCaption@CXTCaption@@UAEXPBDPAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp