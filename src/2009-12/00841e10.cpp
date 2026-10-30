// roc 2009-12 00841e10  unit: CXTPPopupBar  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841e10
//
// 00841e10  8b442408             mov eax, dword ptr [esp + 8]
// 00841e14  56                   push esi
// 00841e15  57                   push edi
// 00841e16  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00841e1a  50                   push eax
// 00841e1b  57                   push edi
// 00841e1c  8bf1                 mov esi, ecx
// 00841e1e  e82d28fcff           call 0x804650
// 00841e23  8b8fb0010000         mov ecx, dword ptr [edi + 0x1b0]
// 00841e29  8d97f0010000         lea edx, [edi + 0x1f0]
// 00841e2f  898eb0010000         mov dword ptr [esi + 0x1b0], ecx
// 00841e35  52                   push edx
// 00841e36  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00841e3c  ff1538d59800         call dword ptr [0x98d538]
// 00841e42  8b87f4010000         mov eax, dword ptr [edi + 0x1f4]
// 00841e48  8986f4010000         mov dword ptr [esi + 0x1f4], eax
// 00841e4e  8b8ff8010000         mov ecx, dword ptr [edi + 0x1f8]
// 00841e54  898ef8010000         mov dword ptr [esi + 0x1f8], ecx
// 00841e5a  8b97fc010000         mov edx, dword ptr [edi + 0x1fc]
// 00841e60  8996fc010000         mov dword ptr [esi + 0x1fc], edx
// 00841e66  8b8700020000         mov eax, dword ptr [edi + 0x200]
// 00841e6c  898600020000         mov dword ptr [esi + 0x200], eax
// 00841e72  8b8f04020000         mov ecx, dword ptr [edi + 0x204]
// 00841e78  898e04020000         mov dword ptr [esi + 0x204], ecx
// 00841e7e  8b9708020000         mov edx, dword ptr [edi + 0x208]
// 00841e84  899608020000         mov dword ptr [esi + 0x208], edx
// 00841e8a  8b870c020000         mov eax, dword ptr [edi + 0x20c]
// 00841e90  89860c020000         mov dword ptr [esi + 0x20c], eax
// 00841e96  8b8f14020000         mov ecx, dword ptr [edi + 0x214]
// 00841e9c  5f                   pop edi
// 00841e9d  898e14020000         mov dword ptr [esi + 0x214], ecx
// 00841ea3  5e                   pop esi
// 00841ea4  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPPopupBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp