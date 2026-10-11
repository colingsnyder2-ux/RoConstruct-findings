// roc 2008-06 0058ee00  unit: TextXmlWriter  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058ee00
//
// 0058ee00  83ec0c               sub esp, 0xc
// 0058ee03  53                   push ebx
// 0058ee04  55                   push ebp
// 0058ee05  56                   push esi
// 0058ee06  8be9                 mov ebp, ecx
// 0058ee08  57                   push edi
// 0058ee09  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 0058ee0c  8b7704               mov esi, dword ptr [edi + 4]
// 0058ee0f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0058ee13  b001                 mov al, 1
// 0058ee15  88442410             mov byte ptr [esp + 0x10], al
// 0058ee19  752d                 jne 0x58ee48
// 0058ee1b  eb03                 jmp 0x58ee20
// 0058ee1d  8d4900               lea ecx, [ecx]
// 0058ee20  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058ee24  8d460c               lea eax, [esi + 0xc]
// 0058ee27  50                   push eax
// 0058ee28  51                   push ecx
// 0058ee29  8bfe                 mov edi, esi
// 0058ee2b  e820cffcff           call 0x55bd50
// 0058ee30  83c408               add esp, 8
// 0058ee33  88442410             mov byte ptr [esp + 0x10], al
// 0058ee37  84c0                 test al, al
// 0058ee39  7404                 je 0x58ee3f
// 0058ee3b  8b36                 mov esi, dword ptr [esi]
// 0058ee3d  eb03                 jmp 0x58ee42
// 0058ee3f  8b7608               mov esi, dword ptr [esi + 8]
// 0058ee42  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0058ee46  74d8                 je 0x58ee20
// 0058ee48  8b7500               mov esi, dword ptr [ebp]
// 0058ee4b  8bdf                 mov ebx, edi
// 0058ee4d  895c2418             mov dword ptr [esp + 0x18], ebx
// 0058ee51  89742414             mov dword ptr [esp + 0x14], esi
// 0058ee55  84c0                 test al, al
// 0058ee57  7456                 je 0x58eeaf
// 0058ee59  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0058ee5c  8b1a                 mov ebx, dword ptr [edx]
// 0058ee5e  85f6                 test esi, esi
// 0058ee60  7404                 je 0x58ee66
// 0058ee62  3bf6                 cmp esi, esi
// 0058ee64  7406                 je 0x58ee6c
// 0058ee66  ff1590288000         call dword ptr [0x802890]
// 0058ee6c  8d4c2414             lea ecx, [esp + 0x14]
// 0058ee70  3bfb                 cmp edi, ebx
// 0058ee72  752e                 jne 0x58eea2
// 0058ee74  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058ee78  50                   push eax
// 0058ee79  57                   push edi
// 0058ee7a  6a01                 push 1
// 0058ee7c  51                   push ecx
// 0058ee7d  8bcd                 mov ecx, ebp
// 0058ee7f  e80c2f1000           call 0x691d90
// 0058ee84  5f                   pop edi
// 0058ee85  8bc8                 mov ecx, eax
// 0058ee87  8b11                 mov edx, dword ptr [ecx]
// 0058ee89  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058ee8d  8b4904               mov ecx, dword ptr [ecx + 4]
// 0058ee90  5e                   pop esi
// 0058ee91  5d                   pop ebp
// 0058ee92  8910                 mov dword ptr [eax], edx
// 0058ee94  894804               mov dword ptr [eax + 4], ecx
// 0058ee97  c6400801             mov byte ptr [eax + 8], 1
// 0058ee9b  5b                   pop ebx
// 0058ee9c  83c40c               add esp, 0xc
// 0058ee9f  c20800               ret 8
// 0058eea2  e8a9e40f00           call 0x68d350
// 0058eea7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0058eeab  8b742414             mov esi, dword ptr [esp + 0x14]
// 0058eeaf  8b542424             mov edx, dword ptr [esp + 0x24]
// 0058eeb3  52                   push edx
// 0058eeb4  8d430c               lea eax, [ebx + 0xc]
// 0058eeb7  50                   push eax
// 0058eeb8  e893cefcff           call 0x55bd50
// 0058eebd  83c408               add esp, 8
// 0058eec0  84c0                 test al, al
// 0058eec2  7412                 je 0x58eed6
// 0058eec4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058eec8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058eecc  51                   push ecx
// 0058eecd  57                   push edi
// 0058eece  52                   push edx
// 0058eecf  8d442420             lea eax, [esp + 0x20]
// 0058eed3  50                   push eax
// 0058eed4  eba7                 jmp 0x58ee7d
// 0058eed6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058eeda  5f                   pop edi
// 0058eedb  8930                 mov dword ptr [eax], esi
// 0058eedd  5e                   pop esi
// 0058eede  5d                   pop ebp
// 0058eedf  895804               mov dword ptr [eax + 4], ebx
// 0058eee2  c6400800             mov byte ptr [eax + 8], 0
// 0058eee6  5b                   pop ebx
// 0058eee7  83c40c               add esp, 0xc
// 0058eeea  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?insert@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@_N@2@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
