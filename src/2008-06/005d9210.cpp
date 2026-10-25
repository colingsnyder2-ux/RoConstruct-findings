// from server: 100% by king_originala
// roc 2008-06 005d9210  unit: RBX::VPartInstance::?$FilteredSelection  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d9210
//
// 005d9210  83ec34               sub esp, 0x34
// 005d9213  56                   push esi
// 005d9214  8db1d8fdffff         lea esi, [ecx - 0x228]
// 005d921a  57                   push edi
// 005d921b  8bce                 mov ecx, esi
// 005d921d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d9225  e8e6f7ffff           call 0x5d8a10
// 005d922a  85c0                 test eax, eax
// 005d922c  7410                 je 0x5d923e
// 005d922e  8bce                 mov ecx, esi
// 005d9230  e8dbf7ffff           call 0x5d8a10
// 005d9235  8bc8                 mov ecx, eax
// 005d9237  e874fafbff           call 0x598cb0
// 005d923c  eb09                 jmp 0x5d9247
// 005d923e  8d4c240c             lea ecx, [esp + 0xc]
// 005d9242  e889f0e9ff           call 0x4782d0
// 005d9247  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005d924b  8bf0                 mov esi, eax
// 005d924d  56                   push esi
// 005d924e  8bcf                 mov ecx, edi
// 005d9250  e8cb9ff3ff           call 0x513220
// 005d9255  d94624               fld dword ptr [esi + 0x24]
// 005d9258  d95f24               fstp dword ptr [edi + 0x24]
// 005d925b  8bc7                 mov eax, edi
// 005d925d  d94628               fld dword ptr [esi + 0x28]
// 005d9260  d95f28               fstp dword ptr [edi + 0x28]
// 005d9263  d9462c               fld dword ptr [esi + 0x2c]
// 005d9266  d95f2c               fstp dword ptr [edi + 0x2c]
// 005d9269  5f                   pop edi
// 005d926a  5e                   pop esi
// 005d926b  83c434               add esp, 0x34
// 005d926e  c20400               ret 4

struct Rotation
{
    float data[9];
    Rotation(const Rotation&);
};

struct Value
{
    Rotation rotation;
    float x, y, z;

    Value* initialize();
};

struct Object
{
    const Value* getValue();
};

struct Owner
{
    Object* getObject();
};

struct S
{
    Value f();
};

Value S::f()
{
    volatile int zero = 0;
    unsigned char storage[sizeof(Value)];
    Owner* owner = reinterpret_cast<Owner*>(
        reinterpret_cast<unsigned char*>(this) - 0x228);

    const Value* source;
    if (owner->getObject())
        source = owner->getObject()->getValue();
    else
        source = reinterpret_cast<Value*>(storage)->initialize();

    return *source;
}
