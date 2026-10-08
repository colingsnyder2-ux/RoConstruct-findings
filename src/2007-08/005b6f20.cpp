// from server: 100% by colin
// roc 2007-08 005b6f20  unit: RBX::$02W4SurfaceType::?$SurfaceGetSet  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6f20
//
// 005b6f20  8b442404             mov eax, dword ptr [esp + 4]
// 005b6f24  85c0                 test eax, eax
// 005b6f26  56                   push esi
// 005b6f27  8bf1                 mov esi, ecx
// 005b6f29  7414                 je 0x5b6f3f
// 005b6f2b  8d48fc               lea ecx, [eax - 4]
// 005b6f2e  e85dc9fbff           call 0x573890
// 005b6f33  8d4810               lea ecx, [eax + 0x10]
// 005b6f36  8b4604               mov eax, dword ptr [esi + 4]
// 005b6f39  ffd0                 call eax
// 005b6f3b  5e                   pop esi
// 005b6f3c  c20400               ret 4
// 005b6f3f  33c9                 xor ecx, ecx
// 005b6f41  e84ac9fbff           call 0x573890
// 005b6f46  8d4810               lea ecx, [eax + 0x10]
// 005b6f49  8b4604               mov eax, dword ptr [esi + 4]
// 005b6f4c  ffd0                 call eax
// 005b6f4e  5e                   pop esi
// 005b6f4f  c20400               ret 4

struct SurfaceGetSet {
    int get;
    int set;
    void setValue(int instance) const;
};

extern "C" int __fastcall sub_00573890(int);

void SurfaceGetSet::setValue(int instance) const
{
    int obj;
    if (instance != 0) {
        obj = sub_00573890(instance - 4);
    } else {
        obj = sub_00573890(0);
    }
    int fn = *(int*)((char*)this + 4);
    ((void (__thiscall*)(int))fn)(obj + 0x10);
}
