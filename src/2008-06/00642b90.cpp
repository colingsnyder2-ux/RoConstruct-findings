// from server: 100% by king_originala
// roc 2008-06 00642b90  unit: RBX::VWidget::?$NonFactoryProduct  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00642b90
//
// 00642b90  6aff                 push -1
// 00642b92  6875ab7d00           push 0x7dab75
// 00642b97  64a100000000         mov eax, dword ptr fs:[0]
// 00642b9d  50                   push eax
// 00642b9e  64892500000000       mov dword ptr fs:[0], esp
// 00642ba5  83ec78               sub esp, 0x78
// 00642ba8  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00642baf  56                   push esi
// 00642bb0  50                   push eax
// 00642bb1  8bf1                 mov esi, ecx
// 00642bb3  8d4c2424             lea ecx, [esp + 0x24]
// 00642bb7  68c0b48300           push 0x83b4c0
// 00642bbc  51                   push ecx
// 00642bbd  ff1568238000         call dword ptr [0x802368]
// 00642bc3  68b8b48300           push 0x83b4b8
// 00642bc8  50                   push eax
// 00642bc9  8d542418             lea edx, [esp + 0x18]
// 00642bcd  52                   push edx
// 00642bce  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 00642bd9  ff15e4238000         call dword ptr [0x8023e4]
// 00642bdf  50                   push eax
// 00642be0  8d442478             lea eax, [esp + 0x78]
// 00642be4  50                   push eax
// 00642be5  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 00642bed  e80e99f1ff           call 0x55c500
// 00642bf2  83c420               add esp, 0x20
// 00642bf5  8d4c2404             lea ecx, [esp + 4]
// 00642bf9  c684248400000003     mov byte ptr [esp + 0x84], 3
// 00642c01  ff1568248000         call dword ptr [0x802468]
// 00642c07  8d4c2420             lea ecx, [esp + 0x20]
// 00642c0b  c684248400000004     mov byte ptr [esp + 0x84], 4
// 00642c13  ff1568248000         call dword ptr [0x802468]
// 00642c19  8d4c245c             lea ecx, [esp + 0x5c]
// 00642c1d  51                   push ecx
// 00642c1e  8d4c2440             lea ecx, [esp + 0x40]
// 00642c22  ff155c248000         call dword ptr [0x80245c]
// 00642c28  8b542478             mov edx, dword ptr [esp + 0x78]
// 00642c2c  89542458             mov dword ptr [esp + 0x58], edx
// 00642c30  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00642c37  8d44243c             lea eax, [esp + 0x3c]
// 00642c3b  50                   push eax
// 00642c3c  51                   push ecx
// 00642c3d  8bce                 mov ecx, esi
// 00642c3f  c684248c00000005     mov byte ptr [esp + 0x8c], 5
// 00642c47  e804fbffff           call 0x642750
// 00642c4c  8d4c243c             lea ecx, [esp + 0x3c]
// 00642c50  c684248400000004     mov byte ptr [esp + 0x84], 4
// 00642c58  ff1568248000         call dword ptr [0x802468]
// 00642c5e  8d4c245c             lea ecx, [esp + 0x5c]
// 00642c62  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 00642c6d  ff1568248000         call dword ptr [0x802468]
// 00642c73  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00642c77  5e                   pop esi
// 00642c78  64890d00000000       mov dword ptr fs:[0], ecx
// 00642c7f  81c484000000         add esp, 0x84
// 00642c85  c20800               ret 8

struct String;

extern String (__cdecl *concatLeft)(const char*, const String&);
extern String (__cdecl *concatRight)(const String&, const char*);
extern void (__thiscall *copyString)(String*, const String&);
extern void (__thiscall *destroyString)(String*);

struct String
{
    unsigned char data[28];

    String(const String&);
    ~String();
};

inline String::String(const String& other)
{
    copyString(this, other);
}

inline String::~String()
{
    destroyString(this);
}

struct Resource
{
    String name;
    unsigned int value;
};

Resource __cdecl loadResource(const String&);

struct S
{
    void set(unsigned int, const Resource&);
    void f(unsigned int, const String&);
};

void S::f(unsigned int id, const String& name)
{
    Resource resource = loadResource(concatRight(concatLeft("Textures\\", name), ".png"));
    set(id, Resource(resource));
}
