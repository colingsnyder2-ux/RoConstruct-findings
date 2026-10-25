// from server: 100% by king_originala
// roc 2008-06 004c7e80  unit: RBX::VInstance::?$Association::Item  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c7e80
//
// 004c7e80  85c9                 test ecx, ecx
// 004c7e82  7405                 je 0x4c7e89
// 004c7e84  8d41f4               lea eax, [ecx - 0xc]
// 004c7e87  eb02                 jmp 0x4c7e8b
// 004c7e89  33c0                 xor eax, eax
// 004c7e8b  56                   push esi
// 004c7e8c  57                   push edi
// 004c7e8d  8b7804               mov edi, dword ptr [eax + 4]
// 004c7e90  85c9                 test ecx, ecx
// 004c7e92  7405                 je 0x4c7e99
// 004c7e94  8d41f4               lea eax, [ecx - 0xc]
// 004c7e97  eb02                 jmp 0x4c7e9b
// 004c7e99  33c0                 xor eax, eax
// 004c7e9b  8b5004               mov edx, dword ptr [eax + 4]
// 004c7e9e  85c9                 test ecx, ecx
// 004c7ea0  7405                 je 0x4c7ea7
// 004c7ea2  8d41f4               lea eax, [ecx - 0xc]
// 004c7ea5  eb02                 jmp 0x4c7ea9
// 004c7ea7  33c0                 xor eax, eax
// 004c7ea9  8b4004               mov eax, dword ptr [eax + 4]
// 004c7eac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c7eb0  0580020000           add eax, 0x280
// 004c7eb5  85f6                 test esi, esi
// 004c7eb7  7408                 je 0x4c7ec1
// 004c7eb9  8d8e80020000         lea ecx, [esi + 0x280]
// 004c7ebf  eb02                 jmp 0x4c7ec3
// 004c7ec1  33c9                 xor ecx, ecx
// 004c7ec3  81c788020000         add edi, 0x288
// 004c7ec9  57                   push edi
// 004c7eca  81c284020000         add edx, 0x284
// 004c7ed0  52                   push edx
// 004c7ed1  50                   push eax
// 004c7ed2  51                   push ecx
// 004c7ed3  e808ebffff           call 0x4c69e0
// 004c7ed8  83c410               add esp, 0x10
// 004c7edb  8bce                 mov ecx, esi
// 004c7edd  e86e7afeff           call 0x4af950
// 004c7ee2  5f                   pop edi
// 004c7ee3  5e                   pop esi
// 004c7ee4  c20400               ret 4

struct Object;

struct Link {
    Object* first;
    Object* second;
    Object* third;
};

struct Object {
    char padding[0x280];
    Link link;
    void release();
};

struct Prefix {
    unsigned long reserved0;
    Object* object;
    unsigned long reserved1;
};

struct Item {
    unsigned long reserved;
    void f(Object* value);
};

struct Owner : Prefix, Item {
};

extern void __cdecl update(Link*, Link*, Object**, Object**);

void Item::f(Object* value)
{
    Object* third = static_cast<Owner*>(this)->object;
    Object* second = static_cast<Owner*>(this)->object;
    Link* first = &static_cast<Owner*>(this)->object->link;
    Link* incoming = value ? &value->link : 0;

    update(incoming, first, &second->link.second, &third->link.third);
    value->release();
}
