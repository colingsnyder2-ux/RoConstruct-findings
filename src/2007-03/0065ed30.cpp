// roc 2007-03 0065ed30  unit: seg_00650000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065ed30
//
// 0065ed30  8b442408             mov eax, dword ptr [esp + 8]
// 0065ed34  8bd0                 mov edx, eax
// 0065ed36  81e207000080         and edx, 0x80000007
// 0065ed3c  56                   push esi
// 0065ed3d  7905                 jns 0x65ed44
// 0065ed3f  4a                   dec edx
// 0065ed40  83caf8               or edx, 0xfffffff8
// 0065ed43  42                   inc edx
// 0065ed44  8bb1c0000000         mov esi, dword ptr [ecx + 0xc0]
// 0065ed4a  8b89c4000000         mov ecx, dword ptr [ecx + 0xc4]
// 0065ed50  8d14d2               lea edx, [edx + edx*8]
// 0065ed53  8d745602             lea esi, [esi + edx*2 + 2]
// 0065ed57  99                   cdq 
// 0065ed58  83e207               and edx, 7
// 0065ed5b  03c2                 add eax, edx
// 0065ed5d  c1f803               sar eax, 3
// 0065ed60  8d04c0               lea eax, [eax + eax*8]
// 0065ed63  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 0065ed67  8b442408             mov eax, dword ptr [esp + 8]
// 0065ed6b  8930                 mov dword ptr [eax], esi
// 0065ed6d  83c612               add esi, 0x12
// 0065ed70  894804               mov dword ptr [eax + 4], ecx
// 0065ed73  83c112               add ecx, 0x12
// 0065ed76  897008               mov dword ptr [eax + 8], esi
// 0065ed79  89480c               mov dword ptr [eax + 0xc], ecx
// 0065ed7c  5e                   pop esi
// 0065ed7d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetRect@CXTPControlColorSelector@@ABE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
