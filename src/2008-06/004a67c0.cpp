// from server: 97% by king_originala
struct Stream {
    bool readBits(void *, int, int);
};

extern void __cdecl readFlag(Stream *, bool *);
extern void __cdecl readFloat(Stream *, float *);

struct String {
    unsigned char data[28];
    String(const char *);
    ~String();
};

extern void (__thiscall *stringConstruct)(String *, const char *);

inline String::String(const char *text)
{
    stringConstruct(this, text);
}

struct ReadError {
    unsigned char data[40];
    ReadError(const String &);
    ReadError(const ReadError &);
    ~ReadError();
};

void __cdecl readBrickVector(Stream *stream, float *result)
{
    bool compressed;
    readFlag(stream, &compressed);

    if (compressed) {
        unsigned int x = 0;
        unsigned int y = 0;
        unsigned int z = 0;

        if (!stream->readBits(&x, 11, 1))
            throw ReadError(String("readBrickVector x failed"));

        if (!stream->readBits(&y, 11, 1))
            throw ReadError(String("readBrickVector y failed"));

        if (!stream->readBits(&z, 11, 1))
            throw ReadError(String("readBrickVector z failed"));

        if (x & 0x400)
            x |= 0xfffffc00;

        if (z & 0x400)
            z |= 0xfffffc00;

        result[0] = (short)x * 0.25f;
        result[1] = (unsigned short)y * 0.1f;
        result[2] = (short)z * 0.25f;
    } else {
        readFloat(stream, result);
        readFloat(stream, result + 1);
        readFloat(stream, result + 2);
    }
}
