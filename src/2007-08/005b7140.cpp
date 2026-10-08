// from server: 63% by colin
// roc 2007-08 005b7140  unit: RBX::$01MP8Surface::?$SurfaceGetSet  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7140
//
// 005b7140  8b442404             mov eax, dword ptr [esp + 4]
// 005b7144  85c0                 test eax, eax
// 005b7146  56                   push esi
// 005b7147  8bf1                 mov esi, ecx
// 005b7149  7405                 je 0x5b7150
// 005b714b  8d48fc               lea ecx, [eax - 4]
// 005b714e  eb02                 jmp 0x5b7152
// 005b7150  33c9                 xor ecx, ecx
// 005b7152  e839c7fbff           call 0x573890
// 005b7157  8b5608               mov edx, dword ptr [esi + 8]
// 005b715a  8d4828               lea ecx, [eax + 0x28]
// 005b715d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b7161  d900                 fld dword ptr [eax]
// 005b7163  51                   push ecx
// 005b7164  d91c24               fstp dword ptr [esp]
// 005b7167  ffd2                 call edx
// 005b7169  5e                   pop esi
// 005b716a  c20800               ret 8

struct DescribedBase;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* instance) const;
    virtual void setValue(DescribedBase* instance, const float& value) const;
};

struct SurfaceGetSet : GetSet {
    int get;
    int set;
    void setValue(DescribedBase* instance, const float& value) const;
};

extern "C" void* __cdecl sub_573890(void* p);

void SurfaceGetSet::setValue(DescribedBase* instance, const float& value) const {
    void* p = instance ? (void*)((char*)instance - 4) : 0;
    void* r = sub_573890(p);
    float v = value;
    typedef void (__thiscall *Fn)(void*, int, float);
    Fn fn = (Fn)set;
    fn((char*)r + 0x28, get, v);
}
