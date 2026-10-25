// from server: 100% by king_originala
// roc 2008-06 0059e3a0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059e3a0
//
// 0059e3a0  51                   push ecx
// 0059e3a1  85c9                 test ecx, ecx
// 0059e3a3  7405                 je 0x59e3aa
// 0059e3a5  8d4114               lea eax, [ecx + 0x14]
// 0059e3a8  eb02                 jmp 0x59e3ac
// 0059e3aa  33c0                 xor eax, eax
// 0059e3ac  50                   push eax
// 0059e3ad  b9d4619700           mov ecx, 0x9761d4
// 0059e3b2  e869d2fcff           call 0x56b620
// 0059e3b7  85c0                 test eax, eax
// 0059e3b9  740d                 je 0x59e3c8
// 0059e3bb  8d4c2403             lea ecx, [esp + 3]
// 0059e3bf  51                   push ecx
// 0059e3c0  8d4810               lea ecx, [eax + 0x10]
// 0059e3c3  e88875f1ff           call 0x4b5950
// 0059e3c8  59                   pop ecx
// 0059e3c9  c3                   ret 

struct Base {
    char value;
};

struct Signal {
    void invoke(char* value);
};

struct Object {
    char padding[16];
    Signal signal;
};

struct Descriptor {
    Object* lookup(Base* value);
};

extern Descriptor descriptor;

struct Padding {
    char bytes[20];
};

struct S : Padding, Base {
    void f();
};

void S::f()
{
    char value;
    Object* object = descriptor.lookup(static_cast<Base*>(this));
    if (object)
        object->signal.invoke(&value);
}
