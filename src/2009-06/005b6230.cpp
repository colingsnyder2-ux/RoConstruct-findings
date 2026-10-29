// roc 2009-06 005b6230  unit: seg_005b0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b6230
//
// 005b6230  55                   push ebp
// 005b6231  8bec                 mov ebp, esp
// 005b6233  8b4508               mov eax, dword ptr [ebp + 8]
// 005b6236  83c02c               add eax, 0x2c
// 005b6239  5d                   pop ebp
// 005b623a  c3                   ret 
// copied from an identical function in another client (function ?f@@YAPADPAUVChunk@@@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /MD
#pragma optimize("g", off)
struct VChunk{char pad[0x2c];}; char* f(VChunk* p){return p->pad+0x2c;}