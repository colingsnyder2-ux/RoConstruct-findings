// from server: 100% by king_originala
// roc 2008-06 0049b4d0  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b4d0
//
// 0049b4d0  6aff                 push -1
// 0049b4d2  6840e17b00           push 0x7be140
// 0049b4d7  64a100000000         mov eax, dword ptr fs:[0]
// 0049b4dd  50                   push eax
// 0049b4de  64892500000000       mov dword ptr fs:[0], esp
// 0049b4e5  83ec1c               sub esp, 0x1c
// 0049b4e8  56                   push esi
// 0049b4e9  57                   push edi
// 0049b4ea  8bf9                 mov edi, ecx
// 0049b4ec  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0049b4ef  8b4740               mov eax, dword ptr [edi + 0x40]
// 0049b4f2  89442410             mov dword ptr [esp + 0x10], eax
// 0049b4f6  85c9                 test ecx, ecx
// 0049b4f8  7409                 je 0x49b503
// 0049b4fa  8b11                 mov edx, dword ptr [ecx]
// 0049b4fc  8b4208               mov eax, dword ptr [edx + 8]
// 0049b4ff  ffd0                 call eax
// 0049b501  eb02                 jmp 0x49b505
// 0049b503  33c0                 xor eax, eax
// 0049b505  89442414             mov dword ptr [esp + 0x14], eax
// 0049b509  8b742438             mov esi, dword ptr [esp + 0x38]
// 0049b50d  8b16                 mov edx, dword ptr [esi]
// 0049b50f  8b5204               mov edx, dword ptr [edx + 4]
// 0049b512  8d442410             lea eax, [esp + 0x10]
// 0049b516  50                   push eax
// 0049b517  6a01                 push 1
// 0049b519  8bce                 mov ecx, esi
// 0049b51b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0049b523  ffd2                 call edx
// 0049b525  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 0049b528  8b4748               mov eax, dword ptr [edi + 0x48]
// 0049b52b  89442408             mov dword ptr [esp + 8], eax
// 0049b52f  85c9                 test ecx, ecx
// 0049b531  7409                 je 0x49b53c
// 0049b533  8b11                 mov edx, dword ptr [ecx]
// 0049b535  8b4208               mov eax, dword ptr [edx + 8]
// 0049b538  ffd0                 call eax
// 0049b53a  eb02                 jmp 0x49b53e
// 0049b53c  33c0                 xor eax, eax
// 0049b53e  8944240c             mov dword ptr [esp + 0xc], eax
// 0049b542  8b16                 mov edx, dword ptr [esi]
// 0049b544  8b5204               mov edx, dword ptr [edx + 4]
// 0049b547  8d442408             lea eax, [esp + 8]
// 0049b54b  50                   push eax
// 0049b54c  6a02                 push 2
// 0049b54e  8bce                 mov ecx, esi
// 0049b550  c644243401           mov byte ptr [esp + 0x34], 1
// 0049b555  ffd2                 call edx
// 0049b557  8b442434             mov eax, dword ptr [esp + 0x34]
// 0049b55b  6a00                 push 0
// 0049b55d  68187c9300           push 0x937c18
// 0049b562  68fc919200           push 0x9291fc
// 0049b567  6a00                 push 0
// 0049b569  50                   push eax
// 0049b56a  e857622000           call 0x6a17c6
// 0049b56f  83c414               add esp, 0x14
// 0049b572  85c0                 test eax, eax
// 0049b574  751e                 jne 0x49b594
// 0049b576  6834ba8000           push 0x80ba34
// 0049b57b  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b57f  ff1564288000         call dword ptr [0x802864]
// 0049b585  682c368d00           push 0x8d362c
// 0049b58a  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b58e  51                   push ecx
// 0049b58f  e8f85f2000           call 0x6a158c
// 0049b594  8d542408             lea edx, [esp + 8]
// 0049b598  52                   push edx
// 0049b599  8d4c2414             lea ecx, [esp + 0x14]
// 0049b59d  51                   push ecx
// 0049b59e  83c604               add esi, 4
// 0049b5a1  56                   push esi
// 0049b5a2  50                   push eax
// 0049b5a3  8bcf                 mov ecx, edi
// 0049b5a5  e896feffff           call 0x49b440
// 0049b5aa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049b5ae  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0049b5b3  85c9                 test ecx, ecx
// 0049b5b5  7408                 je 0x49b5bf
// 0049b5b7  8b11                 mov edx, dword ptr [ecx]
// 0049b5b9  8b02                 mov eax, dword ptr [edx]
// 0049b5bb  6a01                 push 1
// 0049b5bd  ffd0                 call eax
// 0049b5bf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049b5c3  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0049b5cb  85c9                 test ecx, ecx
// 0049b5cd  7408                 je 0x49b5d7
// 0049b5cf  8b11                 mov edx, dword ptr [ecx]
// 0049b5d1  8b02                 mov eax, dword ptr [edx]
// 0049b5d3  6a01                 push 1
// 0049b5d5  ffd0                 call eax
// 0049b5d7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0049b5db  5f                   pop edi
// 0049b5dc  5e                   pop esi
// 0049b5dd  64890d00000000       mov dword ptr fs:[0], ecx
// 0049b5e4  83c428               add esp, 0x28
// 0049b5e7  c20800               ret 8

struct Holder {
    virtual ~Holder();
    virtual void reserved();
    virtual Holder* clone();

    static Holder* copy(Holder*);
};

__forceinline Holder* Holder::copy(Holder* h)
{
    if (h)
        return h->clone();
    return 0;
}

struct Value {
    void* object;
    Holder* holder;

    Value(const Value&);
    ~Value();
};

__forceinline Value::Value(const Value& other)
    : object(other.object), holder(Holder::copy(other.holder))
{
}

__forceinline Value::~Value()
{
    Holder* h = holder;
    if (h)
        delete h;
}

struct Arguments {
    virtual void reserved();
    virtual void get(int index, Value* value);
};

namespace std {
    struct bad_cast {
        char storage[12];
        bad_cast(const char*);
    };
}

typedef void (__thiscall *BadCastConstructor)(std::bad_cast*, const char*);
extern BadCastConstructor constructBadCast;

__forceinline std::bad_cast::bad_cast(const char* message)
{
    constructBadCast(this, message);
}

extern unsigned char sourceType;
extern unsigned char destinationType;
extern unsigned char badCastThrowInfo;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

extern "C" __declspec(noreturn) void __stdcall throwException(void*, void*);

struct S {
    char padding[64];
    Value first;
    Value second;

    void invoke(void*, void*, Value*, Value*);
    void f(void*, Arguments*);
};

void S::f(void* instance, Arguments* arguments)
{
    Value a(first);
    arguments->get(1, &a);

    Value b(second);
    arguments->get(2, &b);

    void* converted = __RTDynamicCast(
        instance, 0, &sourceType, &destinationType, 0);

    if (!converted) {
        std::bad_cast error("bad cast");
        throwException(&error, &badCastThrowInfo);
    }

    invoke(converted, reinterpret_cast<char*>(arguments) + 4, &a, &b);
}
