// roc 2009-12 00856510  unit: CXTPTabClientWnd  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856510
//
// 00856510  6aff                 push -1
// 00856512  68d8df9500           push 0x95dfd8
// 00856517  64a100000000         mov eax, dword ptr fs:[0]
// 0085651d  50                   push eax
// 0085651e  51                   push ecx
// 0085651f  56                   push esi
// 00856520  57                   push edi
// 00856521  a10052b600           mov eax, dword ptr [0xb65200]
// 00856526  33c4                 xor eax, esp
// 00856528  50                   push eax
// 00856529  8d442410             lea eax, [esp + 0x10]
// 0085652d  64a300000000         mov dword ptr fs:[0], eax
// 00856533  8bf1                 mov esi, ecx
// 00856535  8974240c             mov dword ptr [esp + 0xc], esi
// 00856539  e80adcf9ff           call 0x7f4148
// 0085653e  8d7e58               lea edi, [esi + 0x58]
// 00856541  8bcf                 mov ecx, edi
// 00856543  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0085654b  e810f4ffff           call 0x855960
// 00856550  c70614c89f00         mov dword ptr [esi], 0x9fc814
// 00856556  c70784c79f00         mov dword ptr [edi], 0x9fc784
// 0085655c  8bc6                 mov eax, esi
// 0085655e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00856562  64890d00000000       mov dword ptr fs:[0], ecx
// 00856569  59                   pop ecx
// 0085656a  5f                   pop edi
// 0085656b  5e                   pop esi
// 0085656c  83c410               add esp, 0x10
// 0085656f  c3                   ret 
// copied from an identical function in another client (function ??0CSingleWorkspace@CXTPTabClientWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp