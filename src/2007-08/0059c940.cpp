// roc 2007-08 0059c940  unit: RBX::UserInputBase  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059c940
//
// 0059c940  8b442404             mov eax, dword ptr [esp + 4]
// 0059c944  83f806               cmp eax, 6
// 0059c947  771b                 ja 0x59c964
// 0059c949  0fb68070c95900       movzx eax, byte ptr [eax + 0x59c970]
// 0059c950  ff248568c95900       jmp dword ptr [eax*4 + 0x59c968]
// 0059c957  33c0                 xor eax, eax
// 0059c959  39442408             cmp dword ptr [esp + 8], eax
// 0059c95d  0f94c0               sete al
// 0059c960  c3                   ret 
// 0059c961  b001                 mov al, 1
// 0059c963  c3                   ret 
// 0059c964  32c0                 xor al, al
// 0059c966  c3                   ret 
// 0059c967  90                   nop 
// 0059c968  57                   push edi
// 0059c969  c9                   leave 
// 0059c96a  59                   pop ecx
// 0059c96b  0061c9               add byte ptr [ecx - 0x37], ah
// 0059c96e  59                   pop ecx
// 0059c96f  0000                 add byte ptr [eax], al
// 0059c971  0100                 add dword ptr [eax], eax
// 0059c973  0101                 add dword ptr [ecx], eax
// 0059c975  0101                 add dword ptr [ecx], eax
// library rbxgs/security\SecurityContext.cpp (function ?isInRole@Context@Security@RBX@@SA_NW4Identities@23@W4Permissions@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs security/SecurityContext.cpp
