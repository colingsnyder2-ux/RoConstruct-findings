// from server: 100% by atomic.potato
// roc 2008-06 005735a0  unit: RBX::UnifiedWidget  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005735a0
//
// 005735a0  d9ee                 fldz 
// 005735a2  8b442404             mov eax, dword ptr [esp + 4]
// 005735a6  d918                 fstp dword ptr [eax]
// 005735a8  d90564f88200         fld dword ptr [0x82f864]
// 005735ae  d95804               fstp dword ptr [eax + 4]
// 005735b1  c20400               ret 4

extern float g_82f864;

struct UnifiedWidget {
    void f(float *value);
};

void UnifiedWidget::f(float *value)
{
    value[0] = 0.0f;
    value[1] = g_82f864;
}
