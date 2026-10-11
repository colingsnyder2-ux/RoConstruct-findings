// from server: 94% by atomic.potato
// roc 2009-06 006f34d0  unit: RBX::HUMAN::Running  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f34d0
//
// 006f34d0  b801000000           mov eax, 1
// 006f34d5  84059401a500         test byte ptr [0xa50194], al
// 006f34db  7520                 jne 0x6f34fd
// 006f34dd  d9058ce58e00         fld dword ptr [0x8ee58c]
// 006f34e3  09059401a500         or dword ptr [0xa50194], eax
// 006f34e9  d9158801a500         fst dword ptr [0xa50188]
// 006f34ef  d9ee                 fldz 
// 006f34f1  d91d8c01a500         fstp dword ptr [0xa5018c]
// 006f34f7  d91d9001a500         fstp dword ptr [0xa50190]
// 006f34fd  8b442404             mov eax, dword ptr [esp + 4]
// 006f3501  d9058801a500         fld dword ptr [0xa50188]
// 006f3507  d918                 fstp dword ptr [eax]
// 006f3509  d9058c01a500         fld dword ptr [0xa5018c]
// 006f350f  d95804               fstp dword ptr [eax + 4]
// 006f3512  d9059001a500         fld dword ptr [0xa50190]
// 006f3518  d95808               fstp dword ptr [eax + 8]
// 006f351b  c3                   ret 

struct Running {
    void __cdecl get(float* out);
};

extern float g_8ee58c;
extern float g_a50188;
extern float g_a5018c;
extern float g_a50190;
extern unsigned int g_a50194;

void Running::get(float* out) {
    if (!(g_a50194 & 1)) {
        float v = g_8ee58c;
        g_a50194 |= 1;
        g_a50188 = v;
        g_a5018c = 0.0f;
        g_a50190 = 0.0f;
    }
    out[0] = g_a50188;
    out[1] = g_a5018c;
    out[2] = g_a50190;
}
