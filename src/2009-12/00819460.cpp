// roc 2009-12 00819460  unit: CRobloxReportView  size: 582 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00819460
//
// 00819460  6aff                 push -1
// 00819462  68e0a89500           push 0x95a8e0
// 00819467  64a100000000         mov eax, dword ptr fs:[0]
// 0081946d  50                   push eax
// 0081946e  83ec48               sub esp, 0x48
// 00819471  53                   push ebx
// 00819472  55                   push ebp
// 00819473  56                   push esi
// 00819474  57                   push edi
// 00819475  a10052b600           mov eax, dword ptr [0xb65200]
// 0081947a  33c4                 xor eax, esp
// 0081947c  50                   push eax
// 0081947d  8d44245c             lea eax, [esp + 0x5c]
// 00819481  64a300000000         mov dword ptr fs:[0], eax
// 00819487  8bf1                 mov esi, ecx
// 00819489  83be6003000000       cmp dword ptr [esi + 0x360], 0
// 00819490  0f84fa010000         je 0x819690
// 00819496  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0081949a  85c0                 test eax, eax
// 0081949c  0f84ee010000         je 0x819690
// 008194a2  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 008194a6  85ff                 test edi, edi
// 008194a8  0f84e2010000         je 0x819690
// 008194ae  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 008194b4  8b11                 mov edx, dword ptr [ecx]
// 008194b6  8b5260               mov edx, dword ptr [edx + 0x60]
// 008194b9  50                   push eax
// 008194ba  8d442450             lea eax, [esp + 0x50]
// 008194be  50                   push eax
// 008194bf  ffd2                 call edx
// 008194c1  8b5f28               mov ebx, dword ptr [edi + 0x28]
// 008194c4  8b6f24               mov ebp, dword ptr [edi + 0x24]
// 008194c7  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008194ca  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 008194cd  035c2450             add ebx, dword ptr [esp + 0x50]
// 008194d1  8b9660030000         mov edx, dword ptr [esi + 0x360]
// 008194d7  036c244c             add ebp, dword ptr [esp + 0x4c]
// 008194db  2b442454             sub eax, dword ptr [esp + 0x54]
// 008194df  2b4c2458             sub ecx, dword ptr [esp + 0x58]
// 008194e3  837a3000             cmp dword ptr [edx + 0x30], 0
// 008194e7  895c2440             mov dword ptr [esp + 0x40], ebx
// 008194eb  752b                 jne 0x819518
// 008194ed  8b1e                 mov ebx, dword ptr [esi]
// 008194ef  83ec10               sub esp, 0x10
// 008194f2  8bd4                 mov edx, esp
// 008194f4  892a                 mov dword ptr [edx], ebp
// 008194f6  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 008194fa  896a04               mov dword ptr [edx + 4], ebp
// 008194fd  894208               mov dword ptr [edx + 8], eax
// 00819500  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00819504  894a0c               mov dword ptr [edx + 0xc], ecx
// 00819507  8b93b4010000         mov edx, dword ptr [ebx + 0x1b4]
// 0081950d  57                   push edi
// 0081950e  50                   push eax
// 0081950f  8bce                 mov ecx, esi
// 00819511  ffd2                 call edx
// 00819513  e978010000           jmp 0x819690
// 00819518  2bcb                 sub ecx, ebx
// 0081951a  2bc5                 sub eax, ebp
// 0081951c  33d2                 xor edx, edx
// 0081951e  894c2470             mov dword ptr [esp + 0x70], ecx
// 00819522  894c2438             mov dword ptr [esp + 0x38], ecx
// 00819526  8d4c243c             lea ecx, [esp + 0x3c]
// 0081952a  89442414             mov dword ptr [esp + 0x14], eax
// 0081952e  8954242c             mov dword ptr [esp + 0x2c], edx
// 00819532  89542430             mov dword ptr [esp + 0x30], edx
// 00819536  89442434             mov dword ptr [esp + 0x34], eax
// 0081953a  e86fcf1000           call 0x9264ae
// 0081953f  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00819543  50                   push eax
// 00819544  8d4c2440             lea ecx, [esp + 0x40]
// 00819548  c744246800000000     mov dword ptr [esp + 0x68], 0
// 00819550  e8cb4bfeff           call 0x7fe120
// 00819555  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00819559  c744244801000000     mov dword ptr [esp + 0x48], 1
// 00819561  742a                 je 0x81958d
// 00819563  8b442438             mov eax, dword ptr [esp + 0x38]
// 00819567  2b442430             sub eax, dword ptr [esp + 0x30]
// 0081956b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0081956f  2b54242c             sub edx, dword ptr [esp + 0x2c]
// 00819573  50                   push eax
// 00819574  52                   push edx
// 00819575  8d542420             lea edx, [esp + 0x20]
// 00819579  8d4e58               lea ecx, [esi + 0x58]
// 0081957c  52                   push edx
// 0081957d  e8feeeffff           call 0x818480
// 00819582  8bc8                 mov ecx, eax
// 00819584  e8e7cffdff           call 0x7f6570
// 00819589  85c0                 test eax, eax
// 0081958b  7427                 je 0x8195b4
// 0081958d  8d4e58               lea ecx, [esi + 0x58]
// 00819590  e889a8fdff           call 0x7f3e1e
// 00819595  8b442438             mov eax, dword ptr [esp + 0x38]
// 00819599  2b442430             sub eax, dword ptr [esp + 0x30]
// 0081959d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008195a1  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 008195a5  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008195a9  50                   push eax
// 008195aa  51                   push ecx
// 008195ab  52                   push edx
// 008195ac  8d4e58               lea ecx, [esi + 0x58]
// 008195af  e89c06ffff           call 0x809c50
// 008195b4  8d4658               lea eax, [esi + 0x58]
// 008195b7  50                   push eax
// 008195b8  8d442440             lea eax, [esp + 0x40]
// 008195bc  50                   push eax
// 008195bd  8d4c2428             lea ecx, [esp + 0x28]
// 008195c1  e82a200300           call 0x84b5f0
// 008195c6  68ffffff00           push 0xffffff
// 008195cb  8d4c2430             lea ecx, [esp + 0x30]
// 008195cf  51                   push ecx
// 008195d0  8d4c2444             lea ecx, [esp + 0x44]
// 008195d4  c644246c01           mov byte ptr [esp + 0x6c], 1
// 008195d9  e820b0fdff           call 0x7f45fe
// 008195de  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008195e2  8b16                 mov edx, dword ptr [esi]
// 008195e4  8b92b4010000         mov edx, dword ptr [edx + 0x1b4]
// 008195ea  83ec10               sub esp, 0x10
// 008195ed  8bc4                 mov eax, esp
// 008195ef  8908                 mov dword ptr [eax], ecx
// 008195f1  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008195f5  894804               mov dword ptr [eax + 4], ecx
// 008195f8  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008195fc  894808               mov dword ptr [eax + 8], ecx
// 008195ff  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00819603  89480c               mov dword ptr [eax + 0xc], ecx
// 00819606  57                   push edi
// 00819607  8d442450             lea eax, [esp + 0x50]
// 0081960b  50                   push eax
// 0081960c  8bce                 mov ecx, esi
// 0081960e  ffd2                 call edx
// 00819610  8b8660030000         mov eax, dword ptr [esi + 0x360]
// 00819616  8b4034               mov eax, dword ptr [eax + 0x34]
// 00819619  3dff000000           cmp eax, 0xff
// 0081961e  7d0f                 jge 0x81962f
// 00819620  85c0                 test eax, eax
// 00819622  7d04                 jge 0x819628
// 00819624  33c0                 xor eax, eax
// 00819626  eb0c                 jmp 0x819634
// 00819628  3dff000000           cmp eax, 0xff
// 0081962d  7c05                 jl 0x819634
// 0081962f  b8ff000000           mov eax, 0xff
// 00819634  8b542440             mov edx, dword ptr [esp + 0x40]
// 00819638  50                   push eax
// 00819639  8d4c2430             lea ecx, [esp + 0x30]
// 0081963d  51                   push ecx
// 0081963e  52                   push edx
// 0081963f  e86c6effff           call 0x8104b0
// 00819644  8bc8                 mov ecx, eax
// 00819646  e8d500ffff           call 0x809720
// 0081964b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0081964f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00819653  682000cc00           push 0xcc0020
// 00819658  6a00                 push 0
// 0081965a  6a00                 push 0
// 0081965c  8d442448             lea eax, [esp + 0x48]
// 00819660  50                   push eax
// 00819661  51                   push ecx
// 00819662  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00819669  52                   push edx
// 0081966a  53                   push ebx
// 0081966b  55                   push ebp
// 0081966c  e8ef4afeff           call 0x7fe160
// 00819671  8d4c2420             lea ecx, [esp + 0x20]
// 00819675  c644246400           mov byte ptr [esp + 0x64], 0
// 0081967a  e8e10a0300           call 0x84a160
// 0081967f  8d4c243c             lea ecx, [esp + 0x3c]
// 00819683  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 0081968b  e818ce1000           call 0x9264a8
// 00819690  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00819694  64890d00000000       mov dword ptr fs:[0], ecx
// 0081969b  59                   pop ecx
// 0081969c  5f                   pop edi
// 0081969d  5e                   pop esi
// 0081969e  5d                   pop ebp
// 0081969f  5b                   pop ebx
// 008196a0  83c454               add esp, 0x54
// 008196a3  c20800               ret 8
// copied from an identical function in another client (function ?OnPrint@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp