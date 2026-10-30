// roc 2009-12 008261e0  unit: CXTPReportControl  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008261e0
//
// 008261e0  56                   push esi
// 008261e1  57                   push edi
// 008261e2  8bf1                 mov esi, ecx
// 008261e4  e847dcfcff           call 0x7f3e30
// 008261e9  8b06                 mov eax, dword ptr [esi]
// 008261eb  8b9014020000         mov edx, dword ptr [eax + 0x214]
// 008261f1  8bce                 mov ecx, esi
// 008261f3  c7864002000000000000 mov dword ptr [esi + 0x240], 0
// 008261fd  ffd2                 call edx
// 008261ff  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 00826205  85c9                 test ecx, ecx
// 00826207  7416                 je 0x82621f
// 00826209  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082620d  8b01                 mov eax, dword ptr [ecx]
// 0082620f  8b406c               mov eax, dword ptr [eax + 0x6c]
// 00826212  52                   push edx
// 00826213  8b542414             mov edx, dword ptr [esp + 0x14]
// 00826217  52                   push edx
// 00826218  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082621c  52                   push edx
// 0082621d  ffd0                 call eax
// 0082621f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00826223  8b542410             mov edx, dword ptr [esp + 0x10]
// 00826227  51                   push ecx
// 00826228  52                   push edx
// 00826229  8bce                 mov ecx, esi
// 0082622b  e8b073ffff           call 0x81d5e0
// 00826230  8bf8                 mov edi, eax
// 00826232  85ff                 test edi, edi
// 00826234  7414                 je 0x82624a
// 00826236  3bbea4020000         cmp edi, dword ptr [esi + 0x2a4]
// 0082623c  750c                 jne 0x82624a
// 0082623e  6a00                 push 0
// 00826240  6a00                 push 0
// 00826242  57                   push edi
// 00826243  8bce                 mov ecx, esi
// 00826245  e8b6f8ffff           call 0x825b00
// 0082624a  83bec401000000       cmp dword ptr [esi + 0x1c4], 0
// 00826251  c786a402000000000000 mov dword ptr [esi + 0x2a4], 0
// 0082625b  7418                 je 0x826275
// 0082625d  8b3530cc9800         mov esi, dword ptr [0x98cc30]
// 00826263  6a10                 push 0x10
// 00826265  ffd6                 call esi
// 00826267  6685c0               test ax, ax
// 0082626a  7c30                 jl 0x82629c
// 0082626c  6a11                 push 0x11
// 0082626e  ffd6                 call esi
// 00826270  6685c0               test ax, ax
// 00826273  7c27                 jl 0x82629c
// 00826275  85ff                 test edi, edi
// 00826277  7423                 je 0x82629c
// 00826279  8b07                 mov eax, dword ptr [edi]
// 0082627b  8b5070               mov edx, dword ptr [eax + 0x70]
// 0082627e  8bcf                 mov ecx, edi
// 00826280  ffd2                 call edx
// 00826282  85c0                 test eax, eax
// 00826284  7416                 je 0x82629c
// 00826286  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082628a  8b07                 mov eax, dword ptr [edi]
// 0082628c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00826290  8b8090000000         mov eax, dword ptr [eax + 0x90]
// 00826296  51                   push ecx
// 00826297  52                   push edx
// 00826298  8bcf                 mov ecx, edi
// 0082629a  ffd0                 call eax
// 0082629c  5f                   pop edi
// 0082629d  5e                   pop esi
// 0082629e  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp