// from server: 100% by king_originala
// roc 2008-06 005863e0  unit: RBX::VLocalScript::?$FactoryProduct  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005863e0
//
// 005863e0  6aff                 push -1
// 005863e2  68d13a7d00           push 0x7d3ad1
// 005863e7  64a100000000         mov eax, dword ptr fs:[0]
// 005863ed  50                   push eax
// 005863ee  64892500000000       mov dword ptr fs:[0], esp
// 005863f5  83ec0c               sub esp, 0xc
// 005863f8  56                   push esi
// 005863f9  8bf1                 mov esi, ecx
// 005863fb  c744240400000000     mov dword ptr [esp + 4], 0
// 00586403  8b06                 mov eax, dword ptr [esi]
// 00586405  8b4008               mov eax, dword ptr [eax + 8]
// 00586408  57                   push edi
// 00586409  50                   push eax
// 0058640a  b944bf9200           mov ecx, 0x92bf44
// 0058640f  ff1578288000         call dword ptr [0x802878]
// 00586415  84c0                 test al, al
// 00586417  7436                 je 0x58644f
// 00586419  83c604               add esi, 4
// 0058641c  56                   push esi
// 0058641d  e81efdffff           call 0x586140
// 00586422  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00586426  83c404               add esp, 4
// 00586429  8bf0                 mov esi, eax
// 0058642b  56                   push esi
// 0058642c  8bcf                 mov ecx, edi
// 0058642e  ff155c248000         call dword ptr [0x80245c]
// 00586434  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00586437  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0058643a  8bc7                 mov eax, edi
// 0058643c  5f                   pop edi
// 0058643d  5e                   pop esi
// 0058643e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00586442  64890d00000000       mov dword ptr fs:[0], ecx
// 00586449  83c418               add esp, 0x18
// 0058644c  c20400               ret 4
// 0058644f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00586452  8b16                 mov edx, dword ptr [esi]
// 00586454  8954240c             mov dword ptr [esp + 0xc], edx
// 00586458  85c9                 test ecx, ecx
// 0058645a  7409                 je 0x586465
// 0058645c  8b01                 mov eax, dword ptr [ecx]
// 0058645e  8b5008               mov edx, dword ptr [eax + 8]
// 00586461  ffd2                 call edx
// 00586463  eb02                 jmp 0x586467
// 00586465  33c0                 xor eax, eax
// 00586467  89442410             mov dword ptr [esp + 0x10], eax
// 0058646b  8d4c240c             lea ecx, [esp + 0xc]
// 0058646f  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00586477  e8748bfeff           call 0x56eff0
// 0058647c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00586480  8bf0                 mov esi, eax
// 00586482  56                   push esi
// 00586483  8bcf                 mov ecx, edi
// 00586485  ff155c248000         call dword ptr [0x80245c]
// 0058648b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058648f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00586492  89471c               mov dword ptr [edi + 0x1c], eax
// 00586495  c744240801000000     mov dword ptr [esp + 8], 1
// 0058649d  c644241c00           mov byte ptr [esp + 0x1c], 0
// 005864a2  85c9                 test ecx, ecx
// 005864a4  7408                 je 0x5864ae
// 005864a6  8b11                 mov edx, dword ptr [ecx]
// 005864a8  8b02                 mov eax, dword ptr [edx]
// 005864aa  6a01                 push 1
// 005864ac  ffd0                 call eax
// 005864ae  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005864b2  8bc7                 mov eax, edi
// 005864b4  5f                   pop edi
// 005864b5  5e                   pop esi
// 005864b6  64890d00000000       mov dword ptr fs:[0], ecx
// 005864bd  83c418               add esp, 0x18
// 005864c0  c20400               ret 4

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>,
                          std::allocator<char> > String;

typedef String* (__thiscall *StringCopyProc)(String*, const String&);
extern StringCopyProc stringCopy;

namespace std {
    template<class T, class Traits, class Allocator>
    __forceinline basic_string<T, Traits, Allocator>::basic_string(
        const basic_string& other)
    {
        stringCopy(this, other);
    }
}

class type_info {
public:
    bool operator==(const type_info&) const;
};

typedef bool (__thiscall *TypeEqualProc)(const type_info*, const type_info&);
extern TypeEqualProc typeEqual;
extern const type_info contentType;

__forceinline bool type_info::operator==(const type_info& other) const
{
    return typeEqual(this, other);
}

struct ContentId {
    String text;
    unsigned int value;
};

struct TypeDescriptor {
    unsigned char prefix[8];
    const type_info* info;
};

struct Holder {
    virtual ~Holder();
    virtual void reserved();
    virtual Holder* clone() const;
};

extern const ContentId& __cdecl extractContentId(Holder* const*);

struct S {
    TypeDescriptor* type;
    Holder* object;

    S(const S&);
    ~S();
    const ContentId& convert() const;
    ContentId f() const;
};

__forceinline S::S(const S& other)
{
    Holder* source = other.object;
    type = other.type;
    Holder* copy = source ? source->clone() : 0;
    object = copy;
}

__forceinline S::~S()
{
    if (object)
        delete object;
}

ContentId S::f() const
{
    if (contentType == *type->info)
        return extractContentId(&object);

    S temporary(*this);
    return temporary.convert();
}
