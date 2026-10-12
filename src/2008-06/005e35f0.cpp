// from server: 100% by king_originala
// roc 2008-06 005e35f0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e35f0
//
// 005e35f0  8b442408             mov eax, dword ptr [esp + 8]
// 005e35f4  56                   push esi
// 005e35f5  8bf1                 mov esi, ecx
// 005e35f7  85c0                 test eax, eax
// 005e35f9  740b                 je 0x5e3606
// 005e35fb  50                   push eax
// 005e35fc  e80f1dfaff           call 0x585310
// 005e3601  83c404               add esp, 4
// 005e3604  eb02                 jmp 0x5e3608
// 005e3606  33c0                 xor eax, eax
// 005e3608  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005e360b  8d54240c             lea edx, [esp + 0xc]
// 005e360f  8944240c             mov dword ptr [esp + 0xc], eax
// 005e3613  8b01                 mov eax, dword ptr [ecx]
// 005e3615  8b400c               mov eax, dword ptr [eax + 0xc]
// 005e3618  52                   push edx
// 005e3619  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005e361d  52                   push edx
// 005e361e  ffd0                 call eax
// 005e3620  5e                   pop esi
// 005e3621  c20800               ret 8

extern "C" void* __cdecl convert(void*);

struct Target {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, void**);
};

struct S {
    char padding[28];
    Target* target;

    void f(void* object, void* value);
};

void S::f(void* object, void* value)
{
    void* converted = value ? convert(value) : 0;
    target->set(object, &(value = converted));
}
