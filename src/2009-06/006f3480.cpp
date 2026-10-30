// roc 2009-06 006f3480  unit: RBX::HUMAN::Running  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f3480
//
// 006f3480  b801000000           mov eax, 1
// 006f3485  84058401a500         test byte ptr [0xa50184], al
// 006f348b  7524                 jne 0x6f34b1
// 006f348d  d90510ea8b00         fld dword ptr [0x8bea10]
// 006f3493  09058401a500         or dword ptr [0xa50184], eax
// 006f3499  d9157801a500         fst dword ptr [0xa50178]
// 006f349f  d90530aa8c00         fld dword ptr [0x8caa30]
// 006f34a5  d91d7c01a500         fstp dword ptr [0xa5017c]
// 006f34ab  d91d8001a500         fstp dword ptr [0xa50180]
// 006f34b1  8b442404             mov eax, dword ptr [esp + 4]
// 006f34b5  d9057801a500         fld dword ptr [0xa50178]
// 006f34bb  d918                 fstp dword ptr [eax]
// 006f34bd  d9057c01a500         fld dword ptr [0xa5017c]
// 006f34c3  d95804               fstp dword ptr [eax + 4]
// 006f34c6  d9058001a500         fld dword ptr [0xa50180]
// 006f34cc  d95808               fstp dword ptr [eax + 8]
// 006f34cf  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00666350@@QAAXPAM@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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