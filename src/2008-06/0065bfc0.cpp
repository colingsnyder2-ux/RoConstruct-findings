// roc 2008-06 0065bfc0  unit: RBX::BallBallContact  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065bfc0
//
// 0065bfc0  56                   push esi
// 0065bfc1  8b742408             mov esi, dword ptr [esp + 8]
// 0065bfc5  8b4610               mov eax, dword ptr [esi + 0x10]
// 0065bfc8  83783000             cmp dword ptr [eax + 0x30], 0
// 0065bfcc  7410                 je 0x65bfde
// 0065bfce  8bff                 mov edi, edi
// 0065bfd0  e82bffffff           call 0x65bf00
// 0065bfd5  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0065bfd8  83793000             cmp dword ptr [ecx + 0x30], 0
// 0065bfdc  75f2                 jne 0x65bfd0
// 0065bfde  5e                   pop esi
// 0065bfdf  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_callGCTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
