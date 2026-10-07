// roc 2007-08 0050d1f0  unit: G3D::BinaryInput  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d1f0
//
// 0050d1f0  8b442408             mov eax, dword ptr [esp + 8]
// 0050d1f4  83ec0c               sub esp, 0xc
// 0050d1f7  53                   push ebx
// 0050d1f8  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0050d1fc  55                   push ebp
// 0050d1fd  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0050d201  56                   push esi
// 0050d202  57                   push edi
// 0050d203  55                   push ebp
// 0050d204  83ec0c               sub esp, 0xc
// 0050d207  85db                 test ebx, ebx
// 0050d209  8bfc                 mov edi, esp
// 0050d20b  8bf1                 mov esi, ecx
// 0050d20d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0050d211  c70700000000         mov dword ptr [edi], 0
// 0050d217  894704               mov dword ptr [edi + 4], eax
// 0050d21a  894f08               mov dword ptr [edi + 8], ecx
// 0050d21d  7506                 jne 0x50d225
// 0050d21f  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d225  8bce                 mov ecx, esi
// 0050d227  891f                 mov dword ptr [edi], ebx
// 0050d229  e8f2feffff           call 0x50d120
// 0050d22e  8b7e08               mov edi, dword ptr [esi + 8]
// 0050d231  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 0050d234  8bd8                 mov ebx, eax
// 0050d236  7606                 jbe 0x50d23e
// 0050d238  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d23e  85f6                 test esi, esi
// 0050d240  897c2424             mov dword ptr [esp + 0x24], edi
// 0050d244  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0050d24c  7506                 jne 0x50d254
// 0050d24e  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d254  8b7e08               mov edi, dword ptr [esi + 8]
// 0050d257  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 0050d25a  89742420             mov dword ptr [esp + 0x20], esi
// 0050d25e  7606                 jbe 0x50d266
// 0050d260  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d266  85f6                 test esi, esi
// 0050d268  897c2414             mov dword ptr [esp + 0x14], edi
// 0050d26c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0050d274  7506                 jne 0x50d27c
// 0050d276  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d27c  8d542430             lea edx, [esp + 0x30]
// 0050d280  52                   push edx
// 0050d281  83ec0c               sub esp, 0xc
// 0050d284  8bcc                 mov ecx, esp
// 0050d286  8d042b               lea eax, [ebx + ebp]
// 0050d289  50                   push eax
// 0050d28a  51                   push ecx
// 0050d28b  8d4c2438             lea ecx, [esp + 0x38]
// 0050d28f  89742428             mov dword ptr [esp + 0x28], esi
// 0050d293  e818f4ffff           call 0x50c6b0
// 0050d298  83ec0c               sub esp, 0xc
// 0050d29b  8bd4                 mov edx, esp
// 0050d29d  53                   push ebx
// 0050d29e  52                   push edx
// 0050d29f  8d4c2434             lea ecx, [esp + 0x34]
// 0050d2a3  e808f4ffff           call 0x50c6b0
// 0050d2a8  e8d3f9ffff           call 0x50cc80
// 0050d2ad  83c41c               add esp, 0x1c
// 0050d2b0  5f                   pop edi
// 0050d2b1  5e                   pop esi
// 0050d2b2  5d                   pop ebp
// 0050d2b3  5b                   pop ebx
// 0050d2b4  83c40c               add esp, 0xc
// 0050d2b7  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?_Insert_n@?$vector@_NV?$allocator@_N@std@@@std@@IAEXV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@2@I_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
