// roc 2007-03 004259f0  unit: seg_00420000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004259f0
//
// 004259f0  51                   push ecx
// 004259f1  53                   push ebx
// 004259f2  55                   push ebp
// 004259f3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004259f7  56                   push esi
// 004259f8  8bf1                 mov esi, ecx
// 004259fa  57                   push edi
// 004259fb  8b7e04               mov edi, dword ptr [esi + 4]
// 004259fe  85ff                 test edi, edi
// 00425a00  740c                 je 0x425a0e
// 00425a02  8b4608               mov eax, dword ptr [esi + 8]
// 00425a05  8bc8                 mov ecx, eax
// 00425a07  2bcf                 sub ecx, edi
// 00425a09  c1f903               sar ecx, 3
// 00425a0c  7504                 jne 0x425a12
// 00425a0e  33db                 xor ebx, ebx
// 00425a10  eb21                 jmp 0x425a33
// 00425a12  3bf8                 cmp edi, eax
// 00425a14  7606                 jbe 0x425a1c
// 00425a16  ff1544e97700         call dword ptr [0x77e944]
// 00425a1c  85ed                 test ebp, ebp
// 00425a1e  7404                 je 0x425a24
// 00425a20  3bee                 cmp ebp, esi
// 00425a22  7406                 je 0x425a2a
// 00425a24  ff1544e97700         call dword ptr [0x77e944]
// 00425a2a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00425a2e  2bdf                 sub ebx, edi
// 00425a30  c1fb03               sar ebx, 3
// 00425a33  8b542424             mov edx, dword ptr [esp + 0x24]
// 00425a37  8b442420             mov eax, dword ptr [esp + 0x20]
// 00425a3b  52                   push edx
// 00425a3c  6a01                 push 1
// 00425a3e  50                   push eax
// 00425a3f  55                   push ebp
// 00425a40  8bce                 mov ecx, esi
// 00425a42  e8d991feff           call 0x40ec20
// 00425a47  8b7e04               mov edi, dword ptr [esi + 4]
// 00425a4a  3b7e08               cmp edi, dword ptr [esi + 8]
// 00425a4d  7606                 jbe 0x425a55
// 00425a4f  ff1544e97700         call dword ptr [0x77e944]
// 00425a55  897c2420             mov dword ptr [esp + 0x20], edi
// 00425a59  8d3cdf               lea edi, [edi + ebx*8]
// 00425a5c  3b7e08               cmp edi, dword ptr [esi + 8]
// 00425a5f  7705                 ja 0x425a66
// 00425a61  3b7e04               cmp edi, dword ptr [esi + 4]
// 00425a64  7306                 jae 0x425a6c
// 00425a66  ff1544e97700         call dword ptr [0x77e944]
// 00425a6c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00425a70  897804               mov dword ptr [eax + 4], edi
// 00425a73  5f                   pop edi
// 00425a74  8930                 mov dword ptr [eax], esi
// 00425a76  5e                   pop esi
// 00425a77  5d                   pop ebp
// 00425a78  5b                   pop ebx
// 00425a79  59                   pop ecx
// 00425a7a  c21000               ret 0x10
// library rbxgs/v8datamodel\PartInstance.cpp (function ?insert@?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@2@V32@ABV?$weak_ptr@VPartInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
