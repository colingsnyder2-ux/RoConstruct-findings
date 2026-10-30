// roc 2009-12 008daf90  unit: CXTColorPageStandard  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008daf90
//
// 008daf90  6aff                 push -1
// 008daf92  6826559600           push 0x965526
// 008daf97  64a100000000         mov eax, dword ptr fs:[0]
// 008daf9d  50                   push eax
// 008daf9e  51                   push ecx
// 008daf9f  56                   push esi
// 008dafa0  a10052b600           mov eax, dword ptr [0xb65200]
// 008dafa5  33c4                 xor eax, esp
// 008dafa7  50                   push eax
// 008dafa8  8d44240c             lea eax, [esp + 0xc]
// 008dafac  64a300000000         mov dword ptr fs:[0], eax
// 008dafb2  8bf1                 mov esi, ecx
// 008dafb4  89742408             mov dword ptr [esp + 8], esi
// 008dafb8  6a30                 push 0x30
// 008dafba  6a00                 push 0
// 008dafbc  6862240000           push 0x2462
// 008dafc1  e826b90400           call 0x9268ec
// 008dafc6  8d8e88000000         lea ecx, [esi + 0x88]
// 008dafcc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008dafd4  c70694b0a000         mov dword ptr [esi], 0xa0b094
// 008dafda  e8e1f9ffff           call 0x8da9c0
// 008dafdf  8bce                 mov ecx, esi
// 008dafe1  c644241401           mov byte ptr [esp + 0x14], 1
// 008dafe6  e811b80400           call 0x9267fc
// 008dafeb  83c004               add eax, 4
// 008dafee  8320df               and dword ptr [eax], 0xffffffdf
// 008daff1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008daff5  898618010000         mov dword ptr [esi + 0x118], eax
// 008daffb  8bc6                 mov eax, esi
// 008daffd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008db001  64890d00000000       mov dword ptr fs:[0], ecx
// 008db008  59                   pop ecx
// 008db009  5e                   pop esi
// 008db00a  83c410               add esp, 0x10
// 008db00d  c20400               ret 4
// copied from an identical function in another client (function ??0CXTColorPageStandard@@QAE@PAVCXTColorDialog@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp