// roc 2009-06 007213c0  unit: PAVCXTPControlAction::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007213c0
//
// 007213c0  56                   push esi
// 007213c1  8b742408             mov esi, dword ptr [esp + 8]
// 007213c5  57                   push edi
// 007213c6  8bf9                 mov edi, ecx
// 007213c8  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 007213cb  33c0                 xor eax, eax
// 007213cd  85c9                 test ecx, ecx
// 007213cf  7e19                 jle 0x7213ea
// 007213d1  85c0                 test eax, eax
// 007213d3  0f8c83000000         jl 0x72145c
// 007213d9  3bc1                 cmp eax, ecx
// 007213db  7d7f                 jge 0x72145c
// 007213dd  8b5760               mov edx, dword ptr [edi + 0x60]
// 007213e0  393482               cmp dword ptr [edx + eax*4], esi
// 007213e3  7472                 je 0x721457
// 007213e5  40                   inc eax
// 007213e6  3bc1                 cmp eax, ecx
// 007213e8  7ce7                 jl 0x7213d1
// 007213ea  8b4764               mov eax, dword ptr [edi + 0x64]
// 007213ed  8d4f5c               lea ecx, [edi + 0x5c]
// 007213f0  56                   push esi
// 007213f1  50                   push eax
// 007213f2  e829130300           call 0x752720
// 007213f7  83c8ff               or eax, 0xffffffff
// 007213fa  89869c000000         mov dword ptr [esi + 0x9c], eax
// 00721400  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 00721406  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00721409  898e84000000         mov dword ptr [esi + 0x84], ecx
// 0072140f  8d8ed8000000         lea ecx, [esi + 0xd8]
// 00721415  ff15f4ff8900         call dword ptr [0x89fff4]
// 0072141b  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00721421  ff15f4ff8900         call dword ptr [0x89fff4]
// 00721427  8d8eec000000         lea ecx, [esi + 0xec]
// 0072142d  ff15f4ff8900         call dword ptr [0x89fff4]
// 00721433  8d8e08010000         lea ecx, [esi + 0x108]
// 00721439  ff15f4ff8900         call dword ptr [0x89fff4]
// 0072143f  8d8ee0000000         lea ecx, [esi + 0xe0]
// 00721445  ff15f4ff8900         call dword ptr [0x89fff4]
// 0072144b  8d8ef4000000         lea ecx, [esi + 0xf4]
// 00721451  ff15f4ff8900         call dword ptr [0x89fff4]
// 00721457  5f                   pop edi
// 00721458  5e                   pop esi
// 00721459  c20400               ret 4
// 0072145c  e88378ffff           call 0x718ce4
// copied from an identical function in another client (function ?AddControl@CXTPControlAction@@IAEXPAVCXTPControl@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp