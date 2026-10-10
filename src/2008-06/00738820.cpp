// roc 2008-06 00738820  unit: CXTPControlGalleryOffice2007Theme  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00738820
//
// 00738820  53                   push ebx
// 00738821  56                   push esi
// 00738822  57                   push edi
// 00738823  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00738827  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0073882d  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 00738834  8bd9                 mov ebx, ecx
// 00738836  7515                 jne 0x73884d
// 00738838  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0073883f  750c                 jne 0x73884d
// 00738841  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 00738844  6a29                 push 0x29
// 00738846  e82558f7ff           call 0x6ae070
// 0073884b  eb33                 jmp 0x738880
// 0073884d  8b07                 mov eax, dword ptr [edi]
// 0073884f  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00738852  8bcf                 mov ecx, edi
// 00738854  ffd2                 call edx
// 00738856  85c0                 test eax, eax
// 00738858  7423                 je 0x73887d
// 0073885a  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 00738860  83f8ff               cmp eax, -1
// 00738863  750f                 jne 0x738874
// 00738865  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 0073886b  85c9                 test ecx, ecx
// 0073886d  7405                 je 0x738874
// 0073886f  e84c2ff7ff           call 0x6ab7c0
// 00738874  85c0                 test eax, eax
// 00738876  7405                 je 0x73887d
// 00738878  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0073887b  eb03                 jmp 0x738880
// 0073887d  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00738880  8b742410             mov esi, dword ptr [esp + 0x10]
// 00738884  50                   push eax
// 00738885  8d44241c             lea eax, [esp + 0x1c]
// 00738889  50                   push eax
// 0073888a  8bce                 mov ecx, esi
// 0073888c  e8cd8af6ff           call 0x6a135e
// 00738891  83bf3002000000       cmp dword ptr [edi + 0x230], 0
// 00738898  7411                 je 0x7388ab
// 0073889a  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0073889d  50                   push eax
// 0073889e  50                   push eax
// 0073889f  8d4c2420             lea ecx, [esp + 0x20]
// 007388a3  51                   push ecx
// 007388a4  8bce                 mov ecx, esi
// 007388a6  e8ad8af6ff           call 0x6a1358
// 007388ab  8bcf                 mov ecx, edi
// 007388ad  e89e55ffff           call 0x72de50
// 007388b2  85c0                 test eax, eax
// 007388b4  7422                 je 0x7388d8
// 007388b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 007388ba  8b542420             mov edx, dword ptr [esp + 0x20]
// 007388be  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007388c2  68c5c5c500           push 0xc5c5c5
// 007388c7  6a01                 push 1
// 007388c9  2bd0                 sub edx, eax
// 007388cb  52                   push edx
// 007388cc  83c1fe               add ecx, -2
// 007388cf  51                   push ecx
// 007388d0  50                   push eax
// 007388d1  8bce                 mov ecx, esi
// 007388d3  e868370800           call 0x7bc040
// 007388d8  5f                   pop edi
// 007388d9  5e                   pop esi
// 007388da  5b                   pop ebx
// 007388db  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPOffice2007Theme.cpp (function ?FillControl@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPControlGallery@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOffice2007Theme.cpp
