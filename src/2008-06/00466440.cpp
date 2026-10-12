// from server: 96% by king_originala
// roc 2008-06 00466440  unit: RBX::VSelection::?$MarshaledListener  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466440
//
// 00466440  51                   push ecx
// 00466441  56                   push esi
// 00466442  57                   push edi
// 00466443  6a20                 push 0x20
// 00466445  8bf9                 mov edi, ecx
// 00466447  e8d4a42300           call 0x6a0920
// 0046644c  83c404               add esp, 4
// 0046644f  85c0                 test eax, eax
// 00466451  745d                 je 0x4664b0
// 00466453  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00466457  83ec10               sub esp, 0x10
// 0046645a  8bd4                 mov edx, esp
// 0046645c  890a                 mov dword ptr [edx], ecx
// 0046645e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00466462  894a04               mov dword ptr [edx + 4], ecx
// 00466465  8b742428             mov esi, dword ptr [esp + 0x28]
// 00466469  89642418             mov dword ptr [esp + 0x18], esp
// 0046646d  85f6                 test esi, esi
// 0046646f  740c                 je 0x46647d
// 00466471  83c604               add esi, 4
// 00466474  b901000000           mov ecx, 1
// 00466479  f00fc10e             lock xadd dword ptr [esi], ecx
// 0046647d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00466481  894a08               mov dword ptr [edx + 8], ecx
// 00466484  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00466488  894a0c               mov dword ptr [edx + 0xc], ecx
// 0046648b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0046648f  85d2                 test edx, edx
// 00466491  740c                 je 0x46649f
// 00466493  83c204               add edx, 4
// 00466496  b901000000           mov ecx, 1
// 0046649b  f00fc10a             lock xadd dword ptr [edx], ecx
// 0046649f  8b542420             mov edx, dword ptr [esp + 0x20]
// 004664a3  52                   push edx
// 004664a4  57                   push edi
// 004664a5  8bc8                 mov ecx, eax
// 004664a7  e8b4fdffff           call 0x466260
// 004664ac  8bf0                 mov esi, eax
// 004664ae  eb02                 jmp 0x4664b2
// 004664b0  33f6                 xor esi, esi
// 004664b2  8d442410             lea eax, [esp + 0x10]
// 004664b6  50                   push eax
// 004664b7  8d4f04               lea ecx, [edi + 4]
// 004664ba  89742414             mov dword ptr [esp + 0x14], esi
// 004664be  e8ddaefbff           call 0x4213a0
// 004664c3  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 004664c6  56                   push esi
// 004664c7  e884c4fcff           call 0x432950
// 004664cc  8d4c2414             lea ecx, [esp + 0x14]
// 004664d0  e88bc7fbff           call 0x422c60
// 004664d5  5f                   pop edi
// 004664d6  5e                   pop esi
// 004664d7  59                   pop ecx
// 004664d8  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl operator new(unsigned int size) throw();

struct RefCount
{
    long unused;
    volatile long count;
};

struct Payload
{
    void* first;
    RefCount* firstCount;
    void* second;
    RefCount* secondCount;

    Payload(const Payload& other) throw();
    ~Payload() throw();
};

__forceinline Payload::Payload(const Payload& other) throw()
{
    first = other.first;
    firstCount = other.firstCount;
    if (firstCount)
        _InterlockedExchangeAdd(&firstCount->count, 1);

    second = other.second;
    secondCount = other.secondCount;
    if (secondCount)
        _InterlockedExchangeAdd(&secondCount->count, 1);
}

struct S;

struct Node
{
    unsigned char storage[32];
    Node(S* owner, int arg, Payload value) throw();
};

struct Queue
{
    unsigned char storage[28];
    void insert(void* const& node) throw();
};

struct Poster
{
    void* field0;
    void* field4;
    void method(int arg) throw();
};

struct S
{
    void* field0;
    Queue queue;
    Poster* poster;

    void func_00466440(int arg, Payload value);
};

void S::func_00466440(int arg, Payload value)
{
    Node* node = new Node(this, arg, value);
    queue.insert(node);
    poster->method(reinterpret_cast<int>(node));
}
