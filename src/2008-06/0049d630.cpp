// from server: 74% by colin
// from server: 73% by king_originala
// roc 2008-06 0049d630  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049d630
//
// 0049d630  6aff                 push -1
// 0049d632  64a100000000         mov eax, dword ptr fs:[0]
// 0049d638  6808747c00           push 0x7c7408
// 0049d63d  50                   push eax
// 0049d63e  64892500000000       mov dword ptr fs:[0], esp
// 0049d645  83ec08               sub esp, 8
// 0049d648  53                   push ebx
// 0049d649  55                   push ebp
// 0049d64a  56                   push esi
// 0049d64b  8be9                 mov ebp, ecx
// 0049d64d  8b858c010000         mov eax, dword ptr [ebp + 0x18c]
// 0049d653  57                   push edi
// 0049d654  8b38                 mov edi, dword ptr [eax]
// 0049d656  8b442428             mov eax, dword ptr [esp + 0x28]
// 0049d65a  8b4f04               mov ecx, dword ptr [edi + 4]
// 0049d65d  8db578010000         lea esi, [ebp + 0x178]
// 0049d663  50                   push eax
// 0049d664  51                   push ecx
// 0049d665  57                   push edi
// 0049d666  8bce                 mov ecx, esi
// 0049d668  e8f3a1ffff           call 0x497860
// 0049d66d  6a01                 push 1
// 0049d66f  8bce                 mov ecx, esi
// 0049d671  8bd8                 mov ebx, eax
// 0049d673  e87899ffff           call 0x496ff0
// 0049d678  895f04               mov dword ptr [edi + 4], ebx
// 0049d67b  8b4304               mov eax, dword ptr [ebx + 4]
// 0049d67e  8918                 mov dword ptr [eax], ebx
// 0049d680  8bbd90010000         mov edi, dword ptr [ebp + 0x190]
// 0049d686  e855e8faff           call 0x44bee0
// 0049d68b  3bb830010000         cmp edi, dword ptr [eax + 0x130]
// 0049d691  7648                 jbe 0x49d6db
// 0049d693  8b3e                 mov edi, dword ptr [esi]
// 0049d695  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 0049d698  85ff                 test edi, edi
// 0049d69a  7506                 jne 0x49d6a2
// 0049d69c  ff1590288000         call dword ptr [0x802890]
// 0049d6a2  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0049d6a5  85ff                 test edi, edi
// 0049d6a7  7404                 je 0x49d6ad
// 0049d6a9  8b07                 mov eax, dword ptr [edi]
// 0049d6ab  eb02                 jmp 0x49d6af
// 0049d6ad  33c0                 xor eax, eax
// 0049d6af  3b5814               cmp ebx, dword ptr [eax + 0x14]
// 0049d6b2  7506                 jne 0x49d6ba
// 0049d6b4  ff1590288000         call dword ptr [0x802890]
// 0049d6ba  53                   push ebx
// 0049d6bb  57                   push edi
// 0049d6bc  8d542418             lea edx, [esp + 0x18]
// 0049d6c0  52                   push edx
// 0049d6c1  8bce                 mov ecx, esi
// 0049d6c3  e8a8b1ffff           call 0x498870
// 0049d6c8  8bbd90010000         mov edi, dword ptr [ebp + 0x190]
// 0049d6ce  e80de8faff           call 0x44bee0
// 0049d6d3  3bb830010000         cmp edi, dword ptr [eax + 0x130]
// 0049d6d9  77b8                 ja 0x49d693
// 0049d6db  8b742428             mov esi, dword ptr [esp + 0x28]
// 0049d6df  83ec48               sub esp, 0x48
// 0049d6e2  8bcc                 mov ecx, esp
// 0049d6e4  89642458             mov dword ptr [esp + 0x58], esp
// 0049d6e8  56                   push esi
// 0049d6e9  e8928dffff           call 0x496480
// 0049d6ee  8d8d30010000         lea ecx, [ebp + 0x130]
// 0049d6f4  e89796ffff           call 0x496d90
// 0049d6f9  8b4638               mov eax, dword ptr [esi + 0x38]
// 0049d6fc  85c0                 test eax, eax
// 0049d6fe  7405                 je 0x49d705
// 0049d700  8d7814               lea edi, [eax + 0x14]
// 0049d703  eb02                 jmp 0x49d707
// 0049d705  33ff                 xor edi, edi
// 0049d707  8b4640               mov eax, dword ptr [esi + 0x40]
// 0049d70a  83ec08               sub esp, 8
// 0049d70d  8bcc                 mov ecx, esp
// 0049d70f  8901                 mov dword ptr [ecx], eax
// 0049d711  8b4644               mov eax, dword ptr [esi + 0x44]
// 0049d714  89642430             mov dword ptr [esp + 0x30], esp
// 0049d718  894104               mov dword ptr [ecx + 4], eax
// 0049d71b  85c0                 test eax, eax
// 0049d71d  740c                 je 0x49d72b
// 0049d71f  83c004               add eax, 4
// 0049d722  b901000000           mov ecx, 1
// 0049d727  f00fc108             lock xadd dword ptr [eax], ecx
// 0049d72b  83ec1c               sub esp, 0x1c
// 0049d72e  83c61c               add esi, 0x1c
// 0049d731  8bcc                 mov ecx, esp
// 0049d733  89642434             mov dword ptr [esp + 0x34], esp
// 0049d737  56                   push esi
// 0049d738  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0049d740  ff155c248000         call dword ptr [0x80245c]
// 0049d746  57                   push edi
// 0049d747  b9a0fc9600           mov ecx, 0x96fca0
// 0049d74c  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0049d754  e857fbffff           call 0x49d2b0
// 0049d759  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049d75d  5f                   pop edi
// 0049d75e  5e                   pop esi
// 0049d75f  5d                   pop ebp
// 0049d760  64890d00000000       mov dword ptr fs:[0], ecx
// 0049d767  5b                   pop ebx
// 0049d768  83c414               add esp, 0x14
// 0049d76b  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char storage[28];
    __declspec(dllimport) String(const String&);
    ~String();
};

extern void (__thiscall *stringCopy)(String*, const String&);
extern "C" void (__cdecl *invalidParameter)();

struct Control {
    long unused;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->references, 1);
}

struct Object {
    char padding[20];
    char value;
};

struct E {
    char padding[28];
    String text;
    Object* object;
    unsigned unused;
    Shared shared;

    E(const E&);
    ~E();
};

struct Node {
    Node* next;
    Node* previous;
    E value;
};

struct List;

struct Proxy {
    List* owner;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
};

struct List {
    Proxy* proxy;
    char padding[16];
    Node* head;
    unsigned size;

    Node* allocate(Node*, Node*, const E&);
    void grow(unsigned);
    Iterator erase(Iterator);
};

struct Consumer {
    char storage[72];
    void consume(E);
};

struct Configuration {
    char padding[304];
    unsigned limit;
};

extern Configuration* __cdecl configuration();

struct Dispatcher {
    void send(void*, String, Shared);
};

struct S {
    char padding[304];
    Consumer consumer;
    List list;

    void f(const E*);
};

void S::f(const E* value) {
    Node* head = list.head;
    Node* node = list.allocate(head, head->previous, *value);
    list.grow(1);
    head->previous = node;
    node->previous->next = node;

    while (list.size > configuration()->limit) {
        Proxy* proxy = list.proxy;
        Node* first = list.head;

        if (!proxy)
            invalidParameter();

        first = first->previous;
        List* owner = proxy ? proxy->owner : 0;

        if (first == owner->head)
            invalidParameter();

        Iterator position;
        position.proxy = proxy;
        position.node = first;
        list.erase(position);
    }

    consumer.consume(*value);

    void* object = value->object ? &value->object->value : 0;
    reinterpret_cast<Dispatcher*>(0x96fca0)->send(
        object, value->text, value->shared);
}
