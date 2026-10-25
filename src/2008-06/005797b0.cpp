// from server: 100% by Espeon
// roc 2008-06 005797b0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005797b0
//
// 005797b0  6aff                 push -1
// 005797b2  6888e17b00           push 0x7be188
// 005797b7  64a100000000         mov eax, dword ptr fs:[0]
// 005797bd  50                   push eax
// 005797be  64892500000000       mov dword ptr fs:[0], esp
// 005797c5  83ec24               sub esp, 0x24
// 005797c8  56                   push esi
// 005797c9  57                   push edi
// 005797ca  8bf9                 mov edi, ecx
// 005797cc  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 005797cf  8b4740               mov eax, dword ptr [edi + 0x40]
// 005797d2  89442418             mov dword ptr [esp + 0x18], eax
// 005797d6  85c9                 test ecx, ecx
// 005797d8  7409                 je 0x5797e3
// 005797da  8b11                 mov edx, dword ptr [ecx]
// 005797dc  8b4208               mov eax, dword ptr [edx + 8]
// 005797df  ffd0                 call eax
// 005797e1  eb02                 jmp 0x5797e5
// 005797e3  33c0                 xor eax, eax
// 005797e5  8944241c             mov dword ptr [esp + 0x1c], eax
// 005797e9  8b742440             mov esi, dword ptr [esp + 0x40]
// 005797ed  8b16                 mov edx, dword ptr [esi]
// 005797ef  8b5204               mov edx, dword ptr [edx + 4]
// 005797f2  8d442418             lea eax, [esp + 0x18]
// 005797f6  50                   push eax
// 005797f7  6a01                 push 1
// 005797f9  8bce                 mov ecx, esi
// 005797fb  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00579803  ffd2                 call edx
// 00579805  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 00579808  8b4748               mov eax, dword ptr [edi + 0x48]
// 0057980b  89442410             mov dword ptr [esp + 0x10], eax
// 0057980f  85c9                 test ecx, ecx
// 00579811  7409                 je 0x57981c
// 00579813  8b11                 mov edx, dword ptr [ecx]
// 00579815  8b4208               mov eax, dword ptr [edx + 8]
// 00579818  ffd0                 call eax
// 0057981a  eb02                 jmp 0x57981e
// 0057981c  33c0                 xor eax, eax
// 0057981e  89442414             mov dword ptr [esp + 0x14], eax
// 00579822  8b16                 mov edx, dword ptr [esi]
// 00579824  8b5204               mov edx, dword ptr [edx + 4]
// 00579827  8d442410             lea eax, [esp + 0x10]
// 0057982b  50                   push eax
// 0057982c  6a02                 push 2
// 0057982e  8bce                 mov ecx, esi
// 00579830  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00579835  ffd2                 call edx
// 00579837  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 0057983a  8b4750               mov eax, dword ptr [edi + 0x50]
// 0057983d  89442408             mov dword ptr [esp + 8], eax
// 00579841  85c9                 test ecx, ecx
// 00579843  7409                 je 0x57984e
// 00579845  8b11                 mov edx, dword ptr [ecx]
// 00579847  8b4208               mov eax, dword ptr [edx + 8]
// 0057984a  ffd0                 call eax
// 0057984c  eb02                 jmp 0x579850
// 0057984e  33c0                 xor eax, eax
// 00579850  8944240c             mov dword ptr [esp + 0xc], eax
// 00579854  8b16                 mov edx, dword ptr [esi]
// 00579856  8b5204               mov edx, dword ptr [edx + 4]
// 00579859  8d442408             lea eax, [esp + 8]
// 0057985d  50                   push eax
// 0057985e  6a03                 push 3
// 00579860  8bce                 mov ecx, esi
// 00579862  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00579867  ffd2                 call edx
// 00579869  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0057986d  6a00                 push 0
// 0057986f  68a0e89200           push 0x92e8a0
// 00579874  68fc919200           push 0x9291fc
// 00579879  6a00                 push 0
// 0057987b  50                   push eax
// 0057987c  e8457f1200           call 0x6a17c6
// 00579881  83c414               add esp, 0x14
// 00579884  85c0                 test eax, eax
// 00579886  751e                 jne 0x5798a6
// 00579888  6834ba8000           push 0x80ba34
// 0057988d  8d4c2424             lea ecx, [esp + 0x24]
// 00579891  ff1564288000         call dword ptr [0x802864]
// 00579897  682c368d00           push 0x8d362c
// 0057989c  8d4c2424             lea ecx, [esp + 0x24]
// 005798a0  51                   push ecx
// 005798a1  e8e67c1200           call 0x6a158c
// 005798a6  8d542408             lea edx, [esp + 8]
// 005798aa  52                   push edx
// 005798ab  8d4c2414             lea ecx, [esp + 0x14]
// 005798af  51                   push ecx
// 005798b0  8d542420             lea edx, [esp + 0x20]
// 005798b4  52                   push edx
// 005798b5  83c604               add esi, 4
// 005798b8  56                   push esi
// 005798b9  50                   push eax
// 005798ba  8bcf                 mov ecx, edi
// 005798bc  e80ffeffff           call 0x5796d0
// 005798c1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005798c5  c644243401           mov byte ptr [esp + 0x34], 1
// 005798ca  85c9                 test ecx, ecx
// 005798cc  7408                 je 0x5798d6
// 005798ce  8b01                 mov eax, dword ptr [ecx]
// 005798d0  8b10                 mov edx, dword ptr [eax]
// 005798d2  6a01                 push 1
// 005798d4  ffd2                 call edx
// 005798d6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005798da  c644243400           mov byte ptr [esp + 0x34], 0
// 005798df  85c9                 test ecx, ecx
// 005798e1  7408                 je 0x5798eb
// 005798e3  8b01                 mov eax, dword ptr [ecx]
// 005798e5  8b10                 mov edx, dword ptr [eax]
// 005798e7  6a01                 push 1
// 005798e9  ffd2                 call edx
// 005798eb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005798ef  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 005798f7  85c9                 test ecx, ecx
// 005798f9  7408                 je 0x579903
// 005798fb  8b01                 mov eax, dword ptr [ecx]
// 005798fd  8b10                 mov edx, dword ptr [eax]
// 005798ff  6a01                 push 1
// 00579901  ffd2                 call edx
// 00579903  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00579907  5f                   pop edi
// 00579908  5e                   pop esi
// 00579909  64890d00000000       mov dword ptr fs:[0], ecx
// 00579910  83c430               add esp, 0x30
// 00579913  c20800               ret 8




namespace std {
    class bad_cast {
        const char* message;
        int owned;
    public:
        __declspec(dllimport) explicit bad_cast(const char*);
        virtual ~bad_cast();
    };
}

struct Value {
    virtual ~Value();
    virtual void reserved();
    virtual Value* clone() const;
};

inline Value* copyValue(Value* source) {
    if (source)
        return source->clone();
    return 0;
}

struct Argument {
    unsigned long value;
    Value* object;

    Argument(const Argument&);
    ~Argument();
};

inline Argument::Argument(const Argument& other)
    : value(other.value), object(copyValue(other.object)) {}

inline Argument::~Argument() {
    if (object)
        delete object;
}

namespace RBX {
    namespace Reflection {
        class DescribedBase {
            virtual ~DescribedBase();
            virtual void reserved();
        };
    }
}

namespace RBX {class DataModel : public Reflection::DescribedBase {virtual void reserved();};}

struct Arguments {
    virtual void reserved();
    virtual void set(int, Argument*);
};

struct S {
    char padding[64];
    Argument first;
    Argument second;
    Argument third;

    void invoke(RBX::Reflection::DescribedBase*, Arguments*);
    void dispatch(RBX::DataModel*, void*, Argument*, Argument*, Argument*);
};

void S::invoke(RBX::Reflection::DescribedBase* instance, Arguments* arguments) {
    Argument a(first);
    arguments->set(1, &a);

    Argument b(second);
    arguments->set(2, &b);

    Argument c(third);
    arguments->set(3, &c);

    RBX::DataModel* window = dynamic_cast<RBX::DataModel*>(instance);
    if (!window)
        throw std::bad_cast("bad cast");

    dispatch(window, reinterpret_cast<char*>(arguments) + 4, &a, &b, &c);
}