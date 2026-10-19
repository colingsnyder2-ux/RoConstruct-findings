// from server: 77% by colin
// from server: 76% by king_originala
// roc 2008-06 00580c00  unit: RBX::GroupSelectionVerb  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00580c00
//
// 00580c00  83ec10               sub esp, 0x10
// 00580c03  53                   push ebx
// 00580c04  56                   push esi
// 00580c05  8bd9                 mov ebx, ecx
// 00580c07  8b7320               mov esi, dword ptr [ebx + 0x20]
// 00580c0a  57                   push edi
// 00580c0b  e840c6ffff           call 0x57d250
// 00580c10  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00580c13  85c9                 test ecx, ecx
// 00580c15  740d                 je 0x580c24
// 00580c17  e89447e9ff           call 0x4153b0
// 00580c1c  8bf8                 mov edi, eax
// 00580c1e  897c240c             mov dword ptr [esp + 0xc], edi
// 00580c22  eb0c                 jmp 0x580c30
// 00580c24  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00580c2c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00580c30  8bb754010000         mov esi, dword ptr [edi + 0x154]
// 00580c36  8b4610               mov eax, dword ptr [esi + 0x10]
// 00580c39  89442410             mov dword ptr [esp + 0x10], eax
// 00580c3d  39460c               cmp dword ptr [esi + 0xc], eax
// 00580c40  7606                 jbe 0x580c48
// 00580c42  ff1590288000         call dword ptr [0x802890]
// 00580c48  55                   push ebp
// 00580c49  8b2e                 mov ebp, dword ptr [esi]
// 00580c4b  8bb754010000         mov esi, dword ptr [edi + 0x154]
// 00580c51  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00580c54  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 00580c57  7606                 jbe 0x580c5f
// 00580c59  ff1590288000         call dword ptr [0x802890]
// 00580c5f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00580c63  8b36                 mov esi, dword ptr [esi]
// 00580c65  50                   push eax
// 00580c66  55                   push ebp
// 00580c67  57                   push edi
// 00580c68  56                   push esi
// 00580c69  8d4c2428             lea ecx, [esp + 0x28]
// 00580c6d  51                   push ecx
// 00580c6e  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00580c71  e81adeffff           call 0x57ea90
// 00580c76  8b30                 mov esi, dword ptr [eax]
// 00580c78  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00580c7c  5d                   pop ebp
// 00580c7d  85c0                 test eax, eax
// 00580c7f  742c                 je 0x580cad
// 00580c81  8bf8                 mov edi, eax
// 00580c83  83c004               add eax, 4
// 00580c86  83caff               or edx, 0xffffffff
// 00580c89  f00fc110             lock xadd dword ptr [eax], edx
// 00580c8d  751e                 jne 0x580cad
// 00580c8f  8b07                 mov eax, dword ptr [edi]
// 00580c91  8b5004               mov edx, dword ptr [eax + 4]
// 00580c94  8bcf                 mov ecx, edi
// 00580c96  ffd2                 call edx
// 00580c98  8d4708               lea eax, [edi + 8]
// 00580c9b  83c9ff               or ecx, 0xffffffff
// 00580c9e  f00fc108             lock xadd dword ptr [eax], ecx
// 00580ca2  7509                 jne 0x580cad
// 00580ca4  8b17                 mov edx, dword ptr [edi]
// 00580ca6  8b4208               mov eax, dword ptr [edx + 8]
// 00580ca9  8bcf                 mov ecx, edi
// 00580cab  ffd0                 call eax
// 00580cad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00580cb1  56                   push esi
// 00580cb2  e8b96afeff           call 0x567770
// 00580cb7  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00580cba  85c9                 test ecx, ecx
// 00580cbc  7407                 je 0x580cc5
// 00580cbe  e81d25edff           call 0x4531e0
// 00580cc3  eb02                 jmp 0x580cc7
// 00580cc5  33c0                 xor eax, eax
// 00580cc7  6a08                 push 8
// 00580cc9  8bc8                 mov ecx, eax
// 00580ccb  e850cb0300           call 0x5bd820
// 00580cd0  8b4304               mov eax, dword ptr [ebx + 4]
// 00580cd3  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00580cd6  5f                   pop edi
// 00580cd7  83c004               add eax, 4
// 00580cda  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00580cde  5e                   pop esi
// 00580cdf  5b                   pop ebx
// 00580ce0  7205                 jb 0x580ce7
// 00580ce2  8b4004               mov eax, dword ptr [eax + 4]
// 00580ce5  eb03                 jmp 0x580cea
// 00580ce7  83c004               add eax, 4
// 00580cea  51                   push ecx
// 00580ceb  50                   push eax
// 00580cec  e8cfb80000           call 0x58c5c0
// 00580cf1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00580cf5  8b11                 mov edx, dword ptr [ecx]
// 00580cf7  83c418               add esp, 0x18
// 00580cfa  c744240401000000     mov dword ptr [esp + 4], 1
// 00580d02  8b02                 mov eax, dword ptr [edx]
// 00580d04  ffe0                 jmp eax

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct RefCount {
    virtual void unused() = 0;
    virtual void releaseObject() = 0;
    virtual void releaseCounter() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    RefCount* counter;
};

struct Sequence {
    void* owner;
    unsigned reserved[2];
    unsigned first;
    unsigned last;
};

struct Document {
    unsigned char reserved[0x154];
    Sequence* sequence;
    void select(void*);
};

struct Tool {
    void setMode(int);
};

struct Context {
    Document* getDocument();
    Tool* getTool();
};

struct Manager {
    Shared* makeShared(Shared*, void*, unsigned, void*, unsigned);
};

struct StringData {
    unsigned reserved;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;
};

struct Name {
    unsigned reserved;
    StringData text;
};

struct Argument {
    virtual void finish(int) = 0;
};

extern void __cdecl handle(const char*, Manager*);

struct S {
    unsigned reserved0;
    Name* name;
    unsigned reserved8;
    Manager* manager;
    unsigned reserved10[4];
    Context* context;

    void prepare();
    void f(Argument*);
};

void S::f(Argument* argument)
{
    Context* source = context;
    prepare();

    source = context;
    Document* document = source ? source->getDocument() : 0;

    Sequence* sequence = document->sequence;
    unsigned last = sequence->last;
    if (sequence->first > last)
        _invalid_parameter_noinfo();
    void* lastOwner = sequence->owner;

    sequence = document->sequence;
    unsigned first = sequence->first;
    if (first > sequence->last)
        _invalid_parameter_noinfo();
    void* firstOwner = sequence->owner;

    Shared temporary;
    void* object = manager->makeShared(
        &temporary, firstOwner, first, lastOwner, last)->object;

    if (temporary.counter) {
        RefCount* counter = temporary.counter;
        volatile long* strong = &counter->strong;
        if (_InterlockedDecrement(strong) == 0) {
            counter->releaseObject();
            volatile long* weak = &counter->weak;
            if (_InterlockedDecrement(weak) == 0)
                counter->releaseCounter();
        }
    }

    document->select(object);

    Tool* tool = context ? context->getTool() : 0;
    tool->setMode(8);

    StringData* text = &name->text;
    handle(text->capacity >= 16 ? text->pointer : text->buffer, manager);

    return argument->finish(1);
}
