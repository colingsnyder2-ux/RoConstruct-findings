// roc 2009-12 00404b00  unit: ATL::CComClassFactory  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00404b00
//
// 00404b00  56                   push esi
// 00404b01  8bf1                 mov esi, ecx
// 00404b03  8b4608               mov eax, dword ptr [esi + 8]
// 00404b06  8b0e                 mov ecx, dword ptr [esi]
// 00404b08  57                   push edi
// 00404b09  8b3d8cb79800         mov edi, dword ptr [0x98b78c]
// 00404b0f  6a04                 push 4
// 00404b11  40                   inc eax
// 00404b12  50                   push eax
// 00404b13  51                   push ecx
// 00404b14  ffd7                 call edi
// 00404b16  83c40c               add esp, 0xc
// 00404b19  85c0                 test eax, eax
// 00404b1b  7507                 jne 0x404b24
// 00404b1d  5f                   pop edi
// 00404b1e  33c0                 xor eax, eax
// 00404b20  5e                   pop esi
// 00404b21  c20800               ret 8
// 00404b24  8b5608               mov edx, dword ptr [esi + 8]
// 00404b27  6a04                 push 4
// 00404b29  42                   inc edx
// 00404b2a  8906                 mov dword ptr [esi], eax
// 00404b2c  8b4604               mov eax, dword ptr [esi + 4]
// 00404b2f  52                   push edx
// 00404b30  50                   push eax
// 00404b31  ffd7                 call edi
// 00404b33  83c40c               add esp, 0xc
// 00404b36  85c0                 test eax, eax
// 00404b38  74e3                 je 0x404b1d
// 00404b3a  894604               mov dword ptr [esi + 4], eax
// 00404b3d  8b4608               mov eax, dword ptr [esi + 8]
// 00404b40  8d0c8500000000       lea ecx, [eax*4]
// 00404b47  8b06                 mov eax, dword ptr [esi]
// 00404b49  03c1                 add eax, ecx
// 00404b4b  7408                 je 0x404b55
// 00404b4d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00404b51  8b12                 mov edx, dword ptr [edx]
// 00404b53  8910                 mov dword ptr [eax], edx
// 00404b55  8b4604               mov eax, dword ptr [esi + 4]
// 00404b58  03c1                 add eax, ecx
// 00404b5a  7408                 je 0x404b64
// 00404b5c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00404b60  8b11                 mov edx, dword ptr [ecx]
// 00404b62  8910                 mov dword ptr [eax], edx
// 00404b64  ff4608               inc dword ptr [esi + 8]
// 00404b67  5f                   pop edi
// 00404b68  b801000000           mov eax, 1
// 00404b6d  5e                   pop esi
// 00404b6e  c20800               ret 8
// copied from an identical function in another client (function ?Add@?$CSimpleMap@PADPA_WVCExpansionVectorEqualHelper@ATL@@@ATL@@QAEHABQADABQA_W@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-dll atl.cpp