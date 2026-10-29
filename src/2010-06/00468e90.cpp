// roc 2010-06 00468e90  unit: RBX::VInstance::?$NonFactoryProduct  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00468e90
//
// 00468e90  56                   push esi
// 00468e91  8b742410             mov esi, dword ptr [esp + 0x10]
// 00468e95  57                   push edi
// 00468e96  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00468e9a  3bf7                 cmp esi, edi
// 00468e9c  7418                 je 0x468eb6
// 00468e9e  8bff                 mov edi, edi
// 00468ea0  8b0e                 mov ecx, dword ptr [esi]
// 00468ea2  8b442428             mov eax, dword ptr [esp + 0x28]
// 00468ea6  034c2424             add ecx, dword ptr [esp + 0x24]
// 00468eaa  50                   push eax
// 00468eab  ff542424             call dword ptr [esp + 0x24]
// 00468eaf  83c608               add esi, 8
// 00468eb2  3bf7                 cmp esi, edi
// 00468eb4  75ea                 jne 0x468ea0
// 00468eb6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00468eba  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00468ebe  8b542424             mov edx, dword ptr [esp + 0x24]
// 00468ec2  8908                 mov dword ptr [eax], ecx
// 00468ec4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00468ec8  895004               mov dword ptr [eax + 4], edx
// 00468ecb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00468ecf  5f                   pop edi
// 00468ed0  894808               mov dword ptr [eax + 8], ecx
// 00468ed3  89500c               mov dword ptr [eax + 0xc], edx
// 00468ed6  5e                   pop esi
// 00468ed7  c3                   ret 
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