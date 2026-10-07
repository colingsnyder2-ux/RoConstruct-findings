// roc 2012-06 00a5ff00  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5ff00
//
// 00a5ff00  53                   push ebx
// 00a5ff01  56                   push esi
// 00a5ff02  57                   push edi
// 00a5ff03  8bf1                 mov esi, ecx
// 00a5ff05  e8d427f2ff           call 0x9826de
// 00a5ff0a  ff15e83bb200         call dword ptr [0xb23be8]
// 00a5ff10  50                   push eax
// 00a5ff11  e85027f2ff           call 0x982666
// 00a5ff16  3bc6                 cmp eax, esi
// 00a5ff18  7407                 je 0xa5ff21
// 00a5ff1a  8bce                 mov ecx, esi
// 00a5ff1c  e88325f2ff           call 0x9824a4
// 00a5ff21  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a5ff25  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a5ff29  57                   push edi
// 00a5ff2a  53                   push ebx
// 00a5ff2b  8bce                 mov ecx, esi
// 00a5ff2d  e87efaffff           call 0xa5f9b0
// 00a5ff32  83f8ff               cmp eax, -1
// 00a5ff35  7437                 je 0xa5ff6e
// 00a5ff37  57                   push edi
// 00a5ff38  53                   push ebx
// 00a5ff39  8bce                 mov ecx, esi
// 00a5ff3b  e860feffff           call 0xa5fda0
// 00a5ff40  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a5ff43  c7466001000000       mov dword ptr [esi + 0x60], 1
// 00a5ff4a  8b35503ab200         mov esi, dword ptr [0xb23a50]
// 00a5ff50  50                   push eax
// 00a5ff51  ffd6                 call esi
// 00a5ff53  50                   push eax
// 00a5ff54  e80d27f2ff           call 0x982666
// 00a5ff59  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a5ff5c  51                   push ecx
// 00a5ff5d  ffd6                 call esi
// 00a5ff5f  50                   push eax
// 00a5ff60  e80127f2ff           call 0x982666
// 00a5ff65  6a01                 push 1
// 00a5ff67  8bc8                 mov ecx, eax
// 00a5ff69  e8e49d0300           call 0xa99d52
// 00a5ff6e  5f                   pop edi
// 00a5ff6f  5e                   pop esi
// 00a5ff70  5b                   pop ebx
// 00a5ff71  c20c00               ret 0xc
// library xtp-13.2.1/Source\Controls\XTColorPageStandard.cpp (function ?OnLButtonDblClk@CXTColorHex@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorPageStandard.cpp
