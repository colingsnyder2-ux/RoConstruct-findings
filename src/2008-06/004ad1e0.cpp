// from server: 97% by king_originala
// roc 2008-06 004ad1e0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ad1e0
//
// 004ad1e0  83ec0c               sub esp, 0xc
// 004ad1e3  56                   push esi
// 004ad1e4  6a00                 push 0
// 004ad1e6  6878959200           push 0x929578
// 004ad1eb  8bf1                 mov esi, ecx
// 004ad1ed  8b06                 mov eax, dword ptr [esi]
// 004ad1ef  68b4959200           push 0x9295b4
// 004ad1f4  6a00                 push 0
// 004ad1f6  50                   push eax
// 004ad1f7  e8ca451f00           call 0x6a17c6
// 004ad1fc  83c414               add esp, 0x14
// 004ad1ff  85c0                 test eax, eax
// 004ad201  751e                 jne 0x4ad221
// 004ad203  6834ba8000           push 0x80ba34
// 004ad208  8d4c2408             lea ecx, [esp + 8]
// 004ad20c  ff1564288000         call dword ptr [0x802864]
// 004ad212  682c368d00           push 0x8d362c
// 004ad217  8d442408             lea eax, [esp + 8]
// 004ad21b  50                   push eax
// 004ad21c  e86b431f00           call 0x6a158c
// 004ad221  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ad225  8b4018               mov eax, dword ptr [eax + 0x18]
// 004ad228  8b10                 mov edx, dword ptr [eax]
// 004ad22a  8b520c               mov edx, dword ptr [edx + 0xc]
// 004ad22d  51                   push ecx
// 004ad22e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ad231  51                   push ecx
// 004ad232  8bc8                 mov ecx, eax
// 004ad234  ffd2                 call edx
// 004ad236  5e                   pop esi
// 004ad237  83c40c               add esp, 0xc
// 004ad23a  c20400               ret 4

struct Accessor
{
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void set(void *, const bool &) = 0;
};

struct PropertyDescriptor
{
    virtual ~PropertyDescriptor();
    char padding[20];
};

struct TypedPropertyDescriptor : PropertyDescriptor
{
    Accessor *accessor;
};

struct BadCast
{
    void *vtable;
    const char *message;
    int owned;
};

typedef void (__thiscall *BadCastConstructor)(BadCast *, const char *);
extern BadCastConstructor constructBadCast;
extern unsigned char badCastThrowInfo;

extern "C" TypedPropertyDescriptor *__stdcall throwBadCast(void *, void *);

struct S
{
    PropertyDescriptor *descriptor;
    void *instance;

    void set(const bool &value);
};

void S::set(const bool &value)
{
    TypedPropertyDescriptor *property =
        dynamic_cast<TypedPropertyDescriptor *>(descriptor);

    if (!property)
    {
        BadCast exception;
        constructBadCast(&exception, "bad cast");
        property = throwBadCast(&exception, &badCastThrowInfo);
    }

    property->accessor->set(instance, value);
}
