// from server: 100% by king_originala
// roc 2008-06 0063dda0  unit: RBX::AnchorTool  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063dda0
//
// 0063dda0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0063dda3  85c0                 test eax, eax
// 0063dda5  742b                 je 0x63ddd2
// 0063dda7  6a00                 push 0
// 0063dda9  68709f9300           push 0x939f70
// 0063ddae  687c909200           push 0x92907c
// 0063ddb3  6a00                 push 0
// 0063ddb5  50                   push eax
// 0063ddb6  e80b3a0600           call 0x6a17c6
// 0063ddbb  83c414               add esp, 0x14
// 0063ddbe  85c0                 test eax, eax
// 0063ddc0  7410                 je 0x63ddd2
// 0063ddc2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063ddc6  8b10                 mov edx, dword ptr [eax]
// 0063ddc8  8b5210               mov edx, dword ptr [edx + 0x10]
// 0063ddcb  6a00                 push 0
// 0063ddcd  51                   push ecx
// 0063ddce  8bc8                 mov ecx, eax
// 0063ddd0  ffd2                 call edx
// 0063ddd2  c20400               ret 4

extern char sourceType[];
extern char targetType[];

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

struct Renderable {
    typedef void (__thiscall *Method)(Renderable*, void*, int);
    Method* vtable;
};

struct S {
    char padding[24];
    void* instance;
    void f(void* argument);
};

void S::f(void* argument)
{
    if (instance) {
        Renderable* object = static_cast<Renderable*>(
            __RTDynamicCast(instance, 0, sourceType, targetType, 0));
        if (object)
            object->vtable[4](object, argument, 0);
    }
}
