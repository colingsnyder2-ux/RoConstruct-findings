// from server: 68% by colin
// roc 2007-08 005b7000  unit: RBX::MP8Surface::$0A::?$SurfaceGetSet  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7000
//
// 005b7000  8b442404             mov eax, dword ptr [esp + 4]
// 005b7004  85c0                 test eax, eax
// 005b7006  56                   push esi
// 005b7007  8bf1                 mov esi, ecx
// 005b7009  7405                 je 0x5b7010
// 005b700b  8d48fc               lea ecx, [eax - 4]
// 005b700e  eb02                 jmp 0x5b7012
// 005b7010  33c9                 xor ecx, ecx
// 005b7012  e879c8fbff           call 0x573890
// 005b7017  8b5608               mov edx, dword ptr [esi + 8]
// 005b701a  8d4818               lea ecx, [eax + 0x18]
// 005b701d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b7021  d900                 fld dword ptr [eax]
// 005b7023  51                   push ecx
// 005b7024  d91c24               fstp dword ptr [esp]
// 005b7027  ffd2                 call edx
// 005b7029  5e                   pop esi
// 005b702a  c20800               ret 8

struct DescribedBase;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* instance, void* out) const;
    virtual void setValue(DescribedBase* instance, const void* value) const;
};

struct SurfaceGetSet : GetSet {
    int get;
    int set;
    virtual void setValue(DescribedBase* instance, const void* value) const;
};

extern "C" void* __cdecl func_00573890(void* p);

void SurfaceGetSet::setValue(DescribedBase* instance, const void* value) const
{
    void* p = func_00573890(instance ? (char*)instance - 4 : 0);
    void (*fn)(void*, float) = (void (*)(void*, float))set;
    fn((char*)p + 0x18, *(const float*)value);
}
