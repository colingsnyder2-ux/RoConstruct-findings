// roc 2008-06 006c9f50  unit: CXTPReportControl  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9f50
//
// 006c9f50  83ec1c               sub esp, 0x1c
// 006c9f53  53                   push ebx
// 006c9f54  55                   push ebp
// 006c9f55  56                   push esi
// 006c9f56  57                   push edi
// 006c9f57  894c2410             mov dword ptr [esp + 0x10], ecx
// 006c9f5b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006c9f5f  6a01                 push 1
// 006c9f61  e8bc200f00           call 0x7bc022
// 006c9f66  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006c9f6a  8b742434             mov esi, dword ptr [esp + 0x34]
// 006c9f6e  8b5e04               mov ebx, dword ptr [esi + 4]
// 006c9f71  8bcf                 mov ecx, edi
// 006c9f73  e8d8000100           call 0x6da050
// 006c9f78  8be8                 mov ebp, eax
// 006c9f7a  896c2418             mov dword ptr [esp + 0x18], ebp
// 006c9f7e  85ed                 test ebp, ebp
// 006c9f80  0f8ee7000000         jle 0x6ca06d
// 006c9f86  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c9f8a  8b8888020000         mov ecx, dword ptr [eax + 0x288]
// 006c9f90  8b11                 mov edx, dword ptr [ecx]
// 006c9f92  8b427c               mov eax, dword ptr [edx + 0x7c]
// 006c9f95  6a01                 push 1
// 006c9f97  6aff                 push -1
// 006c9f99  ffd0                 call eax
// 006c9f9b  85c0                 test eax, eax
// 006c9f9d  0f84ca000000         je 0x6ca06d
// 006c9fa3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c9fa7  8b9188020000         mov edx, dword ptr [ecx + 0x288]
// 006c9fad  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 006c9fb3  89442414             mov dword ptr [esp + 0x14], eax
// 006c9fb7  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006c9fbf  85ed                 test ebp, ebp
// 006c9fc1  0f8ea6000000         jle 0x6ca06d
// 006c9fc7  eb0b                 jmp 0x6c9fd4
// 006c9fc9  8da42400000000       lea esp, [esp]
// 006c9fd0  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006c9fd4  8b17                 mov edx, dword ptr [edi]
// 006c9fd6  8b442434             mov eax, dword ptr [esp + 0x34]
// 006c9fda  8b525c               mov edx, dword ptr [edx + 0x5c]
// 006c9fdd  50                   push eax
// 006c9fde  8bcf                 mov ecx, edi
// 006c9fe0  ffd2                 call edx
// 006c9fe2  3b5e0c               cmp ebx, dword ptr [esi + 0xc]
// 006c9fe5  8be8                 mov ebp, eax
// 006c9fe7  0f8f80000000         jg 0x6ca06d
// 006c9fed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c9ff1  8b4500               mov eax, dword ptr [ebp]
// 006c9ff4  8b542430             mov edx, dword ptr [esp + 0x30]
// 006c9ff8  8b4068               mov eax, dword ptr [eax + 0x68]
// 006c9ffb  51                   push ecx
// 006c9ffc  52                   push edx
// 006c9ffd  8bcd                 mov ecx, ebp
// 006c9fff  ffd0                 call eax
// 006ca001  8b0e                 mov ecx, dword ptr [esi]
// 006ca003  8b542414             mov edx, dword ptr [esp + 0x14]
// 006ca007  8bf8                 mov edi, eax
// 006ca009  8d0411               lea eax, [ecx + edx]
// 006ca00c  83ec10               sub esp, 0x10
// 006ca00f  89442434             mov dword ptr [esp + 0x34], eax
// 006ca013  8bc4                 mov eax, esp
// 006ca015  8bd1                 mov edx, ecx
// 006ca017  8910                 mov dword ptr [eax], edx
// 006ca019  8b5604               mov edx, dword ptr [esi + 4]
// 006ca01c  895004               mov dword ptr [eax + 4], edx
// 006ca01f  8b5608               mov edx, dword ptr [esi + 8]
// 006ca022  895008               mov dword ptr [eax + 8], edx
// 006ca025  8b560c               mov edx, dword ptr [esi + 0xc]
// 006ca028  89500c               mov dword ptr [eax + 0xc], edx
// 006ca02b  8b442420             mov eax, dword ptr [esp + 0x20]
// 006ca02f  8b900c010000         mov edx, dword ptr [eax + 0x10c]
// 006ca035  52                   push edx
// 006ca036  8b542444             mov edx, dword ptr [esp + 0x44]
// 006ca03a  83ec10               sub esp, 0x10
// 006ca03d  8bc4                 mov eax, esp
// 006ca03f  8908                 mov dword ptr [eax], ecx
// 006ca041  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006ca045  895804               mov dword ptr [eax + 4], ebx
// 006ca048  894808               mov dword ptr [eax + 8], ecx
// 006ca04b  03fb                 add edi, ebx
// 006ca04d  52                   push edx
// 006ca04e  8bcd                 mov ecx, ebp
// 006ca050  89780c               mov dword ptr [eax + 0xc], edi
// 006ca053  e888820800           call 0x7522e0
// 006ca058  8b442434             mov eax, dword ptr [esp + 0x34]
// 006ca05c  40                   inc eax
// 006ca05d  3b442418             cmp eax, dword ptr [esp + 0x18]
// 006ca061  8bdf                 mov ebx, edi
// 006ca063  89442434             mov dword ptr [esp + 0x34], eax
// 006ca067  0f8c63ffffff         jl 0x6c9fd0
// 006ca06d  5f                   pop edi
// 006ca06e  5e                   pop esi
// 006ca06f  5d                   pop ebp
// 006ca070  5b                   pop ebx
// 006ca071  83c41c               add esp, 0x1c
// 006ca074  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?DrawFixedRows@CXTPReportControl@@MAEXPAVCDC@@AAVCRect@@PAVCXTPReportRows@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
