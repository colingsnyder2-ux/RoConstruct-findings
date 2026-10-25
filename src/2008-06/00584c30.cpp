// from server: 100% by king_originala
// roc 2008-06 00584c30  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584c30
//
// 00584c30  8b542404             mov edx, dword ptr [esp + 4]
// 00584c34  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00584c37  8b01                 mov eax, dword ptr [ecx]
// 00584c39  8b4008               mov eax, dword ptr [eax + 8]
// 00584c3c  83ec30               sub esp, 0x30
// 00584c3f  56                   push esi
// 00584c40  57                   push edi
// 00584c41  52                   push edx
// 00584c42  8d54240c             lea edx, [esp + 0xc]
// 00584c46  52                   push edx
// 00584c47  ffd0                 call eax
// 00584c49  8bf8                 mov edi, eax
// 00584c4b  e8b04d0100           call 0x599a00
// 00584c50  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00584c54  8901                 mov dword ptr [ecx], eax
// 00584c56  8d7104               lea esi, [ecx + 4]
// 00584c59  57                   push edi
// 00584c5a  8d4c2440             lea ecx, [esp + 0x40]
// 00584c5e  e81d7dfeff           call 0x56c980
// 00584c63  3bc6                 cmp eax, esi
// 00584c65  7408                 je 0x584c6f
// 00584c67  8b16                 mov edx, dword ptr [esi]
// 00584c69  8b08                 mov ecx, dword ptr [eax]
// 00584c6b  8910                 mov dword ptr [eax], edx
// 00584c6d  890e                 mov dword ptr [esi], ecx
// 00584c6f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00584c73  5f                   pop edi
// 00584c74  5e                   pop esi
// 00584c75  85c9                 test ecx, ecx
// 00584c77  7408                 je 0x584c81
// 00584c79  8b01                 mov eax, dword ptr [ecx]
// 00584c7b  8b10                 mov edx, dword ptr [eax]
// 00584c7d  6a01                 push 1
// 00584c7f  ffd2                 call edx
// 00584c81  83c430               add esp, 0x30
// 00584c84  c20800               ret 8

struct Value
{
    char storage[0x34];
    virtual ~Value();
    Value(const Value&);
};

struct Holder
{
    Value* value;
    Holder(const Value&);
    ~Holder();
    void assign(const Value&);
    void swap(Holder& other);
};

__forceinline Holder::~Holder()
{
    if (value)
        delete value;
}

__forceinline void Holder::swap(Holder& other)
{
    if (this != &other)
    {
        Value* oldValue = other.value;
        Value* newValue = value;
        value = oldValue;
        other.value = newValue;
    }
}

__forceinline void Holder::assign(const Value& source)
{
    Holder(source).swap(*this);
}

struct Frame
{
    char storage[0x30];
};

struct Getter
{
    virtual void slot0();
    virtual void slot1();
    virtual const Value* get(Frame*, void*);
};

void* __cdecl getType();

struct Result
{
    void* type;
    Holder holder;
};

struct S
{
    char padding[0x18];
    Getter* getter;
    void f(void* object, Result* result);
};

void S::f(void* object, Result* result)
{
    Frame storage;
    const Value* value = getter->get(&storage, object);
    result->type = getType();
    result->holder.assign(*value);
}
