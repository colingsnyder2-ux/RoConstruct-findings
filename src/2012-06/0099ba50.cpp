// from server: 100% by auto
// roc 2012-06 0099ba50  unit: IIPAVCXTPImageManagerIcon::?$CMap  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099ba50
//
// 0099ba50  51                   push ecx
// 0099ba51  56                   push esi
// 0099ba52  57                   push edi
// 0099ba53  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0099ba57  8bf1                 mov esi, ecx
// 0099ba59  8d442410             lea eax, [esp + 0x10]
// 0099ba5d  50                   push eax
// 0099ba5e  8d4c240c             lea ecx, [esp + 0xc]
// 0099ba62  51                   push ecx
// 0099ba63  57                   push edi
// 0099ba64  8bce                 mov ecx, esi
// 0099ba66  e8a5a8feff           call 0x986310
// 0099ba6b  85c0                 test eax, eax
// 0099ba6d  753f                 jne 0x99baae
// 0099ba6f  394604               cmp dword ptr [esi + 4], eax
// 0099ba72  7518                 jne 0x99ba8c
// 0099ba74  8b5608               mov edx, dword ptr [esi + 8]
// 0099ba77  6a01                 push 1
// 0099ba79  52                   push edx
// 0099ba7a  8bce                 mov ecx, esi
// 0099ba7c  e82fc9ffff           call 0x9983b0
// 0099ba81  837e0400             cmp dword ptr [esi + 4], 0
// 0099ba85  7505                 jne 0x99ba8c
// 0099ba87  e83469feff           call 0x9823c0
// 0099ba8c  57                   push edi
// 0099ba8d  8bce                 mov ecx, esi
// 0099ba8f  e8cc910400           call 0x9e4c60
// 0099ba94  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0099ba98  89480c               mov dword ptr [eax + 0xc], ecx
// 0099ba9b  8b5604               mov edx, dword ptr [esi + 4]
// 0099ba9e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0099baa2  8b148a               mov edx, dword ptr [edx + ecx*4]
// 0099baa5  895008               mov dword ptr [eax + 8], edx
// 0099baa8  8b5604               mov edx, dword ptr [esi + 4]
// 0099baab  89048a               mov dword ptr [edx + ecx*4], eax
// 0099baae  5f                   pop edi
// 0099baaf  83c004               add eax, 4
// 0099bab2  5e                   pop esi
// 0099bab3  59                   pop ecx
// 0099bab4  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??A?$CMap@JJII@@QAEAAIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
