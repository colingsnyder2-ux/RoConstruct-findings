// roc 2011-06 00445170  unit: CPropGrid::UpdateItemsJob  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00445170
//
// 00445170  53                   push ebx
// 00445171  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00445175  8b4304               mov eax, dword ptr [ebx + 4]
// 00445178  56                   push esi
// 00445179  57                   push edi
// 0044517a  8bf1                 mov esi, ecx
// 0044517c  8b7e04               mov edi, dword ptr [esi + 4]
// 0044517f  83c004               add eax, 4
// 00445182  8b00                 mov eax, dword ptr [eax]
// 00445184  57                   push edi
// 00445185  50                   push eax
// 00445186  e8f5fbffff           call 0x444d80
// 0044518b  894704               mov dword ptr [edi + 4], eax
// 0044518e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00445191  8b5604               mov edx, dword ptr [esi + 4]
// 00445194  894e08               mov dword ptr [esi + 8], ecx
// 00445197  8b4204               mov eax, dword ptr [edx + 4]
// 0044519a  80781100             cmp byte ptr [eax + 0x11], 0
// 0044519e  7537                 jne 0x4451d7
// 004451a0  8b08                 mov ecx, dword ptr [eax]
// 004451a2  80791100             cmp byte ptr [ecx + 0x11], 0
// 004451a6  750a                 jne 0x4451b2
// 004451a8  8bc1                 mov eax, ecx
// 004451aa  8b08                 mov ecx, dword ptr [eax]
// 004451ac  80791100             cmp byte ptr [ecx + 0x11], 0
// 004451b0  74f6                 je 0x4451a8
// 004451b2  8902                 mov dword ptr [edx], eax
// 004451b4  8b7604               mov esi, dword ptr [esi + 4]
// 004451b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004451ba  8b4108               mov eax, dword ptr [ecx + 8]
// 004451bd  80781100             cmp byte ptr [eax + 0x11], 0
// 004451c1  750b                 jne 0x4451ce
// 004451c3  8bc8                 mov ecx, eax
// 004451c5  8b4108               mov eax, dword ptr [ecx + 8]
// 004451c8  80781100             cmp byte ptr [eax + 0x11], 0
// 004451cc  74f5                 je 0x4451c3
// 004451ce  5f                   pop edi
// 004451cf  894e08               mov dword ptr [esi + 8], ecx
// 004451d2  5e                   pop esi
// 004451d3  5b                   pop ebx
// 004451d4  c20400               ret 4
// 004451d7  8912                 mov dword ptr [edx], edx
// 004451d9  8b7604               mov esi, dword ptr [esi + 4]
// 004451dc  5f                   pop edi
// 004451dd  897608               mov dword ptr [esi + 8], esi
// 004451e0  5e                   pop esi
// 004451e1  5b                   pop ebx
// 004451e2  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
