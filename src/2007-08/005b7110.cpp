// from server: 68% by colin
// roc 2007-08 005b7110  unit: RBX::$01W4SurfaceType::?$SurfaceGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7110
//
// 005b7110  8b442404             mov eax, dword ptr [esp + 4]
// 005b7114  85c0                 test eax, eax
// 005b7116  56                   push esi
// 005b7117  8bf1                 mov esi, ecx
// 005b7119  7405                 je 0x5b7120
// 005b711b  8d48fc               lea ecx, [eax - 4]
// 005b711e  eb02                 jmp 0x5b7122
// 005b7120  33c9                 xor ecx, ecx
// 005b7122  e869c7fbff           call 0x573890
// 005b7127  8d4828               lea ecx, [eax + 0x28]
// 005b712a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b712e  8b10                 mov edx, dword ptr [eax]
// 005b7130  8b4608               mov eax, dword ptr [esi + 8]
// 005b7133  52                   push edx
// 005b7134  ffd0                 call eax
// 005b7136  5e                   pop esi
// 005b7137  c20800               ret 8

struct DescribedBase;

struct GetSet
{
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* instance, void* out) const;
    virtual void setValue(DescribedBase* instance, const void* value) const;
};

struct SurfaceGetSet : GetSet
{
    void* get;
    void* set;

    void setValue(DescribedBase* instance, const void* value) const;
};

extern "C" void* __cdecl sub_00573890(void* p);

void SurfaceGetSet::setValue(DescribedBase* instance, const void* value) const
{
    void* p;
    if (instance)
        p = sub_00573890((char*)instance - 4);
    else
        p = sub_00573890(0);

    void* fn = this->set;
    void* v = *(void**)value;
    ((void (__thiscall*)(char*, void*))fn)((char*)p + 0x28, v);
}
