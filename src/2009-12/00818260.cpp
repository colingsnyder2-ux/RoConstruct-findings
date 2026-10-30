// roc 2009-12 00818260  unit: CRobloxReportView  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818260
//
// 00818260  83ec10               sub esp, 0x10
// 00818263  8b442418             mov eax, dword ptr [esp + 0x18]
// 00818267  8b5004               mov edx, dword ptr [eax + 4]
// 0081826a  53                   push ebx
// 0081826b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0081826f  56                   push esi
// 00818270  8bf1                 mov esi, ecx
// 00818272  8b08                 mov ecx, dword ptr [eax]
// 00818274  894c2408             mov dword ptr [esp + 8], ecx
// 00818278  8b4808               mov ecx, dword ptr [eax + 8]
// 0081827b  8954240c             mov dword ptr [esp + 0xc], edx
// 0081827f  8b500c               mov edx, dword ptr [eax + 0xc]
// 00818282  894c2410             mov dword ptr [esp + 0x10], ecx
// 00818286  57                   push edi
// 00818287  8bce                 mov ecx, esi
// 00818289  89542418             mov dword ptr [esp + 0x18], edx
// 0081828d  e88effffff           call 0x818220
// 00818292  8bc8                 mov ecx, eax
// 00818294  85db                 test ebx, ebx
// 00818296  7407                 je 0x81829f
// 00818298  e8b3270800           call 0x89aa50
// 0081829d  eb05                 jmp 0x8182a4
// 0081829f  e8fc270800           call 0x89aaa0
// 008182a4  8b16                 mov edx, dword ptr [esi]
// 008182a6  8bf8                 mov edi, eax
// 008182a8  8b442410             mov eax, dword ptr [esp + 0x10]
// 008182ac  03c7                 add eax, edi
// 008182ae  6a00                 push 0
// 008182b0  8944241c             mov dword ptr [esp + 0x1c], eax
// 008182b4  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 008182ba  53                   push ebx
// 008182bb  8bce                 mov ecx, esi
// 008182bd  ffd0                 call eax
// 008182bf  8b542428             mov edx, dword ptr [esp + 0x28]
// 008182c3  50                   push eax
// 008182c4  8d4c2418             lea ecx, [esp + 0x18]
// 008182c8  51                   push ecx
// 008182c9  52                   push edx
// 008182ca  8bce                 mov ecx, esi
// 008182cc  e84fffffff           call 0x818220
// 008182d1  8bc8                 mov ecx, eax
// 008182d3  e888790800           call 0x89fc60
// 008182d8  8bc7                 mov eax, edi
// 008182da  5f                   pop edi
// 008182db  5e                   pop esi
// 008182dc  5b                   pop ebx
// 008182dd  83c410               add esp, 0x10
// 008182e0  c20c00               ret 0xc
// copied from an identical function in another client (function ?PrintFixedRowsDivider@CXTPReportView@@IAEHPAVCDC@@ABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp