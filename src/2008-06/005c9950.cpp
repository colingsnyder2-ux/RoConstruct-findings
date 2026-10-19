// from server: 71% by colin
// from server: 70% by king_originala
// roc 2008-06 005c9950  unit: RBX::Stats::VItem::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9950
//
// 005c9950  6aff                 push -1
// 005c9952  6868167d00           push 0x7d1668
// 005c9957  64a100000000         mov eax, dword ptr fs:[0]
// 005c995d  50                   push eax
// 005c995e  64892500000000       mov dword ptr fs:[0], esp
// 005c9965  83ec18               sub esp, 0x18
// 005c9968  56                   push esi
// 005c9969  8bf1                 mov esi, ecx
// 005c996b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005c996f  57                   push edi
// 005c9970  e8db54faff           call 0x56ee50
// 005c9975  dd00                 fld qword ptr [eax]
// 005c9977  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005c997a  034c2430             add ecx, dword ptr [esp + 0x30]
// 005c997e  8b5638               mov edx, dword ptr [esi + 0x38]
// 005c9981  83ec08               sub esp, 8
// 005c9984  8d442410             lea eax, [esp + 0x10]
// 005c9988  dd1c24               fstp qword ptr [esp]
// 005c998b  50                   push eax
// 005c998c  ffd2                 call edx
// 005c998e  8bf8                 mov edi, eax
// 005c9990  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005c9998  e88336faff           call 0x56d020
// 005c999d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005c99a1  8901                 mov dword ptr [ecx], eax
// 005c99a3  8d7104               lea esi, [ecx + 4]
// 005c99a6  57                   push edi
// 005c99a7  8d4c243c             lea ecx, [esp + 0x3c]
// 005c99ab  e87018fcff           call 0x58b220
// 005c99b0  3bc6                 cmp eax, esi
// 005c99b2  7408                 je 0x5c99bc
// 005c99b4  8b16                 mov edx, dword ptr [esi]
// 005c99b6  8b08                 mov ecx, dword ptr [eax]
// 005c99b8  8910                 mov dword ptr [eax], edx
// 005c99ba  890e                 mov dword ptr [esi], ecx
// 005c99bc  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005c99c0  5f                   pop edi
// 005c99c1  5e                   pop esi
// 005c99c2  85c9                 test ecx, ecx
// 005c99c4  7408                 je 0x5c99ce
// 005c99c6  8b01                 mov eax, dword ptr [ecx]
// 005c99c8  8b10                 mov edx, dword ptr [eax]
// 005c99ca  6a01                 push 1
// 005c99cc  ffd2                 call edx
// 005c99ce  8d0c24               lea ecx, [esp]
// 005c99d1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 005c99d9  e8523ce6ff           call 0x42d630
// 005c99de  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005c99e2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c99e9  83c424               add esp, 0x24
// 005c99ec  c20c00               ret 0xc
#include <intrin.h>

struct Value {
    unsigned char storage[24];
    Value(const Value&);
    ~Value();
};

struct Input {
    virtual ~Input();
    const double& get();
};

struct Holder {
    Input* pointer;
    Holder& assign(const Value& value);
};

struct Output {
    void* type;
    Holder value;
};

struct __multiple_inheritance Object;

extern void* valueType();

struct S {
    unsigned char padding[56];
    Value (Object::*method)(double);
    void invoke(Object* object, Output* output, Input* argument);
};

void S::invoke(Object* object, Output* output, Input* argument)
{
    const Value& value = (object->*method)(argument->get());
    output->type = valueType();

    Holder& destination = output->value;
    _ReadWriteBarrier();
    Holder& source = reinterpret_cast<Holder&>(argument).assign(value);
    if (&source != &destination) {
        Input* old = destination.pointer;
        destination.pointer = source.pointer;
        source.pointer = old;
    }

    if (argument)
        delete argument;
}
