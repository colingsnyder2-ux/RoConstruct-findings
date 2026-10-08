// from server: 68% by colin
// roc 2007-08 005b7030  unit: RBX::$04W4SurfaceType::?$SurfaceGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7030
//
// 005b7030  8b442404             mov eax, dword ptr [esp + 4]
// 005b7034  85c0                 test eax, eax
// 005b7036  56                   push esi
// 005b7037  8bf1                 mov esi, ecx
// 005b7039  7405                 je 0x5b7040
// 005b703b  8d48fc               lea ecx, [eax - 4]
// 005b703e  eb02                 jmp 0x5b7042
// 005b7040  33c9                 xor ecx, ecx
// 005b7042  e849c8fbff           call 0x573890
// 005b7047  8d4820               lea ecx, [eax + 0x20]
// 005b704a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b704e  8b10                 mov edx, dword ptr [eax]
// 005b7050  8b4608               mov eax, dword ptr [esi + 8]
// 005b7053  52                   push edx
// 005b7054  ffd0                 call eax
// 005b7056  5e                   pop esi
// 005b7057  c20800               ret 8

struct DescribedBase;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* instance, void* value) const;
    virtual void setValue(DescribedBase* instance, const void* value) const;
};

struct SurfaceGetSet : GetSet {
    int get;
    int set;
    virtual void setValue(DescribedBase* instance, const void* value) const;
};

extern "C" void* __cdecl sub_573890(void* p);

void SurfaceGetSet::setValue(DescribedBase* instance, const void* value) const {
    void* p = instance ? (void*)((char*)instance - 4) : 0;
    char* obj = (char*)sub_573890(p);
    obj += 0x20;
    void (*fn)(void*, const void*) = *(void (**)(void*, const void*))((char*)this + 8);
    fn(obj, value);
}
