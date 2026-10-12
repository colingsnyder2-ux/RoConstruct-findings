// from server: 79% by king_originala
struct String {
    unsigned int proxy;
    union {
        char small[16];
        char* heap;
    } data;
    unsigned int length;
    unsigned int capacity;

    String(const char*);
    ~String();
};

struct Error {
    char storage[40];
    Error(const String&);
};

extern unsigned char errorType;
extern "C" __declspec(noreturn)
void __stdcall throwException(void*, void*);

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

struct Logger {
    unsigned int handle;
    unsigned int owner;
    ~Logger();
};

Settings* __cdecl getSettings();
Logger __cdecl getLogger();
void __cdecl writeLog(unsigned int, int, const char*, const char*);
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
        const String& text = name.format(4);
        const Logger& logger = getLogger();
        writeLog(logger.handle, 1,
                 "Replicator: Requesting character for %s",
                 text.capacity < 16 ? text.data.small : text.data.heap);
    }

    connection->send(&stream, 2, 3, 0,
                     destinationFirst, destinationSecond, 0);
}
