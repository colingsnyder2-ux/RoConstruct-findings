// from server: 85% by colin
// from server: 82% by colin
// roc 2008-06 00572a90  unit: RBX::ServiceProvider  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00572a90
//
// 00572a90  83ec08               sub esp, 8
// 00572a93  53                   push ebx
// 00572a94  56                   push esi
// 00572a95  8db1a8010000         lea esi, [ecx + 0x1a8]
// 00572a9b  57                   push edi
// 00572a9c  8d4c241c             lea ecx, [esp + 0x1c]
// 00572aa0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00572aa8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00572aac  51                   push ecx
// 00572aad  8d542410             lea edx, [esp + 0x10]
// 00572ab1  52                   push edx
// 00572ab2  8bce                 mov ecx, esi
// 00572ab4  89442424             mov dword ptr [esp + 0x24], eax
// 00572ab8  e813f10100           call 0x591bd0
// 00572abd  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00572ac1  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00572ac4  8b36                 mov esi, dword ptr [esi]
// 00572ac6  85ff                 test edi, edi
// 00572ac8  7404                 je 0x572ace
// 00572aca  3bfe                 cmp edi, esi
// 00572acc  7406                 je 0x572ad4
// 00572ace  ff1590288000         call dword ptr [0x802890]
// 00572ad4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00572ad8  3bf3                 cmp esi, ebx
// 00572ada  7441                 je 0x572b1d
// 00572adc  85ff                 test edi, edi
// 00572ade  7539                 jne 0x572b19
// 00572ae0  ff1590288000         call dword ptr [0x802890]
// 00572ae6  3b7718               cmp esi, dword ptr [edi + 0x18]
// 00572ae9  7506                 jne 0x572af1
// 00572aeb  ff1590288000         call dword ptr [0x802890]
// 00572af1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00572af4  8b442418             mov eax, dword ptr [esp + 0x18]
// 00572af8  8908                 mov dword ptr [eax], ecx
// 00572afa  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00572afd  894804               mov dword ptr [eax + 4], ecx
// 00572b00  85c9                 test ecx, ecx
// 00572b02  742a                 je 0x572b2e
// 00572b04  83c104               add ecx, 4
// 00572b07  ba01000000           mov edx, 1
// 00572b0c  f00fc111             lock xadd dword ptr [ecx], edx
// 00572b10  5f                   pop edi
// 00572b11  5e                   pop esi
// 00572b12  5b                   pop ebx
// 00572b13  83c408               add esp, 8
// 00572b16  c20800               ret 8
// 00572b19  8b3f                 mov edi, dword ptr [edi]
// 00572b1b  ebc9                 jmp 0x572ae6
// 00572b1d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00572b21  c70000000000         mov dword ptr [eax], 0
// 00572b27  c7400400000000       mov dword ptr [eax + 4], 0
// 00572b2e  5f                   pop edi
// 00572b2f  5e                   pop esi
// 00572b30  5b                   pop ebx
// 00572b31  83c408               add esp, 8
// 00572b34  c20800               ret 8

#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Control
{
    long unused;
    volatile long references;
};

struct Value
{
    void* object;
    Control* control;
};

struct Node
{
    char unused[16];
    Value value;
};

struct Tree;

struct Proxy
{
    Tree* container;
};

struct Iterator
{
    Proxy* proxy;
    Node* node;
};

struct Tree
{
    Proxy* proxy;
    char unused[20];
    Node* head;

    void find(Iterator*, const int*);
};

struct S
{
    char unused[424];
    Tree tree;

    Value* func_00572a90(Value*, int);
};

Value* S::func_00572a90(Value* result, int key)
{
    Tree* container = &tree;
    Iterator position;
    position.proxy = 0;
    int lookup = key;
    container->find(&position, &lookup);

    Proxy* proxy = position.proxy;
    _ReadWriteBarrier();
    Node* head = container->head;
    Proxy* root = container->proxy;
    _ReadWriteBarrier();

    if (!proxy || proxy != root)
        _invalid_parameter_noinfo();

    Node* node = position.node;
    if (node != head)
    {
        if (!proxy)
            _invalid_parameter_noinfo();
        else
            proxy = reinterpret_cast<Proxy*>(proxy->container);

        if (node == reinterpret_cast<Tree*>(proxy)->head)
            _invalid_parameter_noinfo();

        result->object = node->value.object;
        result->control = node->value.control;
        if (result->control)
            _InterlockedExchangeAdd(&result->control->references, 1);
    }
    else
    {
        result->object = 0;
        result->control = 0;
    }

    return result;
}
