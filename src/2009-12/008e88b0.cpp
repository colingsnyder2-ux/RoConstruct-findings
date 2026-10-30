// roc 2009-12 008e88b0  unit: CXTPTabPaintManager::CColorSetOffice2007  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e88b0
//
// 008e88b0  83ec20               sub esp, 0x20
// 008e88b3  53                   push ebx
// 008e88b4  56                   push esi
// 008e88b5  57                   push edi
// 008e88b6  8bf9                 mov edi, ecx
// 008e88b8  e8438fffff           call 0x8e1800
// 008e88bd  8bc8                 mov ecx, eax
// 008e88bf  e81c76ffff           call 0x8dfee0
// 008e88c4  85c0                 test eax, eax
// 008e88c6  751f                 jne 0x8e88e7
// 008e88c8  8b442438             mov eax, dword ptr [esp + 0x38]
// 008e88cc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e88d0  8b542430             mov edx, dword ptr [esp + 0x30]
// 008e88d4  50                   push eax
// 008e88d5  51                   push ecx
// 008e88d6  52                   push edx
// 008e88d7  8bcf                 mov ecx, edi
// 008e88d9  e802f2ffff           call 0x8e7ae0
// 008e88de  5f                   pop edi
// 008e88df  5e                   pop esi
// 008e88e0  5b                   pop ebx
// 008e88e1  83c420               add esp, 0x20
// 008e88e4  c20c00               ret 0xc
// 008e88e7  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008e88eb  837b2c00             cmp dword ptr [ebx + 0x2c], 0
// 008e88ef  8b742430             mov esi, dword ptr [esp + 0x30]
// 008e88f3  751b                 jne 0x8e8910
// 008e88f5  8b87ac000000         mov eax, dword ptr [edi + 0xac]
// 008e88fb  83f8ff               cmp eax, -1
// 008e88fe  7506                 jne 0x8e8906
// 008e8900  8b87a8000000         mov eax, dword ptr [edi + 0xa8]
// 008e8906  8b16                 mov edx, dword ptr [esi]
// 008e8908  50                   push eax
// 008e8909  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e890c  8bce                 mov ecx, esi
// 008e890e  ffd0                 call eax
// 008e8910  837b2000             cmp dword ptr [ebx + 0x20], 0
// 008e8914  0f848d000000         je 0x8e89a7
// 008e891a  837b2400             cmp dword ptr [ebx + 0x24], 0
// 008e891e  7508                 jne 0x8e8928
// 008e8920  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008e8923  395910               cmp dword ptr [ecx + 0x10], ebx
// 008e8926  757f                 jne 0x8e89a7
// 008e8928  688414a000           push 0xa01484
// 008e892d  e8ce8effff           call 0x8e1800
// 008e8932  8bc8                 mov ecx, eax
// 008e8934  e8e78dffff           call 0x8e1720
// 008e8939  8bf8                 mov edi, eax
// 008e893b  85ff                 test edi, edi
// 008e893d  7468                 je 0x8e89a7
// 008e893f  8b4324               mov eax, dword ptr [ebx + 0x24]
// 008e8942  33d2                 xor edx, edx
// 008e8944  85c0                 test eax, eax
// 008e8946  0f95c2               setne dl
// 008e8949  b908000000           mov ecx, 8
// 008e894e  6a04                 push 4
// 008e8950  8d442420             lea eax, [esp + 0x20]
// 008e8954  894c2410             mov dword ptr [esp + 0x10], ecx
// 008e8958  894c2414             mov dword ptr [esp + 0x14], ecx
// 008e895c  894c2418             mov dword ptr [esp + 0x18], ecx
// 008e8960  52                   push edx
// 008e8961  894c2420             mov dword ptr [esp + 0x20], ecx
// 008e8965  50                   push eax
// 008e8966  8bcf                 mov ecx, edi
// 008e8968  e8537fffff           call 0x8e08c0
// 008e896d  8b10                 mov edx, dword ptr [eax]
// 008e896f  6aff                 push -1
// 008e8971  8d4c2410             lea ecx, [esp + 0x10]
// 008e8975  51                   push ecx
// 008e8976  83ec10               sub esp, 0x10
// 008e8979  8bcc                 mov ecx, esp
// 008e897b  8911                 mov dword ptr [ecx], edx
// 008e897d  8b5004               mov edx, dword ptr [eax + 4]
// 008e8980  895104               mov dword ptr [ecx + 4], edx
// 008e8983  8b5008               mov edx, dword ptr [eax + 8]
// 008e8986  8b400c               mov eax, dword ptr [eax + 0xc]
// 008e8989  895108               mov dword ptr [ecx + 8], edx
// 008e898c  89410c               mov dword ptr [ecx + 0xc], eax
// 008e898f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008e8993  51                   push ecx
// 008e8994  56                   push esi
// 008e8995  8bcf                 mov ecx, edi
// 008e8997  e86484ffff           call 0x8e0e00
// 008e899c  8b16                 mov edx, dword ptr [esi]
// 008e899e  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e89a1  6a00                 push 0
// 008e89a3  8bce                 mov ecx, esi
// 008e89a5  ffd0                 call eax
// 008e89a7  5f                   pop edi
// 008e89a8  5e                   pop esi
// 008e89a9  5b                   pop ebx
// 008e89aa  83c420               add esp, 0x20
// 008e89ad  c20c00               ret 0xc
// copied from an identical function in another client (function ?FillNavigateButton@CColorSetOffice2007@CXTPTabPaintManager@@EAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp