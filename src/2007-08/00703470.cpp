// from server: 100% by auto
// roc 2007-08 00703470  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 576 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00703470
//
// 00703470  53                   push ebx
// 00703471  8bd9                 mov ebx, ecx
// 00703473  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00703476  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0070347a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070347e  0f85a9000000         jne 0x70352d
// 00703484  83e901               sub ecx, 1
// 00703487  0f8486000000         je 0x703513
// 0070348d  83e901               sub ecx, 1
// 00703490  7445                 je 0x7034d7
// 00703492  83e901               sub ecx, 1
// 00703495  0f8500020000         jne 0x70369b
// 0070349b  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007034a1  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007034a4  83c008               add eax, 8
// 007034a7  83f9ff               cmp ecx, -1
// 007034aa  7516                 jne 0x7034c2
// 007034ac  8b4004               mov eax, dword ptr [eax + 4]
// 007034af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007034b3  50                   push eax
// 007034b4  8b442410             mov eax, dword ptr [esp + 0x10]
// 007034b8  50                   push eax
// 007034b9  e8f2d3f2ff           call 0x6308b0
// 007034be  5b                   pop ebx
// 007034bf  c20c00               ret 0xc
// 007034c2  8bc1                 mov eax, ecx
// 007034c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007034c8  50                   push eax
// 007034c9  8b442410             mov eax, dword ptr [esp + 0x10]
// 007034cd  50                   push eax
// 007034ce  e8ddd3f2ff           call 0x6308b0
// 007034d3  5b                   pop ebx
// 007034d4  c20c00               ret 0xc
// 007034d7  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007034dd  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007034e0  83c008               add eax, 8
// 007034e3  83f9ff               cmp ecx, -1
// 007034e6  7516                 jne 0x7034fe
// 007034e8  8b4004               mov eax, dword ptr [eax + 4]
// 007034eb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007034ef  50                   push eax
// 007034f0  51                   push ecx
// 007034f1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007034f5  e8b6d3f2ff           call 0x6308b0
// 007034fa  5b                   pop ebx
// 007034fb  c20c00               ret 0xc
// 007034fe  8bc1                 mov eax, ecx
// 00703500  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00703504  50                   push eax
// 00703505  51                   push ecx
// 00703506  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070350a  e8a1d3f2ff           call 0x6308b0
// 0070350f  5b                   pop ebx
// 00703510  c20c00               ret 0xc
// 00703513  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00703517  834004fe             add dword ptr [eax + 4], -2
// 0070351b  8300fe               add dword ptr [eax], -2
// 0070351e  b902000000           mov ecx, 2
// 00703523  014808               add dword ptr [eax + 8], ecx
// 00703526  01480c               add dword ptr [eax + 0xc], ecx
// 00703529  5b                   pop ebx
// 0070352a  c20c00               ret 0xc
// 0070352d  83f903               cmp ecx, 3
// 00703530  0f8765010000         ja 0x70369b
// 00703536  56                   push esi
// 00703537  57                   push edi
// 00703538  ff248da0367000       jmp dword ptr [ecx*4 + 0x7036a0]
// 0070353f  e82c5af6ff           call 0x668f70
// 00703544  6a0f                 push 0xf
// 00703546  8bc8                 mov ecx, eax
// 00703548  e82352f6ff           call 0x668770
// 0070354d  8bf8                 mov edi, eax
// 0070354f  e81c5af6ff           call 0x668f70
// 00703554  6a0f                 push 0xf
// 00703556  8bc8                 mov ecx, eax
// 00703558  e81352f6ff           call 0x668770
// 0070355d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00703561  8b560c               mov edx, dword ptr [esi + 0xc]
// 00703564  2b5604               sub edx, dword ptr [esi + 4]
// 00703567  57                   push edi
// 00703568  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0070356c  50                   push eax
// 0070356d  8b4608               mov eax, dword ptr [esi + 8]
// 00703570  2b06                 sub eax, dword ptr [esi]
// 00703572  83ea01               sub edx, 1
// 00703575  52                   push edx
// 00703576  83e802               sub eax, 2
// 00703579  50                   push eax
// 0070357a  6a00                 push 0
// 0070357c  6a01                 push 1
// 0070357e  8bcf                 mov ecx, edi
// 00703580  e83d560300           call 0x738bc2
// 00703585  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00703588  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 0070358e  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00703591  83f9ff               cmp ecx, -1
// 00703594  7503                 jne 0x703599
// 00703596  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00703599  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0070359c  83faff               cmp edx, -1
// 0070359f  7505                 jne 0x7035a6
// 007035a1  8b4048               mov eax, dword ptr [eax + 0x48]
// 007035a4  eb02                 jmp 0x7035a8
// 007035a6  8bc2                 mov eax, edx
// 007035a8  8b560c               mov edx, dword ptr [esi + 0xc]
// 007035ab  2b5604               sub edx, dword ptr [esi + 4]
// 007035ae  51                   push ecx
// 007035af  50                   push eax
// 007035b0  8b4608               mov eax, dword ptr [esi + 8]
// 007035b3  2b06                 sub eax, dword ptr [esi]
// 007035b5  52                   push edx
// 007035b6  50                   push eax
// 007035b7  6a00                 push 0
// 007035b9  6a00                 push 0
// 007035bb  8bcf                 mov ecx, edi
// 007035bd  e800560300           call 0x738bc2
// 007035c2  5f                   pop edi
// 007035c3  5e                   pop esi
// 007035c4  5b                   pop ebx
// 007035c5  c20c00               ret 0xc
// 007035c8  8b442414             mov eax, dword ptr [esp + 0x14]
// 007035cc  834004ff             add dword ptr [eax + 4], -1
// 007035d0  5f                   pop edi
// 007035d1  5e                   pop esi
// 007035d2  5b                   pop ebx
// 007035d3  c20c00               ret 0xc
// 007035d6  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007035dc  8b4858               mov ecx, dword ptr [eax + 0x58]
// 007035df  83c050               add eax, 0x50
// 007035e2  83f9ff               cmp ecx, -1
// 007035e5  7505                 jne 0x7035ec
// 007035e7  8b4004               mov eax, dword ptr [eax + 4]
// 007035ea  eb02                 jmp 0x7035ee
// 007035ec  8bc1                 mov eax, ecx
// 007035ee  8b742414             mov esi, dword ptr [esp + 0x14]
// 007035f2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007035f6  50                   push eax
// 007035f7  56                   push esi
// 007035f8  8bcf                 mov ecx, edi
// 007035fa  e8b1d2f2ff           call 0x6308b0
// 007035ff  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00703602  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00703608  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0070360b  83c044               add eax, 0x44
// 0070360e  83f9ff               cmp ecx, -1
// 00703611  7505                 jne 0x703618
// 00703613  8b4004               mov eax, dword ptr [eax + 4]
// 00703616  eb02                 jmp 0x70361a
// 00703618  8bc1                 mov eax, ecx
// 0070361a  8b5604               mov edx, dword ptr [esi + 4]
// 0070361d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00703620  50                   push eax
// 00703621  8b460c               mov eax, dword ptr [esi + 0xc]
// 00703624  2bc2                 sub eax, edx
// 00703626  50                   push eax
// 00703627  6a01                 push 1
// 00703629  83e901               sub ecx, 1
// 0070362c  52                   push edx
// 0070362d  51                   push ecx
// 0070362e  8bcf                 mov ecx, edi
// 00703630  e8954d0300           call 0x7383ca
// 00703635  5f                   pop edi
// 00703636  5e                   pop esi
// 00703637  5b                   pop ebx
// 00703638  c20c00               ret 0xc
// 0070363b  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00703641  8b4858               mov ecx, dword ptr [eax + 0x58]
// 00703644  83c050               add eax, 0x50
// 00703647  83f9ff               cmp ecx, -1
// 0070364a  7505                 jne 0x703651
// 0070364c  8b4004               mov eax, dword ptr [eax + 4]
// 0070364f  eb02                 jmp 0x703653
// 00703651  8bc1                 mov eax, ecx
// 00703653  8b742414             mov esi, dword ptr [esp + 0x14]
// 00703657  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0070365b  50                   push eax
// 0070365c  56                   push esi
// 0070365d  8bcf                 mov ecx, edi
// 0070365f  e84cd2f2ff           call 0x6308b0
// 00703664  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00703667  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 0070366d  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00703670  83c044               add eax, 0x44
// 00703673  83f9ff               cmp ecx, -1
// 00703676  7505                 jne 0x70367d
// 00703678  8b4004               mov eax, dword ptr [eax + 4]
// 0070367b  eb02                 jmp 0x70367f
// 0070367d  8bc1                 mov eax, ecx
// 0070367f  8b16                 mov edx, dword ptr [esi]
// 00703681  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00703684  50                   push eax
// 00703685  8b4608               mov eax, dword ptr [esi + 8]
// 00703688  6a01                 push 1
// 0070368a  2bc2                 sub eax, edx
// 0070368c  50                   push eax
// 0070368d  83e901               sub ecx, 1
// 00703690  51                   push ecx
// 00703691  52                   push edx
// 00703692  8bcf                 mov ecx, edi
// 00703694  e8314d0300           call 0x7383ca
// 00703699  5f                   pop edi
// 0070369a  5e                   pop esi
// 0070369b  5b                   pop ebx
// 0070369c  c20c00               ret 0xc
// 0070369f  90                   nop 
// 007036a0  3f                   aas 
// 007036a1  357000c835           xor eax, 0x35c80070
// 007036a6  7000                 jo 0x7036a8
// 007036a8  d6                   salc 
// 007036a9  3570003b36           xor eax, 0x363b0070
// 007036ae  7000                 jo 0x7036b0
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawWorkspacePart@CAppearanceSet@CXTPTabPaintManager@@UAEXPAVCDC@@PAUtagRECT@@W4XTPTabWorkspacePart@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
