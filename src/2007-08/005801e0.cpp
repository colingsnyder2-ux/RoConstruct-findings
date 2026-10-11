// roc 2007-08 005801e0  unit: RBX::Workspace  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005801e0
//
// 005801e0  81ec10010000         sub esp, 0x110
// 005801e6  56                   push esi
// 005801e7  57                   push edi
// 005801e8  8bf9                 mov edi, ecx
// 005801ea  8b0dec308c00         mov ecx, dword ptr [0x8c30ec]
// 005801f0  8b01                 mov eax, dword ptr [ecx]
// 005801f2  8b10                 mov edx, dword ptr [eax]
// 005801f4  ffd2                 call edx
// 005801f6  8bf0                 mov esi, eax
// 005801f8  8d442408             lea eax, [esp + 8]
// 005801fc  50                   push eax
// 005801fd  83c624               add esi, 0x24
// 00580200  ff15fcd17700         call dword ptr [0x77d1fc]
// 00580206  0fb74c2416           movzx ecx, word ptr [esp + 0x16]
// 0058020b  0fb7542412           movzx edx, word ptr [esp + 0x12]
// 00580210  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 00580215  51                   push ecx
// 00580216  52                   push edx
// 00580217  50                   push eax
// 00580218  8d4c2424             lea ecx, [esp + 0x24]
// 0058021c  6878bf7a00           push 0x7abf78
// 00580221  51                   push ecx
// 00580222  ff1568e97700         call dword ptr [0x77e968]
// 00580228  8d54242c             lea edx, [esp + 0x2c]
// 0058022c  52                   push edx
// 0058022d  56                   push esi
// 0058022e  e86db1eeff           call 0x46b3a0
// 00580233  83c41c               add esp, 0x1c
// 00580236  8bce                 mov ecx, esi
// 00580238  ff15fce57700         call dword ptr [0x77e5fc]
// 0058023e  8b84241c010000       mov eax, dword ptr [esp + 0x11c]
// 00580245  83e800               sub eax, 0
// 00580248  7448                 je 0x580292
// 0058024a  83e801               sub eax, 1
// 0058024d  7424                 je 0x580273
// 0058024f  83e801               sub eax, 1
// 00580252  755d                 jne 0x5802b1
// 00580254  8b0dec308c00         mov ecx, dword ptr [0x8c30ec]
// 0058025a  8b01                 mov eax, dword ptr [ecx]
// 0058025c  8b10                 mov edx, dword ptr [eax]
// 0058025e  ffd2                 call edx
// 00580260  8b0dcc218a00         mov ecx, dword ptr [0x8a21cc]
// 00580266  83c024               add eax, 0x24
// 00580269  51                   push ecx
// 0058026a  50                   push eax
// 0058026b  e830b1eeff           call 0x46b3a0
// 00580270  83c408               add esp, 8
// 00580273  8b0dec308c00         mov ecx, dword ptr [0x8c30ec]
// 00580279  8b11                 mov edx, dword ptr [ecx]
// 0058027b  8b02                 mov eax, dword ptr [edx]
// 0058027d  ffd0                 call eax
// 0058027f  8b0dc8218a00         mov ecx, dword ptr [0x8a21c8]
// 00580285  83c024               add eax, 0x24
// 00580288  51                   push ecx
// 00580289  50                   push eax
// 0058028a  e811b1eeff           call 0x46b3a0
// 0058028f  83c408               add esp, 8
// 00580292  8b0dec308c00         mov ecx, dword ptr [0x8c30ec]
// 00580298  8b11                 mov edx, dword ptr [ecx]
// 0058029a  8b02                 mov eax, dword ptr [edx]
// 0058029c  ffd0                 call eax
// 0058029e  8b0dc4218a00         mov ecx, dword ptr [0x8a21c4]
// 005802a4  83c024               add eax, 0x24
// 005802a7  51                   push ecx
// 005802a8  50                   push eax
// 005802a9  e8f2b0eeff           call 0x46b3a0
// 005802ae  83c408               add esp, 8
// 005802b1  8b0dec308c00         mov ecx, dword ptr [0x8c30ec]
// 005802b7  8b942420010000       mov edx, dword ptr [esp + 0x120]
// 005802be  8b01                 mov eax, dword ptr [ecx]
// 005802c0  52                   push edx
// 005802c1  8b10                 mov edx, dword ptr [eax]
// 005802c3  ffd2                 call edx
// 005802c5  83c024               add eax, 0x24
// 005802c8  50                   push eax
// 005802c9  e8d2b0eeff           call 0x46b3a0
// 005802ce  6a0a                 push 0xa
// 005802d0  83c724               add edi, 0x24
// 005802d3  57                   push edi
// 005802d4  e86757fcff           call 0x545a40
// 005802d9  8b0dec308c00         mov ecx, dword ptr [0x8c30ec]
// 005802df  8b01                 mov eax, dword ptr [ecx]
// 005802e1  8b10                 mov edx, dword ptr [eax]
// 005802e3  83c410               add esp, 0x10
// 005802e6  ffd2                 call edx
// 005802e8  8bc8                 mov ecx, eax
// 005802ea  83c124               add ecx, 0x24
// 005802ed  ff15fce57700         call dword ptr [0x77e5fc]
// 005802f3  5f                   pop edi
// 005802f4  5e                   pop esi
// 005802f5  81c410010000         add esp, 0x110
// 005802fb  c20800               ret 8
// library openrbx-client/App\util\Log.cpp (function ?writeEntry@Log@RBX@@QAEXW4Severity@12@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Log.cpp
