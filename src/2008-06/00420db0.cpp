// from server: 93% by king_originala
// roc 2008-06 00420db0  unit: CInstanceExplorer  size: 303 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420db0
//
// 00420db0  6aff                 push -1
// 00420db2  682fe87b00           push 0x7be82f
// 00420db7  64a100000000         mov eax, dword ptr fs:[0]
// 00420dbd  50                   push eax
// 00420dbe  64892500000000       mov dword ptr fs:[0], esp
// 00420dc5  83ec08               sub esp, 8
// 00420dc8  56                   push esi
// 00420dc9  8bf1                 mov esi, ecx
// 00420dcb  57                   push edi
// 00420dcc  89742408             mov dword ptr [esp + 8], esi
// 00420dd0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00420dd8  e8f3712b00           call 0x6d7fd0
// 00420ddd  8b442420             mov eax, dword ptr [esp + 0x20]
// 00420de1  c706e4f78000         mov dword ptr [esi], 0x80f7e4
// 00420de7  894654               mov dword ptr [esi + 0x54], eax
// 00420dea  8b442424             mov eax, dword ptr [esp + 0x24]
// 00420dee  894658               mov dword ptr [esi + 0x58], eax
// 00420df1  85c0                 test eax, eax
// 00420df3  740c                 je 0x420e01
// 00420df5  83c004               add eax, 4
// 00420df8  b901000000           mov ecx, 1
// 00420dfd  f00fc108             lock xadd dword ptr [eax], ecx
// 00420e01  6880000000           push 0x80
// 00420e06  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00420e0b  e8e0732a00           call 0x6c81f0
// 00420e10  8bf8                 mov edi, eax
// 00420e12  897c240c             mov dword ptr [esp + 0xc], edi
// 00420e16  c644241803           mov byte ptr [esp + 0x18], 3
// 00420e1b  85ff                 test edi, edi
// 00420e1d  7418                 je 0x420e37
// 00420e1f  55                   push ebp
// 00420e20  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00420e24  8bcf                 mov ecx, edi
// 00420e26  e815652a00           call 0x6c7340
// 00420e2b  896f7c               mov dword ptr [edi + 0x7c], ebp
// 00420e2e  c7075cf68000         mov dword ptr [edi], 0x80f65c
// 00420e34  5d                   pop ebp
// 00420e35  eb02                 jmp 0x420e39
// 00420e37  33ff                 xor edi, edi
// 00420e39  57                   push edi
// 00420e3a  8bce                 mov ecx, esi
// 00420e3c  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00420e41  e82a722b00           call 0x6d8070
// 00420e46  6880000000           push 0x80
// 00420e4b  e8a0732a00           call 0x6c81f0
// 00420e50  8bf8                 mov edi, eax
// 00420e52  897c240c             mov dword ptr [esp + 0xc], edi
// 00420e56  c644241804           mov byte ptr [esp + 0x18], 4
// 00420e5b  85ff                 test edi, edi
// 00420e5d  7422                 je 0x420e81
// 00420e5f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00420e63  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00420e66  8b4204               mov eax, dword ptr [edx + 4]
// 00420e69  83c110               add ecx, 0x10
// 00420e6c  ffd0                 call eax
// 00420e6e  8d4804               lea ecx, [eax + 4]
// 00420e71  ff1564248000         call dword ptr [0x802464]
// 00420e77  50                   push eax
// 00420e78  8bcf                 mov ecx, edi
// 00420e7a  e881772b00           call 0x6d8600
// 00420e7f  eb02                 jmp 0x420e83
// 00420e81  33c0                 xor eax, eax
// 00420e83  50                   push eax
// 00420e84  8bce                 mov ecx, esi
// 00420e86  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00420e8b  e8e0712b00           call 0x6d8070
// 00420e90  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00420e94  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00420e9c  85ff                 test edi, edi
// 00420e9e  742a                 je 0x420eca
// 00420ea0  8d4f04               lea ecx, [edi + 4]
// 00420ea3  83caff               or edx, 0xffffffff
// 00420ea6  f00fc111             lock xadd dword ptr [ecx], edx
// 00420eaa  751e                 jne 0x420eca
// 00420eac  8b07                 mov eax, dword ptr [edi]
// 00420eae  8b5004               mov edx, dword ptr [eax + 4]
// 00420eb1  8bcf                 mov ecx, edi
// 00420eb3  ffd2                 call edx
// 00420eb5  8d4708               lea eax, [edi + 8]
// 00420eb8  83c9ff               or ecx, 0xffffffff
// 00420ebb  f00fc108             lock xadd dword ptr [eax], ecx
// 00420ebf  7509                 jne 0x420eca
// 00420ec1  8b17                 mov edx, dword ptr [edi]
// 00420ec3  8b4208               mov eax, dword ptr [edx + 8]
// 00420ec6  8bcf                 mov ecx, edi
// 00420ec8  ffd0                 call eax
// 00420eca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00420ece  5f                   pop edi
// 00420ecf  8bc6                 mov eax, esi
// 00420ed1  5e                   pop esi
// 00420ed2  64890d00000000       mov dword ptr fs:[0], ecx
// 00420ed9  83c414               add esp, 0x14
// 00420edc  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct String
{
    char storage[28];
};

extern const char* (__thiscall *stringData)(const String&);

struct Name
{
    long reserved;
    String text;
};

struct Named
{
    virtual void reserved();
    virtual Name* getName();
};

struct Instance
{
    char storage[16];
    Named named;
};

struct Shared
{
    Instance* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
    {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p)
    {
        volatile long* count = &p->strong;
        if (_InterlockedExchangeAdd(count, -1) == 0)
        {
            p->dispose();
            count = &p->weak;
            if (_InterlockedExchangeAdd(count, -1) == 0)
                p->destroy();
        }
    }
}

struct Item
{
    virtual ~Item();
    char storage[0x78];
    Item();
    static void* __stdcall operator new(unsigned int);
    static void __stdcall operator delete(void*);
};

struct NameItem : Item
{
    Instance* instance;
    NameItem(Instance*);
    virtual ~NameItem();
};

inline NameItem::NameItem(Instance* p)
    : instance(p)
{
}

struct TextItem : Item
{
    char storage[4];
    TextItem(const char*);
};

struct Record
{
    virtual ~Record();
    char storage[0x50];
    Record();
    Item* addItem(Item*);
};

struct InstanceRecord : Record
{
    Shared instance;
    InstanceRecord(Shared);
    virtual ~InstanceRecord();
};

InstanceRecord::InstanceRecord(Shared p)
    : instance(p)
{
    addItem(new NameItem(p.object));
    addItem(new TextItem(stringData(p.object->named.getName()->text)));
}
