// from server: 53% by colin
// roc 2007-08 005b6e80  unit: RBX::$03W4SurfaceType::?$SurfaceGetSet  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6e80
//
// 005b6e80  8b442404             mov eax, dword ptr [esp + 4]
// 005b6e84  85c0                 test eax, eax
// 005b6e86  56                   push esi
// 005b6e87  8bf1                 mov esi, ecx
// 005b6e89  7414                 je 0x5b6e9f
// 005b6e8b  8d48fc               lea ecx, [eax - 4]
// 005b6e8e  e8fdc9fbff           call 0x573890
// 005b6e93  8d4808               lea ecx, [eax + 8]
// 005b6e96  8b4604               mov eax, dword ptr [esi + 4]
// 005b6e99  ffd0                 call eax
// 005b6e9b  5e                   pop esi
// 005b6e9c  c20400               ret 4
// 005b6e9f  33c9                 xor ecx, ecx
// 005b6ea1  e8eac9fbff           call 0x573890
// 005b6ea6  8d4808               lea ecx, [eax + 8]
// 005b6ea9  8b4604               mov eax, dword ptr [esi + 4]
// 005b6eac  ffd0                 call eax
// 005b6eae  5e                   pop esi
// 005b6eaf  c20400               ret 4

struct SurfaceGetSet {
    int get;
    int set;
    void setValue(int* instance, const int& value) const;
};

extern "C" int* __stdcall sub_573890(int* p);

void SurfaceGetSet::setValue(int* instance, const int& value) const
{
    int* p;
    if (instance != 0) {
        p = sub_573890(instance - 1);
    } else {
        p = sub_573890(0);
    }
    int* obj = p + 2;
    int fn = this->set;
    ((void (__thiscall*)(int*, int, const int&))fn)(obj, 0, value);
}
