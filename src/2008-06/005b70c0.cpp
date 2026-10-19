// from server: 90% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 77% by colin
// roc 2008-06 005b70c0  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b70c0
//
// 005b70c0  83ec18               sub esp, 0x18
// 005b70c3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005b70c7  d900                 fld dword ptr [eax]
// 005b70c9  51                   push ecx
// 005b70ca  d9542404             fst dword ptr [esp + 4]
// 005b70ce  d94004               fld dword ptr [eax + 4]
// 005b70d1  d95c2408             fstp dword ptr [esp + 8]
// 005b70d5  d94008               fld dword ptr [eax + 8]
// 005b70d8  d95c240c             fstp dword ptr [esp + 0xc]
// 005b70dc  d91c24               fstp dword ptr [esp]
// 005b70df  e8cc660200           call 0x5dd7b0
// 005b70e4  83c404               add esp, 4
// 005b70e7  84c0                 test al, al
// 005b70e9  7405                 je 0x5b70f0
// 005b70eb  d9ee                 fldz 
// 005b70ed  d91c24               fstp dword ptr [esp]
// 005b70f0  d9442404             fld dword ptr [esp + 4]
// 005b70f4  51                   push ecx
// 005b70f5  d91c24               fstp dword ptr [esp]
// 005b70f8  e8b3660200           call 0x5dd7b0
// 005b70fd  83c404               add esp, 4
// 005b7100  84c0                 test al, al
// 005b7102  7406                 je 0x5b710a
// 005b7104  d9ee                 fldz 
// 005b7106  d95c2404             fstp dword ptr [esp + 4]
// 005b710a  d9442408             fld dword ptr [esp + 8]
// 005b710e  51                   push ecx
// 005b710f  d91c24               fstp dword ptr [esp]
// 005b7112  e899660200           call 0x5dd7b0
// 005b7117  83c404               add esp, 4
// 005b711a  84c0                 test al, al
// 005b711c  7406                 je 0x5b7124
// 005b711e  d9ee                 fldz 
// 005b7120  d95c2408             fstp dword ptr [esp + 8]
// 005b7124  8d0424               lea eax, [esp]
// 005b7127  50                   push eax
// 005b7128  e883670200           call 0x5dd8b0
// 005b712d  83c404               add esp, 4
// 005b7130  84c0                 test al, al
// 005b7132  7406                 je 0x5b713a
// 005b7134  32c0                 xor al, al
// 005b7136  83c418               add esp, 0x18
// 005b7139  c3                   ret 
// 005b713a  d905e06d8200         fld dword ptr [0x826de0]
// 005b7140  83ec08               sub esp, 8
// 005b7143  d95c2404             fstp dword ptr [esp + 4]
// 005b7147  8d4c2414             lea ecx, [esp + 0x14]
// 005b714b  d90504768300         fld dword ptr [0x837604]
// 005b7151  d91c24               fstp dword ptr [esp]
// 005b7154  51                   push ecx
// 005b7155  8d4c240c             lea ecx, [esp + 0xc]
// 005b7159  e872fdffff           call 0x5b6ed0
// 005b715e  d900                 fld dword ptr [eax]
// 005b7160  d91424               fst dword ptr [esp]
// 005b7163  d94004               fld dword ptr [eax + 4]
// 005b7166  d9542404             fst dword ptr [esp + 4]
// 005b716a  d94008               fld dword ptr [eax + 8]
// 005b716d  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b7171  d9ca                 fxch st(2)
// 005b7173  d918                 fstp dword ptr [eax]
// 005b7175  d95804               fstp dword ptr [eax + 4]
// 005b7178  d95808               fstp dword ptr [eax + 8]
// 005b717b  b001                 mov al, 1
// 005b717d  83c418               add esp, 0x18
// 005b7180  c3                   ret 

extern bool G1_func_005dd7b0(float);
extern bool G1_func_005dd8b0(float*);
extern void G1_func_005b6ed0(float* out, float a, float b);

extern float G2_00826de0;
extern float G2_00837604;

bool func_005b70c0(float* in, float* out)
{
    float v[3];
    v[0] = in[0];
    v[1] = in[1];
    v[2] = in[2];

    if (G1_func_005dd7b0(v[0]))
        v[0] = 0.0f;
    if (G1_func_005dd7b0(v[1]))
        v[1] = 0.0f;
    if (G1_func_005dd7b0(v[2]))
        v[2] = 0.0f;

    if (G1_func_005dd8b0(v))
        return false;

    float tmp[3];
    G1_func_005b6ed0(tmp, G2_00826de0, G2_00837604);

    out[0] = tmp[0];
    out[1] = tmp[1];
    out[2] = tmp[2];
    return true;
}
