// roc 2009-12 0083d3d0  unit: CXTPControlColorSelector  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083d3d0
//
// 0083d3d0  8b442408             mov eax, dword ptr [esp + 8]
// 0083d3d4  8bd0                 mov edx, eax
// 0083d3d6  81e207000080         and edx, 0x80000007
// 0083d3dc  56                   push esi
// 0083d3dd  7905                 jns 0x83d3e4
// 0083d3df  4a                   dec edx
// 0083d3e0  83caf8               or edx, 0xfffffff8
// 0083d3e3  42                   inc edx
// 0083d3e4  8bb1c0000000         mov esi, dword ptr [ecx + 0xc0]
// 0083d3ea  8b89c4000000         mov ecx, dword ptr [ecx + 0xc4]
// 0083d3f0  8d14d2               lea edx, [edx + edx*8]
// 0083d3f3  8d745602             lea esi, [esi + edx*2 + 2]
// 0083d3f7  99                   cdq 
// 0083d3f8  83e207               and edx, 7
// 0083d3fb  03c2                 add eax, edx
// 0083d3fd  c1f803               sar eax, 3
// 0083d400  8d04c0               lea eax, [eax + eax*8]
// 0083d403  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 0083d407  8b442408             mov eax, dword ptr [esp + 8]
// 0083d40b  8930                 mov dword ptr [eax], esi
// 0083d40d  83c612               add esi, 0x12
// 0083d410  894804               mov dword ptr [eax + 4], ecx
// 0083d413  83c112               add ecx, 0x12
// 0083d416  897008               mov dword ptr [eax + 8], esi
// 0083d419  89480c               mov dword ptr [eax + 0xc], ecx
// 0083d41c  5e                   pop esi
// 0083d41d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetRect@CXTPControlColorSelector@@ABE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
