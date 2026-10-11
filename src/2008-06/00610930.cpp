// from server: 90% by colin
// roc 2008-06 00610930  unit: RBX::BlockBlockContact  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610930
//
// 00610930  83ec0c               sub esp, 0xc
// 00610933  d9ee                 fldz 
// 00610935  57                   push edi
// 00610936  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0061093a  d9542404             fst dword ptr [esp + 4]
// 0061093e  837f0400             cmp dword ptr [edi + 4], 0
// 00610942  d9542408             fst dword ptr [esp + 8]
// 00610946  d954240c             fst dword ptr [esp + 0xc]
// 0061094a  b801000000           mov eax, 1
// 0061094f  7547                 jne 0x610998
// 00610951  840550f09600         test byte ptr [0x96f050], al
// 00610957  751a                 jne 0x610973
// 00610959  090550f09600         or dword ptr [0x96f050], eax
// 0061095f  d91544f09600         fst dword ptr [0x96f044]
// 00610965  d91548f09600         fst dword ptr [0x96f048]
// 0061096b  d91d4cf09600         fstp dword ptr [0x96f04c]
// 00610971  eb02                 jmp 0x610975
// 00610973  ddd8                 fstp st(0)
// 00610975  8b442414             mov eax, dword ptr [esp + 0x14]
// 00610979  d90544f09600         fld dword ptr [0x96f044]
// 0061097f  d918                 fstp dword ptr [eax]
// 00610981  5f                   pop edi
// 00610982  d90548f09600         fld dword ptr [0x96f048]
// 00610988  d95804               fstp dword ptr [eax + 4]
// 0061098b  d9054cf09600         fld dword ptr [0x96f04c]
// 00610991  d95808               fstp dword ptr [eax + 8]
// 00610994  83c40c               add esp, 0xc
// 00610997  c3                   ret 
// 00610998  840550f09600         test byte ptr [0x96f050], al
// 0061099e  751a                 jne 0x6109ba
// 006109a0  090550f09600         or dword ptr [0x96f050], eax
// 006109a6  d91544f09600         fst dword ptr [0x96f044]
// 006109ac  d91548f09600         fst dword ptr [0x96f048]
// 006109b2  d91d4cf09600         fstp dword ptr [0x96f04c]
// 006109b8  eb02                 jmp 0x6109bc
// 006109ba  ddd8                 fstp st(0)
// 006109bc  d90544f09600         fld dword ptr [0x96f044]
// 006109c2  56                   push esi
// 006109c3  8b742420             mov esi, dword ptr [esp + 0x20]
// 006109c7  d81e                 fcomp dword ptr [esi]
// 006109c9  dfe0                 fnstsw ax
// 006109cb  f6c444               test ah, 0x44
// 006109ce  7a20                 jp 0x6109f0
// 006109d0  d90548f09600         fld dword ptr [0x96f048]
// 006109d6  d85e04               fcomp dword ptr [esi + 4]
// 006109d9  dfe0                 fnstsw ax
// 006109db  f6c444               test ah, 0x44
// 006109de  7a10                 jp 0x6109f0
// 006109e0  d9054cf09600         fld dword ptr [0x96f04c]
// 006109e6  d85e08               fcomp dword ptr [esi + 8]
// 006109e9  dfe0                 fnstsw ax
// 006109eb  f6c444               test ah, 0x44
// 006109ee  7b2a                 jnp 0x610a1a
// 006109f0  56                   push esi
// 006109f1  57                   push edi
// 006109f2  e8f9f4ffff           call 0x60fef0
// 006109f7  d906                 fld dword ptr [esi]
// 006109f9  d8442410             fadd dword ptr [esp + 0x10]
// 006109fd  83c408               add esp, 8
// 00610a00  d95c2408             fstp dword ptr [esp + 8]
// 00610a04  d94604               fld dword ptr [esi + 4]
// 00610a07  d844240c             fadd dword ptr [esp + 0xc]
// 00610a0b  d95c240c             fstp dword ptr [esp + 0xc]
// 00610a0f  d94608               fld dword ptr [esi + 8]
// 00610a12  d8442410             fadd dword ptr [esp + 0x10]
// 00610a16  d95c2410             fstp dword ptr [esp + 0x10]
// 00610a1a  8b742424             mov esi, dword ptr [esp + 0x24]
// 00610a1e  56                   push esi
// 00610a1f  57                   push edi
// 00610a20  e80bf7ffff           call 0x610130
// 00610a25  83c408               add esp, 8
// 00610a28  84c0                 test al, al
// 00610a2a  740f                 je 0x610a3b
// 00610a2c  56                   push esi
// 00610a2d  8d44240c             lea eax, [esp + 0xc]
// 00610a31  50                   push eax
// 00610a32  57                   push edi
// 00610a33  e808faffff           call 0x610440
// 00610a38  83c40c               add esp, 0xc
// 00610a3b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00610a3f  d9442408             fld dword ptr [esp + 8]
// 00610a43  d918                 fstp dword ptr [eax]
// 00610a45  5e                   pop esi
// 00610a46  d9442408             fld dword ptr [esp + 8]
// 00610a4a  5f                   pop edi
// 00610a4b  d95804               fstp dword ptr [eax + 4]
// 00610a4e  d9442408             fld dword ptr [esp + 8]
// 00610a52  d95808               fstp dword ptr [eax + 8]
// 00610a55  83c40c               add esp, 0xc
// 00610a58  c3                   ret 

struct BlockBlockContact {
    char pad[4];
    int field4;
};

extern float g_96f044;
extern float g_96f048;
extern float g_96f04c;
extern unsigned int g_96f050;

void __cdecl sub_60fef0(BlockBlockContact* self, float* out);
bool __cdecl sub_610130(BlockBlockContact* self, float* v);
void __cdecl sub_610440(BlockBlockContact* self, float* out, float* v);

void __cdecl sub_610930(BlockBlockContact* self, float* out, float* v) {
    float local[3];
    local[0] = 0.0f;
    local[1] = 0.0f;
    local[2] = 0.0f;

    if (self->field4 == 0) {
        if ((g_96f050 & 1) == 0) {
            g_96f050 |= 1;
            g_96f044 = 0.0f;
            g_96f048 = 0.0f;
            g_96f04c = 0.0f;
        }
        out[0] = g_96f044;
        out[1] = g_96f048;
        out[2] = g_96f04c;
        return;
    }

    if ((g_96f050 & 1) == 0) {
        g_96f050 |= 1;
        g_96f044 = 0.0f;
        g_96f048 = 0.0f;
        g_96f04c = 0.0f;
    }

    if (g_96f044 != v[0] || g_96f048 != v[1] || g_96f04c != v[2]) {
        sub_60fef0(self, v);
        local[0] = v[0] + local[0];
        local[1] = v[1] + local[1];
        local[2] = v[2] + local[2];
    }

    if (sub_610130(self, v)) {
        sub_610440(self, local, v);
    }

    out[0] = local[0];
    out[1] = local[1];
    out[2] = local[2];
}
