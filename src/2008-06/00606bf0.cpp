// from server: 100% by colin
// roc 2008-06 00606bf0  unit: RBX::ContactConnector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606bf0
//
// 00606bf0  51                   push ecx
// 00606bf1  a188b89700           mov eax, dword ptr [0x97b888]
// 00606bf6  8b0d8cb89700         mov ecx, dword ptr [0x97b88c]
// 00606bfc  03c1                 add eax, ecx
// 00606bfe  890424               mov dword ptr [esp], eax
// 00606c01  7508                 jne 0x606c0b
// 00606c03  d905b8c38100         fld dword ptr [0x81c3b8]
// 00606c09  59                   pop ecx
// 00606c0a  c3                   ret 
// 00606c0b  db0588b89700         fild dword ptr [0x97b888]
// 00606c11  da3424               fidiv dword ptr [esp]
// 00606c14  59                   pop ecx
// 00606c15  c3                   ret 

extern int g_hit, g_miss;
extern float g_none;

double hitRatio() {
    int n = g_hit + g_miss;
    if (n == 0) return g_none;
    return (double)g_hit / n;
}
