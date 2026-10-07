// roc 2012-06 00a18db0  unit: ATL::D::DV?$ChTraitsCRT::DV?$StrTraitMFC_DLL::IIV?$CStringT::?$CMap  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a18db0
//
// 00a18db0  51                   push ecx
// 00a18db1  56                   push esi
// 00a18db2  57                   push edi
// 00a18db3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a18db7  8bf1                 mov esi, ecx
// 00a18db9  8d442410             lea eax, [esp + 0x10]
// 00a18dbd  50                   push eax
// 00a18dbe  8d4c240c             lea ecx, [esp + 0xc]
// 00a18dc2  51                   push ecx
// 00a18dc3  57                   push edi
// 00a18dc4  8bce                 mov ecx, esi
// 00a18dc6  e845d5f6ff           call 0x986310
// 00a18dcb  85c0                 test eax, eax
// 00a18dcd  753f                 jne 0xa18e0e
// 00a18dcf  394604               cmp dword ptr [esi + 4], eax
// 00a18dd2  7518                 jne 0xa18dec
// 00a18dd4  8b5608               mov edx, dword ptr [esi + 8]
// 00a18dd7  6a01                 push 1
// 00a18dd9  52                   push edx
// 00a18dda  8bce                 mov ecx, esi
// 00a18ddc  e8cff5f7ff           call 0x9983b0
// 00a18de1  837e0400             cmp dword ptr [esi + 4], 0
// 00a18de5  7505                 jne 0xa18dec
// 00a18de7  e8d495f6ff           call 0x9823c0
// 00a18dec  57                   push edi
// 00a18ded  8bce                 mov ecx, esi
// 00a18def  e86cfdffff           call 0xa18b60
// 00a18df4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a18df8  89480c               mov dword ptr [eax + 0xc], ecx
// 00a18dfb  8b5604               mov edx, dword ptr [esi + 4]
// 00a18dfe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a18e02  8b148a               mov edx, dword ptr [edx + ecx*4]
// 00a18e05  895008               mov dword ptr [eax + 8], edx
// 00a18e08  8b5604               mov edx, dword ptr [esi + 4]
// 00a18e0b  89048a               mov dword ptr [edx + ecx*4], eax
// 00a18e0e  5f                   pop edi
// 00a18e0f  83c004               add eax, 4
// 00a18e12  5e                   pop esi
// 00a18e13  59                   pop ecx
// 00a18e14  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??A?$CMap@JJII@@QAEAAIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
