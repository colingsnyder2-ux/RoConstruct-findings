// roc 2009-06 005b53e0  unit: seg_005b0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b53e0
//
// 005b53e0  55                   push ebp
// 005b53e1  8bec                 mov ebp, esp
// 005b53e3  8b4508               mov eax, dword ptr [ebp + 8]
// 005b53e6  83c02d               add eax, 0x2d
// 005b53e9  5d                   pop ebp
// 005b53ea  c3                   ret 
// copied from an identical function in another client (function ?f@@YAPADPAUVChunk@@@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /MD
#pragma optimize("g", off)
struct VChunk{char pad[0x2d];}; char* f(VChunk* p){return p->pad+0x2d;}