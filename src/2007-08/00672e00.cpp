// roc 2007-08 00672e00  unit: CXTPControlColorSelector  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00672e00
//
// 00672e00  8b442408             mov eax, dword ptr [esp + 8]
// 00672e04  8bd0                 mov edx, eax
// 00672e06  81e207000080         and edx, 0x80000007
// 00672e0c  56                   push esi
// 00672e0d  7905                 jns 0x672e14
// 00672e0f  4a                   dec edx
// 00672e10  83caf8               or edx, 0xfffffff8
// 00672e13  42                   inc edx
// 00672e14  8bb1c0000000         mov esi, dword ptr [ecx + 0xc0]
// 00672e1a  8b89c4000000         mov ecx, dword ptr [ecx + 0xc4]
// 00672e20  8d14d2               lea edx, [edx + edx*8]
// 00672e23  8d745602             lea esi, [esi + edx*2 + 2]
// 00672e27  99                   cdq 
// 00672e28  83e207               and edx, 7
// 00672e2b  03c2                 add eax, edx
// 00672e2d  c1f803               sar eax, 3
// 00672e30  8d04c0               lea eax, [eax + eax*8]
// 00672e33  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 00672e37  8b442408             mov eax, dword ptr [esp + 8]
// 00672e3b  8930                 mov dword ptr [eax], esi
// 00672e3d  83c612               add esi, 0x12
// 00672e40  894804               mov dword ptr [eax + 4], ecx
// 00672e43  83c112               add ecx, 0x12
// 00672e46  897008               mov dword ptr [eax + 8], esi
// 00672e49  89480c               mov dword ptr [eax + 0xc], ecx
// 00672e4c  5e                   pop esi
// 00672e4d  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetRect@CXTPControlColorSelector@@ABE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlPopupColor.cpp
