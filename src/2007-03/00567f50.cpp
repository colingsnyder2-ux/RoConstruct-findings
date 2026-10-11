// roc 2007-03 00567f50  unit: seg_00560000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00567f50
//
// 00567f50  83ec10               sub esp, 0x10
// 00567f53  53                   push ebx
// 00567f54  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00567f58  56                   push esi
// 00567f59  57                   push edi
// 00567f5a  53                   push ebx
// 00567f5b  8bf1                 mov esi, ecx
// 00567f5d  e84eefffff           call 0x566eb0
// 00567f62  85f6                 test esi, esi
// 00567f64  8bf8                 mov edi, eax
// 00567f66  897c2410             mov dword ptr [esp + 0x10], edi
// 00567f6a  7506                 jne 0x567f72
// 00567f6c  ff1544e97700         call dword ptr [0x77e944]
// 00567f72  3b7e04               cmp edi, dword ptr [esi + 4]
// 00567f75  8974240c             mov dword ptr [esp + 0xc], esi
// 00567f79  7417                 je 0x567f92
// 00567f7b  83c70c               add edi, 0xc
// 00567f7e  57                   push edi
// 00567f7f  53                   push ebx
// 00567f80  e8bbc7fdff           call 0x544740
// 00567f85  83c408               add esp, 8
// 00567f88  84c0                 test al, al
// 00567f8a  7506                 jne 0x567f92
// 00567f8c  8d4c240c             lea ecx, [esp + 0xc]
// 00567f90  eb0f                 jmp 0x567fa1
// 00567f92  8b4604               mov eax, dword ptr [esi + 4]
// 00567f95  89442418             mov dword ptr [esp + 0x18], eax
// 00567f99  89742414             mov dword ptr [esp + 0x14], esi
// 00567f9d  8d4c2414             lea ecx, [esp + 0x14]
// 00567fa1  8b11                 mov edx, dword ptr [ecx]
// 00567fa3  8b442420             mov eax, dword ptr [esp + 0x20]
// 00567fa7  8b4904               mov ecx, dword ptr [ecx + 4]
// 00567faa  5f                   pop edi
// 00567fab  5e                   pop esi
// 00567fac  8910                 mov dword ptr [eax], edx
// 00567fae  894804               mov dword ptr [eax + 4], ecx
// 00567fb1  5b                   pop ebx
// 00567fb2  83c410               add esp, 0x10
// 00567fb5  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?find@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
