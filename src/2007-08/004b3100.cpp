// from server: 5% by colin
// roc 2007-08 004b3100  unit: RBX::Network::VSharedStringDictionary::?$sp_counted_impl_p  size: 687 bytes

extern "C" void __stdcall _invalid_parameter_noinfo();

struct BitStream {
    void writeBits(const void* data, unsigned int numBits);
};

struct Name {
    static const Name* declare(const char* s);
};

struct SenderDictionary {
    void send(BitStream& stream, const char* value);
    bool trySend(BitStream& stream, const char* value);
};

struct ReceiverDictionary {
    void receive(BitStream& stream, char* value);
};

struct SharedStringDictionary {
    char pad[0x1d6c];
    char sender[0x10];
    char receiver[0x10];
    char map[0x10];

    void send(BitStream& stream, const Name& value);
    bool trySend(BitStream& stream, const Name& value);
    void receive(BitStream& stream, const Name*& value);
};

void SharedStringDictionary::send(BitStream& stream, const Name& value)
{
    SenderDictionary* sd = (SenderDictionary*)sender;
    sd->send(stream, (const char*)&value);
}

bool SharedStringDictionary::trySend(BitStream& stream, const Name& value)
{
    SenderDictionary* sd = (SenderDictionary*)sender;
    return sd->trySend(stream, (const char*)&value);
}

void SharedStringDictionary::receive(BitStream& stream, const Name*& value)
{
    ReceiverDictionary* rd = (ReceiverDictionary*)receiver;
    char s[16];
    rd->receive(stream, s);
    value = Name::declare(s);
}
