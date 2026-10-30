// roc 2009-12 0081f3e0  unit: CXTPReportControl::CReportDropTarget  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081f3e0
//
// 0081f3e0  53                   push ebx
// 0081f3e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0081f3e5  8b4304               mov eax, dword ptr [ebx + 4]
// 0081f3e8  55                   push ebp
// 0081f3e9  56                   push esi
// 0081f3ea  57                   push edi
// 0081f3eb  50                   push eax
// 0081f3ec  8be9                 mov ebp, ecx
// 0081f3ee  33f6                 xor esi, esi
// 0081f3f0  e82947fdff           call 0x7f3b1e
// 0081f3f5  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0081f3fb  8b08                 mov ecx, dword ptr [eax]
// 0081f3fd  e89e3dc3ff           call 0x4531a0
// 0081f402  85c0                 test eax, eax
// 0081f404  7e72                 jle 0x81f478
// 0081f406  8b4304               mov eax, dword ptr [ebx + 4]
// 0081f409  6a00                 push 0
// 0081f40b  56                   push esi
// 0081f40c  50                   push eax
// 0081f40d  e80c47fdff           call 0x7f3b1e
// 0081f412  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 0081f418  8b09                 mov ecx, dword ptr [ecx]
// 0081f41a  e8e1a5feff           call 0x809a00
// 0081f41f  6a00                 push 0
// 0081f421  83ec08               sub esp, 8
// 0081f424  89642420             mov dword ptr [esp + 0x20], esp
// 0081f428  8bf8                 mov edi, eax
// 0081f42a  8bc4                 mov eax, esp
// 0081f42c  56                   push esi
// 0081f42d  83ec24               sub esp, 0x24
// 0081f430  8bcc                 mov ecx, esp
// 0081f432  89642448             mov dword ptr [esp + 0x48], esp
// 0081f436  6a01                 push 1
// 0081f438  57                   push edi
// 0081f439  c70000000000         mov dword ptr [eax], 0
// 0081f43f  c7400400000000       mov dword ptr [eax + 4], 0
// 0081f446  e845d8feff           call 0x80cc90
// 0081f44b  8b8dd0010000         mov ecx, dword ptr [ebp + 0x1d0]
// 0081f451  e89afefeff           call 0x80f2f0
// 0081f456  57                   push edi
// 0081f457  ff15f8c99800         call dword ptr [0x98c9f8]
// 0081f45d  8b4304               mov eax, dword ptr [ebx + 4]
// 0081f460  50                   push eax
// 0081f461  46                   inc esi
// 0081f462  e8b746fdff           call 0x7f3b1e
// 0081f467  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0081f46d  8b0a                 mov ecx, dword ptr [edx]
// 0081f46f  e82c3dc3ff           call 0x4531a0
// 0081f474  3bf0                 cmp esi, eax
// 0081f476  7c8e                 jl 0x81f406
// 0081f478  5f                   pop edi
// 0081f479  5e                   pop esi
// 0081f47a  5d                   pop ebp
// 0081f47b  5b                   pop ebx
// 0081f47c  c20400               ret 4
// copied from an identical function in another client (function ?SetImageList@CXTPReportControl@@QAEXPAVCImageList@@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp