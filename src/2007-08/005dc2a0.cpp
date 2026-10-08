// roc 2007-08 005dc2a0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc2a0
//
// 005dc2a0  83ec10               sub esp, 0x10
// 005dc2a3  53                   push ebx
// 005dc2a4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005dc2a8  55                   push ebp
// 005dc2a9  56                   push esi
// 005dc2aa  57                   push edi
// 005dc2ab  8bf9                 mov edi, ecx
// 005dc2ad  53                   push ebx
// 005dc2ae  8d442414             lea eax, [esp + 0x14]
// 005dc2b2  8d7750               lea esi, [edi + 0x50]
// 005dc2b5  50                   push eax
// 005dc2b6  8bce                 mov ecx, esi
// 005dc2b8  e8b3fafdff           call 0x5bbd70
// 005dc2bd  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005dc2c1  85ed                 test ebp, ebp
// 005dc2c3  8b4e04               mov ecx, dword ptr [esi + 4]
// 005dc2c6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005dc2ca  7404                 je 0x5dc2d0
// 005dc2cc  3bee                 cmp ebp, esi
// 005dc2ce  7406                 je 0x5dc2d6
// 005dc2d0  ff15d8e67700         call dword ptr [0x77e6d8]
// 005dc2d6  8b742414             mov esi, dword ptr [esp + 0x14]
// 005dc2da  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 005dc2de  742a                 je 0x5dc30a
// 005dc2e0  85ed                 test ebp, ebp
// 005dc2e2  7506                 jne 0x5dc2ea
// 005dc2e4  ff15d8e67700         call dword ptr [0x77e6d8]
// 005dc2ea  3b7504               cmp esi, dword ptr [ebp + 4]
// 005dc2ed  7506                 jne 0x5dc2f5
// 005dc2ef  ff15d8e67700         call dword ptr [0x77e6d8]
// 005dc2f5  8b5628               mov edx, dword ptr [esi + 0x28]
// 005dc2f8  8b442428             mov eax, dword ptr [esp + 0x28]
// 005dc2fc  5f                   pop edi
// 005dc2fd  5e                   pop esi
// 005dc2fe  5d                   pop ebp
// 005dc2ff  8910                 mov dword ptr [eax], edx
// 005dc301  b001                 mov al, 1
// 005dc303  5b                   pop ebx
// 005dc304  83c410               add esp, 0x10
// 005dc307  c20800               ret 8
// 005dc30a  53                   push ebx
// 005dc30b  8d4c241c             lea ecx, [esp + 0x1c]
// 005dc30f  8d775c               lea esi, [edi + 0x5c]
// 005dc312  51                   push ecx
// 005dc313  8bce                 mov ecx, esi
// 005dc315  e856fafdff           call 0x5bbd70
// 005dc31a  8b38                 mov edi, dword ptr [eax]
// 005dc31c  85ff                 test edi, edi
// 005dc31e  8b5804               mov ebx, dword ptr [eax + 4]
// 005dc321  8b6e04               mov ebp, dword ptr [esi + 4]
// 005dc324  7404                 je 0x5dc32a
// 005dc326  3bfe                 cmp edi, esi
// 005dc328  740a                 je 0x5dc334
// 005dc32a  8b35d8e67700         mov esi, dword ptr [0x77e6d8]
// 005dc330  ffd6                 call esi
// 005dc332  eb06                 jmp 0x5dc33a
// 005dc334  8b35d8e67700         mov esi, dword ptr [0x77e6d8]
// 005dc33a  3bdd                 cmp ebx, ebp
// 005dc33c  7422                 je 0x5dc360
// 005dc33e  85ff                 test edi, edi
// 005dc340  7502                 jne 0x5dc344
// 005dc342  ffd6                 call esi
// 005dc344  3b5f04               cmp ebx, dword ptr [edi + 4]
// 005dc347  7502                 jne 0x5dc34b
// 005dc349  ffd6                 call esi
// 005dc34b  8b5328               mov edx, dword ptr [ebx + 0x28]
// 005dc34e  8b442428             mov eax, dword ptr [esp + 0x28]
// 005dc352  5f                   pop edi
// 005dc353  5e                   pop esi
// 005dc354  5d                   pop ebp
// 005dc355  8910                 mov dword ptr [eax], edx
// 005dc357  b001                 mov al, 1
// 005dc359  5b                   pop ebx
// 005dc35a  83c410               add esp, 0x10
// 005dc35d  c20800               ret 8
// 005dc360  5f                   pop edi
// 005dc361  5e                   pop esi
// 005dc362  5d                   pop ebp
// 005dc363  32c0                 xor al, al
// 005dc365  5b                   pop ebx
// 005dc366  83c410               add esp, 0x10
// 005dc369  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?convertToValue@?$EnumDesc@W4CameraType@Camera@RBX@@@Reflection@RBX@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAW4CameraType@Camera@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
