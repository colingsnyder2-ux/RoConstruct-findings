// from server: 100% by king_originala
// roc 2008-06 005d16d0  unit: RBX::VHopperBin::?$FactoryProduct  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d16d0
//
// 005d16d0  64a100000000         mov eax, dword ptr fs:[0]
// 005d16d6  6aff                 push -1
// 005d16d8  6809e77c00           push 0x7ce709
// 005d16dd  50                   push eax
// 005d16de  8b442410             mov eax, dword ptr [esp + 0x10]
// 005d16e2  64892500000000       mov dword ptr fs:[0], esp
// 005d16e9  83ec1c               sub esp, 0x1c
// 005d16ec  56                   push esi
// 005d16ed  57                   push edi
// 005d16ee  8bf9                 mov edi, ecx
// 005d16f0  3b87a0010000         cmp eax, dword ptr [edi + 0x1a0]
// 005d16f6  8db7a0010000         lea esi, [edi + 0x1a0]
// 005d16fc  745b                 je 0x5d1759
// 005d16fe  68f49c9700           push 0x979cf4
// 005d1703  8906                 mov dword ptr [esi], eax
// 005d1705  e8f6c3e3ff           call 0x40db00
// 005d170a  833e00               cmp dword ptr [esi], 0
// 005d170d  744a                 je 0x5d1759
// 005d170f  68b49c9700           push 0x979cb4
// 005d1714  6860035d00           push 0x5d0360
// 005d1719  e8125cf8ff           call 0x557330
// 005d171e  83c408               add esp, 8
// 005d1721  e8daebffff           call 0x5d0300
// 005d1726  56                   push esi
// 005d1727  8d4c240c             lea ecx, [esp + 0xc]
// 005d172b  51                   push ecx
// 005d172c  8bc8                 mov ecx, eax
// 005d172e  e82d6ce7ff           call 0x448360
// 005d1733  8d542408             lea edx, [esp + 8]
// 005d1737  52                   push edx
// 005d1738  8bcf                 mov ecx, edi
// 005d173a  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005d1742  e889fcffff           call 0x5d13d0
// 005d1747  8d4c2408             lea ecx, [esp + 8]
// 005d174b  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005d1753  ff1568248000         call dword ptr [0x802468]
// 005d1759  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d175d  5f                   pop edi
// 005d175e  5e                   pop esi
// 005d175f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1766  83c428               add esp, 0x28
// 005d1769  c20400               ret 4

struct String {
    unsigned char storage[28];
    ~String();
};

extern void (__thiscall *destroyString)(String *);

__forceinline String::~String()
{
    destroyString(this);
}

struct EnumDescriptor {
    String format(const int &value);
};

extern EnumDescriptor *__cdecl getEnumDescriptor();
extern void __cdecl initializeEnum();
extern int enumInitializationFlag;
extern void __cdecl initializeOnce(void (__cdecl *function)(), int *flag);
extern unsigned char typeProperty;

struct S {
    unsigned char padding[0x1A0];
    int type;

    void notify(void *property);
    void setName(const String &name);
    void setType(int value);
};

void S::setType(int value)
{
    if (value != type) {
        type = value;
        notify(&typeProperty);
        if (type != 0) {
            initializeOnce(initializeEnum, &enumInitializationFlag);
            EnumDescriptor *descriptor = getEnumDescriptor();
            String name = descriptor->format(type);
            setName(name);
        }
    }
}
