// roc 2008-06 006683f0  unit: RBX::JointStage  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006683f0
//
// 006683f0  53                   push ebx
// 006683f1  56                   push esi
// 006683f2  57                   push edi
// 006683f3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006683f7  8bf1                 mov esi, ecx
// 006683f9  8b4f04               mov ecx, dword ptr [edi + 4]
// 006683fc  8b01                 mov eax, dword ptr [ecx]
// 006683fe  8b5004               mov edx, dword ptr [eax + 4]
// 00668401  ffd2                 call edx
// 00668403  8bd8                 mov ebx, eax
// 00668405  8b06                 mov eax, dword ptr [esi]
// 00668407  8b5004               mov edx, dword ptr [eax + 4]
// 0066840a  8bce                 mov ecx, esi
// 0066840c  ffd2                 call edx
// 0066840e  3bd8                 cmp ebx, eax
// 00668410  7e19                 jle 0x66842b
// 00668412  8b4e08               mov ecx, dword ptr [esi + 8]
// 00668415  8b01                 mov eax, dword ptr [ecx]
// 00668417  8b5014               mov edx, dword ptr [eax + 0x14]
// 0066841a  57                   push edi
// 0066841b  ffd2                 call edx
// 0066841d  56                   push esi
// 0066841e  8bcf                 mov ecx, edi
// 00668420  e81bd4fdff           call 0x645840
// 00668425  5f                   pop edi
// 00668426  5e                   pop esi
// 00668427  5b                   pop ebx
// 00668428  c20400               ret 4
// 0066842b  8d442410             lea eax, [esp + 0x10]
// 0066842f  50                   push eax
// 00668430  8d4e10               lea ecx, [esi + 0x10]
// 00668433  897c2414             mov dword ptr [esp + 0x14], edi
// 00668437  e8241bf8ff           call 0x5e9f60
// 0066843c  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0066843f  51                   push ecx
// 00668440  57                   push edi
// 00668441  8bce                 mov ecx, esi
// 00668443  e838feffff           call 0x668280
// 00668448  8b5710               mov edx, dword ptr [edi + 0x10]
// 0066844b  52                   push edx
// 0066844c  57                   push edi
// 0066844d  8bce                 mov ecx, esi
// 0066844f  e82cfeffff           call 0x668280
// 00668454  56                   push esi
// 00668455  8bcf                 mov ecx, edi
// 00668457  e8e4d3fdff           call 0x645840
// 0066845c  5f                   pop edi
// 0066845d  5e                   pop esi
// 0066845e  5b                   pop ebx
// 0066845f  c20400               ret 4
// library openrbx-client/App\v8world\JointStage.cpp (function ?onEdgeRemoving@JointStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/JointStage.cpp
