// from server: 100% by colin
// roc 2008-06 0043d930  unit: Vector3ComponentItem  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043d930
//
// 0043d930  6aff                 push -1
// 0043d932  6892077c00           push 0x7c0792
// 0043d937  64a100000000         mov eax, dword ptr fs:[0]
// 0043d93d  50                   push eax
// 0043d93e  64892500000000       mov dword ptr fs:[0], esp
// 0043d945  83ec2c               sub esp, 0x2c
// 0043d948  53                   push ebx
// 0043d949  56                   push esi
// 0043d94a  8bf1                 mov esi, ecx
// 0043d94c  d98634010000         fld dword ptr [esi + 0x134]
// 0043d952  8d442408             lea eax, [esp + 8]
// 0043d956  d95c240c             fstp dword ptr [esp + 0xc]
// 0043d95a  50                   push eax
// 0043d95b  d98638010000         fld dword ptr [esi + 0x138]
// 0043d961  d95c2414             fstp dword ptr [esp + 0x14]
// 0043d965  d9863c010000         fld dword ptr [esi + 0x13c]
// 0043d96b  d95c2418             fstp dword ptr [esp + 0x18]
// 0043d96f  e85ca5ffff           call 0x437ed0
// 0043d974  8bc8                 mov ecx, eax
// 0043d976  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0043d97e  ff15e03e8000         call dword ptr [0x803ee0]
// 0043d984  50                   push eax
// 0043d985  8d4c241c             lea ecx, [esp + 0x1c]
// 0043d989  ff1558248000         call dword ptr [0x802458]
// 0043d98f  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0043d995  8d44840c             lea eax, [esp + eax*4 + 0xc]
// 0043d999  50                   push eax
// 0043d99a  8d4c241c             lea ecx, [esp + 0x1c]
// 0043d99e  51                   push ecx
// 0043d99f  c644244401           mov byte ptr [esp + 0x44], 1
// 0043d9a4  e8e70d1800           call 0x5be790
// 0043d9a9  83c408               add esp, 8
// 0043d9ac  8d4c2418             lea ecx, [esp + 0x18]
// 0043d9b0  8ad8                 mov bl, al
// 0043d9b2  c644243c00           mov byte ptr [esp + 0x3c], 0
// 0043d9b7  ff1568248000         call dword ptr [0x802468]
// 0043d9bd  8d4c2408             lea ecx, [esp + 8]
// 0043d9c1  ff15143f8000         call dword ptr [0x803f14]
// 0043d9c7  8b442444             mov eax, dword ptr [esp + 0x44]
// 0043d9cb  84db                 test bl, bl
// 0043d9cd  7413                 je 0x43d9e2
// 0043d9cf  d944240c             fld dword ptr [esp + 0xc]
// 0043d9d3  d918                 fstp dword ptr [eax]
// 0043d9d5  d9442410             fld dword ptr [esp + 0x10]
// 0043d9d9  d95804               fstp dword ptr [eax + 4]
// 0043d9dc  d9442414             fld dword ptr [esp + 0x14]
// 0043d9e0  eb17                 jmp 0x43d9f9
// 0043d9e2  d98634010000         fld dword ptr [esi + 0x134]
// 0043d9e8  d918                 fstp dword ptr [eax]
// 0043d9ea  d98638010000         fld dword ptr [esi + 0x138]
// 0043d9f0  d95804               fstp dword ptr [eax + 4]
// 0043d9f3  d9863c010000         fld dword ptr [esi + 0x13c]
// 0043d9f9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0043d9fd  d95808               fstp dword ptr [eax + 8]
// 0043da00  5e                   pop esi
// 0043da01  5b                   pop ebx
// 0043da02  64890d00000000       mov dword ptr fs:[0], ecx
// 0043da09  83c438               add esp, 0x38
// 0043da0c  c20400               ret 4

struct Text;
extern const char* (__thiscall* text_data)(const Text*);

struct Text {
    int value;
    const char* c_str() const;
    ~Text() throw();

    __declspec(dllimport) void __thiscall destroyImport() throw();
};

inline const char* Text::c_str() const
{
    return text_data(this);
}

inline Text::~Text() throw()
{
    destroyImport();
}

struct String;
extern void (__thiscall* string_construct)(String*, const char*);
extern void (__thiscall* string_destroy)(String*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    string_construct(this, text);
}

inline String::~String()
{
    string_destroy(this);
}

extern bool __cdecl parse_component(const String&, float*);

struct Vector {
    float x, y, z;
    Vector();
    Vector(float, float, float);
    float& operator[](int);
};

inline Vector::Vector()
{
}

inline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

inline float& Vector::operator[](int index)
{
    return (&x)[index];
}

struct Vector3ComponentItem {
    char padding[0x130];
    int component;
    Vector value;

    Text copy();
    Vector getValue();
};

Vector Vector3ComponentItem::getValue()
{
    Vector result;
    result.x = value.x;
    result.y = value.y;
    result.z = value.z;
    bool valid = parse_component(String(copy().c_str()),
                                 &result[component]);
    if (valid)
        return Vector(result.x, result.y, result.z);
    return Vector(value.x, value.y, value.z);
}
