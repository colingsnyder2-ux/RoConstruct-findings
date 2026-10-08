// roc 2007-08 0057ad00  unit: RBX::ArrowTool  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ad00
//
// 0057ad00  6aff                 push -1
// 0057ad02  681bb67500           push 0x75b61b
// 0057ad07  64a100000000         mov eax, dword ptr fs:[0]
// 0057ad0d  50                   push eax
// 0057ad0e  64892500000000       mov dword ptr fs:[0], esp
// 0057ad15  51                   push ecx
// 0057ad16  56                   push esi
// 0057ad17  57                   push edi
// 0057ad18  6a24                 push 0x24
// 0057ad1a  8bf9                 mov edi, ecx
// 0057ad1c  e8d5510b00           call 0x62fef6
// 0057ad21  8bf0                 mov esi, eax
// 0057ad23  83c404               add esp, 4
// 0057ad26  89742408             mov dword ptr [esp + 8], esi
// 0057ad2a  85f6                 test esi, esi
// 0057ad2c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057ad34  742f                 je 0x57ad65
// 0057ad36  8b4718               mov eax, dword ptr [edi + 0x18]
// 0057ad39  50                   push eax
// 0057ad3a  8bce                 mov ecx, esi
// 0057ad3c  e8cf8f0600           call 0x5e3d10
// 0057ad41  5f                   pop edi
// 0057ad42  c6462000             mov byte ptr [esi + 0x20], 0
// 0057ad46  c706b4b57a00         mov dword ptr [esi], 0x7ab5b4
// 0057ad4c  c746049cb57a00       mov dword ptr [esi + 4], 0x7ab59c
// 0057ad53  8bc6                 mov eax, esi
// 0057ad55  5e                   pop esi
// 0057ad56  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057ad5a  64890d00000000       mov dword ptr fs:[0], ecx
// 0057ad61  83c410               add esp, 0x10
// 0057ad64  c3                   ret 
// 0057ad65  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057ad69  5f                   pop edi
// 0057ad6a  33c0                 xor eax, eax
// 0057ad6c  5e                   pop esi
// 0057ad6d  64890d00000000       mov dword ptr fs:[0], ecx
// 0057ad74  83c410               add esp, 0x10
// 0057ad77  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?isSticky@ArrowTool@RBX@@UBEPAVMouseCommand@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
