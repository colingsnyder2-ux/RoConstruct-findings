// roc 2008-06 0079d730  unit: CXTPTabPaintManager::CColorSetOffice2007  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079d730
//
// 0079d730  83ec20               sub esp, 0x20
// 0079d733  53                   push ebx
// 0079d734  56                   push esi
// 0079d735  57                   push edi
// 0079d736  8bf9                 mov edi, ecx
// 0079d738  e8330fffff           call 0x78e670
// 0079d73d  8bc8                 mov ecx, eax
// 0079d73f  e80cf6feff           call 0x78cd50
// 0079d744  85c0                 test eax, eax
// 0079d746  751f                 jne 0x79d767
// 0079d748  8b442438             mov eax, dword ptr [esp + 0x38]
// 0079d74c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0079d750  8b542430             mov edx, dword ptr [esp + 0x30]
// 0079d754  50                   push eax
// 0079d755  51                   push ecx
// 0079d756  52                   push edx
// 0079d757  8bcf                 mov ecx, edi
// 0079d759  e802f2ffff           call 0x79c960
// 0079d75e  5f                   pop edi
// 0079d75f  5e                   pop esi
// 0079d760  5b                   pop ebx
// 0079d761  83c420               add esp, 0x20
// 0079d764  c20c00               ret 0xc
// 0079d767  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0079d76b  837b2c00             cmp dword ptr [ebx + 0x2c], 0
// 0079d76f  8b742430             mov esi, dword ptr [esp + 0x30]
// 0079d773  751b                 jne 0x79d790
// 0079d775  8b87ac000000         mov eax, dword ptr [edi + 0xac]
// 0079d77b  83f8ff               cmp eax, -1
// 0079d77e  7506                 jne 0x79d786
// 0079d780  8b87a8000000         mov eax, dword ptr [edi + 0xa8]
// 0079d786  8b16                 mov edx, dword ptr [esi]
// 0079d788  50                   push eax
// 0079d789  8b4238               mov eax, dword ptr [edx + 0x38]
// 0079d78c  8bce                 mov ecx, esi
// 0079d78e  ffd0                 call eax
// 0079d790  837b2000             cmp dword ptr [ebx + 0x20], 0
// 0079d794  0f848d000000         je 0x79d827
// 0079d79a  837b2400             cmp dword ptr [ebx + 0x24], 0
// 0079d79e  7508                 jne 0x79d7a8
// 0079d7a0  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0079d7a3  395910               cmp dword ptr [ecx + 0x10], ebx
// 0079d7a6  757f                 jne 0x79d827
// 0079d7a8  68641d8600           push 0x861d64
// 0079d7ad  e8be0effff           call 0x78e670
// 0079d7b2  8bc8                 mov ecx, eax
// 0079d7b4  e8d70dffff           call 0x78e590
// 0079d7b9  8bf8                 mov edi, eax
// 0079d7bb  85ff                 test edi, edi
// 0079d7bd  7468                 je 0x79d827
// 0079d7bf  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0079d7c2  33d2                 xor edx, edx
// 0079d7c4  85c0                 test eax, eax
// 0079d7c6  0f95c2               setne dl
// 0079d7c9  b908000000           mov ecx, 8
// 0079d7ce  6a04                 push 4
// 0079d7d0  8d442420             lea eax, [esp + 0x20]
// 0079d7d4  894c2410             mov dword ptr [esp + 0x10], ecx
// 0079d7d8  894c2414             mov dword ptr [esp + 0x14], ecx
// 0079d7dc  894c2418             mov dword ptr [esp + 0x18], ecx
// 0079d7e0  52                   push edx
// 0079d7e1  894c2420             mov dword ptr [esp + 0x20], ecx
// 0079d7e5  50                   push eax
// 0079d7e6  8bcf                 mov ecx, edi
// 0079d7e8  e843fffeff           call 0x78d730
// 0079d7ed  8b10                 mov edx, dword ptr [eax]
// 0079d7ef  6aff                 push -1
// 0079d7f1  8d4c2410             lea ecx, [esp + 0x10]
// 0079d7f5  51                   push ecx
// 0079d7f6  83ec10               sub esp, 0x10
// 0079d7f9  8bcc                 mov ecx, esp
// 0079d7fb  8911                 mov dword ptr [ecx], edx
// 0079d7fd  8b5004               mov edx, dword ptr [eax + 4]
// 0079d800  895104               mov dword ptr [ecx + 4], edx
// 0079d803  8b5008               mov edx, dword ptr [eax + 8]
// 0079d806  8b400c               mov eax, dword ptr [eax + 0xc]
// 0079d809  895108               mov dword ptr [ecx + 8], edx
// 0079d80c  89410c               mov dword ptr [ecx + 0xc], eax
// 0079d80f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0079d813  51                   push ecx
// 0079d814  56                   push esi
// 0079d815  8bcf                 mov ecx, edi
// 0079d817  e85404ffff           call 0x78dc70
// 0079d81c  8b16                 mov edx, dword ptr [esi]
// 0079d81e  8b4238               mov eax, dword ptr [edx + 0x38]
// 0079d821  6a00                 push 0
// 0079d823  8bce                 mov ecx, esi
// 0079d825  ffd0                 call eax
// 0079d827  5f                   pop edi
// 0079d828  5e                   pop esi
// 0079d829  5b                   pop ebx
// 0079d82a  83c420               add esp, 0x20
// 0079d82d  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillNavigateButton@CColorSetOffice2007@CXTPTabPaintManager@@EAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp
