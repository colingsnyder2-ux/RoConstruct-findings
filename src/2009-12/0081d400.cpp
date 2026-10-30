// roc 2009-12 0081d400  unit: CXTPReportControl  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081d400
//
// 0081d400  83ec1c               sub esp, 0x1c
// 0081d403  53                   push ebx
// 0081d404  55                   push ebp
// 0081d405  56                   push esi
// 0081d406  57                   push edi
// 0081d407  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081d40b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0081d40f  6a01                 push 1
// 0081d411  e87a901000           call 0x926490
// 0081d416  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0081d41a  8b742434             mov esi, dword ptr [esp + 0x34]
// 0081d41e  8b5e04               mov ebx, dword ptr [esi + 4]
// 0081d421  8bcf                 mov ecx, edi
// 0081d423  e8f8f70000           call 0x82cc20
// 0081d428  8be8                 mov ebp, eax
// 0081d42a  896c2418             mov dword ptr [esp + 0x18], ebp
// 0081d42e  85ed                 test ebp, ebp
// 0081d430  0f8ee7000000         jle 0x81d51d
// 0081d436  8b442410             mov eax, dword ptr [esp + 0x10]
// 0081d43a  8b8888020000         mov ecx, dword ptr [eax + 0x288]
// 0081d440  8b11                 mov edx, dword ptr [ecx]
// 0081d442  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0081d445  6a01                 push 1
// 0081d447  6aff                 push -1
// 0081d449  ffd0                 call eax
// 0081d44b  85c0                 test eax, eax
// 0081d44d  0f84ca000000         je 0x81d51d
// 0081d453  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081d457  8b9188020000         mov edx, dword ptr [ecx + 0x288]
// 0081d45d  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 0081d463  89442414             mov dword ptr [esp + 0x14], eax
// 0081d467  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0081d46f  85ed                 test ebp, ebp
// 0081d471  0f8ea6000000         jle 0x81d51d
// 0081d477  eb0b                 jmp 0x81d484
// 0081d479  8da42400000000       lea esp, [esp]
// 0081d480  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0081d484  8b17                 mov edx, dword ptr [edi]
// 0081d486  8b442434             mov eax, dword ptr [esp + 0x34]
// 0081d48a  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0081d48d  50                   push eax
// 0081d48e  8bcf                 mov ecx, edi
// 0081d490  ffd2                 call edx
// 0081d492  3b5e0c               cmp ebx, dword ptr [esi + 0xc]
// 0081d495  8be8                 mov ebp, eax
// 0081d497  0f8f80000000         jg 0x81d51d
// 0081d49d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081d4a1  8b4500               mov eax, dword ptr [ebp]
// 0081d4a4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0081d4a8  8b4068               mov eax, dword ptr [eax + 0x68]
// 0081d4ab  51                   push ecx
// 0081d4ac  52                   push edx
// 0081d4ad  8bcd                 mov ecx, ebp
// 0081d4af  ffd0                 call eax
// 0081d4b1  8b0e                 mov ecx, dword ptr [esi]
// 0081d4b3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0081d4b7  8bf8                 mov edi, eax
// 0081d4b9  8d0411               lea eax, [ecx + edx]
// 0081d4bc  83ec10               sub esp, 0x10
// 0081d4bf  89442434             mov dword ptr [esp + 0x34], eax
// 0081d4c3  8bc4                 mov eax, esp
// 0081d4c5  8bd1                 mov edx, ecx
// 0081d4c7  8910                 mov dword ptr [eax], edx
// 0081d4c9  8b5604               mov edx, dword ptr [esi + 4]
// 0081d4cc  895004               mov dword ptr [eax + 4], edx
// 0081d4cf  8b5608               mov edx, dword ptr [esi + 8]
// 0081d4d2  895008               mov dword ptr [eax + 8], edx
// 0081d4d5  8b560c               mov edx, dword ptr [esi + 0xc]
// 0081d4d8  89500c               mov dword ptr [eax + 0xc], edx
// 0081d4db  8b442420             mov eax, dword ptr [esp + 0x20]
// 0081d4df  8b900c010000         mov edx, dword ptr [eax + 0x10c]
// 0081d4e5  52                   push edx
// 0081d4e6  8b542444             mov edx, dword ptr [esp + 0x44]
// 0081d4ea  83ec10               sub esp, 0x10
// 0081d4ed  8bc4                 mov eax, esp
// 0081d4ef  8908                 mov dword ptr [eax], ecx
// 0081d4f1  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0081d4f5  895804               mov dword ptr [eax + 4], ebx
// 0081d4f8  894808               mov dword ptr [eax + 8], ecx
// 0081d4fb  03fb                 add edi, ebx
// 0081d4fd  52                   push edx
// 0081d4fe  8bcd                 mov ecx, ebp
// 0081d500  89780c               mov dword ptr [eax + 0xc], edi
// 0081d503  e8e8810800           call 0x8a56f0
// 0081d508  8b442434             mov eax, dword ptr [esp + 0x34]
// 0081d50c  40                   inc eax
// 0081d50d  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0081d511  8bdf                 mov ebx, edi
// 0081d513  89442434             mov dword ptr [esp + 0x34], eax
// 0081d517  0f8c63ffffff         jl 0x81d480
// 0081d51d  5f                   pop edi
// 0081d51e  5e                   pop esi
// 0081d51f  5d                   pop ebp
// 0081d520  5b                   pop ebx
// 0081d521  83c41c               add esp, 0x1c
// 0081d524  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawFixedRows@CXTPReportControl@@MAEXPAVCDC@@AAVCRect@@PAVCXTPReportRows@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp