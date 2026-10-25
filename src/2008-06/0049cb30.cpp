// from server: 100% by king_originala
// roc 2008-06 0049cb30  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049cb30
//
// 0049cb30  6aff                 push -1
// 0049cb32  68db727c00           push 0x7c72db
// 0049cb37  64a100000000         mov eax, dword ptr fs:[0]
// 0049cb3d  50                   push eax
// 0049cb3e  64892500000000       mov dword ptr fs:[0], esp
// 0049cb45  81eca4010000         sub esp, 0x1a4
// 0049cb4b  56                   push esi
// 0049cb4c  57                   push edi
// 0049cb4d  8bf1                 mov esi, ecx
// 0049cb4f  83bea001000000       cmp dword ptr [esi + 0x1a0], 0
// 0049cb56  c78424b401000000000000 mov dword ptr [esp + 0x1b4], 0
// 0049cb61  7534                 jne 0x49cb97
// 0049cb63  68d42a8200           push 0x822ad4
// 0049cb68  8d4c2410             lea ecx, [esp + 0x10]
// 0049cb6c  ff1558248000         call dword ptr [0x802458]
// 0049cb72  8d44240c             lea eax, [esp + 0xc]
// 0049cb76  50                   push eax
// 0049cb77  8d4c242c             lea ecx, [esp + 0x2c]
// 0049cb7b  c68424b801000001     mov byte ptr [esp + 0x1b8], 1
// 0049cb83  e8c8d1f6ff           call 0x409d50
// 0049cb88  68c81b8d00           push 0x8d1bc8
// 0049cb8d  8d4c242c             lea ecx, [esp + 0x2c]
// 0049cb91  51                   push ecx
// 0049cb92  e8f5492000           call 0x6a158c
// 0049cb97  8d8c2498000000       lea ecx, [esp + 0x98]
// 0049cb9e  e8ed840000           call 0x4a5090
// 0049cba3  8d942498000000       lea edx, [esp + 0x98]
// 0049cbaa  6a51                 push 0x51
// 0049cbac  52                   push edx
// 0049cbad  c68424bc01000002     mov byte ptr [esp + 0x1bc], 2
// 0049cbb5  e896970000           call 0x4a6350
// 0049cbba  8bbea0010000         mov edi, dword ptr [esi + 0x1a0]
// 0049cbc0  83c408               add esp, 8
// 0049cbc3  8bcf                 mov ecx, edi
// 0049cbc5  e8d6efffff           call 0x49bba0
// 0049cbca  8b4708               mov eax, dword ptr [edi + 8]
// 0049cbcd  8b7f0c               mov edi, dword ptr [edi + 0xc]
// 0049cbd0  83c004               add eax, 4
// 0049cbd3  50                   push eax
// 0049cbd4  8d84249c000000       lea eax, [esp + 0x9c]
// 0049cbdb  50                   push eax
// 0049cbdc  e87f990000           call 0x4a6560
// 0049cbe1  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0049cbe8  57                   push edi
// 0049cbe9  51                   push ecx
// 0049cbea  e8b1950000           call 0x4a61a0
// 0049cbef  8d9424cc010000       lea edx, [esp + 0x1cc]
// 0049cbf6  52                   push edx
// 0049cbf7  8d8424ac000000       lea eax, [esp + 0xac]
// 0049cbfe  50                   push eax
// 0049cbff  e85c990000           call 0x4a6560
// 0049cc04  a158789300           mov eax, dword ptr [0x937858]
// 0049cc09  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 0049cc0f  8b11                 mov edx, dword ptr [ecx]
// 0049cc11  8b5234               mov edx, dword ptr [edx + 0x34]
// 0049cc14  83c418               add esp, 0x18
// 0049cc17  6a01                 push 1
// 0049cc19  50                   push eax
// 0049cc1a  a154789300           mov eax, dword ptr [0x937854]
// 0049cc1f  50                   push eax
// 0049cc20  6a02                 push 2
// 0049cc22  6a02                 push 2
// 0049cc24  6a01                 push 1
// 0049cc26  8d8424b0000000       lea eax, [esp + 0xb0]
// 0049cc2d  50                   push eax
// 0049cc2e  ffd2                 call edx
// 0049cc30  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 0049cc36  83ec08               sub esp, 8
// 0049cc39  8bcc                 mov ecx, esp
// 0049cc3b  8901                 mov dword ptr [ecx], eax
// 0049cc3d  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 0049cc43  89642410             mov dword ptr [esp + 0x10], esp
// 0049cc47  894104               mov dword ptr [ecx + 4], eax
// 0049cc4a  85c0                 test eax, eax
// 0049cc4c  740c                 je 0x49cc5a
// 0049cc4e  83c004               add eax, 4
// 0049cc51  b901000000           mov ecx, 1
// 0049cc56  f00fc108             lock xadd dword ptr [eax], ecx
// 0049cc5a  83bc24dc01000010     cmp dword ptr [esp + 0x1dc], 0x10
// 0049cc62  8b8424c8010000       mov eax, dword ptr [esp + 0x1c8]
// 0049cc69  7307                 jae 0x49cc72
// 0049cc6b  8d8424c8010000       lea eax, [esp + 0x1c8]
// 0049cc72  50                   push eax
// 0049cc73  8d4c245c             lea ecx, [esp + 0x5c]
// 0049cc77  e8a49fffff           call 0x496c20
// 0049cc7c  83ec48               sub esp, 0x48
// 0049cc7f  8d942498000000       lea edx, [esp + 0x98]
// 0049cc86  8bcc                 mov ecx, esp
// 0049cc88  89642450             mov dword ptr [esp + 0x50], esp
// 0049cc8c  52                   push edx
// 0049cc8d  c684240002000003     mov byte ptr [esp + 0x200], 3
// 0049cc95  e8e697ffff           call 0x496480
// 0049cc9a  8d8e30010000         lea ecx, [esi + 0x130]
// 0049cca0  e8eba0ffff           call 0x496d90
// 0049cca5  8d4c2450             lea ecx, [esp + 0x50]
// 0049cca9  c68424b401000002     mov byte ptr [esp + 0x1b4], 2
// 0049ccb1  e80a97ffff           call 0x4963c0
// 0049ccb6  8d8c2498000000       lea ecx, [esp + 0x98]
// 0049ccbd  c68424b401000000     mov byte ptr [esp + 0x1b4], 0
// 0049ccc5  e8d6840000           call 0x4a51a0
// 0049ccca  8d8c24bc010000       lea ecx, [esp + 0x1bc]
// 0049ccd1  c78424b4010000ffffffff mov dword ptr [esp + 0x1b4], 0xffffffff
// 0049ccdc  ff1568248000         call dword ptr [0x802468]
// 0049cce2  8b8c24ac010000       mov ecx, dword ptr [esp + 0x1ac]
// 0049cce9  5f                   pop edi
// 0049ccea  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ccf1  5e                   pop esi
// 0049ccf2  81c4b0010000         add esp, 0x1b0
// 0049ccf8  c21c00               ret 0x1c

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void (__thiscall *string_construct)(void*, const char*);
extern void (__thiscall *string_destroy)(void*);

struct String
{
    unsigned int allocator;
    union
    {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;

    String(const char*);
    ~String();
    const char* c_str() const;
};

inline String::String(const char* text)
{
    string_construct(this, text);
}

inline String::~String()
{
    string_destroy(this);
}

inline const char* String::c_str() const
{
    return capacity >= 16 ? pointer : buffer;
}

struct Exception
{
    char storage[40];
    Exception(const String&);
};

extern void* exception_type;
extern "C" __declspec(noreturn) void __stdcall raise_exception(void*, void*);

struct BitStream
{
    char storage[276];
    BitStream();
    ~BitStream();
};

extern void __cdecl write_byte(BitStream*, int);
extern void __cdecl write_integer(BitStream*, int);
extern void __cdecl write_string(BitStream*, const String*);

struct Player
{
    char storage[8];
    String* name;
    int identifier;
    void prepare();
};

struct ReferenceCount
{
    unsigned int reserved;
    volatile long count;
};

struct PlayerPointer
{
    Player* pointer;
    ReferenceCount* reference;
    PlayerPointer(const PlayerPointer&);
};

inline PlayerPointer::PlayerPointer(const PlayerPointer& other)
    : pointer(other.pointer), reference(other.reference)
{
    if (reference)
    {
        volatile long* counter = reinterpret_cast<volatile long*>(reference);
        ++counter;
        _InterlockedExchangeAdd(counter, 1);
    }
}

struct Event
{
    char storage[72];
    Event(const char*, PlayerPointer);
    Event(const Event&);
    ~Event();
};

struct Signal
{
    char storage[112];
    void invoke(Event);
};

struct Connection;
struct ConnectionTable
{
    void* entries[13];
    void (__thiscall *send)(Connection*, BitStream*, int, int, int,
                           unsigned int, unsigned int, int);
};

struct Connection
{
    ConnectionTable* table;
};

extern unsigned int destination_low;
extern unsigned int destination_high;

struct S
{
    char storage[304];
    Signal signal;
    PlayerPointer local;
    Connection* connection;

    void f(String text);
};

void S::f(String text)
{
    if (!local.pointer)
    {
        String message("No local Player to chat from");
        Exception error(message);
        raise_exception(&error, &exception_type);
    }

    BitStream stream;
    write_byte(&stream, 81);

    Player* player = local.pointer;
    player->prepare();
    String* name = reinterpret_cast<String*>(
        reinterpret_cast<char*>(player->name) + 4);
    int identifier = player->identifier;

    write_string(&stream, name);
    write_integer(&stream, identifier);
    write_string(&stream, &text);

    connection->table->send(connection, &stream, 1, 2, 2,
                            destination_low, destination_high, 1);

    Event event(text.c_str(), local);
    signal.invoke(event);
}
