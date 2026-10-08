// roc 2007-03 005752d0  unit: seg_00570000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005752d0
//
// 005752d0  51                   push ecx
// 005752d1  53                   push ebx
// 005752d2  55                   push ebp
// 005752d3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005752d7  56                   push esi
// 005752d8  8bf1                 mov esi, ecx
// 005752da  57                   push edi
// 005752db  8b7e04               mov edi, dword ptr [esi + 4]
// 005752de  85ff                 test edi, edi
// 005752e0  740c                 je 0x5752ee
// 005752e2  8b4608               mov eax, dword ptr [esi + 8]
// 005752e5  8bc8                 mov ecx, eax
// 005752e7  2bcf                 sub ecx, edi
// 005752e9  c1f903               sar ecx, 3
// 005752ec  7504                 jne 0x5752f2
// 005752ee  33db                 xor ebx, ebx
// 005752f0  eb21                 jmp 0x575313
// 005752f2  3bf8                 cmp edi, eax
// 005752f4  7606                 jbe 0x5752fc
// 005752f6  ff1544e97700         call dword ptr [0x77e944]
// 005752fc  85ed                 test ebp, ebp
// 005752fe  7404                 je 0x575304
// 00575300  3bee                 cmp ebp, esi
// 00575302  7406                 je 0x57530a
// 00575304  ff1544e97700         call dword ptr [0x77e944]
// 0057530a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0057530e  2bdf                 sub ebx, edi
// 00575310  c1fb03               sar ebx, 3
// 00575313  8b542424             mov edx, dword ptr [esp + 0x24]
// 00575317  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057531b  52                   push edx
// 0057531c  6a01                 push 1
// 0057531e  50                   push eax
// 0057531f  55                   push ebp
// 00575320  8bce                 mov ecx, esi
// 00575322  e879fcffff           call 0x574fa0
// 00575327  8b7e04               mov edi, dword ptr [esi + 4]
// 0057532a  3b7e08               cmp edi, dword ptr [esi + 8]
// 0057532d  7606                 jbe 0x575335
// 0057532f  ff1544e97700         call dword ptr [0x77e944]
// 00575335  897c2420             mov dword ptr [esp + 0x20], edi
// 00575339  8d3cdf               lea edi, [edi + ebx*8]
// 0057533c  3b7e08               cmp edi, dword ptr [esi + 8]
// 0057533f  7705                 ja 0x575346
// 00575341  3b7e04               cmp edi, dword ptr [esi + 4]
// 00575344  7306                 jae 0x57534c
// 00575346  ff1544e97700         call dword ptr [0x77e944]
// 0057534c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00575350  897804               mov dword ptr [eax + 4], edi
// 00575353  5f                   pop edi
// 00575354  8930                 mov dword ptr [eax], esi
// 00575356  5e                   pop esi
// 00575357  5d                   pop ebp
// 00575358  5b                   pop ebx
// 00575359  59                   pop ecx
// 0057535a  c21000               ret 0x10
// library rbxgs/v8datamodel\PartInstance.cpp (function ?insert@?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@2@V32@ABV?$weak_ptr@VPartInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
