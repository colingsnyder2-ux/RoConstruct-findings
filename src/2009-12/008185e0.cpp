// roc 2009-12 008185e0  unit: CXTPPrintingDialog  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008185e0
//
// 008185e0  6aff                 push -1
// 008185e2  6819a89500           push 0x95a819
// 008185e7  64a100000000         mov eax, dword ptr fs:[0]
// 008185ed  50                   push eax
// 008185ee  51                   push ecx
// 008185ef  56                   push esi
// 008185f0  a10052b600           mov eax, dword ptr [0xb65200]
// 008185f5  33c4                 xor eax, esp
// 008185f7  50                   push eax
// 008185f8  8d44240c             lea eax, [esp + 0xc]
// 008185fc  64a300000000         mov dword ptr fs:[0], eax
// 00818602  8bf1                 mov esi, ecx
// 00818604  89742408             mov dword ptr [esp + 8], esi
// 00818608  c706a4449f00         mov dword ptr [esi], 0x9f44a4
// 0081860e  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 00818614  c744241403000000     mov dword ptr [esp + 0x14], 3
// 0081861c  85c9                 test ecx, ecx
// 0081861e  740f                 je 0x81862f
// 00818620  e8b7b7fdff           call 0x7f3ddc
// 00818625  c7866003000000000000 mov dword ptr [esi + 0x360], 0
// 0081862f  8b8e58030000         mov ecx, dword ptr [esi + 0x358]
// 00818635  85c9                 test ecx, ecx
// 00818637  7413                 je 0x81864c
// 00818639  8b01                 mov eax, dword ptr [ecx]
// 0081863b  8b5004               mov edx, dword ptr [eax + 4]
// 0081863e  6a01                 push 1
// 00818640  ffd2                 call edx
// 00818642  c7865803000000000000 mov dword ptr [esi + 0x358], 0
// 0081864c  8d4e74               lea ecx, [esi + 0x74]
// 0081864f  c644241402           mov byte ptr [esp + 0x14], 2
// 00818654  e8f7e80000           call 0x826f50
// 00818659  8d4e60               lea ecx, [esi + 0x60]
// 0081865c  c644241401           mov byte ptr [esp + 0x14], 1
// 00818661  e8dadf1000           call 0x926640
// 00818666  8d4e58               lea ecx, [esi + 0x58]
// 00818669  c644241400           mov byte ptr [esp + 0x14], 0
// 0081866e  c70118229a00         mov dword ptr [ecx], 0x9a2218
// 00818674  e8b76bbfff           call 0x40f230
// 00818679  8bce                 mov ecx, esi
// 0081867b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00818683  e8aabbfdff           call 0x7f4232
// 00818688  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081868c  64890d00000000       mov dword ptr fs:[0], ecx
// 00818693  59                   pop ecx
// 00818694  5e                   pop esi
// 00818695  83c410               add esp, 0x10
// 00818698  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportView@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp