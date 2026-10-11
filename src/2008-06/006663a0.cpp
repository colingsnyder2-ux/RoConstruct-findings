// from server: 97% by colin
// roc 2008-06 006663a0  unit: RBX::PartDragTool  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006663a0
//
// 006663a0  b801000000           mov eax, 1
// 006663a5  840584d99700         test byte ptr [0x97d984], al
// 006663ab  7520                 jne 0x6663cd
// 006663ad  d90524cc8400         fld dword ptr [0x84cc24]
// 006663b3  090584d99700         or dword ptr [0x97d984], eax
// 006663b9  d91578d99700         fst dword ptr [0x97d978]
// 006663bf  d9ee                 fldz 
// 006663c1  d91d7cd99700         fstp dword ptr [0x97d97c]
// 006663c7  d91d80d99700         fstp dword ptr [0x97d980]
// 006663cd  8b442404             mov eax, dword ptr [esp + 4]
// 006663d1  d90578d99700         fld dword ptr [0x97d978]
// 006663d7  d918                 fstp dword ptr [eax]
// 006663d9  d9057cd99700         fld dword ptr [0x97d97c]
// 006663df  d95804               fstp dword ptr [eax + 4]
// 006663e2  d90580d99700         fld dword ptr [0x97d980]
// 006663e8  d95808               fstp dword ptr [eax + 8]
// 006663eb  c3                   ret 

struct S {
};

static float g_x;
static float g_y;
static float g_z;
static int g_init;

void __cdecl f(float* out)
{
    if (!(g_init & 1)) {
        g_init |= 1;
        float v = *(float*)0x84cc24;
        g_x = v;
        g_y = 0.0f;
        g_z = 0.0f;
    }
    out[0] = g_x;
    out[1] = g_y;
    out[2] = g_z;
}
