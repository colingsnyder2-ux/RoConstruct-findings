// from server: 100% by EspClaude
// roc 2008-06 004b49e0  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 451 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b49e0
//
// 004b49e0  64a100000000         mov eax, dword ptr fs:[0]
// 004b49e6  6aff                 push -1
// 004b49e8  680a897c00           push 0x7c890a
// 004b49ed  50                   push eax
// 004b49ee  64892500000000       mov dword ptr fs:[0], esp
// 004b49f5  81ec84010000         sub esp, 0x184
// 004b49fb  57                   push edi
// 004b49fc  8bf9                 mov edi, ecx
// 004b49fe  83bf502d000000       cmp dword ptr [edi + 0x2d50], 0
// 004b4a05  7537                 jne 0x4b4a3e
// 004b4a07  68a84d8200           push 0x824da8
// 004b4a0c  8d4c2418             lea ecx, [esp + 0x18]
// 004b4a10  ff1558248000         call dword ptr [0x802458]
// 004b4a16  8d442414             lea eax, [esp + 0x14]
// 004b4a1a  50                   push eax
// 004b4a1b  8d4c2434             lea ecx, [esp + 0x34]
// 004b4a1f  c784249401000000000000 mov dword ptr [esp + 0x194], 0
// 004b4a2a  e82153f5ff           call 0x409d50
// 004b4a2f  68c81b8d00           push 0x8d1bc8
// 004b4a34  8d4c2434             lea ecx, [esp + 0x34]
// 004b4a38  51                   push ecx
// 004b4a39  e84ecb1e00           call 0x6a158c
// 004b4a3e  8b17                 mov edx, dword ptr [edi]
// 004b4a40  8b4244               mov eax, dword ptr [edx + 0x44]
// 004b4a43  56                   push esi
// 004b4a44  ffd0                 call eax
// 004b4a46  8bf0                 mov esi, eax
// 004b4a48  85f6                 test esi, esi
// 004b4a4a  7537                 jne 0x4b4a83
// 004b4a4c  68684d8200           push 0x824d68
// 004b4a51  8d4c241c             lea ecx, [esp + 0x1c]
// 004b4a55  ff1558248000         call dword ptr [0x802458]
// 004b4a5b  8d4c2418             lea ecx, [esp + 0x18]
// 004b4a5f  51                   push ecx
// 004b4a60  8d4c2438             lea ecx, [esp + 0x38]
// 004b4a64  c784249801000001000000 mov dword ptr [esp + 0x198], 1
// 004b4a6f  e8dc52f5ff           call 0x409d50
// 004b4a74  68c81b8d00           push 0x8d1bc8
// 004b4a79  8d542438             lea edx, [esp + 0x38]
// 004b4a7d  52                   push edx
// 004b4a7e  e809cb1e00           call 0x6a158c
// 004b4a83  8d4c2478             lea ecx, [esp + 0x78]
// 004b4a87  e80406ffff           call 0x4a5090
// 004b4a8c  8d442478             lea eax, [esp + 0x78]
// 004b4a90  6a4c                 push 0x4c
// 004b4a92  50                   push eax
// 004b4a93  c784249c01000002000000 mov dword ptr [esp + 0x19c], 2
// 004b4a9e  e8ad18ffff           call 0x4a6350
// 004b4aa3  83c408               add esp, 8
// 004b4aa6  56                   push esi
// 004b4aa7  8d4c247c             lea ecx, [esp + 0x7c]
// 004b4aab  51                   push ecx
// 004b4aac  8bcf                 mov ecx, edi
// 004b4aae  e82d40ffff           call 0x4a8ae0
// 004b4ab3  e8d89dfeff           call 0x49e890
// 004b4ab8  80b83101000000       cmp byte ptr [eax + 0x131], 0
// 004b4abf  0f8488000000         je 0x4b4b4d
// 004b4ac5  8bce                 mov ecx, esi
// 004b4ac7  e8d470feff           call 0x49bba0
// 004b4acc  8b5608               mov edx, dword ptr [esi + 8]
// 004b4acf  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b4ad2  6a04                 push 4
// 004b4ad4  8d4c2460             lea ecx, [esp + 0x60]
// 004b4ad8  51                   push ecx
// 004b4ad9  8d4c2410             lea ecx, [esp + 0x10]
// 004b4add  89542410             mov dword ptr [esp + 0x10], edx
// 004b4ae1  89442414             mov dword ptr [esp + 0x14], eax
// 004b4ae5  e856390f00           call 0x5a8440
// 004b4aea  8bf0                 mov esi, eax
// 004b4aec  8d542410             lea edx, [esp + 0x10]
// 004b4af0  52                   push edx
// 004b4af1  c684249801000003     mov byte ptr [esp + 0x198], 3
// 004b4af9  e8224b0b00           call 0x569620
// 004b4afe  83c404               add esp, 4
// 004b4b01  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 004b4b05  c684249401000004     mov byte ptr [esp + 0x194], 4
// 004b4b0d  7205                 jb 0x4b4b14
// 004b4b0f  8b7604               mov esi, dword ptr [esi + 4]
// 004b4b12  eb03                 jmp 0x4b4b17
// 004b4b14  83c604               add esi, 4
// 004b4b17  8b00                 mov eax, dword ptr [eax]
// 004b4b19  56                   push esi
// 004b4b1a  68404d8200           push 0x824d40
// 004b4b1f  6a01                 push 1
// 004b4b21  50                   push eax
// 004b4b22  e879480b00           call 0x5693a0
// 004b4b27  83c410               add esp, 0x10
// 004b4b2a  8d4c2410             lea ecx, [esp + 0x10]
// 004b4b2e  c684249401000003     mov byte ptr [esp + 0x194], 3
// 004b4b36  e825bb1400           call 0x600660
// 004b4b3b  8d4c245c             lea ecx, [esp + 0x5c]
// 004b4b3f  c684249401000002     mov byte ptr [esp + 0x194], 2
// 004b4b47  ff1568248000         call dword ptr [0x802468]
// 004b4b4d  8b97582d0000         mov edx, dword ptr [edi + 0x2d58]
// 004b4b53  8b8f502d0000         mov ecx, dword ptr [edi + 0x2d50]
// 004b4b59  8b01                 mov eax, dword ptr [ecx]
// 004b4b5b  8b4034               mov eax, dword ptr [eax + 0x34]
// 004b4b5e  6a00                 push 0
// 004b4b60  52                   push edx
// 004b4b61  8b97542d0000         mov edx, dword ptr [edi + 0x2d54]
// 004b4b67  52                   push edx
// 004b4b68  6a00                 push 0
// 004b4b6a  6a03                 push 3
// 004b4b6c  6a02                 push 2
// 004b4b6e  8d942490000000       lea edx, [esp + 0x90]
// 004b4b75  52                   push edx
// 004b4b76  ffd0                 call eax
// 004b4b78  8d4c2478             lea ecx, [esp + 0x78]
// 004b4b7c  c7842494010000ffffffff mov dword ptr [esp + 0x194], 0xffffffff
// 004b4b87  e81406ffff           call 0x4a51a0
// 004b4b8c  8b8c248c010000       mov ecx, dword ptr [esp + 0x18c]
// 004b4b93  5e                   pop esi
// 004b4b94  5f                   pop edi
// 004b4b95  64890d00000000       mov dword ptr fs:[0], ecx
// 004b4b9c  81c490010000         add esp, 0x190
// 004b4ba2  c3                   ret 

#include <string>
typedef std::string String;

extern unsigned char errorType;
extern "C" __declspec(noreturn)
void __stdcall throwException(void*, void*);

struct Error {
    char storage[40];
    Error(const String&);
};


struct BitStream {
    unsigned int used;
    unsigned int allocated;
    unsigned int readOffset;
    unsigned char* data;
    unsigned char ownsData;
    unsigned char localData[256];

    BitStream();
    ~BitStream();
};

struct Name {
    unsigned int first;
    unsigned int second;
    String format(int) const;
};

struct Player {
    char padding[8];
    unsigned int nameFirst;
    unsigned int nameSecond;
    void prepareName();
};

struct Settings {
    char padding[0x131];
    unsigned char logging;
};

struct Log;
struct Logger {
    Log* handle;
    void* owner;
    ~Logger();
    Log* operator->() const { return handle; }
};

Settings* __cdecl getSettings();
Logger __cdecl getLogger();
void __cdecl writeLog(Log*, int, const char*, const char*);
void __cdecl writeByte(BitStream*, unsigned char);

struct Connection {
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual void slot09();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void send(BitStream*, int, int, int, unsigned int,
                      unsigned int, int);
};

struct S {
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual void slot09();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual Player* localPlayer();

    char padding[0x2d4c];
    Connection* connection;
    unsigned int destinationFirst;
    unsigned int destinationSecond;

    void writePlayer(BitStream*, Player*);
    void requestCharacter();
};

void S::requestCharacter()
{
    if (!connection) {
        String message(
            "Attempting to send a Character request without a connection");
        Error error(message);
        throwException(&error, &errorType);
    }

    Player* player = localPlayer();
    if (!player) {
        String message(
            "Attempting to send a Character request without a local Player");
        Error error(message);
        throwException(&error, &errorType);
    }

    BitStream stream;
    writeByte(&stream, 0x4c);
    writePlayer(&stream, player);

    if (getSettings()->logging) {
        player->prepareName();
        Name name;
        name.first = player->nameFirst;
        name.second = player->nameSecond;
        writeLog(getLogger().operator->(), 1,
                 "Replicator: Requesting character for %s",
                 name.format(4).c_str());
    }

    connection->send(&stream, 2, 3, 0,
                     destinationFirst, destinationSecond, 0);
}
