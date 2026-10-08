// roc 2007-03 0053b6e0  unit: seg_00530000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053b6e0
//
// 0053b6e0  51                   push ecx
// 0053b6e1  53                   push ebx
// 0053b6e2  55                   push ebp
// 0053b6e3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053b6e7  56                   push esi
// 0053b6e8  8bf1                 mov esi, ecx
// 0053b6ea  57                   push edi
// 0053b6eb  8b7e04               mov edi, dword ptr [esi + 4]
// 0053b6ee  85ff                 test edi, edi
// 0053b6f0  740c                 je 0x53b6fe
// 0053b6f2  8b4608               mov eax, dword ptr [esi + 8]
// 0053b6f5  8bc8                 mov ecx, eax
// 0053b6f7  2bcf                 sub ecx, edi
// 0053b6f9  c1f903               sar ecx, 3
// 0053b6fc  7504                 jne 0x53b702
// 0053b6fe  33db                 xor ebx, ebx
// 0053b700  eb21                 jmp 0x53b723
// 0053b702  3bf8                 cmp edi, eax
// 0053b704  7606                 jbe 0x53b70c
// 0053b706  ff1544e97700         call dword ptr [0x77e944]
// 0053b70c  85ed                 test ebp, ebp
// 0053b70e  7404                 je 0x53b714
// 0053b710  3bee                 cmp ebp, esi
// 0053b712  7406                 je 0x53b71a
// 0053b714  ff1544e97700         call dword ptr [0x77e944]
// 0053b71a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0053b71e  2bdf                 sub ebx, edi
// 0053b720  c1fb03               sar ebx, 3
// 0053b723  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053b727  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053b72b  52                   push edx
// 0053b72c  6a01                 push 1
// 0053b72e  50                   push eax
// 0053b72f  55                   push ebp
// 0053b730  8bce                 mov ecx, esi
// 0053b732  e819f9ffff           call 0x53b050
// 0053b737  8b7e04               mov edi, dword ptr [esi + 4]
// 0053b73a  3b7e08               cmp edi, dword ptr [esi + 8]
// 0053b73d  7606                 jbe 0x53b745
// 0053b73f  ff1544e97700         call dword ptr [0x77e944]
// 0053b745  897c2420             mov dword ptr [esp + 0x20], edi
// 0053b749  8d3cdf               lea edi, [edi + ebx*8]
// 0053b74c  3b7e08               cmp edi, dword ptr [esi + 8]
// 0053b74f  7705                 ja 0x53b756
// 0053b751  3b7e04               cmp edi, dword ptr [esi + 4]
// 0053b754  7306                 jae 0x53b75c
// 0053b756  ff1544e97700         call dword ptr [0x77e944]
// 0053b75c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0053b760  897804               mov dword ptr [eax + 4], edi
// 0053b763  5f                   pop edi
// 0053b764  8930                 mov dword ptr [eax], esi
// 0053b766  5e                   pop esi
// 0053b767  5d                   pop ebp
// 0053b768  5b                   pop ebx
// 0053b769  59                   pop ecx
// 0053b76a  c21000               ret 0x10
// library rbxgs/v8datamodel\PartInstance.cpp (function ?insert@?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@2@V32@ABV?$weak_ptr@VPartInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
