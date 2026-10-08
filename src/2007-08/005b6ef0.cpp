// from server: 73% by colin
// roc 2007-08 005b6ef0  unit: RBX::$02W4SurfaceType::?$SurfaceGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6ef0
//
// 005b6ef0  8b442404             mov eax, dword ptr [esp + 4]
// 005b6ef4  85c0                 test eax, eax
// 005b6ef6  56                   push esi
// 005b6ef7  8bf1                 mov esi, ecx
// 005b6ef9  7405                 je 0x5b6f00
// 005b6efb  8d48fc               lea ecx, [eax - 4]
// 005b6efe  eb02                 jmp 0x5b6f02
// 005b6f00  33c9                 xor ecx, ecx
// 005b6f02  e889c9fbff           call 0x573890
// 005b6f07  8d4810               lea ecx, [eax + 0x10]
// 005b6f0a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b6f0e  8b10                 mov edx, dword ptr [eax]
// 005b6f10  8b4608               mov eax, dword ptr [esi + 8]
// 005b6f13  52                   push edx
// 005b6f14  ffd0                 call eax
// 005b6f16  5e                   pop esi
// 005b6f17  c20800               ret 8

struct DescribedBase {
    void* vtable;
};

struct GetSet {
    void* vtable;
};

struct SurfaceGetSet {
    void* vtable;
    int get;
    int set;
    void setValue(DescribedBase* instance, const int& value) const;
};

extern "C" DescribedBase* __cdecl sub_573890(GetSet* p);

void SurfaceGetSet::setValue(DescribedBase* instance, const int& value) const {
    GetSet* gs;
    if (instance != 0) {
        gs = (GetSet*)((char*)instance - 4);
    } else {
        gs = 0;
    }
    DescribedBase* base = sub_573890(gs);
    int* p = (int*)((char*)base + 0x10);
    int v = *(int*)&value;
    int fn = *(int*)((char*)this + 8);
    ((void (__thiscall*)(void*, int))fn)(p, v);
}
