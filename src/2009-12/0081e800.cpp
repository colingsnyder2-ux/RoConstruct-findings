// roc 2009-12 0081e800  unit: CXTPReportControl  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e800
//
// 0081e800  6aff                 push -1
// 0081e802  6878ad9500           push 0x95ad78
// 0081e807  64a100000000         mov eax, dword ptr fs:[0]
// 0081e80d  50                   push eax
// 0081e80e  83ec1c               sub esp, 0x1c
// 0081e811  53                   push ebx
// 0081e812  55                   push ebp
// 0081e813  56                   push esi
// 0081e814  57                   push edi
// 0081e815  a10052b600           mov eax, dword ptr [0xb65200]
// 0081e81a  33c4                 xor eax, esp
// 0081e81c  50                   push eax
// 0081e81d  8d442430             lea eax, [esp + 0x30]
// 0081e821  64a300000000         mov dword ptr fs:[0], eax
// 0081e827  8bf1                 mov esi, ecx
// 0081e829  89742418             mov dword ptr [esp + 0x18], esi
// 0081e82d  33ed                 xor ebp, ebp
// 0081e82f  56                   push esi
// 0081e830  8d4c2420             lea ecx, [esp + 0x20]
// 0081e834  896c2418             mov dword ptr [esp + 0x18], ebp
// 0081e838  e84d7c1000           call 0x92648a
// 0081e83d  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0081e841  8bcb                 mov ecx, ebx
// 0081e843  896c2438             mov dword ptr [esp + 0x38], ebp
// 0081e847  e8d4e30000           call 0x82cc20
// 0081e84c  85c0                 test eax, eax
// 0081e84e  7f34                 jg 0x81e884
// 0081e850  8d4c241c             lea ecx, [esp + 0x1c]
// 0081e854  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0081e85c  e8237c1000           call 0x926484
// 0081e861  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081e865  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0081e869  64890d00000000       mov dword ptr fs:[0], ecx
// 0081e870  59                   pop ecx
// 0081e871  5f                   pop edi
// 0081e872  5e                   pop esi
// 0081e873  5d                   pop ebp
// 0081e874  5b                   pop ebx
// 0081e875  83c428               add esp, 0x28
// 0081e878  c20c00               ret 0xc
// 0081e87b  eb03                 jmp 0x81e880
// 0081e87d  8d4900               lea ecx, [ecx]
// 0081e880  8b742418             mov esi, dword ptr [esp + 0x18]
// 0081e884  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 0081e88a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0081e88e  8b13                 mov edx, dword ptr [ebx]
// 0081e890  8b37                 mov esi, dword ptr [edi]
// 0081e892  50                   push eax
// 0081e893  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0081e896  55                   push ebp
// 0081e897  8bcb                 mov ecx, ebx
// 0081e899  83c65c               add esi, 0x5c
// 0081e89c  ffd0                 call eax
// 0081e89e  8b16                 mov edx, dword ptr [esi]
// 0081e8a0  50                   push eax
// 0081e8a1  8d4c2424             lea ecx, [esp + 0x24]
// 0081e8a5  51                   push ecx
// 0081e8a6  8bcf                 mov ecx, edi
// 0081e8a8  ffd2                 call edx
// 0081e8aa  8b742414             mov esi, dword ptr [esp + 0x14]
// 0081e8ae  03f0                 add esi, eax
// 0081e8b0  8b442448             mov eax, dword ptr [esp + 0x48]
// 0081e8b4  89742414             mov dword ptr [esp + 0x14], esi
// 0081e8b8  85c0                 test eax, eax
// 0081e8ba  7c04                 jl 0x81e8c0
// 0081e8bc  3bf0                 cmp esi, eax
// 0081e8be  7f0e                 jg 0x81e8ce
// 0081e8c0  8bcb                 mov ecx, ebx
// 0081e8c2  45                   inc ebp
// 0081e8c3  e858e30000           call 0x82cc20
// 0081e8c8  3be8                 cmp ebp, eax
// 0081e8ca  7cb4                 jl 0x81e880
// 0081e8cc  eb82                 jmp 0x81e850
// 0081e8ce  8d4c241c             lea ecx, [esp + 0x1c]
// 0081e8d2  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0081e8da  e8a57b1000           call 0x926484
// 0081e8df  8bc6                 mov eax, esi
// 0081e8e1  eb82                 jmp 0x81e865
// copied from an identical function in another client (function ?GetRowsHeight@CXTPReportControl@@MAEHPAVCXTPReportRows@@HH@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp