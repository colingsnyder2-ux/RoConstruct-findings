// roc 2009-12 0079ce60  unit: seg_00790000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079ce60
//
// 0079ce60  81ec10020000         sub esp, 0x210
// 0079ce66  56                   push esi
// 0079ce67  8bb42418020000       mov esi, dword ptr [esp + 0x218]
// 0079ce6e  57                   push edi
// 0079ce6f  8d442408             lea eax, [esp + 8]
// 0079ce73  50                   push eax
// 0079ce74  6a01                 push 1
// 0079ce76  56                   push esi
// 0079ce77  e8f4d8feff           call 0x78a770
// 0079ce7c  8d4c2418             lea ecx, [esp + 0x18]
// 0079ce80  51                   push ecx
// 0079ce81  56                   push esi
// 0079ce82  8bf8                 mov edi, eax
// 0079ce84  e8a7d2feff           call 0x78a130
// 0079ce89  33f6                 xor esi, esi
// 0079ce8b  83c414               add esp, 0x14
// 0079ce8e  39742408             cmp dword ptr [esp + 8], esi
// 0079ce92  7642                 jbe 0x79ced6
// 0079ce94  53                   push ebx
// 0079ce95  8b1d28b89800         mov ebx, dword ptr [0x98b828]
// 0079ce9b  eb03                 jmp 0x79cea0
// 0079ce9d  8d4900               lea ecx, [ecx]
// 0079cea0  8d94241c020000       lea edx, [esp + 0x21c]
// 0079cea7  39542410             cmp dword ptr [esp + 0x10], edx
// 0079ceab  720d                 jb 0x79ceba
// 0079cead  8d442410             lea eax, [esp + 0x10]
// 0079ceb1  50                   push eax
// 0079ceb2  e819d1feff           call 0x789fd0
// 0079ceb7  83c404               add esp, 4
// 0079ceba  0fb60c3e             movzx ecx, byte ptr [esi + edi]
// 0079cebe  51                   push ecx
// 0079cebf  ffd3                 call ebx
// 0079cec1  8b542414             mov edx, dword ptr [esp + 0x14]
// 0079cec5  8802                 mov byte ptr [edx], al
// 0079cec7  ff442414             inc dword ptr [esp + 0x14]
// 0079cecb  46                   inc esi
// 0079cecc  83c404               add esp, 4
// 0079cecf  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 0079ced3  72cb                 jb 0x79cea0
// 0079ced5  5b                   pop ebx
// 0079ced6  8d44240c             lea eax, [esp + 0xc]
// 0079ceda  50                   push eax
// 0079cedb  e890d1feff           call 0x78a070
// 0079cee0  83c404               add esp, 4
// 0079cee3  5f                   pop edi
// 0079cee4  b801000000           mov eax, 1
// 0079cee9  5e                   pop esi
// 0079ceea  81c410020000         add esp, 0x210
// 0079cef0  c3                   ret 
// copied from an identical function in another client (function _str_lower)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c