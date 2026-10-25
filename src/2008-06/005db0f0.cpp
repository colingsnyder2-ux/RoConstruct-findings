// from server: 100% by colin
// roc 2008-06 005db0f0  unit: RBX::VHumanoid::?$BoundFuncDesc  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005db0f0
//
// 005db0f0  6aff                 push -1
// 005db0f2  6840e17b00           push 0x7be140
// 005db0f7  64a100000000         mov eax, dword ptr fs:[0]
// 005db0fd  50                   push eax
// 005db0fe  64892500000000       mov dword ptr fs:[0], esp
// 005db105  83ec1c               sub esp, 0x1c
// 005db108  56                   push esi
// 005db109  57                   push edi
// 005db10a  8bf9                 mov edi, ecx
// 005db10c  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 005db10f  8b4744               mov eax, dword ptr [edi + 0x44]
// 005db112  89442410             mov dword ptr [esp + 0x10], eax
// 005db116  85c9                 test ecx, ecx
// 005db118  7409                 je 0x5db123
// 005db11a  8b11                 mov edx, dword ptr [ecx]
// 005db11c  8b4208               mov eax, dword ptr [edx + 8]
// 005db11f  ffd0                 call eax
// 005db121  eb02                 jmp 0x5db125
// 005db123  33c0                 xor eax, eax
// 005db125  89442414             mov dword ptr [esp + 0x14], eax
// 005db129  8b742438             mov esi, dword ptr [esp + 0x38]
// 005db12d  8b16                 mov edx, dword ptr [esi]
// 005db12f  8b5204               mov edx, dword ptr [edx + 4]
// 005db132  8d442410             lea eax, [esp + 0x10]
// 005db136  50                   push eax
// 005db137  6a01                 push 1
// 005db139  8bce                 mov ecx, esi
// 005db13b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005db143  ffd2                 call edx
// 005db145  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 005db148  8b474c               mov eax, dword ptr [edi + 0x4c]
// 005db14b  89442408             mov dword ptr [esp + 8], eax
// 005db14f  85c9                 test ecx, ecx
// 005db151  7409                 je 0x5db15c
// 005db153  8b11                 mov edx, dword ptr [ecx]
// 005db155  8b4208               mov eax, dword ptr [edx + 8]
// 005db158  ffd0                 call eax
// 005db15a  eb02                 jmp 0x5db15e
// 005db15c  33c0                 xor eax, eax
// 005db15e  8944240c             mov dword ptr [esp + 0xc], eax
// 005db162  8b16                 mov edx, dword ptr [esi]
// 005db164  8b5204               mov edx, dword ptr [edx + 4]
// 005db167  8d442408             lea eax, [esp + 8]
// 005db16b  50                   push eax
// 005db16c  6a02                 push 2
// 005db16e  8bce                 mov ecx, esi
// 005db170  c644243401           mov byte ptr [esp + 0x34], 1
// 005db175  ffd2                 call edx
// 005db177  8b442434             mov eax, dword ptr [esp + 0x34]
// 005db17b  6a00                 push 0
// 005db17d  68e0349500           push 0x9534e0
// 005db182  68fc919200           push 0x9291fc
// 005db187  6a00                 push 0
// 005db189  50                   push eax
// 005db18a  e837660c00           call 0x6a17c6
// 005db18f  83c414               add esp, 0x14
// 005db192  85c0                 test eax, eax
// 005db194  751e                 jne 0x5db1b4
// 005db196  6834ba8000           push 0x80ba34
// 005db19b  8d4c241c             lea ecx, [esp + 0x1c]
// 005db19f  ff1564288000         call dword ptr [0x802864]
// 005db1a5  682c368d00           push 0x8d362c
// 005db1aa  8d4c241c             lea ecx, [esp + 0x1c]
// 005db1ae  51                   push ecx
// 005db1af  e8d8630c00           call 0x6a158c
// 005db1b4  8d542408             lea edx, [esp + 8]
// 005db1b8  52                   push edx
// 005db1b9  8d4c2414             lea ecx, [esp + 0x14]
// 005db1bd  51                   push ecx
// 005db1be  83c604               add esi, 4
// 005db1c1  56                   push esi
// 005db1c2  50                   push eax
// 005db1c3  8bcf                 mov ecx, edi
// 005db1c5  e876feffff           call 0x5db040
// 005db1ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005db1ce  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005db1d3  85c9                 test ecx, ecx
// 005db1d5  7408                 je 0x5db1df
// 005db1d7  8b11                 mov edx, dword ptr [ecx]
// 005db1d9  8b02                 mov eax, dword ptr [edx]
// 005db1db  6a01                 push 1
// 005db1dd  ffd0                 call eax
// 005db1df  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005db1e3  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005db1eb  85c9                 test ecx, ecx
// 005db1ed  7408                 je 0x5db1f7
// 005db1ef  8b11                 mov edx, dword ptr [ecx]
// 005db1f1  8b02                 mov eax, dword ptr [edx]
// 005db1f3  6a01                 push 1
// 005db1f5  ffd0                 call eax
// 005db1f7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005db1fb  5f                   pop edi
// 005db1fc  5e                   pop esi
// 005db1fd  64890d00000000       mov dword ptr fs:[0], ecx
// 005db204  83c428               add esp, 0x28
// 005db207  c20800               ret 8

#include <typeinfo>
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD


struct Resource {
    virtual ~Resource();
    virtual void reserved() = 0;
    virtual Resource* clone() = 0;
};

#pragma optimize("g", off)
__forceinline Resource* cloneResource(Resource* resource)
{
    if (resource)
        return resource->clone();
    return 0;
}
#pragma optimize("g", on)

struct Value {
    unsigned long value;
    Resource* resource;

    Value(const Value& other);
    ~Value();
};

__forceinline Value::Value(const Value& other)
    : value(other.value), resource(cloneResource(other.resource))
{
}

__forceinline Value::~Value()
{
    if (resource)
        delete resource;
}

struct Arguments {
    virtual void reserved() = 0;
    virtual void read(int index, Value* value) = 0;
};

namespace RBX { namespace Reflection { class DescribedBase { public: virtual ~DescribedBase(); }; } }
using RBX::Reflection::DescribedBase;

namespace RBX { class Humanoid : public DescribedBase {}; }
using RBX::Humanoid;

struct S {
    char padding[68];
    Value first;
    Value second;

    void invoke(DescribedBase* object, Arguments* arguments);
    void execute(Humanoid* object, void* context, Value* first, Value* second);
};

void S::invoke(DescribedBase* object, Arguments* arguments)
{
    Value a(first);
    arguments->read(1, &a);

    Value b(second);
    arguments->read(2, &b);

    Humanoid* humanoid = dynamic_cast<Humanoid*>(object);
    if (!humanoid)
        throw std::bad_cast("bad cast");

    execute(humanoid, reinterpret_cast<char*>(arguments) + 4, &a, &b);
}
