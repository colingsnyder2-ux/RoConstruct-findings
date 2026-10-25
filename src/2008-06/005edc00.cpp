// from server: 100% by king_originala
// roc 2008-06 005edc00  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005edc00
//
// 005edc00  64a100000000         mov eax, dword ptr fs:[0]
// 005edc06  6aff                 push -1
// 005edc08  6809e77c00           push 0x7ce709
// 005edc0d  50                   push eax
// 005edc0e  64892500000000       mov dword ptr fs:[0], esp
// 005edc15  83ec24               sub esp, 0x24
// 005edc18  55                   push ebp
// 005edc19  56                   push esi
// 005edc1a  8b742440             mov esi, dword ptr [esp + 0x40]
// 005edc1e  8be9                 mov ebp, ecx
// 005edc20  8bce                 mov ecx, esi
// 005edc22  e8e9ebf8ff           call 0x57c810
// 005edc27  84c0                 test al, al
// 005edc29  0f85f2000000         jne 0x5edd21
// 005edc2f  53                   push ebx
// 005edc30  8d5e10               lea ebx, [esi + 0x10]
// 005edc33  8bcb                 mov ecx, ebx
// 005edc35  e8c6e5f8ff           call 0x57c200
// 005edc3a  84c0                 test al, al
// 005edc3c  0f84b2000000         je 0x5edcf4
// 005edc42  8d4c2414             lea ecx, [esp + 0x14]
// 005edc46  ff1560248000         call dword ptr [0x802460]
// 005edc4c  8d442414             lea eax, [esp + 0x14]
// 005edc50  50                   push eax
// 005edc51  8bcb                 mov ecx, ebx
// 005edc53  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005edc5b  e8b0e5f8ff           call 0x57c210
// 005edc60  84c0                 test al, al
// 005edc62  747e                 je 0x5edce2
// 005edc64  837c242c10           cmp dword ptr [esp + 0x2c], 0x10
// 005edc69  57                   push edi
// 005edc6a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005edc6e  7304                 jae 0x5edc74
// 005edc70  8d7c241c             lea edi, [esp + 0x1c]
// 005edc74  6820b19700           push 0x97b120
// 005edc79  6890d65e00           push 0x5ed690
// 005edc7e  e8ad96f6ff           call 0x557330
// 005edc83  83c408               add esp, 8
// 005edc86  e8a5f9ffff           call 0x5ed630
// 005edc8b  8d4c2448             lea ecx, [esp + 0x48]
// 005edc8f  51                   push ecx
// 005edc90  57                   push edi
// 005edc91  8bf0                 mov esi, eax
// 005edc93  e8f865f6ff           call 0x554290
// 005edc98  83c404               add esp, 4
// 005edc9b  50                   push eax
// 005edc9c  8bce                 mov ecx, esi
// 005edc9e  e85df6ffff           call 0x5ed300
// 005edca3  5f                   pop edi
// 005edca4  84c0                 test al, al
// 005edca6  743a                 je 0x5edce2
// 005edca8  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 005edcab  8b11                 mov edx, dword ptr [ecx]
// 005edcad  8b520c               mov edx, dword ptr [edx + 0xc]
// 005edcb0  8d442444             lea eax, [esp + 0x44]
// 005edcb4  50                   push eax
// 005edcb5  8b442444             mov eax, dword ptr [esp + 0x44]
// 005edcb9  50                   push eax
// 005edcba  ffd2                 call edx
// 005edcbc  8d4c2414             lea ecx, [esp + 0x14]
// 005edcc0  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005edcc8  ff1568248000         call dword ptr [0x802468]
// 005edcce  5b                   pop ebx
// 005edccf  5e                   pop esi
// 005edcd0  5d                   pop ebp
// 005edcd1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005edcd5  64890d00000000       mov dword ptr fs:[0], ecx
// 005edcdc  83c430               add esp, 0x30
// 005edcdf  c20c00               ret 0xc
// 005edce2  8d4c2414             lea ecx, [esp + 0x14]
// 005edce6  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005edcee  ff1568248000         call dword ptr [0x802468]
// 005edcf4  8d44240c             lea eax, [esp + 0xc]
// 005edcf8  50                   push eax
// 005edcf9  8bcb                 mov ecx, ebx
// 005edcfb  e8f0e7f8ff           call 0x57c4f0
// 005edd00  84c0                 test al, al
// 005edd02  741c                 je 0x5edd20
// 005edd04  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005edd08  894c2410             mov dword ptr [esp + 0x10], ecx
// 005edd0c  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 005edd0f  8b11                 mov edx, dword ptr [ecx]
// 005edd11  8b520c               mov edx, dword ptr [edx + 0xc]
// 005edd14  8d442410             lea eax, [esp + 0x10]
// 005edd18  50                   push eax
// 005edd19  8b442444             mov eax, dword ptr [esp + 0x44]
// 005edd1d  50                   push eax
// 005edd1e  ffd2                 call edx
// 005edd20  5b                   pop ebx
// 005edd21  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005edd25  5e                   pop esi
// 005edd26  5d                   pop ebp
// 005edd27  64890d00000000       mov dword ptr fs:[0], ecx
// 005edd2e  83c430               add esp, 0x30
// 005edd31  c20c00               ret 0xc

extern void (__thiscall* stringConstruct)(void*);
extern void (__thiscall* stringDestroy)(void*);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned int allocatorStorage;
        union {
            T buffer[16];
            T* pointer;
        } storage;
        unsigned int length;
        unsigned int capacity;
    public:
        basic_string();
        ~basic_string();
        const T* c_str() const;
    };

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::basic_string()
    {
        stringConstruct(this);
    }

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::~basic_string()
    {
        stringDestroy(this);
    }

    template<class T, class Traits, class Alloc>
    inline const T* basic_string<T, Traits, Alloc>::c_str() const
    {
        const T* result = storage.pointer;
        if (capacity < 16)
            result = storage.buffer;
        return result;
    }
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Name;
enum EnumValue { EnumValueZero = 0 };

struct Value {
    bool isString() const;
    bool getString(String*) const;
    bool getInteger(int*) const;
};

struct Element {
    char padding[16];
    Value value;
    bool isNull() const;
};

struct EnumDescriptor {
    bool parse(const Name&, EnumValue*) const;
};

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, const EnumValue*);
};

extern void __cdecl initializeEnum();
extern int enumRegistration;
extern void __cdecl registerEnum(void (__cdecl*)(), int*);
extern EnumDescriptor* __cdecl getEnumDescriptor();
extern const Name& __cdecl lookupName(const char*);

struct S {
    char padding[28];
    Setter* setter;
    void read(void*, Element*, void*);
};

void S::read(void* instance, Element* element, void*)
{
    if (element->isNull())
        return;

    Value& data = element->value;
    if (data.isString()) {
        String text;
        if (data.getString(&text)) {
            const char* characters = text.c_str();
            registerEnum(initializeEnum, &enumRegistration);
            EnumDescriptor* descriptor = getEnumDescriptor();
            EnumValue value;
            if (descriptor->parse(lookupName(characters), &value)) {
                setter->set(instance, &value);
                return;
            }
        }
    }

    int integer;
    if (data.getInteger(&integer)) {
        EnumValue converted = static_cast<EnumValue>(integer);
        setter->set(instance, &converted);
    }
}
