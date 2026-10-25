// from server: 100% by colin
// roc 2008-06 00666350  unit: RBX::PartDragTool  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666350
//
// 00666350  b801000000           mov eax, 1
// 00666355  840574d99700         test byte ptr [0x97d974], al
// 0066635b  7524                 jne 0x666381
// 0066635d  d905cc9d8100         fld dword ptr [0x819dcc]
// 00666363  090574d99700         or dword ptr [0x97d974], eax
// 00666369  d91568d99700         fst dword ptr [0x97d968]
// 0066636f  d9056c748200         fld dword ptr [0x82746c]
// 00666375  d91d6cd99700         fstp dword ptr [0x97d96c]
// 0066637b  d91d70d99700         fstp dword ptr [0x97d970]
// 00666381  8b442404             mov eax, dword ptr [esp + 4]
// 00666385  d90568d99700         fld dword ptr [0x97d968]
// 0066638b  d918                 fstp dword ptr [eax]
// 0066638d  d9056cd99700         fld dword ptr [0x97d96c]
// 00666393  d95804               fstp dword ptr [eax + 4]
// 00666396  d90570d99700         fld dword ptr [0x97d970]
// 0066639c  d95808               fstp dword ptr [eax + 8]
// 0066639f  c3                   ret 

// from server: 98% by colin
// roc 2008-06 00666350  unit: RBX::PartDragTool  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666350
//
// 00666350  b801000000           mov eax, 1
// 00666355  840574d99700         test byte ptr [0x97d974], al
// 0066635b  7524                 jne 0x666381

struct S_func_00666350 {
    float f0;
    float f1;
    float f2;
    void __cdecl f(float* out);
};

static int g_init_97d974;
static float g_97d968;
static float g_97d96c;
static float g_97d970;
extern float g_819dcc;
extern float g_82746c;

void __cdecl S_func_00666350::f(float* out)
{
    if (!(g_init_97d974 & 1)) {
        g_init_97d974 |= 1;
        g_97d968 = g_819dcc;
        g_97d96c = g_82746c;
        g_97d970 = g_819dcc;
    }
    f0 = g_97d968;
    f1 = g_97d96c;
    f2 = g_97d970;
}
