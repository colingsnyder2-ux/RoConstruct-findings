// from server: 73% by colin
// roc 2007-08 005b6f60  unit: RBX::$02MP8Surface::?$SurfaceGetSet  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6f60
//
// 005b6f60  8b442404             mov eax, dword ptr [esp + 4]
// 005b6f64  85c0                 test eax, eax
// 005b6f66  56                   push esi
// 005b6f67  8bf1                 mov esi, ecx
// 005b6f69  7405                 je 0x5b6f70
// 005b6f6b  8d48fc               lea ecx, [eax - 4]
// 005b6f6e  eb02                 jmp 0x5b6f72
// 005b6f70  33c9                 xor ecx, ecx
// 005b6f72  e819c9fbff           call 0x573890
// 005b6f77  8b5608               mov edx, dword ptr [esi + 8]
// 005b6f7a  8d4810               lea ecx, [eax + 0x10]
// 005b6f7d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b6f81  d900                 fld dword ptr [eax]
// 005b6f83  51                   push ecx
// 005b6f84  d91c24               fstp dword ptr [esp]
// 005b6f87  ffd2                 call edx
// 005b6f89  5e                   pop esi
// 005b6f8a  c20800               ret 8

struct SurfaceGetSet {
    int m_get;
    int m_set;
    void setValue(int instance, const float* value);
};

extern "C" int __cdecl sub_00573890(int);

void SurfaceGetSet::setValue(int instance, const float* value)
{
    int adjusted;
    if (instance != 0)
        adjusted = instance - 4;
    else
        adjusted = 0;
    int result = sub_00573890(adjusted);
    int fn = m_set;
    float v = *value;
    ((void (__thiscall*)(int, float))fn)(result + 0x10, v);
}
