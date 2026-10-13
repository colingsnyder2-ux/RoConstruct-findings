// roc 2008-06 00481320  unit: G3D::Win32Window  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00481320
//
// 00481320  55                   push ebp
// 00481321  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00481325  56                   push esi
// 00481326  6aeb                 push -0x15
// 00481328  55                   push ebp
// 00481329  ff15bc2d8000         call dword ptr [0x802dbc]
// 0048132f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00481333  85c0                 test eax, eax
// 00481335  7441                 je 0x481378
// 00481337  83fe10               cmp esi, 0x10
// 0048133a  0f87e2000000         ja 0x481422
// 00481340  0f84d0000000         je 0x481416
// 00481346  8d4efb               lea ecx, [esi - 5]
// 00481349  83f903               cmp ecx, 3
// 0048134c  772a                 ja 0x481378
// 0048134e  ff248d4c144800       jmp dword ptr [ecx*4 + 0x48144c]
// 00481355  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00481359  6685c9               test cx, cx
// 0048135c  7431                 je 0x48138f
// 0048135e  c1e910               shr ecx, 0x10
// 00481361  85c9                 test ecx, ecx
// 00481363  752a                 jne 0x48138f
// 00481365  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00481369  3b88e8010000         cmp ecx, dword ptr [eax + 0x1e8]
// 0048136f  741e                 je 0x48138f
// 00481371  c680ae00000001       mov byte ptr [eax + 0xae], 1
// 00481378  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048137c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00481380  50                   push eax
// 00481381  51                   push ecx
// 00481382  56                   push esi
// 00481383  55                   push ebp
// 00481384  ff15c42d8000         call dword ptr [0x802dc4]
// 0048138a  5e                   pop esi
// 0048138b  5d                   pop ebp
// 0048138c  c21000               ret 0x10
// 0048138f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00481393  3b90e8010000         cmp edx, dword ptr [eax + 0x1e8]
// 00481399  74dd                 je 0x481378
// 0048139b  c680ae00000000       mov byte ptr [eax + 0xae], 0
// 004813a2  ebd4                 jmp 0x481378
// 004813a4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004813a8  83f902               cmp ecx, 2
// 004813ab  7404                 je 0x4813b1
// 004813ad  85c9                 test ecx, ecx
// 004813af  75c7                 jne 0x481378
// 004813b1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004813b5  8bd1                 mov edx, ecx
// 004813b7  0fb7c9               movzx ecx, cx
// 004813ba  c1ea10               shr edx, 0x10
// 004813bd  52                   push edx
// 004813be  51                   push ecx
// 004813bf  8bc8                 mov ecx, eax
// 004813c1  e8daf9ffff           call 0x480da0
// 004813c6  ebb0                 jmp 0x481378
// 004813c8  c680e401000001       mov byte ptr [eax + 0x1e4], 1
// 004813cf  eba7                 jmp 0x481378
// 004813d1  53                   push ebx
// 004813d2  57                   push edi
// 004813d3  8b3d0c2e8000         mov edi, dword ptr [0x802e0c]
// 004813d9  33f6                 xor esi, esi
// 004813db  8d98b3000000         lea ebx, [eax + 0xb3]
// 004813e1  803c3300             cmp byte ptr [ebx + esi], 0
// 004813e5  740b                 je 0x4813f2
// 004813e7  6a00                 push 0
// 004813e9  56                   push esi
// 004813ea  6801010000           push 0x101
// 004813ef  55                   push ebp
// 004813f0  ffd7                 call edi
// 004813f2  46                   inc esi
// 004813f3  81feff000000         cmp esi, 0xff
// 004813f9  72e6                 jb 0x4813e1
// 004813fb  68ff000000           push 0xff
// 00481400  6a00                 push 0
// 00481402  53                   push ebx
// 00481403  e8fc022200           call 0x6a1704
// 00481408  8b742424             mov esi, dword ptr [esp + 0x24]
// 0048140c  83c40c               add esp, 0xc
// 0048140f  5f                   pop edi
// 00481410  5b                   pop ebx
// 00481411  e962ffffff           jmp 0x481378
// 00481416  c680af00000001       mov byte ptr [eax + 0xaf], 1
// 0048141d  e956ffffff           jmp 0x481378
// 00481422  81fe12010000         cmp esi, 0x112
// 00481428  0f854affffff         jne 0x481378
// 0048142e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00481432  81e2f0ff0000         and edx, 0xfff0
// 00481438  81fa00f10000         cmp edx, 0xf100
// 0048143e  0f8534ffffff         jne 0x481378
// 00481444  5e                   pop esi
// 00481445  33c0                 xor eax, eax
// 00481447  5d                   pop ebp
// 00481448  c21000               ret 0x10
// 0048144b  90                   nop 
// 0048144c  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// 0048144d  134800               adc ecx, dword ptr [eax]
// 00481450  55                   push ebp
// 00481451  134800               adc ecx, dword ptr [eax]
// 00481454  c8134800             enter 0x4813, 0
// 00481458  d113                 rcl dword ptr [ebx]
// 0048145a  48                   dec eax
// library g3d-6.09-rbx2008/GLG3Dcpp\Win32Window.cpp (function ?window_proc@_internal@G3D@@YGJPAUHWND__@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/Win32Window.cpp
