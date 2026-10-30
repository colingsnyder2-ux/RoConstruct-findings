// roc 2009-06 00810060  unit: CXTPScrollBase  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00810060
//
// 00810060  8b442404             mov eax, dword ptr [esp + 4]
// 00810064  8b10                 mov edx, dword ptr [eax]
// 00810066  53                   push ebx
// 00810067  55                   push ebp
// 00810068  56                   push esi
// 00810069  8b742414             mov esi, dword ptr [esp + 0x14]
// 0081006d  837e5800             cmp dword ptr [esi + 0x58], 0
// 00810071  895644               mov dword ptr [esi + 0x44], edx
// 00810074  8b5004               mov edx, dword ptr [eax + 4]
// 00810077  895648               mov dword ptr [esi + 0x48], edx
// 0081007a  8b5008               mov edx, dword ptr [eax + 8]
// 0081007d  89564c               mov dword ptr [esi + 0x4c], edx
// 00810080  8b500c               mov edx, dword ptr [eax + 0xc]
// 00810083  57                   push edi
// 00810084  895650               mov dword ptr [esi + 0x50], edx
// 00810087  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0081008e  7423                 je 0x8100b3
// 00810090  8b5004               mov edx, dword ptr [eax + 4]
// 00810093  895610               mov dword ptr [esi + 0x10], edx
// 00810096  8b500c               mov edx, dword ptr [eax + 0xc]
// 00810099  895614               mov dword ptr [esi + 0x14], edx
// 0081009c  8b10                 mov edx, dword ptr [eax]
// 0081009e  895618               mov dword ptr [esi + 0x18], edx
// 008100a1  8b4008               mov eax, dword ptr [eax + 8]
// 008100a4  89461c               mov dword ptr [esi + 0x1c], eax
// 008100a7  8b11                 mov edx, dword ptr [ecx]
// 008100a9  8b4224               mov eax, dword ptr [edx + 0x24]
// 008100ac  ffd0                 call eax
// 008100ae  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008100b1  eb21                 jmp 0x8100d4
// 008100b3  8b10                 mov edx, dword ptr [eax]
// 008100b5  895610               mov dword ptr [esi + 0x10], edx
// 008100b8  8b5008               mov edx, dword ptr [eax + 8]
// 008100bb  895614               mov dword ptr [esi + 0x14], edx
// 008100be  8b5004               mov edx, dword ptr [eax + 4]
// 008100c1  895618               mov dword ptr [esi + 0x18], edx
// 008100c4  8b400c               mov eax, dword ptr [eax + 0xc]
// 008100c7  89461c               mov dword ptr [esi + 0x1c], eax
// 008100ca  8b11                 mov edx, dword ptr [ecx]
// 008100cc  8b4224               mov eax, dword ptr [edx + 0x24]
// 008100cf  ffd0                 call eax
// 008100d1  8b4804               mov ecx, dword ptr [eax + 4]
// 008100d4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008100d8  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 008100db  894e20               mov dword ptr [esi + 0x20], ecx
// 008100de  8b5014               mov edx, dword ptr [eax + 0x14]
// 008100e1  8b7e20               mov edi, dword ptr [esi + 0x20]
// 008100e4  89560c               mov dword ptr [esi + 0xc], edx
// 008100e7  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008100ea  894e08               mov dword ptr [esi + 8], ecx
// 008100ed  8b5008               mov edx, dword ptr [eax + 8]
// 008100f0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008100f3  8916                 mov dword ptr [esi], edx
// 008100f5  8b400c               mov eax, dword ptr [eax + 0xc]
// 008100f8  894604               mov dword ptr [esi + 4], eax
// 008100fb  2bc2                 sub eax, edx
// 008100fd  40                   inc eax
// 008100fe  8be8                 mov ebp, eax
// 00810100  8bc3                 mov eax, ebx
// 00810102  2bc1                 sub eax, ecx
// 00810104  99                   cdq 
// 00810105  2bc2                 sub eax, edx
// 00810107  d1f8                 sar eax, 1
// 00810109  3bc7                 cmp eax, edi
// 0081010b  7d02                 jge 0x81010f
// 0081010d  8bf8                 mov edi, eax
// 0081010f  8b5608               mov edx, dword ptr [esi + 8]
// 00810112  8bc3                 mov eax, ebx
// 00810114  8b1d74e28900         mov ebx, dword ptr [0x89e274]
// 0081011a  03cf                 add ecx, edi
// 0081011c  2bc7                 sub eax, edi
// 0081011e  894e24               mov dword ptr [esi + 0x24], ecx
// 00810121  894628               mov dword ptr [esi + 0x28], eax
// 00810124  85d2                 test edx, edx
// 00810126  741e                 je 0x810146
// 00810128  85ed                 test ebp, ebp
// 0081012a  741a                 je 0x810146
// 0081012c  55                   push ebp
// 0081012d  52                   push edx
// 0081012e  2bc1                 sub eax, ecx
// 00810130  50                   push eax
// 00810131  ffd3                 call ebx
// 00810133  8bc8                 mov ecx, eax
// 00810135  8b4620               mov eax, dword ptr [esi + 0x20]
// 00810138  99                   cdq 
// 00810139  2bc2                 sub eax, edx
// 0081013b  d1f8                 sar eax, 1
// 0081013d  3bc1                 cmp eax, ecx
// 0081013f  7f02                 jg 0x810143
// 00810141  8bc1                 mov eax, ecx
// 00810143  894620               mov dword ptr [esi + 0x20], eax
// 00810146  8b4610               mov eax, dword ptr [esi + 0x10]
// 00810149  8b5608               mov edx, dword ptr [esi + 8]
// 0081014c  8d0c38               lea ecx, [eax + edi]
// 0081014f  8b4614               mov eax, dword ptr [esi + 0x14]
// 00810152  2b4620               sub eax, dword ptr [esi + 0x20]
// 00810155  894e40               mov dword ptr [esi + 0x40], ecx
// 00810158  2bc1                 sub eax, ecx
// 0081015a  2bc7                 sub eax, edi
// 0081015c  89463c               mov dword ptr [esi + 0x3c], eax
// 0081015f  85d2                 test edx, edx
// 00810161  7505                 jne 0x810168
// 00810163  ba01000000           mov edx, 1
// 00810168  2bea                 sub ebp, edx
// 0081016a  741f                 je 0x81018b
// 0081016c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0081016f  2b0e                 sub ecx, dword ptr [esi]
// 00810171  55                   push ebp
// 00810172  50                   push eax
// 00810173  51                   push ecx
// 00810174  ffd3                 call ebx
// 00810176  034640               add eax, dword ptr [esi + 0x40]
// 00810179  5f                   pop edi
// 0081017a  8bd0                 mov edx, eax
// 0081017c  035620               add edx, dword ptr [esi + 0x20]
// 0081017f  894634               mov dword ptr [esi + 0x34], eax
// 00810182  895630               mov dword ptr [esi + 0x30], edx
// 00810185  5e                   pop esi
// 00810186  5d                   pop ebp
// 00810187  5b                   pop ebx
// 00810188  c20c00               ret 0xc
// 0081018b  49                   dec ecx
// 0081018c  8bd1                 mov edx, ecx
// 0081018e  035620               add edx, dword ptr [esi + 0x20]
// 00810191  5f                   pop edi
// 00810192  894e34               mov dword ptr [esi + 0x34], ecx
// 00810195  895630               mov dword ptr [esi + 0x30], edx
// 00810198  5e                   pop esi
// 00810199  5d                   pop ebp
// 0081019a  5b                   pop ebx
// 0081019b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?CalcScrollBarInfo@CXTPScrollBase@@MAEXPAUtagRECT@@PAUSCROLLBARPOSINFO@1@PAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
