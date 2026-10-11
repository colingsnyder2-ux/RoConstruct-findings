// roc 2009-06 0061f600  unit: TextXmlWriter  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061f600
//
// 0061f600  83ec0c               sub esp, 0xc
// 0061f603  53                   push ebx
// 0061f604  55                   push ebp
// 0061f605  56                   push esi
// 0061f606  8be9                 mov ebp, ecx
// 0061f608  57                   push edi
// 0061f609  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 0061f60c  8b7704               mov esi, dword ptr [edi + 4]
// 0061f60f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0061f613  b001                 mov al, 1
// 0061f615  88442410             mov byte ptr [esp + 0x10], al
// 0061f619  752d                 jne 0x61f648
// 0061f61b  eb03                 jmp 0x61f620
// 0061f61d  8d4900               lea ecx, [ecx]
// 0061f620  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061f624  8d460c               lea eax, [esi + 0xc]
// 0061f627  50                   push eax
// 0061f628  51                   push ecx
// 0061f629  8bfe                 mov edi, esi
// 0061f62b  e83096fbff           call 0x5d8c60
// 0061f630  83c408               add esp, 8
// 0061f633  88442410             mov byte ptr [esp + 0x10], al
// 0061f637  84c0                 test al, al
// 0061f639  7404                 je 0x61f63f
// 0061f63b  8b36                 mov esi, dword ptr [esi]
// 0061f63d  eb03                 jmp 0x61f642
// 0061f63f  8b7608               mov esi, dword ptr [esi + 8]
// 0061f642  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0061f646  74d8                 je 0x61f620
// 0061f648  8b7500               mov esi, dword ptr [ebp]
// 0061f64b  8bdf                 mov ebx, edi
// 0061f64d  895c2418             mov dword ptr [esp + 0x18], ebx
// 0061f651  89742414             mov dword ptr [esp + 0x14], esi
// 0061f655  84c0                 test al, al
// 0061f657  7456                 je 0x61f6af
// 0061f659  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0061f65c  8b1a                 mov ebx, dword ptr [edx]
// 0061f65e  85f6                 test esi, esi
// 0061f660  7404                 je 0x61f666
// 0061f662  3bf6                 cmp esi, esi
// 0061f664  7406                 je 0x61f66c
// 0061f666  ff15ace98900         call dword ptr [0x89e9ac]
// 0061f66c  8d4c2414             lea ecx, [esp + 0x14]
// 0061f670  3bfb                 cmp edi, ebx
// 0061f672  752e                 jne 0x61f6a2
// 0061f674  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061f678  50                   push eax
// 0061f679  57                   push edi
// 0061f67a  6a01                 push 1
// 0061f67c  51                   push ecx
// 0061f67d  8bcd                 mov ecx, ebp
// 0061f67f  e82c47e5ff           call 0x473db0
// 0061f684  5f                   pop edi
// 0061f685  8bc8                 mov ecx, eax
// 0061f687  8b11                 mov edx, dword ptr [ecx]
// 0061f689  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061f68d  8b4904               mov ecx, dword ptr [ecx + 4]
// 0061f690  5e                   pop esi
// 0061f691  5d                   pop ebp
// 0061f692  8910                 mov dword ptr [eax], edx
// 0061f694  894804               mov dword ptr [eax + 4], ecx
// 0061f697  c6400801             mov byte ptr [eax + 8], 1
// 0061f69b  5b                   pop ebx
// 0061f69c  83c40c               add esp, 0xc
// 0061f69f  c20800               ret 8
// 0061f6a2  e8a9befdff           call 0x5fb550
// 0061f6a7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0061f6ab  8b742414             mov esi, dword ptr [esp + 0x14]
// 0061f6af  8b542424             mov edx, dword ptr [esp + 0x24]
// 0061f6b3  52                   push edx
// 0061f6b4  8d430c               lea eax, [ebx + 0xc]
// 0061f6b7  50                   push eax
// 0061f6b8  e8a395fbff           call 0x5d8c60
// 0061f6bd  83c408               add esp, 8
// 0061f6c0  84c0                 test al, al
// 0061f6c2  7412                 je 0x61f6d6
// 0061f6c4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061f6c8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061f6cc  51                   push ecx
// 0061f6cd  57                   push edi
// 0061f6ce  52                   push edx
// 0061f6cf  8d442420             lea eax, [esp + 0x20]
// 0061f6d3  50                   push eax
// 0061f6d4  eba7                 jmp 0x61f67d
// 0061f6d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061f6da  5f                   pop edi
// 0061f6db  8930                 mov dword ptr [eax], esi
// 0061f6dd  5e                   pop esi
// 0061f6de  5d                   pop ebp
// 0061f6df  895804               mov dword ptr [eax + 4], ebx
// 0061f6e2  c6400800             mov byte ptr [eax + 8], 0
// 0061f6e6  5b                   pop ebx
// 0061f6e7  83c40c               add esp, 0xc
// 0061f6ea  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?insert@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@_N@2@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
