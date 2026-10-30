// roc 2009-12 0068ca50  unit: RBX::RootInstance  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068ca50
//
// 0068ca50  56                   push esi
// 0068ca51  8b742410             mov esi, dword ptr [esp + 0x10]
// 0068ca55  57                   push edi
// 0068ca56  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0068ca5a  3bf7                 cmp esi, edi
// 0068ca5c  7418                 je 0x68ca76
// 0068ca5e  8bff                 mov edi, edi
// 0068ca60  8b0e                 mov ecx, dword ptr [esi]
// 0068ca62  8b442428             mov eax, dword ptr [esp + 0x28]
// 0068ca66  034c2424             add ecx, dword ptr [esp + 0x24]
// 0068ca6a  50                   push eax
// 0068ca6b  ff542424             call dword ptr [esp + 0x24]
// 0068ca6f  83c608               add esi, 8
// 0068ca72  3bf7                 cmp esi, edi
// 0068ca74  75ea                 jne 0x68ca60
// 0068ca76  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0068ca7a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0068ca7e  8b542424             mov edx, dword ptr [esp + 0x24]
// 0068ca82  8908                 mov dword ptr [eax], ecx
// 0068ca84  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0068ca88  895004               mov dword ptr [eax + 4], edx
// 0068ca8b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0068ca8f  5f                   pop edi
// 0068ca90  894808               mov dword ptr [eax + 8], ecx
// 0068ca93  89500c               mov dword ptr [eax + 0xc], edx
// 0068ca96  5e                   pop esi
// 0068ca97  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_005903f0@@YA?AUFunctor@@UIterator@@0U1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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