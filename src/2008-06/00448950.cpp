// from server: 100% by king_originala
// roc 2008-06 00448950  unit: VCRenderSettings::?$EnumPropDescriptor  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448950
//
// 00448950  6aff                 push -1
// 00448952  68a30f7c00           push 0x7c0fa3
// 00448957  64a100000000         mov eax, dword ptr fs:[0]
// 0044895d  50                   push eax
// 0044895e  64892500000000       mov dword ptr fs:[0], esp
// 00448965  51                   push ecx
// 00448966  56                   push esi
// 00448967  57                   push edi
// 00448968  8bf1                 mov esi, ecx
// 0044896a  68a8db9600           push 0x96dba8
// 0044896f  6830804400           push 0x448030
// 00448974  89742410             mov dword ptr [esp + 0x10], esi
// 00448978  e8b3e91000           call 0x557330
// 0044897d  83c408               add esp, 8
// 00448980  e84bf6ffff           call 0x447fd0
// 00448985  8bf8                 mov edi, eax
// 00448987  e8f4efffff           call 0x447980
// 0044898c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00448990  8b542420             mov edx, dword ptr [esp + 0x20]
// 00448994  51                   push ecx
// 00448995  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00448999  52                   push edx
// 0044899a  51                   push ecx
// 0044899b  57                   push edi
// 0044899c  50                   push eax
// 0044899d  8bce                 mov ecx, esi
// 0044899f  e8ac3c1200           call 0x56c650
// 004489a4  897e18               mov dword ptr [esi + 0x18], edi
// 004489a7  8b542430             mov edx, dword ptr [esp + 0x30]
// 004489ab  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004489af  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004489b3  52                   push edx
// 004489b4  8b542428             mov edx, dword ptr [esp + 0x28]
// 004489b8  50                   push eax
// 004489b9  51                   push ecx
// 004489ba  52                   push edx
// 004489bb  8d442444             lea eax, [esp + 0x44]
// 004489bf  50                   push eax
// 004489c0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004489c8  c706ec618100         mov dword ptr [esi], 0x8161ec
// 004489ce  e89dcdffff           call 0x445770
// 004489d3  8b08                 mov ecx, dword ptr [eax]
// 004489d5  c70000000000         mov dword ptr [eax], 0
// 004489db  83c414               add esp, 0x14
// 004489de  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004489e1  8b442434             mov eax, dword ptr [esp + 0x34]
// 004489e5  c644241401           mov byte ptr [esp + 0x14], 1
// 004489ea  85c0                 test eax, eax
// 004489ec  7409                 je 0x4489f7
// 004489ee  50                   push eax
// 004489ef  e8867c2500           call 0x6a067a
// 004489f4  83c404               add esp, 4
// 004489f7  68a8db9600           push 0x96dba8
// 004489fc  6830804400           push 0x448030
// 00448a01  e82ae91000           call 0x557330
// 00448a06  83c408               add esp, 8
// 00448a09  e8c2f5ffff           call 0x447fd0
// 00448a0e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00448a12  894620               mov dword ptr [esi + 0x20], eax
// 00448a15  5f                   pop edi
// 00448a16  8bc6                 mov eax, esi
// 00448a18  5e                   pop esi
// 00448a19  64890d00000000       mov dword ptr fs:[0], ecx
// 00448a20  83c410               add esp, 0x10
// 00448a23  c21c00               ret 0x1c

extern void __cdecl registerType(void (__cdecl*)(), void*);
extern void __cdecl initializeType();
extern char typeStorage;
extern void* __cdecl enumType();
extern void* __cdecl classType();
extern void* descriptorVtable[];
void __cdecl operator delete(void*);

struct Value {};

struct Transfer {
    mutable Value* pointer;

    Value* release() const;
    ~Transfer();
};

inline Value* Transfer::release() const
{
    Value* result = pointer;
    pointer = 0;
    return result;
}

inline Transfer::~Transfer()
{
    if (pointer)
        delete pointer;
}

struct Owner {
    Value* pointer;

    Owner(const Transfer&);
    ~Owner();
};

inline Owner::Owner(const Transfer& other)
    : pointer(other.release())
{
}

inline Owner::~Owner()
{
    if (pointer)
        delete pointer;
}

extern Transfer __cdecl createValue(int, int, int, int);

struct Base {
    void* vtable;
    char padding[0x14];

    void initialize(void*, void*, int, int, int);
    ~Base();
    Base(void*, int, int, int);
};

inline Base::Base(void* type, int name, int category, int attributes)
{
    void* cls = classType();
    initialize(cls, type, name, category, attributes);
}

struct EnumBase : Base {
    void* enumeration;

    EnumBase(int, int, int, void*);
};

inline EnumBase::EnumBase(int name, int category, int attributes, void* type)
    : Base(type, name, category, attributes),
      enumeration(type)
{
}

struct Descriptor : EnumBase {
    Owner value;
    void* type;

    Descriptor(int, int, int, int, int, int, int);
    ~Descriptor();
};

Descriptor::Descriptor(int name, int category, int a, int b,
                       int c, int d, int attributes)
    : EnumBase(name, category, attributes,
               (registerType(initializeType, &typeStorage), enumType())),
      value((vtable = descriptorVtable, createValue(a, b, c, d)))
{
    registerType(initializeType, &typeStorage);
    type = enumType();
}
