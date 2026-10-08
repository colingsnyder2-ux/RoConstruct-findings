// from server: 80% by colin
// roc 2007-08 005b4fd0  unit: RBX::Primitive  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4fd0
//
// 005b4fd0  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 005b4fd3  8b01                 mov eax, dword ptr [ecx]
// 005b4fd5  8b5010               mov edx, dword ptr [eax + 0x10]
// 005b4fd8  ffe2                 jmp edx

struct Primitive {
    struct Inner {
        struct Vtbl {
            char pad[0x10];
            void* (__stdcall *fn)();
        };
        Vtbl* vtbl;
    };
    char pad[0x60];
    Inner* inner;
    void* method();
};

void* Primitive::method()
{
    Inner* p = inner;
    return p->vtbl->fn();
}
