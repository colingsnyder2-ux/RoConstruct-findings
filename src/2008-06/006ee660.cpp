// roc 2008-06 006ee660  unit: CXTPPopupBar  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee660
//
// 006ee660  8b442408             mov eax, dword ptr [esp + 8]
// 006ee664  56                   push esi
// 006ee665  57                   push edi
// 006ee666  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ee66a  50                   push eax
// 006ee66b  57                   push edi
// 006ee66c  8bf1                 mov esi, ecx
// 006ee66e  e81d69fcff           call 0x6b4f90
// 006ee673  8b8fb0010000         mov ecx, dword ptr [edi + 0x1b0]
// 006ee679  8d97f0010000         lea edx, [edi + 0x1f0]
// 006ee67f  898eb0010000         mov dword ptr [esi + 0x1b0], ecx
// 006ee685  52                   push edx
// 006ee686  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 006ee68c  ff1544318000         call dword ptr [0x803144]
// 006ee692  8b87f4010000         mov eax, dword ptr [edi + 0x1f4]
// 006ee698  8986f4010000         mov dword ptr [esi + 0x1f4], eax
// 006ee69e  8b8ff8010000         mov ecx, dword ptr [edi + 0x1f8]
// 006ee6a4  898ef8010000         mov dword ptr [esi + 0x1f8], ecx
// 006ee6aa  8b97fc010000         mov edx, dword ptr [edi + 0x1fc]
// 006ee6b0  8996fc010000         mov dword ptr [esi + 0x1fc], edx
// 006ee6b6  8b8700020000         mov eax, dword ptr [edi + 0x200]
// 006ee6bc  898600020000         mov dword ptr [esi + 0x200], eax
// 006ee6c2  8b8f04020000         mov ecx, dword ptr [edi + 0x204]
// 006ee6c8  898e04020000         mov dword ptr [esi + 0x204], ecx
// 006ee6ce  8b9708020000         mov edx, dword ptr [edi + 0x208]
// 006ee6d4  899608020000         mov dword ptr [esi + 0x208], edx
// 006ee6da  8b870c020000         mov eax, dword ptr [edi + 0x20c]
// 006ee6e0  89860c020000         mov dword ptr [esi + 0x20c], eax
// 006ee6e6  8b8f14020000         mov ecx, dword ptr [edi + 0x214]
// 006ee6ec  5f                   pop edi
// 006ee6ed  898e14020000         mov dword ptr [esi + 0x214], ecx
// 006ee6f3  5e                   pop esi
// 006ee6f4  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?Copy@CXTPPopupBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
