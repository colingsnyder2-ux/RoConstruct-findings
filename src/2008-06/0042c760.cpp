// from server: 84% by colin
// from server: 76% by king_originala
// roc 2008-06 0042c760  unit: CLuaHtmlView::Binder  size: 338 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042c760
//
// 0042c760  6aff                 push -1
// 0042c762  683bf77b00           push 0x7bf73b
// 0042c767  64a100000000         mov eax, dword ptr fs:[0]
// 0042c76d  50                   push eax
// 0042c76e  64892500000000       mov dword ptr fs:[0], esp
// 0042c775  83ec08               sub esp, 8
// 0042c778  53                   push ebx
// 0042c779  55                   push ebp
// 0042c77a  56                   push esi
// 0042c77b  57                   push edi
// 0042c77c  8bd9                 mov ebx, ecx
// 0042c77e  33f6                 xor esi, esi
// 0042c780  6a20                 push 0x20
// 0042c782  89742424             mov dword ptr [esp + 0x24], esi
// 0042c786  e895412700           call 0x6a0920
// 0042c78b  83c404               add esp, 4
// 0042c78e  89442410             mov dword ptr [esp + 0x10], eax
// 0042c792  c644242001           mov byte ptr [esp + 0x20], 1
// 0042c797  3bc6                 cmp eax, esi
// 0042c799  7439                 je 0x42c7d4
// 0042c79b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0042c79f  53                   push ebx
// 0042c7a0  51                   push ecx
// 0042c7a1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0042c7a5  83ec08               sub esp, 8
// 0042c7a8  8bd4                 mov edx, esp
// 0042c7aa  890a                 mov dword ptr [edx], ecx
// 0042c7ac  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0042c7b0  894a04               mov dword ptr [edx + 4], ecx
// 0042c7b3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0042c7b7  89642440             mov dword ptr [esp + 0x40], esp
// 0042c7bb  3bce                 cmp ecx, esi
// 0042c7bd  740c                 je 0x42c7cb
// 0042c7bf  83c104               add ecx, 4
// 0042c7c2  ba01000000           mov edx, 1
// 0042c7c7  f00fc111             lock xadd dword ptr [ecx], edx
// 0042c7cb  8bc8                 mov ecx, eax
// 0042c7cd  e85efeffff           call 0x42c630
// 0042c7d2  8bf0                 mov esi, eax
// 0042c7d4  56                   push esi
// 0042c7d5  8d4c2418             lea ecx, [esp + 0x18]
// 0042c7d9  c644242400           mov byte ptr [esp + 0x24], 0
// 0042c7de  89742414             mov dword ptr [esp + 0x14], esi
// 0042c7e2  e899eaffff           call 0x42b280
// 0042c7e7  56                   push esi
// 0042c7e8  8d442418             lea eax, [esp + 0x18]
// 0042c7ec  56                   push esi
// 0042c7ed  50                   push eax
// 0042c7ee  e81d0c0500           call 0x47d410
// 0042c7f3  83c40c               add esp, 0xc
// 0042c7f6  8b7b20               mov edi, dword ptr [ebx + 0x20]
// 0042c7f9  8b5704               mov edx, dword ptr [edi + 4]
// 0042c7fc  8d730c               lea esi, [ebx + 0xc]
// 0042c7ff  8d4c2410             lea ecx, [esp + 0x10]
// 0042c803  51                   push ecx
// 0042c804  52                   push edx
// 0042c805  57                   push edi
// 0042c806  8bce                 mov ecx, esi
// 0042c808  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0042c80d  e84e100800           call 0x4ad860
// 0042c812  6a01                 push 1
// 0042c814  8bce                 mov ecx, esi
// 0042c816  8be8                 mov ebp, eax
// 0042c818  e833030800           call 0x4acb50
// 0042c81d  8b742414             mov esi, dword ptr [esp + 0x14]
// 0042c821  896f04               mov dword ptr [edi + 4], ebp
// 0042c824  8b4504               mov eax, dword ptr [ebp + 4]
// 0042c827  8928                 mov dword ptr [eax], ebp
// 0042c829  c644242000           mov byte ptr [esp + 0x20], 0
// 0042c82e  85f6                 test esi, esi
// 0042c830  742a                 je 0x42c85c
// 0042c832  8d4604               lea eax, [esi + 4]
// 0042c835  83c9ff               or ecx, 0xffffffff
// 0042c838  f00fc108             lock xadd dword ptr [eax], ecx
// 0042c83c  751e                 jne 0x42c85c
// 0042c83e  8b16                 mov edx, dword ptr [esi]
// 0042c840  8b4204               mov eax, dword ptr [edx + 4]
// 0042c843  8bce                 mov ecx, esi
// 0042c845  ffd0                 call eax
// 0042c847  8d4e08               lea ecx, [esi + 8]
// 0042c84a  83caff               or edx, 0xffffffff
// 0042c84d  f00fc111             lock xadd dword ptr [ecx], edx
// 0042c851  7509                 jne 0x42c85c
// 0042c853  8b06                 mov eax, dword ptr [esi]
// 0042c855  8b5008               mov edx, dword ptr [eax + 8]
// 0042c858  8bce                 mov ecx, esi
// 0042c85a  ffd2                 call edx
// 0042c85c  8bcb                 mov ecx, ebx
// 0042c85e  e8bdf5ffff           call 0x42be20
// 0042c863  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0042c867  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0042c86f  85f6                 test esi, esi
// 0042c871  742a                 je 0x42c89d
// 0042c873  8d4604               lea eax, [esi + 4]
// 0042c876  83c9ff               or ecx, 0xffffffff
// 0042c879  f00fc108             lock xadd dword ptr [eax], ecx
// 0042c87d  751e                 jne 0x42c89d
// 0042c87f  8b16                 mov edx, dword ptr [esi]
// 0042c881  8b4204               mov eax, dword ptr [edx + 4]
// 0042c884  8bce                 mov ecx, esi
// 0042c886  ffd0                 call eax
// 0042c888  8d4e08               lea ecx, [esi + 8]
// 0042c88b  83caff               or edx, 0xffffffff
// 0042c88e  f00fc111             lock xadd dword ptr [ecx], edx
// 0042c892  7509                 jne 0x42c89d
// 0042c894  8b06                 mov eax, dword ptr [esi]
// 0042c896  8b5008               mov edx, dword ptr [eax + 8]
// 0042c899  8bce                 mov ecx, esi
// 0042c89b  ffd2                 call edx
// 0042c89d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042c8a1  5f                   pop edi
// 0042c8a2  5e                   pop esi
// 0042c8a3  5d                   pop ebp
// 0042c8a4  64890d00000000       mov dword ptr fs:[0], ecx
// 0042c8ab  5b                   pop ebx
// 0042c8ac  83c414               add esp, 0x14
// 0042c8af  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct CountBase {
    long strong;
    long weak;
    CountBase();
    virtual ~CountBase();
    virtual void dispose() = 0;
    virtual void destroy();
};

struct Payload;

struct CountHandle {
    CountBase* value;
    CountHandle(Payload*);
    ~CountHandle();
};

CountHandle::~CountHandle()
{
    CountBase* p = value;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Shared {
    Payload* value;
    CountHandle count;
    Shared(Payload*);
    Shared(const Shared&);
};

Shared::Shared(Payload* p) : value(p), count(p)
{
}

Shared::Shared(const Shared& p) : value(p.value), count(p.count)
{
    if (count.value)
        _InterlockedIncrement(&count.value->strong);
}

struct Binder;

struct Payload {
    char storage[32];
    Payload(Shared, int, Binder*);
};

void __cdecl prepare(CountHandle*, Payload*, Payload*);

struct Node {
    Node* next;
    Node* previous;
};

struct List {
    char storage[20];
    Node* head;
    Node* insert(Node*, Node*, const Shared*);
    void grow(unsigned int);
};

struct Binder {
    char storage[12];
    List list;
    void update();
    void bind(Shared, int);
};

void Binder::bind(Shared source, int argument)
{
    {
        Payload* p = new Payload(source, argument, this);
        Shared item(p);
        prepare(&item.count, p, p);

        Node* head = list.head;
        Node* node = list.insert(head, head->previous, &item);
        list.grow(1);
        head->previous = node;
        node->previous->next = node;
    }
    update();
}
