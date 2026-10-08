// from server: 81% by colin
// roc 2007-08 005b6dc0  unit: RBX::$00W4SurfaceType::?$SurfaceGetSet  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6dc0
//
// 005b6dc0  8b442404             mov eax, dword ptr [esp + 4]
// 005b6dc4  85c0                 test eax, eax
// 005b6dc6  56                   push esi
// 005b6dc7  8bf1                 mov esi, ecx
// 005b6dc9  7405                 je 0x5b6dd0
// 005b6dcb  8d48fc               lea ecx, [eax - 4]
// 005b6dce  eb02                 jmp 0x5b6dd2
// 005b6dd0  33c9                 xor ecx, ecx
// 005b6dd2  e8b9cafbff           call 0x573890
// 005b6dd7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b6ddb  8b11                 mov edx, dword ptr [ecx]
// 005b6ddd  8bc8                 mov ecx, eax
// 005b6ddf  8b4608               mov eax, dword ptr [esi + 8]
// 005b6de2  52                   push edx
// 005b6de3  ffd0                 call eax
// 005b6de5  5e                   pop esi
// 005b6de6  c20800               ret 8

struct SurfaceGetSet {
    int m_get;
    int m_set;
    void method(int, int);
};

extern "C" int __cdecl sub_00573890(int);

void SurfaceGetSet::method(int a, int b)
{
    int base;
    if (a != 0) {
        base = a - 4;
    } else {
        base = 0;
    }
    int r = sub_00573890(base);
    int* p = (int*)b;
    int v = *p;
    int fn = m_set;
    ((void (__thiscall*)(int, int))fn)(r, v);
}
