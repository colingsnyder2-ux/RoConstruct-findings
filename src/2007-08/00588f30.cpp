// roc 2007-08 00588f30  unit: RBX::VSoundService::?$FactoryProduct  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588f30
//
// 00588f30  83ec10               sub esp, 0x10
// 00588f33  53                   push ebx
// 00588f34  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00588f38  56                   push esi
// 00588f39  57                   push edi
// 00588f3a  53                   push ebx
// 00588f3b  8bf1                 mov esi, ecx
// 00588f3d  e86ef0ffff           call 0x587fb0
// 00588f42  85f6                 test esi, esi
// 00588f44  8bf8                 mov edi, eax
// 00588f46  897c2410             mov dword ptr [esp + 0x10], edi
// 00588f4a  7506                 jne 0x588f52
// 00588f4c  ff15d8e67700         call dword ptr [0x77e6d8]
// 00588f52  3b7e04               cmp edi, dword ptr [esi + 4]
// 00588f55  8974240c             mov dword ptr [esp + 0xc], esi
// 00588f59  7417                 je 0x588f72
// 00588f5b  83c70c               add edi, 0xc
// 00588f5e  57                   push edi
// 00588f5f  53                   push ebx
// 00588f60  e84bc0fbff           call 0x544fb0
// 00588f65  83c408               add esp, 8
// 00588f68  84c0                 test al, al
// 00588f6a  7506                 jne 0x588f72
// 00588f6c  8d4c240c             lea ecx, [esp + 0xc]
// 00588f70  eb0f                 jmp 0x588f81
// 00588f72  8b4604               mov eax, dword ptr [esi + 4]
// 00588f75  89442418             mov dword ptr [esp + 0x18], eax
// 00588f79  89742414             mov dword ptr [esp + 0x14], esi
// 00588f7d  8d4c2414             lea ecx, [esp + 0x14]
// 00588f81  8b11                 mov edx, dword ptr [ecx]
// 00588f83  8b442420             mov eax, dword ptr [esp + 0x20]
// 00588f87  8b4904               mov ecx, dword ptr [ecx + 4]
// 00588f8a  5f                   pop edi
// 00588f8b  5e                   pop esi
// 00588f8c  8910                 mov dword ptr [eax], edx
// 00588f8e  894804               mov dword ptr [eax + 4], ecx
// 00588f91  5b                   pop ebx
// 00588f92  83c410               add esp, 0x10
// 00588f95  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?find@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
