// roc 2007-03 00445600  unit: seg_00440000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00445600
//
// 00445600  51                   push ecx
// 00445601  53                   push ebx
// 00445602  55                   push ebp
// 00445603  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00445607  56                   push esi
// 00445608  8bf1                 mov esi, ecx
// 0044560a  57                   push edi
// 0044560b  8b7e04               mov edi, dword ptr [esi + 4]
// 0044560e  85ff                 test edi, edi
// 00445610  740c                 je 0x44561e
// 00445612  8b4608               mov eax, dword ptr [esi + 8]
// 00445615  8bc8                 mov ecx, eax
// 00445617  2bcf                 sub ecx, edi
// 00445619  c1f902               sar ecx, 2
// 0044561c  7504                 jne 0x445622
// 0044561e  33db                 xor ebx, ebx
// 00445620  eb21                 jmp 0x445643
// 00445622  3bf8                 cmp edi, eax
// 00445624  7606                 jbe 0x44562c
// 00445626  ff1544e97700         call dword ptr [0x77e944]
// 0044562c  85ed                 test ebp, ebp
// 0044562e  7404                 je 0x445634
// 00445630  3bee                 cmp ebp, esi
// 00445632  7406                 je 0x44563a
// 00445634  ff1544e97700         call dword ptr [0x77e944]
// 0044563a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0044563e  2bdf                 sub ebx, edi
// 00445640  c1fb02               sar ebx, 2
// 00445643  8b542424             mov edx, dword ptr [esp + 0x24]
// 00445647  8b442420             mov eax, dword ptr [esp + 0x20]
// 0044564b  52                   push edx
// 0044564c  6a01                 push 1
// 0044564e  50                   push eax
// 0044564f  55                   push ebp
// 00445650  8bce                 mov ecx, esi
// 00445652  e869fbffff           call 0x4451c0
// 00445657  8b7e04               mov edi, dword ptr [esi + 4]
// 0044565a  3b7e08               cmp edi, dword ptr [esi + 8]
// 0044565d  7606                 jbe 0x445665
// 0044565f  ff1544e97700         call dword ptr [0x77e944]
// 00445665  897c2420             mov dword ptr [esp + 0x20], edi
// 00445669  8d3c9f               lea edi, [edi + ebx*4]
// 0044566c  3b7e08               cmp edi, dword ptr [esi + 8]
// 0044566f  7705                 ja 0x445676
// 00445671  3b7e04               cmp edi, dword ptr [esi + 4]
// 00445674  7306                 jae 0x44567c
// 00445676  ff1544e97700         call dword ptr [0x77e944]
// 0044567c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00445680  897804               mov dword ptr [eax + 4], edi
// 00445683  5f                   pop edi
// 00445684  8930                 mov dword ptr [eax], esi
// 00445686  5e                   pop esi
// 00445687  5d                   pop ebp
// 00445688  5b                   pop ebx
// 00445689  59                   pop ecx
// 0044568a  c21000               ret 0x10
// library rbxgs/tool\DragUtilities.cpp (function ?insert@?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@2@V32@ABQBVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
