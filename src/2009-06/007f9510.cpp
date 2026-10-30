// roc 2009-06 007f9510  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 568 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f9510
//
// 007f9510  53                   push ebx
// 007f9511  8bd9                 mov ebx, ecx
// 007f9513  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 007f9516  83783c00             cmp dword ptr [eax + 0x3c], 0
// 007f951a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f951e  0f85a9000000         jne 0x7f95cd
// 007f9524  83e901               sub ecx, 1
// 007f9527  0f8486000000         je 0x7f95b3
// 007f952d  83e901               sub ecx, 1
// 007f9530  7445                 je 0x7f9577
// 007f9532  83e901               sub ecx, 1
// 007f9535  0f85f9010000         jne 0x7f9734
// 007f953b  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007f9541  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007f9544  83c008               add eax, 8
// 007f9547  83f9ff               cmp ecx, -1
// 007f954a  7516                 jne 0x7f9562
// 007f954c  8b4004               mov eax, dword ptr [eax + 4]
// 007f954f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f9553  50                   push eax
// 007f9554  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f9558  50                   push eax
// 007f9559  e87202f2ff           call 0x7197d0
// 007f955e  5b                   pop ebx
// 007f955f  c20c00               ret 0xc
// 007f9562  8bc1                 mov eax, ecx
// 007f9564  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f9568  50                   push eax
// 007f9569  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f956d  50                   push eax
// 007f956e  e85d02f2ff           call 0x7197d0
// 007f9573  5b                   pop ebx
// 007f9574  c20c00               ret 0xc
// 007f9577  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007f957d  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007f9580  83c008               add eax, 8
// 007f9583  83f9ff               cmp ecx, -1
// 007f9586  7516                 jne 0x7f959e
// 007f9588  8b4004               mov eax, dword ptr [eax + 4]
// 007f958b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f958f  50                   push eax
// 007f9590  51                   push ecx
// 007f9591  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f9595  e83602f2ff           call 0x7197d0
// 007f959a  5b                   pop ebx
// 007f959b  c20c00               ret 0xc
// 007f959e  8bc1                 mov eax, ecx
// 007f95a0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f95a4  50                   push eax
// 007f95a5  51                   push ecx
// 007f95a6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f95aa  e82102f2ff           call 0x7197d0
// 007f95af  5b                   pop ebx
// 007f95b0  c20c00               ret 0xc
// 007f95b3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f95b7  834004fe             add dword ptr [eax + 4], -2
// 007f95bb  8300fe               add dword ptr [eax], -2
// 007f95be  b902000000           mov ecx, 2
// 007f95c3  014808               add dword ptr [eax + 8], ecx
// 007f95c6  01480c               add dword ptr [eax + 0xc], ecx
// 007f95c9  5b                   pop ebx
// 007f95ca  c20c00               ret 0xc
// 007f95cd  83f903               cmp ecx, 3
// 007f95d0  0f875e010000         ja 0x7f9734
// 007f95d6  56                   push esi
// 007f95d7  57                   push edi
// 007f95d8  ff248d38977f00       jmp dword ptr [ecx*4 + 0x7f9738]
// 007f95df  e83cb5f5ff           call 0x754b20
// 007f95e4  6a0f                 push 0xf
// 007f95e6  8bc8                 mov ecx, eax
// 007f95e8  e8b3acf5ff           call 0x7542a0
// 007f95ed  8bf8                 mov edi, eax
// 007f95ef  e82cb5f5ff           call 0x754b20
// 007f95f4  6a0f                 push 0xf
// 007f95f6  8bc8                 mov ecx, eax
// 007f95f8  e8a3acf5ff           call 0x7542a0
// 007f95fd  8b742414             mov esi, dword ptr [esp + 0x14]
// 007f9601  8b560c               mov edx, dword ptr [esi + 0xc]
// 007f9604  2b5604               sub edx, dword ptr [esi + 4]
// 007f9607  57                   push edi
// 007f9608  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007f960c  50                   push eax
// 007f960d  8b4608               mov eax, dword ptr [esi + 8]
// 007f9610  2b06                 sub eax, dword ptr [esi]
// 007f9612  4a                   dec edx
// 007f9613  52                   push edx
// 007f9614  83e802               sub eax, 2
// 007f9617  50                   push eax
// 007f9618  6a00                 push 0
// 007f961a  6a01                 push 1
// 007f961c  8bcf                 mov ecx, edi
// 007f961e  e8ed300500           call 0x84c710
// 007f9623  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 007f9626  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 007f962c  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007f962f  83f9ff               cmp ecx, -1
// 007f9632  7503                 jne 0x7f9637
// 007f9634  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007f9637  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007f963a  83faff               cmp edx, -1
// 007f963d  7505                 jne 0x7f9644
// 007f963f  8b4048               mov eax, dword ptr [eax + 0x48]
// 007f9642  eb02                 jmp 0x7f9646
// 007f9644  8bc2                 mov eax, edx
// 007f9646  8b560c               mov edx, dword ptr [esi + 0xc]
// 007f9649  2b5604               sub edx, dword ptr [esi + 4]
// 007f964c  51                   push ecx
// 007f964d  50                   push eax
// 007f964e  8b4608               mov eax, dword ptr [esi + 8]
// 007f9651  2b06                 sub eax, dword ptr [esi]
// 007f9653  52                   push edx
// 007f9654  50                   push eax
// 007f9655  6a00                 push 0
// 007f9657  6a00                 push 0
// 007f9659  8bcf                 mov ecx, edi
// 007f965b  e8b0300500           call 0x84c710
// 007f9660  5f                   pop edi
// 007f9661  5e                   pop esi
// 007f9662  5b                   pop ebx
// 007f9663  c20c00               ret 0xc
// 007f9666  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f966a  ff4804               dec dword ptr [eax + 4]
// 007f966d  5f                   pop edi
// 007f966e  5e                   pop esi
// 007f966f  5b                   pop ebx
// 007f9670  c20c00               ret 0xc
// 007f9673  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007f9679  8b4858               mov ecx, dword ptr [eax + 0x58]
// 007f967c  83c050               add eax, 0x50
// 007f967f  83f9ff               cmp ecx, -1
// 007f9682  7505                 jne 0x7f9689
// 007f9684  8b4004               mov eax, dword ptr [eax + 4]
// 007f9687  eb02                 jmp 0x7f968b
// 007f9689  8bc1                 mov eax, ecx
// 007f968b  8b742414             mov esi, dword ptr [esp + 0x14]
// 007f968f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007f9693  50                   push eax
// 007f9694  56                   push esi
// 007f9695  8bcf                 mov ecx, edi
// 007f9697  e83401f2ff           call 0x7197d0
// 007f969c  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 007f969f  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 007f96a5  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007f96a8  83c044               add eax, 0x44
// 007f96ab  83f9ff               cmp ecx, -1
// 007f96ae  7505                 jne 0x7f96b5
// 007f96b0  8b4004               mov eax, dword ptr [eax + 4]
// 007f96b3  eb02                 jmp 0x7f96b7
// 007f96b5  8bc1                 mov eax, ecx
// 007f96b7  8b5604               mov edx, dword ptr [esi + 4]
// 007f96ba  8b4e08               mov ecx, dword ptr [esi + 8]
// 007f96bd  50                   push eax
// 007f96be  8b460c               mov eax, dword ptr [esi + 0xc]
// 007f96c1  2bc2                 sub eax, edx
// 007f96c3  50                   push eax
// 007f96c4  6a01                 push 1
// 007f96c6  49                   dec ecx
// 007f96c7  52                   push edx
// 007f96c8  51                   push ecx
// 007f96c9  8bcf                 mov ecx, edi
// 007f96cb  e860280500           call 0x84bf30
// 007f96d0  5f                   pop edi
// 007f96d1  5e                   pop esi
// 007f96d2  5b                   pop ebx
// 007f96d3  c20c00               ret 0xc
// 007f96d6  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007f96dc  8b4858               mov ecx, dword ptr [eax + 0x58]
// 007f96df  83c050               add eax, 0x50
// 007f96e2  83f9ff               cmp ecx, -1
// 007f96e5  7505                 jne 0x7f96ec
// 007f96e7  8b4004               mov eax, dword ptr [eax + 4]
// 007f96ea  eb02                 jmp 0x7f96ee
// 007f96ec  8bc1                 mov eax, ecx
// 007f96ee  8b742414             mov esi, dword ptr [esp + 0x14]
// 007f96f2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007f96f6  50                   push eax
// 007f96f7  56                   push esi
// 007f96f8  8bcf                 mov ecx, edi
// 007f96fa  e8d100f2ff           call 0x7197d0
// 007f96ff  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 007f9702  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 007f9708  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007f970b  83c044               add eax, 0x44
// 007f970e  83f9ff               cmp ecx, -1
// 007f9711  7505                 jne 0x7f9718
// 007f9713  8b4004               mov eax, dword ptr [eax + 4]
// 007f9716  eb02                 jmp 0x7f971a
// 007f9718  8bc1                 mov eax, ecx
// 007f971a  8b16                 mov edx, dword ptr [esi]
// 007f971c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f971f  50                   push eax
// 007f9720  8b4608               mov eax, dword ptr [esi + 8]
// 007f9723  6a01                 push 1
// 007f9725  2bc2                 sub eax, edx
// 007f9727  50                   push eax
// 007f9728  49                   dec ecx
// 007f9729  51                   push ecx
// 007f972a  52                   push edx
// 007f972b  8bcf                 mov ecx, edi
// 007f972d  e8fe270500           call 0x84bf30
// 007f9732  5f                   pop edi
// 007f9733  5e                   pop esi
// 007f9734  5b                   pop ebx
// 007f9735  c20c00               ret 0xc
// 007f9738  df957f006696         fist word ptr [ebp - 0x6999ff81]
// 007f973e  7f00                 jg 0x7f9740
// 007f9740  7396                 jae 0x7f96d8
// 007f9742  7f00                 jg 0x7f9744
// 007f9744  d6                   salc 
// 007f9745  96                   xchg esi, eax
// 007f9746  7f00                 jg 0x7f9748
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawWorkspacePart@CAppearanceSet@CXTPTabPaintManager@@UAEXPAVCDC@@PAUtagRECT@@W4XTPTabWorkspacePart@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
