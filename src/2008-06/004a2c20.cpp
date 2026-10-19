// from server: 66% by colin
// from server: 63% by king_originala
// roc 2008-06 004a2c20  unit: RBX::Network::Server::ClientProxy  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a2c20
//
// 004a2c20  55                   push ebp
// 004a2c21  8d6c24a0             lea ebp, [esp - 0x60]
// 004a2c25  83ec60               sub esp, 0x60
// 004a2c28  6aff                 push -1
// 004a2c2a  685a7c7c00           push 0x7c7c5a
// 004a2c2f  64a100000000         mov eax, dword ptr fs:[0]
// 004a2c35  50                   push eax
// 004a2c36  64892500000000       mov dword ptr fs:[0], esp
// 004a2c3d  81eca0010000         sub esp, 0x1a0
// 004a2c43  53                   push ebx
// 004a2c44  56                   push esi
// 004a2c45  8b756c               mov esi, dword ptr [ebp + 0x6c]
// 004a2c48  57                   push edi
// 004a2c49  8bd9                 mov ebx, ecx
// 004a2c4b  8d7e04               lea edi, [esi + 4]
// 004a2c4e  8d83e0010000         lea eax, [ebx + 0x1e0]
// 004a2c54  8965f0               mov dword ptr [ebp - 0x10], esp
// 004a2c57  50                   push eax
// 004a2c58  8bcf                 mov ecx, edi
// 004a2c5a  897d5c               mov dword ptr [ebp + 0x5c], edi
// 004a2c5d  e8ee6b0000           call 0x4a9850
// 004a2c62  84c0                 test al, al
// 004a2c64  7411                 je 0x4a2c77
// 004a2c66  8b4d68               mov ecx, dword ptr [ebp + 0x68]
// 004a2c69  56                   push esi
// 004a2c6a  51                   push ecx
// 004a2c6b  8bcb                 mov ecx, ebx
// 004a2c6d  e8ae5f0100           call 0x4b8c20
// 004a2c72  e978010000           jmp 0x4a2def
// 004a2c77  8b5614               mov edx, dword ptr [esi + 0x14]
// 004a2c7a  803a4c               cmp byte ptr [edx], 0x4c
// 004a2c7d  7411                 je 0x4a2c90
// 004a2c7f  8b4568               mov eax, dword ptr [ebp + 0x68]
// 004a2c82  56                   push esi
// 004a2c83  50                   push eax
// 004a2c84  8bcb                 mov ecx, ebx
// 004a2c86  e8955f0100           call 0x4b8c20
// 004a2c8b  e95f010000           jmp 0x4a2def
// 004a2c90  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a2c93  8b5614               mov edx, dword ptr [esi + 0x14]
// 004a2c96  6a00                 push 0
// 004a2c98  51                   push ecx
// 004a2c99  52                   push edx
// 004a2c9a  8d8d54feffff         lea ecx, [ebp - 0x1ac]
// 004a2ca0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004a2ca7  e874240000           call 0x4a5120
// 004a2cac  6a08                 push 8
// 004a2cae  8d8d54feffff         lea ecx, [ebp - 0x1ac]
// 004a2cb4  c645fc01             mov byte ptr [ebp - 4], 1
// 004a2cb8  e8b3270000           call 0x4a5470
// 004a2cbd  8d4554               lea eax, [ebp + 0x54]
// 004a2cc0  50                   push eax
// 004a2cc1  8d5568               lea edx, [ebp + 0x68]
// 004a2cc4  52                   push edx
// 004a2cc5  8d8554feffff         lea eax, [ebp - 0x1ac]
// 004a2ccb  8d8b8cd4ffff         lea ecx, [ebx - 0x2b74]
// 004a2cd1  50                   push eax
// 004a2cd2  e8895e0000           call 0x4a8b60
// 004a2cd7  84c0                 test al, al
// 004a2cd9  0f8426010000         je 0x4a2e05
// 004a2cdf  e8acbbffff           call 0x49e890
// 004a2ce4  80b83101000000       cmp byte ptr [eax + 0x131], 0
// 004a2ceb  7470                 je 0x4a2d5d
// 004a2ced  6a04                 push 4
// 004a2cef  8d4d1c               lea ecx, [ebp + 0x1c]
// 004a2cf2  51                   push ecx
// 004a2cf3  8d4d54               lea ecx, [ebp + 0x54]
// 004a2cf6  e845571000           call 0x5a8440
// 004a2cfb  8bf0                 mov esi, eax
// 004a2cfd  8d554c               lea edx, [ebp + 0x4c]
// 004a2d00  52                   push edx
// 004a2d01  c645fc02             mov byte ptr [ebp - 4], 2
// 004a2d05  e816690c00           call 0x569620
// 004a2d0a  83c404               add esp, 4
// 004a2d0d  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 004a2d11  c645fc03             mov byte ptr [ebp - 4], 3
// 004a2d15  7205                 jb 0x4a2d1c
// 004a2d17  8b7e04               mov edi, dword ptr [esi + 4]
// 004a2d1a  eb03                 jmp 0x4a2d1f
// 004a2d1c  8d7e04               lea edi, [esi + 4]
// 004a2d1f  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 004a2d22  8b30                 mov esi, dword ptr [eax]
// 004a2d24  6a01                 push 1
// 004a2d26  e8856b0000           call 0x4a98b0
// 004a2d2b  50                   push eax
// 004a2d2c  57                   push edi
// 004a2d2d  8d838cd4ffff         lea eax, [ebx - 0x2b74]
// 004a2d33  50                   push eax
// 004a2d34  689c358200           push 0x82359c
// 004a2d39  6a01                 push 1
// 004a2d3b  56                   push esi
// 004a2d3c  e85f660c00           call 0x5693a0
// 004a2d41  83c418               add esp, 0x18
// 004a2d44  8d4d4c               lea ecx, [ebp + 0x4c]
// 004a2d47  c645fc02             mov byte ptr [ebp - 4], 2
// 004a2d4b  e810d91500           call 0x600660
// 004a2d50  8d4d1c               lea ecx, [ebp + 0x1c]
// 004a2d53  c645fc01             mov byte ptr [ebp - 4], 1
// 004a2d57  ff1568248000         call dword ptr [0x802468]
// 004a2d5d  8b4568               mov eax, dword ptr [ebp + 0x68]
// 004a2d60  85c0                 test eax, eax
// 004a2d62  7407                 je 0x4a2d6b
// 004a2d64  05e4000000           add eax, 0xe4
// 004a2d69  eb02                 jmp 0x4a2d6d
// 004a2d6b  33c0                 xor eax, eax
// 004a2d6d  50                   push eax
// 004a2d6e  8d4544               lea eax, [ebp + 0x44]
// 004a2d71  50                   push eax
// 004a2d72  e8d9fbffff           call 0x4a2950
// 004a2d77  83c408               add esp, 8
// 004a2d7a  8b08                 mov ecx, dword ptr [eax]
// 004a2d7c  83c004               add eax, 4
// 004a2d7f  898bf4010000         mov dword ptr [ebx + 0x1f4], ecx
// 004a2d85  50                   push eax
// 004a2d86  8d8bf8010000         lea ecx, [ebx + 0x1f8]
// 004a2d8c  c645fc04             mov byte ptr [ebp - 4], 4
// 004a2d90  e81bf8f5ff           call 0x4025b0
// 004a2d95  8d4d44               lea ecx, [ebp + 0x44]
// 004a2d98  c645fc01             mov byte ptr [ebp - 4], 1
// 004a2d9c  e8bfd81500           call 0x600660
// 004a2da1  8b8bf4010000         mov ecx, dword ptr [ebx + 0x1f4]
// 004a2da7  85c9                 test ecx, ecx
// 004a2da9  752c                 jne 0x4a2dd7
// 004a2dab  6884358200           push 0x823584
// 004a2db0  8d4d00               lea ecx, [ebp]
// 004a2db3  ff1558248000         call dword ptr [0x802458]
// 004a2db9  8d5500               lea edx, [ebp]
// 004a2dbc  52                   push edx
// 004a2dbd  8d4da0               lea ecx, [ebp - 0x60]
// 004a2dc0  c645fc05             mov byte ptr [ebp - 4], 5
// 004a2dc4  e8876ff6ff           call 0x409d50
// 004a2dc9  68c81b8d00           push 0x8d1bc8
// 004a2dce  8d45a0               lea eax, [ebp - 0x60]
// 004a2dd1  50                   push eax
// 004a2dd2  e8b5e71f00           call 0x6a158c
// 004a2dd7  6a01                 push 1
// 004a2dd9  e8c229ffff           call 0x4957a0
// 004a2dde  8d8d54feffff         lea ecx, [ebp - 0x1ac]
// 004a2de4  c645fc00             mov byte ptr [ebp - 4], 0
// 004a2de8  e8b3230000           call 0x4a51a0

struct String {
    unsigned int reserved;
    union {
        char small[16];
        char* pointer;
    } text;
    unsigned int length;
    unsigned int capacity;

    String(const char*);
    __declspec(dllimport) ~String() throw();
    const char* c_str() const;
};

inline const char* String::c_str() const
{
    return capacity >= 16 ? text.pointer : text.small;
}

struct Control {
    void* pointer;
    Control& operator=(const Control&);
};

struct Shared {
    void* pointer;
    Control control;

    ~Shared();
    Shared& operator=(const Shared&);
};

inline Shared& Shared::operator=(const Shared& other)
{
    pointer = other.pointer;
    control = other.control;
    return *this;
}

struct Address {
    unsigned int words[2];

    bool equals(const Address&) const;
    const char* text(int) const;
};

struct Packet {
    unsigned int reserved;
    Address address;
    unsigned int length;
    unsigned int bits;
    const char* data;
};

struct Stream {
    char storage[408];

    Stream(const char*, unsigned int, bool);
    ~Stream();
    void skip(int);
};

struct Identifier {
    unsigned int words[2];

    String text(int) const;
};

struct Settings {
    char padding[0x131];
    bool logging;
};

struct Peer {
    bool read(Stream&, void*&, Identifier&);
};

struct Player {
    char padding[0xe4];

    void activate(bool);
};

struct Failure {
    char storage[96];

    Failure(const String&);
};

extern Settings* __cdecl settings();
extern Shared __cdecl loggingContext();
extern Shared __cdecl playerReference(void*);
extern void __cdecl logMessage(void*, int, const char*, ...);
extern __declspec(noreturn) void __stdcall raiseFailure(void*, void*);

struct Client {
    char padding[0x1e0];
    Address address;
    char padding2[12];
    Shared remotePlayer;

    void forward(void*, Packet*);
    void process(void*, Packet*);
};

void Client::process(void* source, Packet* packet)
{
    Address* sender = &packet->address;

    if (sender->equals(address)) {
        forward(source, packet);
        return;
    }

    if (packet->data[0] != 'L') {
        forward(source, packet);
        return;
    }

    try {
        Stream stream(packet->data, packet->length, false);
        stream.skip(8);

        Identifier identifier;
        if (reinterpret_cast<Peer*>(
                reinterpret_cast<char*>(this) - 0x2b74)
                ->read(stream, source, identifier)) {
            if (settings()->logging) {
                logMessage(
                    loggingContext().pointer, 1,
                    "Received remotePlayer %s from %s",
                    reinterpret_cast<char*>(this) - 0x2b74,
                    identifier.text(4).c_str(), sender->text(1));
            }

            remotePlayer = playerReference(
                source ? static_cast<char*>(source) + 0xe4 : 0);

            if (!remotePlayer.pointer) {
                String message("remotePlayer is NULL");
                Failure failure(message);
                raiseFailure(&failure, reinterpret_cast<void*>(0x8d1bc8));
            }

            static_cast<Player*>(remotePlayer.pointer)->activate(true);
        }
    } catch (...) {
    }
}
