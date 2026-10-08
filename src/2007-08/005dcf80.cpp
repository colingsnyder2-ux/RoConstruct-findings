// from server: 74% by colin
// roc 2007-08 005dcf80  unit: RBX::VVelocityMotor::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dcf80
//
// 005dcf80  8b442408             mov eax, dword ptr [esp + 8]
// 005dcf84  85c0                 test eax, eax
// 005dcf86  56                   push esi
// 005dcf87  8bf1                 mov esi, ecx
// 005dcf89  740b                 je 0x5dcf96
// 005dcf8b  50                   push eax
// 005dcf8c  e85fffffff           call 0x5dcef0
// 005dcf91  83c404               add esp, 4
// 005dcf94  eb02                 jmp 0x5dcf98
// 005dcf96  33c0                 xor eax, eax
// 005dcf98  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dcf9b  8d54240c             lea edx, [esp + 0xc]
// 005dcf9f  8944240c             mov dword ptr [esp + 0xc], eax
// 005dcfa3  8b01                 mov eax, dword ptr [ecx]
// 005dcfa5  8b4008               mov eax, dword ptr [eax + 8]
// 005dcfa8  52                   push edx
// 005dcfa9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dcfad  52                   push edx
// 005dcfae  ffd0                 call eax
// 005dcfb0  5e                   pop esi
// 005dcfb1  c20800               ret 8

struct RefPropDescriptor
{
    void setValue(void* object, const void* value);
};

extern "C" void* __cdecl sub_5dcef0(void*);

void RefPropDescriptor::setValue(void* object, const void* value)
{
    void* converted;
    if (object)
    {
        converted = sub_5dcef0(object);
    }
    else
    {
        converted = 0;
    }

    void* iface = *(void**)((char*)this + 0x1c);
    void** vtbl = *(void***)iface;
    void (*fn)(void*, void*, const void*) = (void (*)(void*, void*, const void*))vtbl[2];
    fn(iface, converted, value);
}
