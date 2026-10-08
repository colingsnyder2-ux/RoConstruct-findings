// from server: 73% by colin
// roc 2007-08 005b6ec0  unit: RBX::$03MP8Surface::?$SurfaceGetSet  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6ec0
//
// 005b6ec0  8b442404             mov eax, dword ptr [esp + 4]
// 005b6ec4  85c0                 test eax, eax
// 005b6ec6  56                   push esi
// 005b6ec7  8bf1                 mov esi, ecx
// 005b6ec9  7405                 je 0x5b6ed0
// 005b6ecb  8d48fc               lea ecx, [eax - 4]
// 005b6ece  eb02                 jmp 0x5b6ed2
// 005b6ed0  33c9                 xor ecx, ecx
// 005b6ed2  e8b9c9fbff           call 0x573890
// 005b6ed7  8b5608               mov edx, dword ptr [esi + 8]
// 005b6eda  8d4808               lea ecx, [eax + 8]
// 005b6edd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b6ee1  d900                 fld dword ptr [eax]
// 005b6ee3  51                   push ecx
// 005b6ee4  d91c24               fstp dword ptr [esp]
// 005b6ee7  ffd2                 call edx
// 005b6ee9  5e                   pop esi
// 005b6eea  c20800               ret 8

struct DescribedBase;

struct GetSet
{
    void* get;
    void* set;

    void setValue(DescribedBase* instance, const float& value) const;
};

extern "C" void* __cdecl sub_00573890(void* p);

void GetSet::setValue(DescribedBase* instance, const float& value) const
{
    void* adjusted;
    if (instance != 0)
        adjusted = (char*)instance - 4;
    else
        adjusted = 0;

    void* obj = sub_00573890(adjusted);

    typedef void (__thiscall *SetFn)(void*, float);
    SetFn fn = (SetFn)this->set;
    fn((char*)obj + 8, value);
}
