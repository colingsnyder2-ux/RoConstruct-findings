// roc 2009-06 006aee60  unit: RBX::NormalBreakConnector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006aee60
//
// 006aee60  51                   push ecx
// 006aee61  a150fca400           mov eax, dword ptr [0xa4fc50]
// 006aee66  8b0d54fca400         mov ecx, dword ptr [0xa4fc54]
// 006aee6c  03c1                 add eax, ecx
// 006aee6e  890424               mov dword ptr [esp], eax
// 006aee71  7508                 jne 0x6aee7b
// 006aee73  d90594758b00         fld dword ptr [0x8b7594]
// 006aee79  59                   pop ecx
// 006aee7a  c3                   ret 
// 006aee7b  db0550fca400         fild dword ptr [0xa4fc50]
// 006aee81  da3424               fidiv dword ptr [esp]
// 006aee84  59                   pop ecx
// 006aee85  c3                   ret 
// copied from an identical function in another client (function ?hitRatio@@YAMXZ)

// from server: 100% by tester
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern int g_hit, g_miss;
float hitRatio() {
    int n = g_hit + g_miss;
    if (n == 0) return -1.0f;
    return (float)g_hit / n;
}