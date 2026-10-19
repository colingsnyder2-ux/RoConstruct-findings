// from server: 68% by colin
// from server: 65% by king_originala
// roc 2008-06 0066f570  unit: RBX::AssemblyStage  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066f570
//
// 0066f570  83ec08               sub esp, 8
// 0066f573  53                   push ebx
// 0066f574  55                   push ebp
// 0066f575  56                   push esi
// 0066f576  57                   push edi
// 0066f577  8bf9                 mov edi, ecx
// 0066f579  8b4748               mov eax, dword ptr [edi + 0x48]
// 0066f57c  8b28                 mov ebp, dword ptr [eax]
// 0066f57e  8b7730               mov esi, dword ptr [edi + 0x30]
// 0066f581  896c2414             mov dword ptr [esp + 0x14], ebp
// 0066f585  89742410             mov dword ptr [esp + 0x10], esi
// 0066f589  8da42400000000       lea esp, [esp]
// 0066f590  8b5f48               mov ebx, dword ptr [edi + 0x48]
// 0066f593  8b4730               mov eax, dword ptr [edi + 0x30]
// 0066f596  85f6                 test esi, esi
// 0066f598  7404                 je 0x66f59e
// 0066f59a  3bf0                 cmp esi, eax
// 0066f59c  7406                 je 0x66f5a4
// 0066f59e  ff1590288000         call dword ptr [0x802890]
// 0066f5a4  3beb                 cmp ebp, ebx
// 0066f5a6  7436                 je 0x66f5de
// 0066f5a8  85f6                 test esi, esi
// 0066f5aa  752e                 jne 0x66f5da
// 0066f5ac  ff1590288000         call dword ptr [0x802890]
// 0066f5b2  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 0066f5b5  7506                 jne 0x66f5bd
// 0066f5b7  ff1590288000         call dword ptr [0x802890]
// 0066f5bd  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0066f5c0  8b11                 mov edx, dword ptr [ecx]
// 0066f5c2  8b4234               mov eax, dword ptr [edx + 0x34]
// 0066f5c5  ffd0                 call eax
// 0066f5c7  8d4c2410             lea ecx, [esp + 0x10]
// 0066f5cb  e8709df7ff           call 0x5e9340
// 0066f5d0  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0066f5d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066f5d8  ebb6                 jmp 0x66f590
// 0066f5da  8b36                 mov esi, dword ptr [esi]
// 0066f5dc  ebd4                 jmp 0x66f5b2
// 0066f5de  8b4f08               mov ecx, dword ptr [edi + 8]
// 0066f5e1  8b11                 mov edx, dword ptr [ecx]
// 0066f5e3  5f                   pop edi
// 0066f5e4  5e                   pop esi
// 0066f5e5  5d                   pop ebp
// 0066f5e6  5b                   pop ebx
// 0066f5e7  83c408               add esp, 8
// 0066f5ea  8b5208               mov edx, dword ptr [edx + 8]
// 0066f5ed  ffe2                 jmp edx
#include <intrin.h>

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Object
{
    virtual void v0();
    virtual void v1();
    virtual void finish();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void process();
};

struct Node
{
    Node* left;
    Node* parent;
    Node* right;
    Object* value;
};

struct Container
{
    char padding[24];
    Node* head;
};

struct Proxy
{
    Container* container;
};

struct Iterator
{
    Proxy* owner;
    Node* node;
    void advance();
};

struct S
{
    char padding0[8];
    Object* next;
    char padding1[36];
    Proxy* owner;
    char padding2[20];
    Node* head;
    void f();
};

void S::f()
{
    Iterator it;
    _ReadWriteBarrier();
    it.node = head->left;
    it.owner = owner;

    Node* node = it.node;
    Proxy* proxy = it.owner;

    for (;;)
    {
        Iterator end;
        end.node = head;
        end.owner = owner;

        if (!proxy || proxy != end.owner)
            invalid_parameter_noinfo();

        if (node == end.node)
            break;

        if (!proxy)
            invalid_parameter_noinfo();
        else
            proxy = reinterpret_cast<Proxy*>(proxy->container);

        if (node == reinterpret_cast<Container*>(proxy)->head)
            invalid_parameter_noinfo();

        node->value->process();
        it.advance();
        node = it.node;
        proxy = it.owner;
    }

    return next->finish();
}
