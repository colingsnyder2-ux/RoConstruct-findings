// roc 2009-12 0079cf00  unit: seg_00790000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079cf00
//
// 0079cf00  81ec10020000         sub esp, 0x210
// 0079cf06  56                   push esi
// 0079cf07  8bb42418020000       mov esi, dword ptr [esp + 0x218]
// 0079cf0e  57                   push edi
// 0079cf0f  8d442408             lea eax, [esp + 8]
// 0079cf13  50                   push eax
// 0079cf14  6a01                 push 1
// 0079cf16  56                   push esi
// 0079cf17  e854d8feff           call 0x78a770
// 0079cf1c  8d4c2418             lea ecx, [esp + 0x18]
// 0079cf20  51                   push ecx
// 0079cf21  56                   push esi
// 0079cf22  8bf8                 mov edi, eax
// 0079cf24  e807d2feff           call 0x78a130
// 0079cf29  33f6                 xor esi, esi
// 0079cf2b  83c414               add esp, 0x14
// 0079cf2e  39742408             cmp dword ptr [esp + 8], esi
// 0079cf32  7642                 jbe 0x79cf76
// 0079cf34  53                   push ebx
// 0079cf35  8b1da0b79800         mov ebx, dword ptr [0x98b7a0]
// 0079cf3b  eb03                 jmp 0x79cf40
// 0079cf3d  8d4900               lea ecx, [ecx]
// 0079cf40  8d94241c020000       lea edx, [esp + 0x21c]
// 0079cf47  39542410             cmp dword ptr [esp + 0x10], edx
// 0079cf4b  720d                 jb 0x79cf5a
// 0079cf4d  8d442410             lea eax, [esp + 0x10]
// 0079cf51  50                   push eax
// 0079cf52  e879d0feff           call 0x789fd0
// 0079cf57  83c404               add esp, 4
// 0079cf5a  0fb60c3e             movzx ecx, byte ptr [esi + edi]
// 0079cf5e  51                   push ecx
// 0079cf5f  ffd3                 call ebx
// 0079cf61  8b542414             mov edx, dword ptr [esp + 0x14]
// 0079cf65  8802                 mov byte ptr [edx], al
// 0079cf67  ff442414             inc dword ptr [esp + 0x14]
// 0079cf6b  46                   inc esi
// 0079cf6c  83c404               add esp, 4
// 0079cf6f  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 0079cf73  72cb                 jb 0x79cf40
// 0079cf75  5b                   pop ebx
// 0079cf76  8d44240c             lea eax, [esp + 0xc]
// 0079cf7a  50                   push eax
// 0079cf7b  e8f0d0feff           call 0x78a070
// 0079cf80  83c404               add esp, 4
// 0079cf83  5f                   pop edi
// 0079cf84  b801000000           mov eax, 1
// 0079cf89  5e                   pop esi
// 0079cf8a  81c410020000         add esp, 0x210
// 0079cf90  c3                   ret 
// copied from an identical function in another client (function _str_lower)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c