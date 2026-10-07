// roc 2010-06 0077df70  unit: RBX::PartDropTool  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077df70
//
// 0077df70  53                   push ebx
// 0077df71  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0077df75  55                   push ebp
// 0077df76  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0077df7a  56                   push esi
// 0077df7b  57                   push edi
// 0077df7c  8d3c9d14000000       lea edi, [ebx*4 + 0x14]
// 0077df83  57                   push edi
// 0077df84  6a00                 push 0
// 0077df86  6a00                 push 0
// 0077df88  55                   push ebp
// 0077df89  e8720a0000           call 0x77ea00
// 0077df8e  8bf0                 mov esi, eax
// 0077df90  6a06                 push 6
// 0077df92  56                   push esi
// 0077df93  55                   push ebp
// 0077df94  e817d0ffff           call 0x77afb0
// 0077df99  8b442438             mov eax, dword ptr [esp + 0x38]
// 0077df9d  83c41c               add esp, 0x1c
// 0077dfa0  c6460600             mov byte ptr [esi + 6], 0
// 0077dfa4  89460c               mov dword ptr [esi + 0xc], eax
// 0077dfa7  885e07               mov byte ptr [esi + 7], bl
// 0077dfaa  85db                 test ebx, ebx
// 0077dfac  7411                 je 0x77dfbf
// 0077dfae  8d0437               lea eax, [edi + esi]
// 0077dfb1  4b                   dec ebx
// 0077dfb2  83e804               sub eax, 4
// 0077dfb5  c70000000000         mov dword ptr [eax], 0
// 0077dfbb  85db                 test ebx, ebx
// 0077dfbd  75f2                 jne 0x77dfb1
// 0077dfbf  5f                   pop edi
// 0077dfc0  8bc6                 mov eax, esi
// 0077dfc2  5e                   pop esi
// 0077dfc3  5d                   pop ebp
// 0077dfc4  5b                   pop ebx
// 0077dfc5  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newLclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
