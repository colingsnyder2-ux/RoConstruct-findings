// roc 2009-12 0081c7c0  unit: CXTPReportControl  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c7c0
//
// 0081c7c0  83ec08               sub esp, 8
// 0081c7c3  53                   push ebx
// 0081c7c4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0081c7c8  55                   push ebp
// 0081c7c9  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0081c7cd  56                   push esi
// 0081c7ce  8b7500               mov esi, dword ptr [ebp]
// 0081c7d1  57                   push edi
// 0081c7d2  8bf9                 mov edi, ecx
// 0081c7d4  6aff                 push -1
// 0081c7d6  8bcb                 mov ecx, ebx
// 0081c7d8  81c694000000         add esi, 0x94
// 0081c7de  e83d040100           call 0x82cc20
// 0081c7e3  50                   push eax
// 0081c7e4  8b06                 mov eax, dword ptr [esi]
// 0081c7e6  8bcd                 mov ecx, ebp
// 0081c7e8  ffd0                 call eax
// 0081c7ea  33f6                 xor esi, esi
// 0081c7ec  8bcb                 mov ecx, ebx
// 0081c7ee  89742410             mov dword ptr [esp + 0x10], esi
// 0081c7f2  e829040100           call 0x82cc20
// 0081c7f7  85c0                 test eax, eax
// 0081c7f9  0f8e0a010000         jle 0x81c909
// 0081c7ff  eb04                 jmp 0x81c805
// 0081c801  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0081c805  56                   push esi
// 0081c806  8bcb                 mov ecx, ebx
// 0081c808  e823040100           call 0x82cc30
// 0081c80d  8bd8                 mov ebx, eax
// 0081c80f  837b3800             cmp dword ptr [ebx + 0x38], 0
// 0081c813  7540                 jne 0x81c855
// 0081c815  837b3400             cmp dword ptr [ebx + 0x34], 0
// 0081c819  0f84d0000000         je 0x81c8ef
// 0081c81f  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0081c825  8b8178020000         mov eax, dword ptr [ecx + 0x278]
// 0081c82b  8b17                 mov edx, dword ptr [edi]
// 0081c82d  8b9268010000         mov edx, dword ptr [edx + 0x168]
// 0081c833  50                   push eax
// 0081c834  51                   push ecx
// 0081c835  8bc4                 mov eax, esp
// 0081c837  8964241c             mov dword ptr [esp + 0x1c], esp
// 0081c83b  50                   push eax
// 0081c83c  8bcf                 mov ecx, edi
// 0081c83e  ffd2                 call edx
// 0081c840  8b07                 mov eax, dword ptr [edi]
// 0081c842  8b90d8010000         mov edx, dword ptr [eax + 0x1d8]
// 0081c848  53                   push ebx
// 0081c849  8bcf                 mov ecx, edi
// 0081c84b  ffd2                 call edx
// 0081c84d  85c0                 test eax, eax
// 0081c84f  0f859a000000         jne 0x81c8ef
// 0081c855  8b07                 mov eax, dword ptr [edi]
// 0081c857  8b90e8010000         mov edx, dword ptr [eax + 0x1e8]
// 0081c85d  8bcf                 mov ecx, edi
// 0081c85f  ffd2                 call edx
// 0081c861  8bf0                 mov esi, eax
// 0081c863  8b06                 mov eax, dword ptr [esi]
// 0081c865  8b5058               mov edx, dword ptr [eax + 0x58]
// 0081c868  53                   push ebx
// 0081c869  57                   push edi
// 0081c86a  8bce                 mov ecx, esi
// 0081c86c  ffd2                 call edx
// 0081c86e  8b442420             mov eax, dword ptr [esp + 0x20]
// 0081c872  89464c               mov dword ptr [esi + 0x4c], eax
// 0081c875  8b5500               mov edx, dword ptr [ebp]
// 0081c878  8b4260               mov eax, dword ptr [edx + 0x60]
// 0081c87b  56                   push esi
// 0081c87c  8bcd                 mov ecx, ebp
// 0081c87e  ffd0                 call eax
// 0081c880  8bcb                 mov ecx, ebx
// 0081c882  e899e40000           call 0x82ad20
// 0081c887  85c0                 test eax, eax
// 0081c889  7464                 je 0x81c8ef
// 0081c88b  8b2f                 mov ebp, dword ptr [edi]
// 0081c88d  8bcb                 mov ecx, ebx
// 0081c88f  81c5c0010000         add ebp, 0x1c0
// 0081c895  e8e6e60000           call 0x82af80
// 0081c89a  8b16                 mov edx, dword ptr [esi]
// 0081c89c  50                   push eax
// 0081c89d  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0081c8a3  56                   push esi
// 0081c8a4  8bce                 mov ecx, esi
// 0081c8a6  ffd0                 call eax
// 0081c8a8  8b5500               mov edx, dword ptr [ebp]
// 0081c8ab  50                   push eax
// 0081c8ac  8bcf                 mov ecx, edi
// 0081c8ae  ffd2                 call edx
// 0081c8b0  8b06                 mov eax, dword ptr [esi]
// 0081c8b2  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081c8b8  8bce                 mov ecx, esi
// 0081c8ba  ffd2                 call edx
// 0081c8bc  85c0                 test eax, eax
// 0081c8be  742b                 je 0x81c8eb
// 0081c8c0  8b07                 mov eax, dword ptr [edi]
// 0081c8c2  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 0081c8c8  8bcf                 mov ecx, edi
// 0081c8ca  ffd2                 call edx
// 0081c8cc  85c0                 test eax, eax
// 0081c8ce  741b                 je 0x81c8eb
// 0081c8d0  8b06                 mov eax, dword ptr [esi]
// 0081c8d2  8b1f                 mov ebx, dword ptr [edi]
// 0081c8d4  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081c8da  8bce                 mov ecx, esi
// 0081c8dc  81c3b4010000         add ebx, 0x1b4
// 0081c8e2  ffd2                 call edx
// 0081c8e4  50                   push eax
// 0081c8e5  8b03                 mov eax, dword ptr [ebx]
// 0081c8e7  8bcf                 mov ecx, edi
// 0081c8e9  ffd0                 call eax
// 0081c8eb  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0081c8ef  8b742410             mov esi, dword ptr [esp + 0x10]
// 0081c8f3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081c8f7  46                   inc esi
// 0081c8f8  89742410             mov dword ptr [esp + 0x10], esi
// 0081c8fc  e81f030100           call 0x82cc20
// 0081c901  3bf0                 cmp esi, eax
// 0081c903  0f8cf8feffff         jl 0x81c801
// 0081c909  5f                   pop edi
// 0081c90a  5e                   pop esi
// 0081c90b  5d                   pop ebp
// 0081c90c  5b                   pop ebx
// 0081c90d  83c408               add esp, 8
// 0081c910  c20c00               ret 0xc
// copied from an identical function in another client (function ?BuildTree@CXTPReportControl@@MAEXPAVCXTPReportRows@@PAVCXTPReportRow@@PAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp