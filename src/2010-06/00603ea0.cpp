// roc 2010-06 00603ea0  unit: RBX::ArrowTool  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00603ea0
//
// 00603ea0  83ec08               sub esp, 8
// 00603ea3  53                   push ebx
// 00603ea4  55                   push ebp
// 00603ea5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00603ea9  56                   push esi
// 00603eaa  8bf1                 mov esi, ecx
// 00603eac  57                   push edi
// 00603ead  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 00603eb3  c7450000000000       mov dword ptr [ebp], 0
// 00603eba  85f6                 test esi, esi
// 00603ebc  740e                 je 0x603ecc
// 00603ebe  8b442424             mov eax, dword ptr [esp + 0x24]
// 00603ec2  39460c               cmp dword ptr [esi + 0xc], eax
// 00603ec5  7705                 ja 0x603ecc
// 00603ec7  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00603eca  7606                 jbe 0x603ed2
// 00603ecc  ffd7                 call edi
// 00603ece  8b442424             mov eax, dword ptr [esp + 0x24]
// 00603ed2  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00603ed6  8b0e                 mov ecx, dword ptr [esi]
// 00603ed8  894d00               mov dword ptr [ebp], ecx
// 00603edb  894504               mov dword ptr [ebp + 4], eax
// 00603ede  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00603ee1  7705                 ja 0x603ee8
// 00603ee3  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00603ee6  7606                 jbe 0x603eee
// 00603ee8  ffd7                 call edi
// 00603eea  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00603eee  8b4500               mov eax, dword ptr [ebp]
// 00603ef1  8b0e                 mov ecx, dword ptr [esi]
// 00603ef3  85c0                 test eax, eax
// 00603ef5  7404                 je 0x603efb
// 00603ef7  3bc1                 cmp eax, ecx
// 00603ef9  7402                 je 0x603efd
// 00603efb  ffd7                 call edi
// 00603efd  8b4504               mov eax, dword ptr [ebp + 4]
// 00603f00  89442414             mov dword ptr [esp + 0x14], eax
// 00603f04  3bc3                 cmp eax, ebx
// 00603f06  7449                 je 0x603f51
// 00603f08  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00603f0b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00603f10  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00603f14  52                   push edx
// 00603f15  8b542420             mov edx, dword ptr [esp + 0x20]
// 00603f19  c644241400           mov byte ptr [esp + 0x14], 0
// 00603f1e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00603f22  51                   push ecx
// 00603f23  52                   push edx
// 00603f24  50                   push eax
// 00603f25  57                   push edi
// 00603f26  53                   push ebx
// 00603f27  e8c4650a00           call 0x6aa4f0
// 00603f2c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00603f30  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00603f34  2bfb                 sub edi, ebx
// 00603f36  51                   push ecx
// 00603f37  c1ff03               sar edi, 3
// 00603f3a  8d3cf8               lea edi, [eax + edi*8]
// 00603f3d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00603f40  8d5608               lea edx, [esi + 8]
// 00603f43  52                   push edx
// 00603f44  50                   push eax
// 00603f45  57                   push edi
// 00603f46  e865f6ffff           call 0x6035b0
// 00603f4b  83c428               add esp, 0x28
// 00603f4e  897e10               mov dword ptr [esi + 0x10], edi
// 00603f51  5f                   pop edi
// 00603f52  5e                   pop esi
// 00603f53  8bc5                 mov eax, ebp
// 00603f55  5d                   pop ebp
// 00603f56  5b                   pop ebx
// 00603f57  83c408               add esp, 8
// 00603f5a  c21400               ret 0x14
// library openrbx-client/App\v8tree\Service.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Service.cpp
