// roc 2007-08 0055d8e0  unit: RBX::DataModel  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d8e0
//
// 0055d8e0  83ec10               sub esp, 0x10
// 0055d8e3  53                   push ebx
// 0055d8e4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0055d8e8  56                   push esi
// 0055d8e9  57                   push edi
// 0055d8ea  53                   push ebx
// 0055d8eb  8bf1                 mov esi, ecx
// 0055d8ed  e87efaffff           call 0x55d370
// 0055d8f2  85f6                 test esi, esi
// 0055d8f4  8bf8                 mov edi, eax
// 0055d8f6  897c2410             mov dword ptr [esp + 0x10], edi
// 0055d8fa  7506                 jne 0x55d902
// 0055d8fc  ff15d8e67700         call dword ptr [0x77e6d8]
// 0055d902  3b7e04               cmp edi, dword ptr [esi + 4]
// 0055d905  8974240c             mov dword ptr [esp + 0xc], esi
// 0055d909  7415                 je 0x55d920
// 0055d90b  83c70c               add edi, 0xc
// 0055d90e  57                   push edi
// 0055d90f  8bcb                 mov ecx, ebx
// 0055d911  e8fafd0200           call 0x58d710
// 0055d916  84c0                 test al, al
// 0055d918  7506                 jne 0x55d920
// 0055d91a  8d4c240c             lea ecx, [esp + 0xc]
// 0055d91e  eb0f                 jmp 0x55d92f
// 0055d920  8b4604               mov eax, dword ptr [esi + 4]
// 0055d923  89442418             mov dword ptr [esp + 0x18], eax
// 0055d927  89742414             mov dword ptr [esp + 0x14], esi
// 0055d92b  8d4c2414             lea ecx, [esp + 0x14]
// 0055d92f  8b11                 mov edx, dword ptr [ecx]
// 0055d931  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055d935  8b4904               mov ecx, dword ptr [ecx + 4]
// 0055d938  5f                   pop edi
// 0055d939  5e                   pop esi
// 0055d93a  8910                 mov dword ptr [eax], edx
// 0055d93c  894804               mov dword ptr [eax + 4], ecx
// 0055d93f  5b                   pop ebx
// 0055d940  83c410               add esp, 0x10
// 0055d943  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?find@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
