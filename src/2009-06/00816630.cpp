// from server: 100% by tester
// roc 2008-06 0079af10  unit: CXTPRibbonControlSystemPopupBarButton  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079af10
//
// 0079af10  83ec30               sub esp, 0x30
// 0079af13  53                   push ebx
// 0079af14  56                   push esi
// 0079af15  57                   push edi
// 0079af16  8bf1                 mov esi, ecx
// 0079af18  e82303f1ff           call 0x6ab240
// 0079af1d  68d4d98600           push 0x86d9d4
// 0079af22  8bc8                 mov ecx, eax
// 0079af24  e8c7a7f9ff           call 0x7356f0
// 0079af29  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0079af2d  8bf8                 mov edi, eax
// 0079af2f  85ff                 test edi, edi
// 0079af31  0f848c000000         je 0x79afc3
// 0079af37  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0079af3d  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0079af43  b802000000           mov eax, 2
// 0079af48  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0079af4c  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 0079af52  89542420             mov dword ptr [esp + 0x20], edx
// 0079af56  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 0079af5c  8944240c             mov dword ptr [esp + 0xc], eax
// 0079af60  89442410             mov dword ptr [esp + 0x10], eax
// 0079af64  89442414             mov dword ptr [esp + 0x14], eax
// 0079af68  89442418             mov dword ptr [esp + 0x18], eax
// 0079af6c  50                   push eax
// 0079af6d  8b06                 mov eax, dword ptr [esi]
// 0079af6f  894c2428             mov dword ptr [esp + 0x28], ecx
// 0079af73  8954242c             mov dword ptr [esp + 0x2c], edx
// 0079af77  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0079af7a  8bce                 mov ecx, esi
// 0079af7c  ffd2                 call edx
// 0079af7e  f7d8                 neg eax
// 0079af80  1bc0                 sbb eax, eax
// 0079af82  f7d8                 neg eax
// 0079af84  50                   push eax
// 0079af85  8d442434             lea eax, [esp + 0x34]
// 0079af89  50                   push eax
// 0079af8a  8bcf                 mov ecx, edi
// 0079af8c  e89f27ffff           call 0x78d730
// 0079af91  8b10                 mov edx, dword ptr [eax]
// 0079af93  68ff00ff00           push 0xff00ff
// 0079af98  8d4c2410             lea ecx, [esp + 0x10]
// 0079af9c  51                   push ecx
// 0079af9d  83ec10               sub esp, 0x10
// 0079afa0  8bcc                 mov ecx, esp
// 0079afa2  8911                 mov dword ptr [ecx], edx
// 0079afa4  8b5004               mov edx, dword ptr [eax + 4]
// 0079afa7  895104               mov dword ptr [ecx + 4], edx
// 0079afaa  8b5008               mov edx, dword ptr [eax + 8]
// 0079afad  8b400c               mov eax, dword ptr [eax + 0xc]
// 0079afb0  895108               mov dword ptr [ecx + 8], edx
// 0079afb3  89410c               mov dword ptr [ecx + 0xc], eax
// 0079afb6  8d4c2434             lea ecx, [esp + 0x34]
// 0079afba  51                   push ecx
// 0079afbb  53                   push ebx
// 0079afbc  8bcf                 mov ecx, edi
// 0079afbe  e8ad2cffff           call 0x78dc70
// 0079afc3  8bce                 mov ecx, esi
// 0079afc5  e87602f1ff           call 0x6ab240
// 0079afca  8b10                 mov edx, dword ptr [eax]
// 0079afcc  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0079afcf  6a01                 push 1
// 0079afd1  56                   push esi
// 0079afd2  53                   push ebx
// 0079afd3  8d4c2418             lea ecx, [esp + 0x18]
// 0079afd7  51                   push ecx
// 0079afd8  8bc8                 mov ecx, eax
// 0079afda  ffd2                 call edx
// 0079afdc  5f                   pop edi
// 0079afdd  5e                   pop esi
// 0079afde  5b                   pop ebx
// 0079afdf  83c430               add esp, 0x30
// 0079afe2  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?Draw@CXTPRibbonControlSystemPopupBarButton@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp
