// from server: 100% by tester
// roc 2008-06 005794e0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005794e0
//
// 005794e0  6aff                 push -1
// 005794e2  6840e17b00           push 0x7be140
// 005794e7  64a100000000         mov eax, dword ptr fs:[0]
// 005794ed  50                   push eax
// 005794ee  64892500000000       mov dword ptr fs:[0], esp
// 005794f5  83ec1c               sub esp, 0x1c
// 005794f8  56                   push esi
// 005794f9  57                   push edi
// 005794fa  8bf9                 mov edi, ecx
// 005794fc  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 005794ff  8b4740               mov eax, dword ptr [edi + 0x40]
// 00579502  89442410             mov dword ptr [esp + 0x10], eax
// 00579506  85c9                 test ecx, ecx
// 00579508  7409                 je 0x579513
// 0057950a  8b11                 mov edx, dword ptr [ecx]
// 0057950c  8b4208               mov eax, dword ptr [edx + 8]
// 0057950f  ffd0                 call eax
// 00579511  eb02                 jmp 0x579515
// 00579513  33c0                 xor eax, eax
// 00579515  89442414             mov dword ptr [esp + 0x14], eax
// 00579519  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057951d  8b16                 mov edx, dword ptr [esi]
// 0057951f  8b5204               mov edx, dword ptr [edx + 4]
// 00579522  8d442410             lea eax, [esp + 0x10]
// 00579526  50                   push eax
// 00579527  6a01                 push 1
// 00579529  8bce                 mov ecx, esi
// 0057952b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00579533  ffd2                 call edx
// 00579535  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 00579538  8b4748               mov eax, dword ptr [edi + 0x48]
// 0057953b  89442408             mov dword ptr [esp + 8], eax
// 0057953f  85c9                 test ecx, ecx
// 00579541  7409                 je 0x57954c
// 00579543  8b11                 mov edx, dword ptr [ecx]
// 00579545  8b4208               mov eax, dword ptr [edx + 8]
// 00579548  ffd0                 call eax
// 0057954a  eb02                 jmp 0x57954e
// 0057954c  33c0                 xor eax, eax
// 0057954e  8944240c             mov dword ptr [esp + 0xc], eax
// 00579552  8b16                 mov edx, dword ptr [esi]
// 00579554  8b5204               mov edx, dword ptr [edx + 4]
// 00579557  8d442408             lea eax, [esp + 8]
// 0057955b  50                   push eax
// 0057955c  6a02                 push 2
// 0057955e  8bce                 mov ecx, esi
// 00579560  c644243401           mov byte ptr [esp + 0x34], 1
// 00579565  ffd2                 call edx
// 00579567  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057956b  6a00                 push 0
// 0057956d  68a0e89200           push 0x92e8a0
// 00579572  68fc919200           push 0x9291fc
// 00579577  6a00                 push 0
// 00579579  50                   push eax
// 0057957a  e847821200           call 0x6a17c6
// 0057957f  83c414               add esp, 0x14
// 00579582  85c0                 test eax, eax
// 00579584  751e                 jne 0x5795a4
// 00579586  6834ba8000           push 0x80ba34
// 0057958b  8d4c241c             lea ecx, [esp + 0x1c]
// 0057958f  ff1564288000         call dword ptr [0x802864]
// 00579595  682c368d00           push 0x8d362c
// 0057959a  8d4c241c             lea ecx, [esp + 0x1c]
// 0057959e  51                   push ecx
// 0057959f  e8e87f1200           call 0x6a158c
// 005795a4  8d542408             lea edx, [esp + 8]
// 005795a8  52                   push edx
// 005795a9  8d4c2414             lea ecx, [esp + 0x14]
// 005795ad  51                   push ecx
// 005795ae  83c604               add esi, 4
// 005795b1  56                   push esi
// 005795b2  50                   push eax
// 005795b3  8bcf                 mov ecx, edi
// 005795b5  e866feffff           call 0x579420
// 005795ba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005795be  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005795c3  85c9                 test ecx, ecx
// 005795c5  7408                 je 0x5795cf
// 005795c7  8b11                 mov edx, dword ptr [ecx]
// 005795c9  8b02                 mov eax, dword ptr [edx]
// 005795cb  6a01                 push 1
// 005795cd  ffd0                 call eax
// 005795cf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005795d3  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005795db  85c9                 test ecx, ecx
// 005795dd  7408                 je 0x5795e7
// 005795df  8b11                 mov edx, dword ptr [ecx]
// 005795e1  8b02                 mov eax, dword ptr [edx]
// 005795e3  6a01                 push 1
// 005795e5  ffd0                 call eax
// 005795e7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005795eb  5f                   pop edi
// 005795ec  5e                   pop esi
// 005795ed  64890d00000000       mov dword ptr fs:[0], ecx
// 005795f4  83c428               add esp, 0x28
// 005795f7  c20800               ret 8

namespace std {
    class bad_cast;
}

typedef void (__thiscall *BadCastConstructor)(std::bad_cast*, const char*);
extern BadCastConstructor importedBadCastConstructor;

namespace std {
    class bad_cast {
        unsigned char storage[12];
    public:
        explicit bad_cast(const char*);
        bad_cast(const bad_cast&);
        ~bad_cast();
    };

    inline bad_cast::bad_cast(const char* message)
    {
        importedBadCastConstructor(this, message);
    }
}

struct Value {
    virtual ~Value();
    virtual void reserved();
    virtual Value* clone() const;
};

struct Argument {
    unsigned long tag;
    Value* value;

    Argument(const Argument&);
    ~Argument();
};

inline Argument::Argument(const Argument& other)
{
    Value* source = other.value;
    tag = other.tag;
    Value* result;
    if (source)
        result = source->clone();
    else
        result = 0;
    value = result;
}

inline Argument::~Argument()
{
    if (value)
        delete value;
}

namespace RBX { namespace Reflection { class DescribedBase {
public:
    virtual ~DescribedBase();
}; } }
using RBX::Reflection::DescribedBase;

namespace RBX { class DataModel : public Reflection::DescribedBase {
}; }
using RBX::DataModel;

struct Arguments {
    virtual void reserved();
    virtual void get(int, Argument*);
};

struct BoundFuncDesc {
    unsigned char padding[64];
    Argument first;
    Argument second;

    void invoke(DescribedBase*, Arguments*);
    void dispatch(DataModel*, void*, const Argument&, const Argument&);
};

void BoundFuncDesc::invoke(DescribedBase* object, Arguments* arguments)
{
    Argument a(first);
    arguments->get(1, &a);

    Argument b(second);
    arguments->get(2, &b);

    DataModel* model = dynamic_cast<DataModel*>(object);
    if (!model)
        throw std::bad_cast("bad cast");

    dispatch(model, reinterpret_cast<char*>(arguments) + 4, a, b);
}
