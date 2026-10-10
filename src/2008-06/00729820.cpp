// roc 2008-06 00729820  unit: CXTPRibbonTheme  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00729820
//
// 00729820  83ec30               sub esp, 0x30
// 00729823  837c244000           cmp dword ptr [esp + 0x40], 0
// 00729828  53                   push ebx
// 00729829  56                   push esi
// 0072982a  57                   push edi
// 0072982b  0f84bd000000         je 0x7298ee
// 00729831  8b742448             mov esi, dword ptr [esp + 0x48]
// 00729835  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0072983b  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00729841  8944241c             mov dword ptr [esp + 0x1c], eax
// 00729845  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0072984b  89542420             mov dword ptr [esp + 0x20], edx
// 0072984f  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 00729855  68001c8600           push 0x861c00
// 0072985a  89442428             mov dword ptr [esp + 0x28], eax
// 0072985e  8954242c             mov dword ptr [esp + 0x2c], edx
// 00729862  e889be0000           call 0x7356f0
// 00729867  8bf8                 mov edi, eax
// 00729869  8b06                 mov eax, dword ptr [esi]
// 0072986b  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0072986e  8bce                 mov ecx, esi
// 00729870  33db                 xor ebx, ebx
// 00729872  ffd2                 call edx
// 00729874  85c0                 test eax, eax
// 00729876  7405                 je 0x72987d
// 00729878  bb01000000           mov ebx, 1
// 0072987d  8b06                 mov eax, dword ptr [esi]
// 0072987f  8b5078               mov edx, dword ptr [eax + 0x78]
// 00729882  8bce                 mov ecx, esi
// 00729884  ffd2                 call edx
// 00729886  b902000000           mov ecx, 2
// 0072988b  85c0                 test eax, eax
// 0072988d  7402                 je 0x729891
// 0072988f  8bd9                 mov ebx, ecx
// 00729891  85ff                 test edi, edi
// 00729893  7459                 je 0x7298ee
// 00729895  6a04                 push 4
// 00729897  53                   push ebx
// 00729898  8d442434             lea eax, [esp + 0x34]
// 0072989c  894c2418             mov dword ptr [esp + 0x18], ecx
// 007298a0  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007298a4  894c2420             mov dword ptr [esp + 0x20], ecx
// 007298a8  50                   push eax
// 007298a9  8bcf                 mov ecx, edi
// 007298ab  c744241803000000     mov dword ptr [esp + 0x18], 3
// 007298b3  e8783e0600           call 0x78d730
// 007298b8  8b10                 mov edx, dword ptr [eax]
// 007298ba  68ff00ff00           push 0xff00ff
// 007298bf  8d4c2410             lea ecx, [esp + 0x10]
// 007298c3  51                   push ecx
// 007298c4  83ec10               sub esp, 0x10
// 007298c7  8bcc                 mov ecx, esp
// 007298c9  8911                 mov dword ptr [ecx], edx
// 007298cb  8b5004               mov edx, dword ptr [eax + 4]
// 007298ce  895104               mov dword ptr [ecx + 4], edx
// 007298d1  8b5008               mov edx, dword ptr [eax + 8]
// 007298d4  8b400c               mov eax, dword ptr [eax + 0xc]
// 007298d7  895108               mov dword ptr [ecx + 8], edx
// 007298da  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007298de  89410c               mov dword ptr [ecx + 0xc], eax
// 007298e1  8d4c2434             lea ecx, [esp + 0x34]
// 007298e5  51                   push ecx
// 007298e6  52                   push edx
// 007298e7  8bcf                 mov ecx, edi
// 007298e9  e882430600           call 0x78dc70
// 007298ee  8b442440             mov eax, dword ptr [esp + 0x40]
// 007298f2  5f                   pop edi
// 007298f3  5e                   pop esi
// 007298f4  c7000f000000         mov dword ptr [eax], 0xf
// 007298fa  c740040e000000       mov dword ptr [eax + 4], 0xe
// 00729901  5b                   pop ebx
// 00729902  83c430               add esp, 0x30
// 00729905  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlGroupOption@CXTPRibbonTheme@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp
