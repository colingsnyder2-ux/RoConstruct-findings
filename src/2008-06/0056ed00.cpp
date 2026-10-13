// from server: 100% by colin
// roc 2008-06 0056ed00  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056ed00
//
// 0056ed00  51                   push ecx
// 0056ed01  53                   push ebx
// 0056ed02  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056ed08  56                   push esi
// 0056ed09  57                   push edi
// 0056ed0a  8bf9                 mov edi, ecx
// 0056ed0c  8b07                 mov eax, dword ptr [edi]
// 0056ed0e  8b4008               mov eax, dword ptr [eax + 8]
// 0056ed11  50                   push eax
// 0056ed12  b9d0be9200           mov ecx, 0x92bed0
// 0056ed17  ffd3                 call ebx
// 0056ed19  84c0                 test al, al
// 0056ed1b  7455                 je 0x56ed72
// 0056ed1d  8d7704               lea esi, [edi + 4]
// 0056ed20  56                   push esi
// 0056ed21  e8aa71eaff           call 0x415ed0
// 0056ed26  89442410             mov dword ptr [esp + 0x10], eax
// 0056ed2a  db442410             fild dword ptr [esp + 0x10]
// 0056ed2e  6a08                 push 8
// 0056ed30  d95c2414             fstp dword ptr [esp + 0x14]
// 0056ed34  e8e71b1300           call 0x6a0920
// 0056ed39  83c408               add esp, 8
// 0056ed3c  85c0                 test eax, eax
// 0056ed3e  740f                 je 0x56ed4f
// 0056ed40  d944240c             fld dword ptr [esp + 0xc]
// 0056ed44  c700bc068100         mov dword ptr [eax], 0x8106bc
// 0056ed4a  d95804               fstp dword ptr [eax + 4]
// 0056ed4d  eb02                 jmp 0x56ed51
// 0056ed4f  33c0                 xor eax, eax
// 0056ed51  8d54240c             lea edx, [esp + 0xc]
// 0056ed55  8bc8                 mov ecx, eax
// 0056ed57  3bd6                 cmp edx, esi
// 0056ed59  7404                 je 0x56ed5f
// 0056ed5b  8b0e                 mov ecx, dword ptr [esi]
// 0056ed5d  8906                 mov dword ptr [esi], eax
// 0056ed5f  85c9                 test ecx, ecx
// 0056ed61  7408                 je 0x56ed6b
// 0056ed63  8b01                 mov eax, dword ptr [ecx]
// 0056ed65  8b10                 mov edx, dword ptr [eax]
// 0056ed67  6a01                 push 1
// 0056ed69  ffd2                 call edx
// 0056ed6b  e830dfffff           call 0x56cca0
// 0056ed70  8907                 mov dword ptr [edi], eax
// 0056ed72  8b07                 mov eax, dword ptr [edi]
// 0056ed74  8b4008               mov eax, dword ptr [eax + 8]
// 0056ed77  50                   push eax
// 0056ed78  b9e8be9200           mov ecx, 0x92bee8
// 0056ed7d  ffd3                 call ebx
// 0056ed7f  84c0                 test al, al
// 0056ed81  744d                 je 0x56edd0
// 0056ed83  8d7704               lea esi, [edi + 4]
// 0056ed86  56                   push esi
// 0056ed87  e8f472eaff           call 0x416080
// 0056ed8c  d95c2410             fstp dword ptr [esp + 0x10]
// 0056ed90  6a08                 push 8
// 0056ed92  e8891b1300           call 0x6a0920
// 0056ed97  83c408               add esp, 8
// 0056ed9a  85c0                 test eax, eax
// 0056ed9c  740f                 je 0x56edad
// 0056ed9e  d944240c             fld dword ptr [esp + 0xc]
// 0056eda2  c700bc068100         mov dword ptr [eax], 0x8106bc
// 0056eda8  d95804               fstp dword ptr [eax + 4]
// 0056edab  eb02                 jmp 0x56edaf
// 0056edad  33c0                 xor eax, eax
// 0056edaf  8d54240c             lea edx, [esp + 0xc]
// 0056edb3  8bc8                 mov ecx, eax
// 0056edb5  3bd6                 cmp edx, esi
// 0056edb7  7404                 je 0x56edbd
// 0056edb9  8b0e                 mov ecx, dword ptr [esi]
// 0056edbb  8906                 mov dword ptr [esi], eax
// 0056edbd  85c9                 test ecx, ecx
// 0056edbf  7408                 je 0x56edc9
// 0056edc1  8b01                 mov eax, dword ptr [ecx]
// 0056edc3  8b10                 mov edx, dword ptr [eax]
// 0056edc5  6a01                 push 1
// 0056edc7  ffd2                 call edx
// 0056edc9  e8d2deffff           call 0x56cca0
// 0056edce  8907                 mov dword ptr [edi], eax
// 0056edd0  8b07                 mov eax, dword ptr [edi]
// 0056edd2  8b4008               mov eax, dword ptr [eax + 8]
// 0056edd5  50                   push eax
// 0056edd6  b944969200           mov ecx, 0x929644
// 0056eddb  ffd3                 call ebx
// 0056eddd  84c0                 test al, al
// 0056eddf  745c                 je 0x56ee3d
// 0056ede1  8d7704               lea esi, [edi + 4]
// 0056ede4  56                   push esi
// 0056ede5  e87671eaff           call 0x415f60
// 0056edea  33c9                 xor ecx, ecx
// 0056edec  84c0                 test al, al
// 0056edee  0f95c1               setne cl
// 0056edf1  6a08                 push 8
// 0056edf3  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056edf7  db442414             fild dword ptr [esp + 0x14]
// 0056edfb  d95c2414             fstp dword ptr [esp + 0x14]
// 0056edff  e81c1b1300           call 0x6a0920
// 0056ee04  83c408               add esp, 8
// 0056ee07  85c0                 test eax, eax
// 0056ee09  740f                 je 0x56ee1a
// 0056ee0b  d944240c             fld dword ptr [esp + 0xc]
// 0056ee0f  c700bc068100         mov dword ptr [eax], 0x8106bc
// 0056ee15  d95804               fstp dword ptr [eax + 4]
// 0056ee18  eb02                 jmp 0x56ee1c
// 0056ee1a  33c0                 xor eax, eax
// 0056ee1c  8d54240c             lea edx, [esp + 0xc]
// 0056ee20  8bc8                 mov ecx, eax
// 0056ee22  3bd6                 cmp edx, esi
// 0056ee24  7404                 je 0x56ee2a
// 0056ee26  8b0e                 mov ecx, dword ptr [esi]
// 0056ee28  8906                 mov dword ptr [esi], eax
// 0056ee2a  85c9                 test ecx, ecx
// 0056ee2c  7408                 je 0x56ee36
// 0056ee2e  8b01                 mov eax, dword ptr [ecx]
// 0056ee30  8b10                 mov edx, dword ptr [eax]
// 0056ee32  6a01                 push 1
// 0056ee34  ffd2                 call edx
// 0056ee36  e865deffff           call 0x56cca0
// 0056ee3b  8907                 mov dword ptr [edi], eax
// 0056ee3d  8bcf                 mov ecx, edi
// 0056ee3f  5f                   pop edi
// 0056ee40  5e                   pop esi
// 0056ee41  5b                   pop ebx
// 0056ee42  83c404               add esp, 4
// 0056ee45  e906e8ffff           jmp 0x56d650

struct TypeInfo
{
};

extern bool (__thiscall *compareTypeInfo)(const TypeInfo*, const TypeInfo&);
extern const TypeInfo intType;
extern const TypeInfo doubleType;
extern const TypeInfo boolType;

struct Type
{
    unsigned int reserved[2];
    const TypeInfo* info;
};

struct Placeholder
{
    virtual ~Placeholder();
    virtual const TypeInfo& type() const;
};

struct FloatHolder : Placeholder
{
    float value;
    FloatHolder(const float&);
    virtual ~FloatHolder();
    virtual const TypeInfo& type() const;
};

struct Any
{
    Placeholder* content;

    Any(const float&);
    ~Any();
    void swap(Any&);
};

void* __cdecl operator new(unsigned int);
extern int __cdecl getInt(const Any*);
extern double __cdecl getDouble(const Any*);
extern char __cdecl getBool(const Any*);
extern Type* __cdecl getFloatType();

struct S
{
    Type* valueType;
    Any value;

    void f();
    void finish();
};

inline FloatHolder::FloatHolder(const float& v) : value(v)
{
}

inline Any::Any(const float& v) : content(new FloatHolder(v))
{
}

inline Any::~Any()
{
    if (content)
        delete content;
}

inline void Any::swap(Any& other)
{
    if (this != &other)
    {
        Placeholder* p = other.content;
        other.content = content;
        content = p;
    }
}

void S::f()
{
    bool (__thiscall *compare)(const TypeInfo*, const TypeInfo&) = compareTypeInfo;

    const TypeInfo *typeInfo = valueType->info;
    if (compare(&intType, *typeInfo))
    {
        {
            Any temporary((float)getInt(&value));
            temporary.swap(value);
        }
        valueType = getFloatType();
    }

    typeInfo = valueType->info;
    if (compare(&doubleType, *typeInfo))
    {
        {
            Any temporary((float)getDouble(&value));
            temporary.swap(value);
        }
        valueType = getFloatType();
    }

    typeInfo = valueType->info;
    if (compare(&boolType, *typeInfo))
    {
        {
            Any temporary((float)(int)(getBool(&value) != 0));
            temporary.swap(value);
        }
        valueType = getFloatType();
    }

    finish();
}
