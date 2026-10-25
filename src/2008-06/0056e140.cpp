// from server: 100% by king_originala
// roc 2008-06 0056e140  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056e140
//
// 0056e140  56                   push esi
// 0056e141  8d44240c             lea eax, [esp + 0xc]
// 0056e145  8bf1                 mov esi, ecx
// 0056e147  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056e14b  50                   push eax
// 0056e14c  51                   push ecx
// 0056e14d  e80efd0400           call 0x5bde60
// 0056e152  83c408               add esp, 8
// 0056e155  84c0                 test al, al
// 0056e157  741a                 je 0x56e173
// 0056e159  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056e15c  8b11                 mov edx, dword ptr [ecx]
// 0056e15e  8b520c               mov edx, dword ptr [edx + 0xc]
// 0056e161  8d44240c             lea eax, [esp + 0xc]
// 0056e165  50                   push eax
// 0056e166  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056e16a  50                   push eax
// 0056e16b  ffd2                 call edx
// 0056e16d  b001                 mov al, 1
// 0056e16f  5e                   pop esi
// 0056e170  c20800               ret 8
// 0056e173  32c0                 xor al, al
// 0056e175  5e                   pop esi
// 0056e176  c20800               ret 8

extern "C" bool __cdecl convert(void* value, void** result);

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void* instance, void** value);
};

struct S {
    char padding[24];
    Setter* setter;

    bool f(void* instance, void* value);
};

bool S::f(void* instance, void* value)
{
    if (convert(value, &value)) {
        setter->set(instance, &value);
        return true;
    }
    return false;
}
