// from server: 70% by colin
// roc 2007-08 005b6fd0  unit: RBX::W4SurfaceType::$0A::?$SurfaceGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6fd0
//
// 005b6fd0  8b442404             mov eax, dword ptr [esp + 4]
// 005b6fd4  85c0                 test eax, eax
// 005b6fd6  56                   push esi
// 005b6fd7  8bf1                 mov esi, ecx
// 005b6fd9  7405                 je 0x5b6fe0
// 005b6fdb  8d48fc               lea ecx, [eax - 4]
// 005b6fde  eb02                 jmp 0x5b6fe2
// 005b6fe0  33c9                 xor ecx, ecx
// 005b6fe2  e8a9c8fbff           call 0x573890
// 005b6fe7  8d4818               lea ecx, [eax + 0x18]
// 005b6fea  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b6fee  8b10                 mov edx, dword ptr [eax]
// 005b6ff0  8b4608               mov eax, dword ptr [esi + 8]
// 005b6ff3  52                   push edx
// 005b6ff4  ffd0                 call eax
// 005b6ff6  5e                   pop esi
// 005b6ff7  c20800               ret 8

struct SurfaceGetSet {
    int get;
    int set;
    void setValue(int instance, int value);
};

extern "C" int __cdecl sub_573890(int);

void SurfaceGetSet::setValue(int instance, int value)
{
    int obj;
    if (instance != 0)
        obj = instance - 4;
    else
        obj = 0;
    int r = sub_573890(obj);
    int fn = *(int*)(this + 8);
    int v = *(int*)value;
    ((void (__thiscall*)(int, int))fn)(r + 0x18, v);
}
