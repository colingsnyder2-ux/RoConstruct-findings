// roc 2009-06 006aee90  unit: RBX::NormalBreakConnector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006aee90
//
// 006aee90  51                   push ecx
// 006aee91  a158fca400           mov eax, dword ptr [0xa4fc58]
// 006aee96  8b0d5cfca400         mov ecx, dword ptr [0xa4fc5c]
// 006aee9c  03c1                 add eax, ecx
// 006aee9e  890424               mov dword ptr [esp], eax
// 006aeea1  7508                 jne 0x6aeeab
// 006aeea3  d90594758b00         fld dword ptr [0x8b7594]
// 006aeea9  59                   pop ecx
// 006aeeaa  c3                   ret 
// 006aeeab  db0558fca400         fild dword ptr [0xa4fc58]
// 006aeeb1  da3424               fidiv dword ptr [esp]
// 006aeeb4  59                   pop ecx
// 006aeeb5  c3                   ret 
// copied from an identical function in another client (function ?hitRatio@@YAMXZ)

// from server: 100% by tester
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern int g_hit, g_miss;
float hitRatio() {
    int n = g_hit + g_miss;
    if (n == 0) return -1.0f;
    return (float)g_hit / n;
}