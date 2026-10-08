// from server: 70% by colin
// roc 2007-08 005b7060  unit: RBX::$04MP8Surface::?$SurfaceGetSet  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7060
//
// 005b7060  8b442404             mov eax, dword ptr [esp + 4]
// 005b7064  85c0                 test eax, eax
// 005b7066  56                   push esi
// 005b7067  8bf1                 mov esi, ecx
// 005b7069  7405                 je 0x5b7070
// 005b706b  8d48fc               lea ecx, [eax - 4]
// 005b706e  eb02                 jmp 0x5b7072
// 005b7070  33c9                 xor ecx, ecx
// 005b7072  e819c8fbff           call 0x573890
// 005b7077  8b5608               mov edx, dword ptr [esi + 8]
// 005b707a  8d4820               lea ecx, [eax + 0x20]
// 005b707d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b7081  d900                 fld dword ptr [eax]
// 005b7083  51                   push ecx
// 005b7084  d91c24               fstp dword ptr [esp]
// 005b7087  ffd2                 call edx
// 005b7089  5e                   pop esi
// 005b708a  c20800               ret 8

struct SurfaceGetSet {
    int get;
    int set;
    void setValue(int instance, const float* value);
};

extern "C" int __cdecl sub_573890(int);

void SurfaceGetSet::setValue(int instance, const float* value)
{
    int obj;
    if (instance != 0)
        obj = instance - 4;
    else
        obj = 0;
    int result = sub_573890(obj);
    int fn = *(int*)((char*)this + 8);
    float v = *value;
    int arg = result + 0x20;
    ((void (__stdcall*)(int, float))fn)(arg, v);
}
