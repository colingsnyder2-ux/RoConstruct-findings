// from server: 81% by colin
// roc 2007-08 006d3720  unit: PAVCXTPReportColumn::?$CArray  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3720
//
// 006d3720  8b442404             mov eax, dword ptr [esp + 4]
// 006d3724  56                   push esi
// 006d3725  8bf1                 mov esi, ecx
// 006d3727  8d4e28               lea ecx, [esi + 0x28]
// 006d372a  50                   push eax
// 006d372b  897054               mov dword ptr [eax + 0x54], esi
// 006d372e  8b4108               mov eax, dword ptr [ecx + 8]
// 006d3731  50                   push eax
// 006d3732  e8d9f1ffff           call 0x6d2910
// 006d3737  8bce                 mov ecx, esi
// 006d3739  e822fdffff           call 0x6d3460
// 006d373e  8b10                 mov edx, dword ptr [eax]
// 006d3740  8bc8                 mov ecx, eax
// 006d3742  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 006d3748  ffd0                 call eax
// 006d374a  5e                   pop esi
// 006d374b  c20400               ret 4

struct Sub {
    char pad[8];
    int field8;
};

struct Inner {
    char pad[0x90];
    virtual void vfunc();
};

struct S {
    char pad[0x28];
    Sub sub;
    void method(int* arg);
};

void S::method(int* arg)
{
    arg[0x54 / 4] = (int)this;
    extern void __stdcall func_6d2910(int, int);
    func_6d2910(sub.field8, (int)arg);
    extern Inner* __stdcall func_6d3460(S*);
    Inner* p = func_6d3460(this);
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(Inner*);
    Fn fn = (Fn)vtbl[0x90 / 4];
    fn(p);
}
