// from server: 63% by king_originala
struct String {
    unsigned int reserved;
    union {
        char small[16];
        char* pointer;
    } text;
    unsigned int length;
    unsigned int capacity;

    String(const char*);
    ~String();
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
