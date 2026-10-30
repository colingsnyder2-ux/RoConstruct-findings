// roc 2009-06 007625f0  unit: CXTPControlColorSelector  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007625f0
//
// 007625f0  8b442408             mov eax, dword ptr [esp + 8]
// 007625f4  8bd0                 mov edx, eax
// 007625f6  81e207000080         and edx, 0x80000007
// 007625fc  56                   push esi
// 007625fd  7905                 jns 0x762604
// 007625ff  4a                   dec edx
// 00762600  83caf8               or edx, 0xfffffff8
// 00762603  42                   inc edx
// 00762604  8bb1c0000000         mov esi, dword ptr [ecx + 0xc0]
// 0076260a  8b89c4000000         mov ecx, dword ptr [ecx + 0xc4]
// 00762610  8d14d2               lea edx, [edx + edx*8]
// 00762613  8d745602             lea esi, [esi + edx*2 + 2]
// 00762617  99                   cdq 
// 00762618  83e207               and edx, 7
// 0076261b  03c2                 add eax, edx
// 0076261d  c1f803               sar eax, 3
// 00762620  8d04c0               lea eax, [eax + eax*8]
// 00762623  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 00762627  8b442408             mov eax, dword ptr [esp + 8]
// 0076262b  8930                 mov dword ptr [eax], esi
// 0076262d  83c612               add esi, 0x12
// 00762630  894804               mov dword ptr [eax + 4], ecx
// 00762633  83c112               add ecx, 0x12
// 00762636  897008               mov dword ptr [eax + 8], esi
// 00762639  89480c               mov dword ptr [eax + 0xc], ecx
// 0076263c  5e                   pop esi
// 0076263d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetRect@CXTPControlColorSelector@@ABE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
