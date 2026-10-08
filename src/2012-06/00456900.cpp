// roc 2012-06 00456900  unit: CPropGrid::UpdateItemsJob  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00456900
//
// 00456900  53                   push ebx
// 00456901  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00456905  8b4304               mov eax, dword ptr [ebx + 4]
// 00456908  56                   push esi
// 00456909  57                   push edi
// 0045690a  8bf1                 mov esi, ecx
// 0045690c  8b7e04               mov edi, dword ptr [esi + 4]
// 0045690f  83c004               add eax, 4
// 00456912  8b00                 mov eax, dword ptr [eax]
// 00456914  57                   push edi
// 00456915  50                   push eax
// 00456916  e8a5fbffff           call 0x4564c0
// 0045691b  894704               mov dword ptr [edi + 4], eax
// 0045691e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00456921  8b5604               mov edx, dword ptr [esi + 4]
// 00456924  894e08               mov dword ptr [esi + 8], ecx
// 00456927  8b4204               mov eax, dword ptr [edx + 4]
// 0045692a  80781100             cmp byte ptr [eax + 0x11], 0
// 0045692e  7537                 jne 0x456967
// 00456930  8b08                 mov ecx, dword ptr [eax]
// 00456932  80791100             cmp byte ptr [ecx + 0x11], 0
// 00456936  750a                 jne 0x456942
// 00456938  8bc1                 mov eax, ecx
// 0045693a  8b08                 mov ecx, dword ptr [eax]
// 0045693c  80791100             cmp byte ptr [ecx + 0x11], 0
// 00456940  74f6                 je 0x456938
// 00456942  8902                 mov dword ptr [edx], eax
// 00456944  8b7604               mov esi, dword ptr [esi + 4]
// 00456947  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045694a  8b4108               mov eax, dword ptr [ecx + 8]
// 0045694d  80781100             cmp byte ptr [eax + 0x11], 0
// 00456951  750b                 jne 0x45695e
// 00456953  8bc8                 mov ecx, eax
// 00456955  8b4108               mov eax, dword ptr [ecx + 8]
// 00456958  80781100             cmp byte ptr [eax + 0x11], 0
// 0045695c  74f5                 je 0x456953
// 0045695e  5f                   pop edi
// 0045695f  894e08               mov dword ptr [esi + 8], ecx
// 00456962  5e                   pop esi
// 00456963  5b                   pop ebx
// 00456964  c20400               ret 4
// 00456967  8912                 mov dword ptr [edx], edx
// 00456969  8b7604               mov esi, dword ptr [esi + 4]
// 0045696c  5f                   pop edi
// 0045696d  897608               mov dword ptr [esi + 8], esi
// 00456970  5e                   pop esi
// 00456971  5b                   pop ebx
// 00456972  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
