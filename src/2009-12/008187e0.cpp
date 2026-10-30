// roc 2009-12 008187e0  unit: CRobloxReportView  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008187e0
//
// 008187e0  56                   push esi
// 008187e1  8bf1                 mov esi, ecx
// 008187e3  8b06                 mov eax, dword ptr [esi]
// 008187e5  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008187eb  57                   push edi
// 008187ec  ffd2                 call edx
// 008187ee  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 008187f4  e847630100           call 0x82eb40
// 008187f9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008187fd  85c0                 test eax, eax
// 008187ff  7e09                 jle 0x81880a
// 00818801  8b07                 mov eax, dword ptr [edi]
// 00818803  8b4074               mov eax, dword ptr [eax + 0x74]
// 00818806  836014fb             and dword ptr [eax + 0x14], 0xfffffffb
// 0081880a  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 00818810  894f0c               mov dword ptr [edi + 0xc], ecx
// 00818813  57                   push edi
// 00818814  8bce                 mov ecx, esi
// 00818816  e867befdff           call 0x7f4682
// 0081881b  85c0                 test eax, eax
// 0081881d  7505                 jne 0x818824
// 0081881f  5f                   pop edi
// 00818820  5e                   pop esi
// 00818821  c20400               ret 4
// 00818824  8b17                 mov edx, dword ptr [edi]
// 00818826  8b4274               mov eax, dword ptr [edx + 0x74]
// 00818829  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0081882c  83e101               and ecx, 1
// 0081882f  5f                   pop edi
// 00818830  898e5c030000         mov dword ptr [esi + 0x35c], ecx
// 00818836  b801000000           mov eax, 1
// 0081883b  5e                   pop esi
// 0081883c  c20400               ret 4
// copied from an identical function in another client (function ?OnPreparePrinting@CXTPReportView@@MAEHPAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp