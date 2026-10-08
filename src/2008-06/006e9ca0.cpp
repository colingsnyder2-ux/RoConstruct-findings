// from server: 100% by auto
// roc 2008-06 006e9ca0  unit: CXTPControlColorSelector  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9ca0
//
// 006e9ca0  8b442408             mov eax, dword ptr [esp + 8]
// 006e9ca4  8bd0                 mov edx, eax
// 006e9ca6  81e207000080         and edx, 0x80000007
// 006e9cac  56                   push esi
// 006e9cad  7905                 jns 0x6e9cb4
// 006e9caf  4a                   dec edx
// 006e9cb0  83caf8               or edx, 0xfffffff8
// 006e9cb3  42                   inc edx
// 006e9cb4  8bb1c0000000         mov esi, dword ptr [ecx + 0xc0]
// 006e9cba  8b89c4000000         mov ecx, dword ptr [ecx + 0xc4]
// 006e9cc0  8d14d2               lea edx, [edx + edx*8]
// 006e9cc3  8d745602             lea esi, [esi + edx*2 + 2]
// 006e9cc7  99                   cdq 
// 006e9cc8  83e207               and edx, 7
// 006e9ccb  03c2                 add eax, edx
// 006e9ccd  c1f803               sar eax, 3
// 006e9cd0  8d04c0               lea eax, [eax + eax*8]
// 006e9cd3  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 006e9cd7  8b442408             mov eax, dword ptr [esp + 8]
// 006e9cdb  8930                 mov dword ptr [eax], esi
// 006e9cdd  83c612               add esi, 0x12
// 006e9ce0  894804               mov dword ptr [eax + 4], ecx
// 006e9ce3  83c112               add ecx, 0x12
// 006e9ce6  897008               mov dword ptr [eax + 8], esi
// 006e9ce9  89480c               mov dword ptr [eax + 0xc], ecx
// 006e9cec  5e                   pop esi
// 006e9ced  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetRect@CXTPControlColorSelector@@ABE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
