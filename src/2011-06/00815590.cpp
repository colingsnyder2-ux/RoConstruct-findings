// roc 2011-06 00815590  unit: CXTPPaintManager  size: 802 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00815590
//
// 00815590  6aff                 push -1
// 00815592  68e126a000           push 0xa026e1
// 00815597  64a100000000         mov eax, dword ptr fs:[0]
// 0081559d  50                   push eax
// 0081559e  83ec34               sub esp, 0x34
// 008155a1  53                   push ebx
// 008155a2  55                   push ebp
// 008155a3  56                   push esi
// 008155a4  57                   push edi
// 008155a5  a12058c900           mov eax, dword ptr [0xc95820]
// 008155aa  33c4                 xor eax, esp
// 008155ac  50                   push eax
// 008155ad  8d442448             lea eax, [esp + 0x48]
// 008155b1  64a300000000         mov dword ptr fs:[0], eax
// 008155b7  8bf9                 mov edi, ecx
// 008155b9  897c241c             mov dword ptr [esp + 0x1c], edi
// 008155bd  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008155c1  8bce                 mov ecx, esi
// 008155c3  e8c83d0500           call 0x869390
// 008155c8  8be8                 mov ebp, eax
// 008155ca  c1ed1a               shr ebp, 0x1a
// 008155cd  f7d5                 not ebp
// 008155cf  83e501               and ebp, 1
// 008155d2  896c2414             mov dword ptr [esp + 0x14], ebp
// 008155d6  7518                 jne 0x8155f0
// 008155d8  8bce                 mov ecx, esi
// 008155da  e8f1f3c0ff           call 0x4249d0
// 008155df  83b8b800000000       cmp dword ptr [eax + 0xb8], 0
// 008155e6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008155ee  7408                 je 0x8155f8
// 008155f0  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008155f8  8bce                 mov ecx, esi
// 008155fa  e841760400           call 0x85cc40
// 008155ff  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00815603  83f8ff               cmp eax, -1
// 00815606  7451                 je 0x815659
// 00815608  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0081560c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00815610  8b542464             mov edx, dword ptr [esp + 0x64]
// 00815614  89442428             mov dword ptr [esp + 0x28], eax
// 00815618  8b442468             mov eax, dword ptr [esp + 0x68]
// 0081561c  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00815620  8bce                 mov ecx, esi
// 00815622  89542430             mov dword ptr [esp + 0x30], edx
// 00815626  89442434             mov dword ptr [esp + 0x34], eax
// 0081562a  e8613d0500           call 0x869390
// 0081562f  a900010000           test eax, 0x100
// 00815634  750f                 jne 0x815645
// 00815636  6aff                 push -1
// 00815638  6aff                 push -1
// 0081563a  8d4c2430             lea ecx, [esp + 0x30]
// 0081563e  51                   push ecx
// 0081563f  ff15e41ba400         call dword ptr [0xa41be4]
// 00815645  8bce                 mov ecx, esi
// 00815647  e8f4750400           call 0x85cc40
// 0081564c  50                   push eax
// 0081564d  8d54242c             lea edx, [esp + 0x2c]
// 00815651  52                   push edx
// 00815652  8bcb                 mov ecx, ebx
// 00815654  e8c757ffff           call 0x80ae20
// 00815659  837e7800             cmp dword ptr [esi + 0x78], 0
// 0081565d  742e                 je 0x81568d
// 0081565f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00815663  8b17                 mov edx, dword ptr [edi]
// 00815665  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 0081566b  56                   push esi
// 0081566c  83ec10               sub esp, 0x10
// 0081566f  8bc4                 mov eax, esp
// 00815671  8908                 mov dword ptr [eax], ecx
// 00815673  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00815677  894804               mov dword ptr [eax + 4], ecx
// 0081567a  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0081567e  894808               mov dword ptr [eax + 8], ecx
// 00815681  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00815685  89480c               mov dword ptr [eax + 0xc], ecx
// 00815688  53                   push ebx
// 00815689  8bcf                 mov ecx, edi
// 0081568b  ffd2                 call edx
// 0081568d  8b06                 mov eax, dword ptr [esi]
// 0081568f  8b5058               mov edx, dword ptr [eax + 0x58]
// 00815692  8bce                 mov ecx, esi
// 00815694  ffd2                 call edx
// 00815696  50                   push eax
// 00815697  53                   push ebx
// 00815698  8d4c2440             lea ecx, [esp + 0x40]
// 0081569c  e87f7a0400           call 0x85d120
// 008156a1  8d442428             lea eax, [esp + 0x28]
// 008156a5  50                   push eax
// 008156a6  8bce                 mov ecx, esi
// 008156a8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 008156b0  e8eb670500           call 0x86bea0
// 008156b5  8b08                 mov ecx, dword ptr [eax]
// 008156b7  014c245c             add dword ptr [esp + 0x5c], ecx
// 008156bb  8b5004               mov edx, dword ptr [eax + 4]
// 008156be  01542460             add dword ptr [esp + 0x60], edx
// 008156c2  8b4808               mov ecx, dword ptr [eax + 8]
// 008156c5  294c2464             sub dword ptr [esp + 0x64], ecx
// 008156c9  8b500c               mov edx, dword ptr [eax + 0xc]
// 008156cc  29542468             sub dword ptr [esp + 0x68], edx
// 008156d0  8d44246c             lea eax, [esp + 0x6c]
// 008156d4  50                   push eax
// 008156d5  8bce                 mov ecx, esi
// 008156d7  e824610900           call 0x8ab800
// 008156dc  8b16                 mov edx, dword ptr [esi]
// 008156de  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008156e1  8bce                 mov ecx, esi
// 008156e3  c644245001           mov byte ptr [esp + 0x50], 1
// 008156e8  ffd0                 call eax
// 008156ea  8bce                 mov ecx, esi
// 008156ec  8bf8                 mov edi, eax
// 008156ee  e85db20200           call 0x840950
// 008156f3  85c0                 test eax, eax
// 008156f5  0f848c000000         je 0x815787
// 008156fb  8d4c2420             lea ecx, [esp + 0x20]
// 008156ff  51                   push ecx
// 00815700  8d4c2470             lea ecx, [esp + 0x70]
// 00815704  ff15a826a400         call dword ptr [0xa426a8]
// 0081570a  50                   push eax
// 0081570b  8d4c2474             lea ecx, [esp + 0x74]
// 0081570f  ff15c82da400         call dword ptr [0xa42dc8]
// 00815715  8b5308               mov edx, dword ptr [ebx + 8]
// 00815718  50                   push eax
// 00815719  52                   push edx
// 0081571a  ff153801a400         call dword ptr [0xa40138]
// 00815720  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00815724  85ff                 test edi, edi
// 00815726  7416                 je 0x81573e
// 00815728  8bcf                 mov ecx, edi
// 0081572a  e8613c0500           call 0x869390
// 0081572f  33c9                 xor ecx, ecx
// 00815731  85ed                 test ebp, ebp
// 00815733  0f9ec1               setle cl
// 00815736  49                   dec ecx
// 00815737  83e102               and ecx, 2
// 0081573a  03c1                 add eax, ecx
// 0081573c  eb02                 jmp 0x815740
// 0081573e  33c0                 xor eax, eax
// 00815740  8b542464             mov edx, dword ptr [esp + 0x64]
// 00815744  2b54245c             sub edx, dword ptr [esp + 0x5c]
// 00815748  03e8                 add ebp, eax
// 0081574a  3bd5                 cmp edx, ebp
// 0081574c  7e35                 jle 0x815783
// 0081574e  8bce                 mov ecx, esi
// 00815750  e8fbb10200           call 0x840950
// 00815755  83f802               cmp eax, 2
// 00815758  750a                 jne 0x815764
// 0081575a  8b442464             mov eax, dword ptr [esp + 0x64]
// 0081575e  2bc5                 sub eax, ebp
// 00815760  8944245c             mov dword ptr [esp + 0x5c], eax
// 00815764  8bce                 mov ecx, esi
// 00815766  e8e5b10200           call 0x840950
// 0081576b  83f801               cmp eax, 1
// 0081576e  7513                 jne 0x815783
// 00815770  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00815774  2bc5                 sub eax, ebp
// 00815776  03442464             add eax, dword ptr [esp + 0x64]
// 0081577a  99                   cdq 
// 0081577b  2bc2                 sub eax, edx
// 0081577d  d1f8                 sar eax, 1
// 0081577f  8944245c             mov dword ptr [esp + 0x5c], eax
// 00815783  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00815787  85ff                 test edi, edi
// 00815789  0f8482000000         je 0x815811
// 0081578f  8bcf                 mov ecx, edi
// 00815791  e8fa3b0500           call 0x869390
// 00815796  0344245c             add eax, dword ptr [esp + 0x5c]
// 0081579a  39442464             cmp dword ptr [esp + 0x64], eax
// 0081579e  7c59                 jl 0x8157f9
// 008157a0  8bcf                 mov ecx, edi
// 008157a2  85ed                 test ebp, ebp
// 008157a4  7407                 je 0x8157ad
// 008157a6  e8759f0000           call 0x81f720
// 008157ab  eb07                 jmp 0x8157b4
// 008157ad  6a01                 push 1
// 008157af  e87c080100           call 0x826030
// 008157b4  83ec08               sub esp, 8
// 008157b7  8be8                 mov ebp, eax
// 008157b9  8bc4                 mov eax, esp
// 008157bb  8bcf                 mov ecx, edi
// 008157bd  89642460             mov dword ptr [esp + 0x60], esp
// 008157c1  c70000000000         mov dword ptr [eax], 0
// 008157c7  c7400400000000       mov dword ptr [eax + 4], 0
// 008157ce  e8fde90800           call 0x8a41d0
// 008157d3  8b542470             mov edx, dword ptr [esp + 0x70]
// 008157d7  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008157db  03ca                 add ecx, edx
// 008157dd  2bc8                 sub ecx, eax
// 008157df  8bc1                 mov eax, ecx
// 008157e1  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008157e5  99                   cdq 
// 008157e6  2bc2                 sub eax, edx
// 008157e8  55                   push ebp
// 008157e9  d1f8                 sar eax, 1
// 008157eb  50                   push eax
// 008157ec  51                   push ecx
// 008157ed  53                   push ebx
// 008157ee  8bcf                 mov ecx, edi
// 008157f0  e87b120100           call 0x826a70
// 008157f5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008157f9  8bcf                 mov ecx, edi
// 008157fb  e8903b0500           call 0x869390
// 00815800  6a00                 push 0
// 00815802  83c002               add eax, 2
// 00815805  50                   push eax
// 00815806  8d542464             lea edx, [esp + 0x64]
// 0081580a  52                   push edx
// 0081580b  ff15601ca400         call dword ptr [0xa41c60]
// 00815811  837c241800           cmp dword ptr [esp + 0x18], 0
// 00815816  7469                 je 0x815881
// 00815818  6a01                 push 1
// 0081581a  8bcb                 mov ecx, ebx
// 0081581c  e8cd6d1b00           call 0x9cc5ee
// 00815821  85ed                 test ebp, ebp
// 00815823  750d                 jne 0x815832
// 00815825  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00815829  6a11                 push 0x11
// 0081582b  e8809dffff           call 0x80f5b0
// 00815830  eb1c                 jmp 0x81584e
// 00815832  8bce                 mov ecx, esi
// 00815834  e887660500           call 0x86bec0
// 00815839  83f8ff               cmp eax, -1
// 0081583c  7409                 je 0x815847
// 0081583e  8bce                 mov ecx, esi
// 00815840  e87b660500           call 0x86bec0
// 00815845  eb07                 jmp 0x81584e
// 00815847  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0081584b  8b4024               mov eax, dword ptr [eax + 0x24]
// 0081584e  8b13                 mov edx, dword ptr [ebx]
// 00815850  50                   push eax
// 00815851  8b4238               mov eax, dword ptr [edx + 0x38]
// 00815854  8bcb                 mov ecx, ebx
// 00815856  ffd0                 call eax
// 00815858  8b33                 mov esi, dword ptr [ebx]
// 0081585a  6864080000           push 0x864
// 0081585f  8d4c2460             lea ecx, [esp + 0x60]
// 00815863  51                   push ecx
// 00815864  8d4c2474             lea ecx, [esp + 0x74]
// 00815868  ff15a826a400         call dword ptr [0xa426a8]
// 0081586e  50                   push eax
// 0081586f  8d4c2478             lea ecx, [esp + 0x78]
// 00815873  ff15c82da400         call dword ptr [0xa42dc8]
// 00815879  8b5670               mov edx, dword ptr [esi + 0x70]
// 0081587c  50                   push eax
// 0081587d  8bcb                 mov ecx, ebx
// 0081587f  ffd2                 call edx
// 00815881  8d4c246c             lea ecx, [esp + 0x6c]
// 00815885  ff15082ea400         call dword ptr [0xa42e08]
// 0081588b  8d4c2438             lea ecx, [esp + 0x38]
// 0081588f  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00815897  e804790400           call 0x85d1a0
// 0081589c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008158a0  64890d00000000       mov dword ptr fs:[0], ecx
// 008158a7  59                   pop ecx
// 008158a8  5f                   pop edi
// 008158a9  5e                   pop esi
// 008158aa  5d                   pop ebp
// 008158ab  5b                   pop ebx
// 008158ac  83c440               add esp, 0x40
// 008158af  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawStatusBarPaneEntry@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp