// from server: 100% by colin
// roc 2008-06 005ada90  unit: RBX::VScriptContext::?$BoundFuncDesc  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ada90
//
// 005ada90  6aff                 push -1
// 005ada92  68e82c7d00           push 0x7d2ce8
// 005ada97  64a100000000         mov eax, dword ptr fs:[0]
// 005ada9d  50                   push eax
// 005ada9e  64892500000000       mov dword ptr fs:[0], esp
// 005adaa5  83ec14               sub esp, 0x14
// 005adaa8  56                   push esi
// 005adaa9  57                   push edi
// 005adaaa  8bf9                 mov edi, ecx
// 005adaac  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 005adaaf  8b4740               mov eax, dword ptr [edi + 0x40]
// 005adab2  89442408             mov dword ptr [esp + 8], eax
// 005adab6  85c9                 test ecx, ecx
// 005adab8  7409                 je 0x5adac3
// 005adaba  8b11                 mov edx, dword ptr [ecx]
// 005adabc  8b4208               mov eax, dword ptr [edx + 8]
// 005adabf  ffd0                 call eax
// 005adac1  eb02                 jmp 0x5adac5
// 005adac3  33c0                 xor eax, eax
// 005adac5  8944240c             mov dword ptr [esp + 0xc], eax
// 005adac9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005adacd  8b11                 mov edx, dword ptr [ecx]
// 005adacf  8b5204               mov edx, dword ptr [edx + 4]
// 005adad2  8d442408             lea eax, [esp + 8]
// 005adad6  50                   push eax
// 005adad7  6a01                 push 1
// 005adad9  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005adae1  ffd2                 call edx
// 005adae3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005adae7  6a00                 push 0
// 005adae9  68f0cb9400           push 0x94cbf0
// 005adaee  68fc919200           push 0x9291fc
// 005adaf3  6a00                 push 0
// 005adaf5  50                   push eax
// 005adaf6  e8cb3c0f00           call 0x6a17c6
// 005adafb  8bf0                 mov esi, eax
// 005adafd  83c414               add esp, 0x14
// 005adb00  85f6                 test esi, esi
// 005adb02  751e                 jne 0x5adb22
// 005adb04  6834ba8000           push 0x80ba34
// 005adb09  8d4c2414             lea ecx, [esp + 0x14]
// 005adb0d  ff1564288000         call dword ptr [0x802864]
// 005adb13  682c368d00           push 0x8d362c
// 005adb18  8d4c2414             lea ecx, [esp + 0x14]
// 005adb1c  51                   push ecx
// 005adb1d  e86a3a0f00           call 0x6a158c
// 005adb22  8d4c2408             lea ecx, [esp + 8]
// 005adb26  e82513fcff           call 0x56ee50
// 005adb2b  dd00                 fld qword ptr [eax]
// 005adb2d  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 005adb30  8b5738               mov edx, dword ptr [edi + 0x38]
// 005adb33  83ec08               sub esp, 8
// 005adb36  03ce                 add ecx, esi
// 005adb38  dd1c24               fstp qword ptr [esp]
// 005adb3b  ffd2                 call edx
// 005adb3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005adb41  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005adb49  85c9                 test ecx, ecx
// 005adb4b  7408                 je 0x5adb55
// 005adb4d  8b01                 mov eax, dword ptr [ecx]
// 005adb4f  8b10                 mov edx, dword ptr [eax]
// 005adb51  6a01                 push 1
// 005adb53  ffd2                 call edx
// 005adb55  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005adb59  5f                   pop edi
// 005adb5a  5e                   pop esi
// 005adb5b  64890d00000000       mov dword ptr fs:[0], ecx
// 005adb62  83c420               add esp, 0x20
// 005adb65  c20800               ret 8

#include <typeinfo>
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Control
{
    virtual ~Control();
    virtual void unused();
    virtual Control *clone();

    static Control *copy(Control *);
};

inline Control *Control::copy(Control *p)
{
    if (p)
        return p->clone();
    return 0;
}

struct Value
{
    void *data;
    Control *control;

    Value(void *, Control *);
    ~Value();
    const double *number();
};

inline Value::Value(void *p, Control *c)
    : data(p), control(Control::copy(c))
{
}

inline Value::~Value()
{
    if (control)
        delete control;
}

struct Arguments
{
    virtual void unused();
    virtual void get(int, Value *);
};

namespace RBX { namespace Reflection { class DescribedBase { public: virtual ~DescribedBase(); }; } }
using RBX::Reflection::DescribedBase;

namespace RBX { class ScriptContext : public DescribedBase {}; }
using RBX::ScriptContext;



struct S
{
    char padding[0x38];
    void (__thiscall *callback)(void *, double);
    int adjustment;
    void *data;
    Control *control;

    void f(DescribedBase *, Arguments *);
};

void S::f(DescribedBase *object, Arguments *arguments)
{
    Value value(data, control);
    arguments->get(1, &value);

    ScriptContext *context = dynamic_cast<ScriptContext *>(object);
    if (!context)
        throw std::bad_cast("bad cast");

    callback(reinterpret_cast<char *>(context) + adjustment, *value.number());
}
