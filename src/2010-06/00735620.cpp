// roc 2010-06 00735620  unit: seg_00730000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735620
//
// 00735620  81ec10020000         sub esp, 0x210
// 00735626  53                   push ebx
// 00735627  56                   push esi
// 00735628  8bb4241c020000       mov esi, dword ptr [esp + 0x21c]
// 0073562f  57                   push edi
// 00735630  8d44240c             lea eax, [esp + 0xc]
// 00735634  50                   push eax
// 00735635  bb01000000           mov ebx, 1
// 0073563a  53                   push ebx
// 0073563b  56                   push esi
// 0073563c  e8dfd8feff           call 0x722f20
// 00735641  8d4c241c             lea ecx, [esp + 0x1c]
// 00735645  51                   push ecx
// 00735646  56                   push esi
// 00735647  8bf8                 mov edi, eax
// 00735649  e892d2feff           call 0x7228e0
// 0073564e  83c414               add esp, 0x14
// 00735651  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00735656  743e                 je 0x735696
// 00735658  eb06                 jmp 0x735660
// 0073565a  8d9b00000000         lea ebx, [ebx]
// 00735660  295c240c             sub dword ptr [esp + 0xc], ebx
// 00735664  8d94241c020000       lea edx, [esp + 0x21c]
// 0073566b  39542410             cmp dword ptr [esp + 0x10], edx
// 0073566f  720d                 jb 0x73567e
// 00735671  8d442410             lea eax, [esp + 0x10]
// 00735675  50                   push eax
// 00735676  e805d1feff           call 0x722780
// 0073567b  83c404               add esp, 4
// 0073567e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00735682  8a1439               mov dl, byte ptr [ecx + edi]
// 00735685  8b442410             mov eax, dword ptr [esp + 0x10]
// 00735689  8810                 mov byte ptr [eax], dl
// 0073568b  015c2410             add dword ptr [esp + 0x10], ebx
// 0073568f  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00735694  75ca                 jne 0x735660
// 00735696  295c240c             sub dword ptr [esp + 0xc], ebx
// 0073569a  8d4c2410             lea ecx, [esp + 0x10]
// 0073569e  51                   push ecx
// 0073569f  e87cd1feff           call 0x722820
// 007356a4  83c404               add esp, 4
// 007356a7  5f                   pop edi
// 007356a8  5e                   pop esi
// 007356a9  8bc3                 mov eax, ebx
// 007356ab  5b                   pop ebx
// 007356ac  81c410020000         add esp, 0x210
// 007356b2  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_reverse)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
