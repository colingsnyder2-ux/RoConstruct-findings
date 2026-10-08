// roc 2007-03 0042ee00  unit: seg_00420000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042ee00
//
// 0042ee00  51                   push ecx
// 0042ee01  53                   push ebx
// 0042ee02  55                   push ebp
// 0042ee03  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0042ee07  56                   push esi
// 0042ee08  8bf1                 mov esi, ecx
// 0042ee0a  57                   push edi
// 0042ee0b  8b7e04               mov edi, dword ptr [esi + 4]
// 0042ee0e  85ff                 test edi, edi
// 0042ee10  740c                 je 0x42ee1e
// 0042ee12  8b4608               mov eax, dword ptr [esi + 8]
// 0042ee15  8bc8                 mov ecx, eax
// 0042ee17  2bcf                 sub ecx, edi
// 0042ee19  c1f903               sar ecx, 3
// 0042ee1c  7504                 jne 0x42ee22
// 0042ee1e  33db                 xor ebx, ebx
// 0042ee20  eb21                 jmp 0x42ee43
// 0042ee22  3bf8                 cmp edi, eax
// 0042ee24  7606                 jbe 0x42ee2c
// 0042ee26  ff1544e97700         call dword ptr [0x77e944]
// 0042ee2c  85ed                 test ebp, ebp
// 0042ee2e  7404                 je 0x42ee34
// 0042ee30  3bee                 cmp ebp, esi
// 0042ee32  7406                 je 0x42ee3a
// 0042ee34  ff1544e97700         call dword ptr [0x77e944]
// 0042ee3a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0042ee3e  2bdf                 sub ebx, edi
// 0042ee40  c1fb03               sar ebx, 3
// 0042ee43  8b542424             mov edx, dword ptr [esp + 0x24]
// 0042ee47  8b442420             mov eax, dword ptr [esp + 0x20]
// 0042ee4b  52                   push edx
// 0042ee4c  6a01                 push 1
// 0042ee4e  50                   push eax
// 0042ee4f  55                   push ebp
// 0042ee50  8bce                 mov ecx, esi
// 0042ee52  e859fcffff           call 0x42eab0
// 0042ee57  8b7e04               mov edi, dword ptr [esi + 4]
// 0042ee5a  3b7e08               cmp edi, dword ptr [esi + 8]
// 0042ee5d  7606                 jbe 0x42ee65
// 0042ee5f  ff1544e97700         call dword ptr [0x77e944]
// 0042ee65  897c2420             mov dword ptr [esp + 0x20], edi
// 0042ee69  8d3cdf               lea edi, [edi + ebx*8]
// 0042ee6c  3b7e08               cmp edi, dword ptr [esi + 8]
// 0042ee6f  7705                 ja 0x42ee76
// 0042ee71  3b7e04               cmp edi, dword ptr [esi + 4]
// 0042ee74  7306                 jae 0x42ee7c
// 0042ee76  ff1544e97700         call dword ptr [0x77e944]
// 0042ee7c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0042ee80  897804               mov dword ptr [eax + 4], edi
// 0042ee83  5f                   pop edi
// 0042ee84  8930                 mov dword ptr [eax], esi
// 0042ee86  5e                   pop esi
// 0042ee87  5d                   pop ebp
// 0042ee88  5b                   pop ebx
// 0042ee89  59                   pop ecx
// 0042ee8a  c21000               ret 0x10
// library rbxgs/v8datamodel\PartInstance.cpp (function ?insert@?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@2@V32@ABV?$weak_ptr@VPartInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
