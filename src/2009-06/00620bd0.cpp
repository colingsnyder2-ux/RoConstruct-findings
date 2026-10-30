// roc 2009-06 00620bd0  unit: TextXmlParser  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00620bd0
//
// 00620bd0  56                   push esi
// 00620bd1  8b742410             mov esi, dword ptr [esp + 0x10]
// 00620bd5  57                   push edi
// 00620bd6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00620bda  3bf7                 cmp esi, edi
// 00620bdc  7418                 je 0x620bf6
// 00620bde  8bff                 mov edi, edi
// 00620be0  8b0e                 mov ecx, dword ptr [esi]
// 00620be2  8b442428             mov eax, dword ptr [esp + 0x28]
// 00620be6  034c2424             add ecx, dword ptr [esp + 0x24]
// 00620bea  50                   push eax
// 00620beb  ff542424             call dword ptr [esp + 0x24]
// 00620bef  83c608               add esi, 8
// 00620bf2  3bf7                 cmp esi, edi
// 00620bf4  75ea                 jne 0x620be0
// 00620bf6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00620bfa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00620bfe  8b542424             mov edx, dword ptr [esp + 0x24]
// 00620c02  8908                 mov dword ptr [eax], ecx
// 00620c04  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00620c08  895004               mov dword ptr [eax + 4], edx
// 00620c0b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00620c0f  5f                   pop edi
// 00620c10  894808               mov dword ptr [eax + 8], ecx
// 00620c13  89500c               mov dword ptr [eax + 0xc], edx
// 00620c16  5e                   pop esi
// 00620c17  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YA?AUFunctor@@UIterator@@0U1@@Z)

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