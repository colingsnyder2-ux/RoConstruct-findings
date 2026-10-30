// roc 2012-06 009cb220  unit: CXTPControlColorSelector  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cb220
//
// 009cb220  8b442408             mov eax, dword ptr [esp + 8]
// 009cb224  8bd0                 mov edx, eax
// 009cb226  81e207000080         and edx, 0x80000007
// 009cb22c  56                   push esi
// 009cb22d  7905                 jns 0x9cb234
// 009cb22f  4a                   dec edx
// 009cb230  83caf8               or edx, 0xfffffff8
// 009cb233  42                   inc edx
// 009cb234  8bb1c0000000         mov esi, dword ptr [ecx + 0xc0]
// 009cb23a  8b89c4000000         mov ecx, dword ptr [ecx + 0xc4]
// 009cb240  8d14d2               lea edx, [edx + edx*8]
// 009cb243  8d745602             lea esi, [esi + edx*2 + 2]
// 009cb247  99                   cdq 
// 009cb248  83e207               and edx, 7
// 009cb24b  03c2                 add eax, edx
// 009cb24d  c1f803               sar eax, 3
// 009cb250  8d04c0               lea eax, [eax + eax*8]
// 009cb253  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 009cb257  8b442408             mov eax, dword ptr [esp + 8]
// 009cb25b  8930                 mov dword ptr [eax], esi
// 009cb25d  83c612               add esi, 0x12
// 009cb260  894804               mov dword ptr [eax + 4], ecx
// 009cb263  83c112               add ecx, 0x12
// 009cb266  897008               mov dword ptr [eax + 8], esi
// 009cb269  89480c               mov dword ptr [eax + 0xc], ecx
// 009cb26c  5e                   pop esi
// 009cb26d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetRect@CXTPControlColorSelector@@ABE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
