// from server: 100% by king_originala
// roc 2008-06 00419620  unit: VCLuaFunction::?$CComObject  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00419620
//
// 00419620  6aff                 push -1
// 00419622  6801de7b00           push 0x7bde01
// 00419627  64a100000000         mov eax, dword ptr fs:[0]
// 0041962d  50                   push eax
// 0041962e  64892500000000       mov dword ptr fs:[0], esp
// 00419635  83ec14               sub esp, 0x14
// 00419638  56                   push esi
// 00419639  57                   push edi
// 0041963a  c744240800000000     mov dword ptr [esp + 8], 0
// 00419642  51                   push ecx
// 00419643  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00419647  8bc4                 mov eax, esp
// 00419649  8908                 mov dword ptr [eax], ecx
// 0041964b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0041964f  89642410             mov dword ptr [esp + 0x10], esp
// 00419653  83ec08               sub esp, 8
// 00419656  8bc4                 mov eax, esp
// 00419658  8910                 mov dword ptr [eax], edx
// 0041965a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0041965e  894804               mov dword ptr [eax + 4], ecx
// 00419661  8b442448             mov eax, dword ptr [esp + 0x48]
// 00419665  bf01000000           mov edi, 1
// 0041966a  897c2430             mov dword ptr [esp + 0x30], edi
// 0041966e  8964244c             mov dword ptr [esp + 0x4c], esp
// 00419672  85c0                 test eax, eax
// 00419674  7409                 je 0x41967f
// 00419676  83c004               add eax, 4
// 00419679  8bd7                 mov edx, edi
// 0041967b  f00fc110             lock xadd dword ptr [eax], edx
// 0041967f  8d4c241c             lea ecx, [esp + 0x1c]
// 00419683  e838eaffff           call 0x4180c0
// 00419688  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0041968c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00419690  8b542434             mov edx, dword ptr [esp + 0x34]
// 00419694  890e                 mov dword ptr [esi], ecx
// 00419696  895604               mov dword ptr [esi + 4], edx
// 00419699  8b08                 mov ecx, dword ptr [eax]
// 0041969b  894e08               mov dword ptr [esi + 8], ecx
// 0041969e  8b4804               mov ecx, dword ptr [eax + 4]
// 004196a1  894e0c               mov dword ptr [esi + 0xc], ecx
// 004196a4  85c9                 test ecx, ecx
// 004196a6  7409                 je 0x4196b1
// 004196a8  83c104               add ecx, 4
// 004196ab  8bd7                 mov edx, edi
// 004196ad  f00fc111             lock xadd dword ptr [ecx], edx
// 004196b1  8b4008               mov eax, dword ptr [eax + 8]
// 004196b4  894610               mov dword ptr [esi + 0x10], eax
// 004196b7  8b442414             mov eax, dword ptr [esp + 0x14]
// 004196bb  897c2408             mov dword ptr [esp + 8], edi
// 004196bf  85c0                 test eax, eax
// 004196c1  742c                 je 0x4196ef
// 004196c3  8bf8                 mov edi, eax
// 004196c5  83c004               add eax, 4
// 004196c8  83c9ff               or ecx, 0xffffffff
// 004196cb  f00fc108             lock xadd dword ptr [eax], ecx
// 004196cf  751e                 jne 0x4196ef
// 004196d1  8b17                 mov edx, dword ptr [edi]
// 004196d3  8b4204               mov eax, dword ptr [edx + 4]
// 004196d6  8bcf                 mov ecx, edi
// 004196d8  ffd0                 call eax
// 004196da  8d4f08               lea ecx, [edi + 8]
// 004196dd  83caff               or edx, 0xffffffff
// 004196e0  f00fc111             lock xadd dword ptr [ecx], edx
// 004196e4  7509                 jne 0x4196ef
// 004196e6  8b07                 mov eax, dword ptr [edi]
// 004196e8  8b5008               mov edx, dword ptr [eax + 8]
// 004196eb  8bcf                 mov ecx, edi
// 004196ed  ffd2                 call edx
// 004196ef  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 004196f3  c644242400           mov byte ptr [esp + 0x24], 0
// 004196f8  85ff                 test edi, edi
// 004196fa  742a                 je 0x419726
// 004196fc  8d4704               lea eax, [edi + 4]
// 004196ff  83c9ff               or ecx, 0xffffffff
// 00419702  f00fc108             lock xadd dword ptr [eax], ecx
// 00419706  751e                 jne 0x419726
// 00419708  8b17                 mov edx, dword ptr [edi]
// 0041970a  8b4204               mov eax, dword ptr [edx + 4]
// 0041970d  8bcf                 mov ecx, edi
// 0041970f  ffd0                 call eax
// 00419711  8d4f08               lea ecx, [edi + 8]
// 00419714  83caff               or edx, 0xffffffff
// 00419717  f00fc111             lock xadd dword ptr [ecx], edx
// 0041971b  7509                 jne 0x419726
// 0041971d  8b07                 mov eax, dword ptr [edi]
// 0041971f  8b5008               mov edx, dword ptr [eax + 8]
// 00419722  8bcf                 mov ecx, edi
// 00419724  ffd2                 call edx
// 00419726  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041972a  5f                   pop edi
// 0041972b  8bc6                 mov eax, esi
// 0041972d  64890d00000000       mov dword ptr fs:[0], ecx
// 00419734  5e                   pop esi
// 00419735  83c420               add esp, 0x20
// 00419738  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

Shared::~Shared()
{
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Tag {
    int value;

    Tag(int);
    Tag(const Tag&);
};

Tag::Tag(int v) : value(v)
{
}

Tag::Tag(const Tag& other) : value(other.value)
{
}

struct Pair {
    int first;
    int second;

    Pair(int, int);
};

Pair::Pair(int a, int b) : first(a), second(b)
{
}

struct Value {
    Shared object;
    Tag value;

    Value(Shared, Tag);
    Value(const Value&);
};

Value::Value(const Value& other)
    : object(other.object), value(other.value)
{
}

struct Result {
    Pair pair;
    Value value;

    Result(const Pair&, const Value&);
};

Result::Result(const Pair& p, const Value& v)
    : pair(p), value(v)
{
}

Result __cdecl reconstruct(int a, int b, Shared object, int value)
{
    return Result(Pair(a, b), Value(object, value));
}
