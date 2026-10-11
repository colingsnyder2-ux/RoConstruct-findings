// roc 2007-03 00566ef0  unit: seg_00560000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00566ef0
//
// 00566ef0  56                   push esi
// 00566ef1  8bf1                 mov esi, ecx
// 00566ef3  807e0800             cmp byte ptr [esi + 8], 0
// 00566ef7  57                   push edi
// 00566ef8  7522                 jne 0x566f1c
// 00566efa  8b4e04               mov ecx, dword ptr [esi + 4]
// 00566efd  85c9                 test ecx, ecx
// 00566eff  7410                 je 0x566f11
// 00566f01  ff15b0e57700         call dword ptr [0x77e5b0]
// 00566f07  83f8ff               cmp eax, -1
// 00566f0a  7405                 je 0x566f11
// 00566f0c  884609               mov byte ptr [esi + 9], al
// 00566f0f  eb07                 jmp 0x566f18
// 00566f11  c7460400000000       mov dword ptr [esi + 4], 0
// 00566f18  c6460801             mov byte ptr [esi + 8], 1
// 00566f1c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00566f20  8b06                 mov eax, dword ptr [esi]
// 00566f22  8b4e04               mov ecx, dword ptr [esi + 4]
// 00566f25  85c9                 test ecx, ecx
// 00566f27  8b5608               mov edx, dword ptr [esi + 8]
// 00566f2a  8907                 mov dword ptr [edi], eax
// 00566f2c  894f04               mov dword ptr [edi + 4], ecx
// 00566f2f  895708               mov dword ptr [edi + 8], edx
// 00566f32  7416                 je 0x566f4a
// 00566f34  ff15b4e57700         call dword ptr [0x77e5b4]
// 00566f3a  83f8ff               cmp eax, -1
// 00566f3d  740b                 je 0x566f4a
// 00566f3f  8bc7                 mov eax, edi
// 00566f41  5f                   pop edi
// 00566f42  c6460800             mov byte ptr [esi + 8], 0
// 00566f46  5e                   pop esi
// 00566f47  c20800               ret 8
// 00566f4a  8bc7                 mov eax, edi
// 00566f4c  5f                   pop edi
// 00566f4d  c7460400000000       mov dword ptr [esi + 4], 0
// 00566f54  c6460801             mov byte ptr [esi + 8], 1
// 00566f58  5e                   pop esi
// 00566f59  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??E?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QAE?AV01@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
