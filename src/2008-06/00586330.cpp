// from server: 100% by atomic.potato
// roc 2008-06 00586330  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586330
//
// 00586330  6aff                 push -1
// 00586332  68e88e7d00           push 0x7d8ee8
// 00586337  64a100000000         mov eax, dword ptr fs:[0]
// 0058633d  50                   push eax
// 0058633e  64892500000000       mov dword ptr fs:[0], esp
// 00586345  83ec20               sub esp, 0x20
// 00586348  8b542430             mov edx, dword ptr [esp + 0x30]
// 0058634c  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0058634f  8b01                 mov eax, dword ptr [ecx]
// 00586351  8b4008               mov eax, dword ptr [eax + 8]
// 00586354  56                   push esi
// 00586355  57                   push edi
// 00586356  52                   push edx
// 00586357  8d54240c             lea edx, [esp + 0xc]
// 0058635b  52                   push edx
// 0058635c  ffd0                 call eax
// 0058635e  8bf8                 mov edi, eax
// 00586360  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00586368  e8136afeff           call 0x56cd80
// 0058636d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00586371  8901                 mov dword ptr [ecx], eax
// 00586373  8d7104               lea esi, [ecx + 4]
// 00586376  57                   push edi
// 00586377  8d4c243c             lea ecx, [esp + 0x3c]
// 0058637b  e8306ffeff           call 0x56d2b0
// 00586380  3bc6                 cmp eax, esi
// 00586382  7408                 je 0x58638c
// 00586384  8b16                 mov edx, dword ptr [esi]
// 00586386  8b08                 mov ecx, dword ptr [eax]
// 00586388  8910                 mov dword ptr [eax], edx
// 0058638a  890e                 mov dword ptr [esi], ecx
// 0058638c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00586390  5f                   pop edi
// 00586391  5e                   pop esi
// 00586392  85c9                 test ecx, ecx
// 00586394  7408                 je 0x58639e
// 00586396  8b01                 mov eax, dword ptr [ecx]
// 00586398  8b10                 mov edx, dword ptr [eax]
// 0058639a  6a01                 push 1
// 0058639c  ffd2                 call edx
// 0058639e  8d0c24               lea ecx, [esp]
// 005863a1  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005863a9  ff1568248000         call dword ptr [0x802468]
// 005863af  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005863b3  64890d00000000       mov dword ptr fs:[0], ecx
// 005863ba  83c42c               add esp, 0x2c
// 005863bd  c20800               ret 8

struct Value;
extern void (__thiscall *destroyValue)(Value*);
extern void* __cdecl valueType();

struct Value
{
    char data[32];
    ~Value();
};

inline Value::~Value()
{
    destroyValue(this);
}

struct Object
{
    virtual ~Object();
};

struct Holder
{
    Object* value;
    Holder(const Value&);
    ~Holder();
    void swap(Holder&);
    void assign(const Value&);
};

inline Holder::~Holder()
{
    if (value)
        delete value;
}

inline void Holder::swap(Holder& other)
{
    if (this != &other)
    {
        Object* old = value;
        value = other.value;
        other.value = old;
    }
}

inline void Holder::assign(const Value& source)
{
    Holder(source).swap(*this);
}

struct Accessor
{
    virtual void slot0();
    virtual void slot1();
    virtual Value get(void*);
};

struct Result
{
    void* type;
    Holder value;
    void assign(const Value&);
};

inline void Result::assign(const Value& source)
{
    type = valueType();
    value.assign(source);
}

struct Descriptor
{
    char unused[24];
    Accessor* accessor;
    void getValue(void*, Result*) const;
};

void Descriptor::getValue(void* instance, Result* result) const
{
    result->assign(accessor->get(instance));
}
