// from server: 99% by EspClaude
// from server: 63% by king_originala
// roc 2008-06 0056f3b0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 419 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056f3b0
//
// 0056f3b0  6aff                 push -1
// 0056f3b2  64a100000000         mov eax, dword ptr fs:[0]
// 0056f3b8  6851ff7c00           push 0x7cff51
// 0056f3bd  50                   push eax
// 0056f3be  64892500000000       mov dword ptr fs:[0], esp
// 0056f3c5  83ec4c               sub esp, 0x4c
// 0056f3c8  53                   push ebx
// 0056f3c9  55                   push ebp
// 0056f3ca  56                   push esi
// 0056f3cb  8b3578288000         mov esi, dword ptr [0x802878]
// 0056f3d1  57                   push edi
// 0056f3d2  8bf9                 mov edi, ecx
// 0056f3d4  8b07                 mov eax, dword ptr [edi]
// 0056f3d6  8b4008               mov eax, dword ptr [eax + 8]
// 0056f3d9  50                   push eax
// 0056f3da  b914969200           mov ecx, 0x929614
// 0056f3df  ffd6                 call esi
// 0056f3e1  33ed                 xor ebp, ebp
// 0056f3e3  83cbff               or ebx, 0xffffffff
// 0056f3e6  84c0                 test al, al
// 0056f3e8  7424                 je 0x56f40e
// 0056f3ea  896c2410             mov dword ptr [esp + 0x10], ebp
// 0056f3ee  896c2414             mov dword ptr [esp + 0x14], ebp
// 0056f3f2  8d4c2410             lea ecx, [esp + 0x10]
// 0056f3f6  51                   push ecx
// 0056f3f7  8d4f04               lea ecx, [edi + 4]
// 0056f3fa  896c2468             mov dword ptr [esp + 0x68], ebp
// 0056f3fe  e88d23f2ff           call 0x491790
// 0056f403  895c2464             mov dword ptr [esp + 0x64], ebx
// 0056f407  e864d6ffff           call 0x56ca70
// 0056f40c  8907                 mov dword ptr [edi], eax
// 0056f40e  8b07                 mov eax, dword ptr [edi]
// 0056f410  8b5008               mov edx, dword ptr [eax + 8]
// 0056f413  52                   push edx
// 0056f414  b980599300           mov ecx, 0x935980
// 0056f419  ffd6                 call esi
// 0056f41b  84c0                 test al, al
// 0056f41d  0f84b4000000         je 0x56f4d7
// 0056f423  8d7704               lea esi, [edi + 4]
// 0056f426  3bf5                 cmp esi, ebp
// 0056f428  0f8482000000         je 0x56f4b0
// 0056f42e  8b0e                 mov ecx, dword ptr [esi]
// 0056f430  3bcd                 cmp ecx, ebp
// 0056f432  7409                 je 0x56f43d
// 0056f434  8b01                 mov eax, dword ptr [ecx]
// 0056f436  8b5004               mov edx, dword ptr [eax + 4]
// 0056f439  ffd2                 call edx
// 0056f43b  eb05                 jmp 0x56f442
// 0056f43d  b814969200           mov eax, 0x929614
// 0056f442  6880599300           push 0x935980
// 0056f447  8bc8                 mov ecx, eax
// 0056f449  ff1578288000         call dword ptr [0x802878]
// 0056f44f  84c0                 test al, al
// 0056f451  745d                 je 0x56f4b0
// 0056f453  8b06                 mov eax, dword ptr [esi]
// 0056f455  83c004               add eax, 4
// 0056f458  3bc5                 cmp eax, ebp
// 0056f45a  7454                 je 0x56f4b0
// 0056f45c  50                   push eax
// 0056f45d  8d442414             lea eax, [esp + 0x14]
// 0056f461  50                   push eax
// 0056f462  e819ecffff           call 0x56e080
// 0056f467  83c408               add esp, 8
// 0056f46a  50                   push eax
// 0056f46b  8bce                 mov ecx, esi
// 0056f46d  c744246801000000     mov dword ptr [esp + 0x68], 1
// 0056f475  e81623f2ff           call 0x491790
// 0056f47a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056f47e  895c2464             mov dword ptr [esp + 0x64], ebx
// 0056f482  3bc5                 cmp eax, ebp
// 0056f484  744a                 je 0x56f4d0
// 0056f486  8bf0                 mov esi, eax
// 0056f488  83c004               add eax, 4
// 0056f48b  8bcb                 mov ecx, ebx
// 0056f48d  f00fc108             lock xadd dword ptr [eax], ecx
// 0056f491  753d                 jne 0x56f4d0
// 0056f493  8b16                 mov edx, dword ptr [esi]
// 0056f495  8b4204               mov eax, dword ptr [edx + 4]
// 0056f498  8bce                 mov ecx, esi
// 0056f49a  ffd0                 call eax
// 0056f49c  8d4e08               lea ecx, [esi + 8]
// 0056f49f  f00fc119             lock xadd dword ptr [ecx], ebx
// 0056f4a3  752b                 jne 0x56f4d0
// 0056f4a5  8b16                 mov edx, dword ptr [esi]
// 0056f4a7  8b4208               mov eax, dword ptr [edx + 8]
// 0056f4aa  8bce                 mov ecx, esi
// 0056f4ac  ffd0                 call eax
// 0056f4ae  eb20                 jmp 0x56f4d0
// 0056f4b0  896c2410             mov dword ptr [esp + 0x10], ebp
// 0056f4b4  896c2414             mov dword ptr [esp + 0x14], ebp
// 0056f4b8  8d4c2410             lea ecx, [esp + 0x10]
// 0056f4bc  51                   push ecx
// 0056f4bd  8bce                 mov ecx, esi
// 0056f4bf  c744246802000000     mov dword ptr [esp + 0x68], 2
// 0056f4c7  e8c422f2ff           call 0x491790
// 0056f4cc  895c2464             mov dword ptr [esp + 0x64], ebx
// 0056f4d0  e89bd5ffff           call 0x56ca70
// 0056f4d5  8907                 mov dword ptr [edi], eax
// 0056f4d7  8d7704               lea esi, [edi + 4]
// 0056f4da  3bf5                 cmp esi, ebp
// 0056f4dc  742e                 je 0x56f50c
// 0056f4de  8b0e                 mov ecx, dword ptr [esi]
// 0056f4e0  3bcd                 cmp ecx, ebp
// 0056f4e2  7409                 je 0x56f4ed
// 0056f4e4  8b11                 mov edx, dword ptr [ecx]
// 0056f4e6  8b4204               mov eax, dword ptr [edx + 4]
// 0056f4e9  ffd0                 call eax
// 0056f4eb  eb05                 jmp 0x56f4f2
// 0056f4ed  b814969200           mov eax, 0x929614
// 0056f4f2  6810709300           push 0x937010
// 0056f4f7  8bc8                 mov ecx, eax
// 0056f4f9  ff1578288000         call dword ptr [0x802878]
// 0056f4ff  84c0                 test al, al
// 0056f501  7409                 je 0x56f50c
// 0056f503  8b06                 mov eax, dword ptr [esi]
// 0056f505  83c004               add eax, 4
// 0056f508  3bc5                 cmp eax, ebp
// 0056f50a  7534                 jne 0x56f540
// 0056f50c  6858f78200           push 0x82f758
// 0056f511  8d4c241c             lea ecx, [esp + 0x1c]
// 0056f515  ff1558248000         call dword ptr [0x802458]
// 0056f51b  8d4c2418             lea ecx, [esp + 0x18]
// 0056f51f  51                   push ecx
// 0056f520  8d4c2438             lea ecx, [esp + 0x38]
// 0056f524  c744246803000000     mov dword ptr [esp + 0x68], 3
// 0056f52c  e81fa8e9ff           call 0x409d50
// 0056f531  68c81b8d00           push 0x8d1bc8
// 0056f536  8d542438             lea edx, [esp + 0x38]
// 0056f53a  52                   push edx
// 0056f53b  e84c201300           call 0x6a158c
// 0056f540  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0056f544  5f                   pop edi
// 0056f545  5e                   pop esi
// 0056f546  5d                   pop ebp
// 0056f547  5b                   pop ebx
// 0056f548  64890d00000000       mov dword ptr fs:[0], ecx
// 0056f54f  83c458               add esp, 0x58
// 0056f552  c3                   ret 

#include <typeinfo>
#include <string>
#include <stdexcept>

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Counted {
    virtual ~Counted();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long use_count;
    volatile long weak_count;
    void add_ref() { _InterlockedIncrement(&use_count); }
    void release()
    {
        if (_InterlockedDecrement(&use_count) == 0) {
            dispose();
            if (_InterlockedDecrement(&weak_count) == 0)
                destroy();
        }
    }
};

struct Object;

struct Shared {
    Object* px;
    Counted* pi;
    Shared() : px(0), pi(0) {}
    Shared(const Shared& o) : px(o.px), pi(o.pi) { if (pi) pi->add_ref(); }
    ~Shared() { if (pi) pi->release(); }
};

struct Source;
struct SourceShared {
    Source* px;
    Counted* pi;
};

struct placeholder {
    virtual ~placeholder() {}
    virtual const std::type_info& type() const = 0;
    virtual placeholder* clone() const = 0;
};

template<class T>
struct holder : placeholder {
    holder(const T& v) : held(v) {}
    virtual const std::type_info& type() const { return typeid(T); }
    virtual placeholder* clone() const { return new holder(held); }
    T held;
};

struct Any {
    placeholder* content;
    Any() : content(0) {}
    template<class T> Any(const T& v) : content(new holder<T>(v)) {}
    ~Any() { delete content; }
    Any& swap(Any& o) { placeholder* t = content; content = o.content; o.content = t; return *this; }
    const std::type_info& type() const { return content ? content->type() : typeid(void); }
    __declspec(noinline) Any& operator=(const Shared& rhs) { Any(rhs).swap(*this); return *this; }
};

template<class T>
inline T* any_cast(Any* operand)
{
    return operand && operand->type() == typeid(T)
        ? &static_cast<holder<T>*>(operand->content)->held
        : 0;
}

struct Descriptor {
    unsigned long reserved[2];
    const std::type_info* type;
    const std::type_info& getType() const { return *type; }
};

extern Descriptor* __cdecl objectDescriptor();
extern Shared __cdecl convert(const SourceShared&);

struct Variant {
    Descriptor* descriptor;
    Any value;
    Shared& get();
};

Shared& Variant::get()
{
    if (typeid(void) == descriptor->getType()) {
        value = Shared();
        descriptor = objectDescriptor();
    }

    if (typeid(SourceShared) == descriptor->getType()) {
        SourceShared* source = any_cast<SourceShared>(&value);
        if (source)
            value = convert(*source);
        else
            value = Shared();
        descriptor = objectDescriptor();
    }

    Shared* result = any_cast<Shared>(&value);
    if (!result)
        throw std::runtime_error("Unable to cast value to Object");
    return *result;
}
