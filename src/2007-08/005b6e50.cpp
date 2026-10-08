// from server: 72% by colin
// roc 2007-08 005b6e50  unit: RBX::$03W4SurfaceType::?$SurfaceGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6e50
//
// 005b6e50  8b442404             mov eax, dword ptr [esp + 4]
// 005b6e54  85c0                 test eax, eax
// 005b6e56  56                   push esi
// 005b6e57  8bf1                 mov esi, ecx
// 005b6e59  7405                 je 0x5b6e60
// 005b6e5b  8d48fc               lea ecx, [eax - 4]
// 005b6e5e  eb02                 jmp 0x5b6e62
// 005b6e60  33c9                 xor ecx, ecx
// 005b6e62  e829cafbff           call 0x573890
// 005b6e67  8d4808               lea ecx, [eax + 8]
// 005b6e6a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b6e6e  8b10                 mov edx, dword ptr [eax]
// 005b6e70  8b4608               mov eax, dword ptr [esi + 8]
// 005b6e73  52                   push edx
// 005b6e74  ffd0                 call eax
// 005b6e76  5e                   pop esi
// 005b6e77  c20800               ret 8

struct DescribedBase;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* instance) const;
    virtual void setValue(DescribedBase* instance, const void* value) const;
};

struct SurfaceGetSet : GetSet {
    void* get;
    void* set;
    void setValue(DescribedBase* instance, const void* value) const;
};

extern "C" void* __cdecl func_00573890(void* p);

void SurfaceGetSet::setValue(DescribedBase* instance, const void* value) const
{
    void* adjusted;
    if (instance != 0) {
        adjusted = (char*)instance - 4;
    } else {
        adjusted = 0;
    }
    char* base = (char*)func_00573890(adjusted);
    void* fn = set;
    void* v = *(void**)value;
    typedef void (__thiscall *SetFn)(void*, void*);
    ((SetFn)fn)(base + 8, v);
}
