// from server: 100% by king_originala
// roc 2008-06 005903f0  unit: RBX::RootInstance  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005903f0
//
// 005903f0  56                   push esi
// 005903f1  8b742410             mov esi, dword ptr [esp + 0x10]
// 005903f5  57                   push edi
// 005903f6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005903fa  3bf7                 cmp esi, edi
// 005903fc  7418                 je 0x590416
// 005903fe  8bff                 mov edi, edi
// 00590400  8b0e                 mov ecx, dword ptr [esi]
// 00590402  8b442428             mov eax, dword ptr [esp + 0x28]
// 00590406  034c2424             add ecx, dword ptr [esp + 0x24]
// 0059040a  50                   push eax
// 0059040b  ff542424             call dword ptr [esp + 0x24]
// 0059040f  83c608               add esi, 8
// 00590412  3bf7                 cmp esi, edi
// 00590414  75ea                 jne 0x590400
// 00590416  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0059041a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059041e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00590422  8908                 mov dword ptr [eax], ecx
// 00590424  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00590428  895004               mov dword ptr [eax + 4], edx
// 0059042b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059042f  5f                   pop edi
// 00590430  894808               mov dword ptr [eax + 8], ecx
// 00590433  89500c               mov dword ptr [eax + 0xc], edx
// 00590436  5e                   pop esi
// 00590437  c3                   ret 

struct __multiple_inheritance Object;

struct Entry
{
    Object* object;
    int unused;
};

struct Iterator
{
    int unused;
    Entry* position;
};

struct Functor
{
    void (Object::*callback)(int);
    int argument;
    int unused;
};

Functor func_005903f0(Iterator first, Iterator last, Functor function)
{
    Entry* current = first.position;
    Entry* end = last.position;
    for (; current != end; ++current)
        (current->object->*function.callback)(function.argument);

    return function;
}
