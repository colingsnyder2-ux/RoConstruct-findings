// roc 2010-06 007f14d0  unit: CXTPControlColorSelector  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f14d0
//
// 007f14d0  8b442408             mov eax, dword ptr [esp + 8]
// 007f14d4  8bd0                 mov edx, eax
// 007f14d6  81e207000080         and edx, 0x80000007
// 007f14dc  56                   push esi
// 007f14dd  7905                 jns 0x7f14e4
// 007f14df  4a                   dec edx
// 007f14e0  83caf8               or edx, 0xfffffff8
// 007f14e3  42                   inc edx
// 007f14e4  8bb1c0000000         mov esi, dword ptr [ecx + 0xc0]
// 007f14ea  8b89c4000000         mov ecx, dword ptr [ecx + 0xc4]
// 007f14f0  8d14d2               lea edx, [edx + edx*8]
// 007f14f3  8d745602             lea esi, [esi + edx*2 + 2]
// 007f14f7  99                   cdq 
// 007f14f8  83e207               and edx, 7
// 007f14fb  03c2                 add eax, edx
// 007f14fd  c1f803               sar eax, 3
// 007f1500  8d04c0               lea eax, [eax + eax*8]
// 007f1503  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 007f1507  8b442408             mov eax, dword ptr [esp + 8]
// 007f150b  8930                 mov dword ptr [eax], esi
// 007f150d  83c612               add esi, 0x12
// 007f1510  894804               mov dword ptr [eax + 4], ecx
// 007f1513  83c112               add ecx, 0x12
// 007f1516  897008               mov dword ptr [eax + 8], esi
// 007f1519  89480c               mov dword ptr [eax + 0xc], ecx
// 007f151c  5e                   pop esi
// 007f151d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetRect@CXTPControlColorSelector@@ABE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
