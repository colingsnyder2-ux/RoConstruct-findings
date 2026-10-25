// from server: 100% by king_originala
// roc 2008-06 00610830  unit: RBX::BlockBlockContact  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610830
//
// 00610830  83ec18               sub esp, 0x18
// 00610833  56                   push esi
// 00610834  8b742424             mov esi, dword ptr [esp + 0x24]
// 00610838  837e0400             cmp dword ptr [esi + 4], 0
// 0061083c  754a                 jne 0x610888
// 0061083e  b801000000           mov eax, 1
// 00610843  840550f09600         test byte ptr [0x96f050], al
// 00610849  751a                 jne 0x610865
// 0061084b  d9ee                 fldz 
// 0061084d  090550f09600         or dword ptr [0x96f050], eax
// 00610853  d91544f09600         fst dword ptr [0x96f044]
// 00610859  d91548f09600         fst dword ptr [0x96f048]
// 0061085f  d91d4cf09600         fstp dword ptr [0x96f04c]
// 00610865  8b442420             mov eax, dword ptr [esp + 0x20]
// 00610869  d90544f09600         fld dword ptr [0x96f044]
// 0061086f  d918                 fstp dword ptr [eax]
// 00610871  5e                   pop esi
// 00610872  d90548f09600         fld dword ptr [0x96f048]
// 00610878  d95804               fstp dword ptr [eax + 4]
// 0061087b  d9054cf09600         fld dword ptr [0x96f04c]
// 00610881  d95808               fstp dword ptr [eax + 8]
// 00610884  83c418               add esp, 0x18
// 00610887  c3                   ret 
// 00610888  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061088c  d900                 fld dword ptr [eax]
// 0061088e  57                   push edi
// 0061088f  d95c2408             fstp dword ptr [esp + 8]
// 00610893  51                   push ecx
// 00610894  d94004               fld dword ptr [eax + 4]
// 00610897  8d4c2418             lea ecx, [esp + 0x18]
// 0061089b  d82578728200         fsub dword ptr [0x827278]
// 006108a1  d95c2410             fstp dword ptr [esp + 0x10]
// 006108a5  d94008               fld dword ptr [eax + 8]
// 006108a8  8d44240c             lea eax, [esp + 0xc]
// 006108ac  d95c2414             fstp dword ptr [esp + 0x14]
// 006108b0  d90504e78100         fld dword ptr [0x81e704]
// 006108b6  d91c24               fstp dword ptr [esp]
// 006108b9  50                   push eax
// 006108ba  51                   push ecx
// 006108bb  e8d0e5fcff           call 0x5dee90
// 006108c0  d900                 fld dword ptr [eax]
// 006108c2  d95c2414             fstp dword ptr [esp + 0x14]
// 006108c6  8d542414             lea edx, [esp + 0x14]
// 006108ca  d94004               fld dword ptr [eax + 4]
// 006108cd  52                   push edx
// 006108ce  d95c241c             fstp dword ptr [esp + 0x1c]
// 006108d2  56                   push esi
// 006108d3  d94008               fld dword ptr [eax + 8]
// 006108d6  d95c2424             fstp dword ptr [esp + 0x24]
// 006108da  e811f6ffff           call 0x60fef0
// 006108df  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 006108e3  57                   push edi
// 006108e4  56                   push esi
// 006108e5  e846f8ffff           call 0x610130
// 006108ea  83c41c               add esp, 0x1c
// 006108ed  57                   push edi
// 006108ee  84c0                 test al, al
// 006108f0  740d                 je 0x6108ff
// 006108f2  8d44240c             lea eax, [esp + 0xc]
// 006108f6  50                   push eax
// 006108f7  56                   push esi
// 006108f8  e843fbffff           call 0x610440
// 006108fd  eb0b                 jmp 0x61090a
// 006108ff  8d4c240c             lea ecx, [esp + 0xc]
// 00610903  51                   push ecx
// 00610904  56                   push esi
// 00610905  e8d6fbffff           call 0x6104e0
// 0061090a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0061090e  d9442414             fld dword ptr [esp + 0x14]
// 00610912  d918                 fstp dword ptr [eax]
// 00610914  83c40c               add esp, 0xc
// 00610917  d944240c             fld dword ptr [esp + 0xc]
// 0061091b  5f                   pop edi
// 0061091c  d95804               fstp dword ptr [eax + 4]
// 0061091f  5e                   pop esi
// 00610920  d9442408             fld dword ptr [esp + 8]
// 00610924  d95808               fstp dword ptr [eax + 8]
// 00610927  83c418               add esp, 0x18
// 0061092a  c3                   ret 

struct Vector
{
    float x, y, z;

    __forceinline Vector(float a, float b, float c);
    __forceinline Vector(const Vector& other);
    __forceinline Vector& operator=(const Vector& other);
};

__forceinline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

__forceinline Vector::Vector(const Vector& other)
    : x(other.x), y(other.y), z(other.z)
{
}

__forceinline Vector& Vector::operator=(const Vector& other)
{
    x = other.x;
    y = other.y;
    z = other.z;
    return *this;
}

struct Contact
{
    unsigned int reserved;
    unsigned int count;
};

extern const float offset;
extern const float scale;

extern Vector __cdecl scaleVector(const Vector&, float);
extern void __cdecl prepareContact(Contact*, const Vector&);
extern bool __cdecl testContact(Contact*, const void*);
extern void __cdecl solveContactA(Contact*, Vector&, const void*);
extern void __cdecl solveContactB(Contact*, Vector&, const void*);

Vector __cdecl computeContact(Contact* contact, const Vector& position,
                              const void* other)
{
    if (contact->count == 0)
    {
        static const Vector zero(0.0f, 0.0f, 0.0f);
        return zero;
    }

    Vector result(position.x, position.y - offset, position.z);
    result = scaleVector(result, scale);
    prepareContact(contact, result);

    if (testContact(contact, other))
        solveContactA(contact, result, other);
    else
        solveContactB(contact, result, other);

    return result;
}
