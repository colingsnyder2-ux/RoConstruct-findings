// roc 2010-06 00436640  unit: IIHAAH::?$CMap  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00436640
//
// 00436640  83ec08               sub esp, 8
// 00436643  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00436647  56                   push esi
// 00436648  57                   push edi
// 00436649  8bf1                 mov esi, ecx
// 0043664b  c644240800           mov byte ptr [esp + 8], 0
// 00436650  8b442408             mov eax, dword ptr [esp + 8]
// 00436654  50                   push eax
// 00436655  8b442420             mov eax, dword ptr [esp + 0x20]
// 00436659  c644241000           mov byte ptr [esp + 0x10], 0
// 0043665e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00436662  51                   push ecx
// 00436663  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00436666  52                   push edx
// 00436667  50                   push eax
// 00436668  51                   push ecx
// 00436669  83c008               add eax, 8
// 0043666c  50                   push eax
// 0043666d  e87e3e2700           call 0x6aa4f0
// 00436672  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00436676  8b4610               mov eax, dword ptr [esi + 0x10]
// 00436679  52                   push edx
// 0043667a  8d4e08               lea ecx, [esi + 8]
// 0043667d  51                   push ecx
// 0043667e  50                   push eax
// 0043667f  83c0f8               add eax, -8
// 00436682  50                   push eax
// 00436683  e828cf1c00           call 0x6035b0
// 00436688  834610f8             add dword ptr [esi + 0x10], -8
// 0043668c  8b442444             mov eax, dword ptr [esp + 0x44]
// 00436690  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00436694  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00436697  83c428               add esp, 0x28
// 0043669a  c70700000000         mov dword ptr [edi], 0
// 004366a0  39460c               cmp dword ptr [esi + 0xc], eax
// 004366a3  7704                 ja 0x4366a9
// 004366a5  3bc1                 cmp eax, ecx
// 004366a7  760a                 jbe 0x4366b3
// 004366a9  ff150ca99e00         call dword ptr [0x9ea90c]
// 004366af  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004366b3  8b16                 mov edx, dword ptr [esi]
// 004366b5  894704               mov dword ptr [edi + 4], eax
// 004366b8  8917                 mov dword ptr [edi], edx
// 004366ba  8bc7                 mov eax, edi
// 004366bc  5f                   pop edi
// 004366bd  5e                   pop esi
// 004366be  83c408               add esp, 8
// 004366c1  c20c00               ret 0xc
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Selection.cpp
