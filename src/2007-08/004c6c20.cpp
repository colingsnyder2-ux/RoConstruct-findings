// from server: 42% by colin
struct RakPeer {
    char pad0[4];
    unsigned int m_count;
    struct Entry {
        unsigned int a;
        unsigned int b;
    };
    Entry* m_entries;

    unsigned int f(unsigned int a, unsigned int b, bool c);
};

struct BitStream {
    char pad0[4];
    unsigned int m_writeOffset;
    void WriteBits(const void* data, unsigned int numberOfBits, bool align);
    void Write(unsigned int value, unsigned int numberOfBits);
    void WriteCompressed(unsigned int value, unsigned int numberOfBits);
    void WriteAlignedBytes(const void* data, unsigned int numberOfBytes);
    void AlignWriteToByteBoundary();
    void Reset();
    void WriteBitsFromIntegerRange(unsigned int value, unsigned int min, unsigned int max);
};

extern "C" void __stdcall sub_49f820(BitStream* stream);
extern "C" void __stdcall sub_49f930(BitStream* stream);
extern "C" void __stdcall sub_49fc20(BitStream* stream, unsigned int* out, unsigned int value);
extern "C" void __stdcall sub_49fcd0(BitStream* stream);
extern "C" void __stdcall sub_49fcf0(BitStream* stream);
extern "C" void __stdcall sub_49fd90(BitStream* stream, unsigned int* value, unsigned int bits, bool align);
extern "C" void __stdcall sub_49ff20(BitStream* stream, unsigned int* value, unsigned int bits, bool align);

unsigned int RakPeer::f(unsigned int a, unsigned int b, bool c)
{
    BitStream stream;
    sub_49f820(&stream);

    unsigned int total = 0;
    unsigned int i = 0;
    unsigned int count = m_count;
    if (count > 0) {
        unsigned int bitPos = 0x51;
        while (i < m_count) {
            if ((int)bitPos > (int)b)
                break;
            Entry* e = &m_entries[i];
            if (e->a == e->b) {
                sub_49fcf0(&stream);
            } else {
                sub_49fcd0(&stream);
            }
            unsigned int v = m_entries[i].a;
            sub_49fd90(&stream, &v, 0x20, true);
            total += 0x21;
            bitPos += 0x21;
            if (m_entries[i].a != m_entries[i].b) {
                unsigned int v2 = m_entries[i].b;
                sub_49fd90(&stream, &v2, 0x20, true);
                total += 0x20;
                bitPos += 0x20;
            }
            i++;
        }
    }

    unsigned int oldOffset = stream.m_writeOffset;
    unsigned short shortCount = (unsigned short)i;
    unsigned int v3 = shortCount;
    sub_49ff20(&stream, &v3, 0x10, true);
    total += stream.m_writeOffset - oldOffset;

    unsigned int v4 = v3;
    sub_49fc20(&stream, &v4, v3);

    if (c && shortCount != 0) {
        unsigned int remaining = m_count - shortCount;
        unsigned int j = 0;
        if (remaining != 0) {
            unsigned int srcIdx = shortCount;
            do {
                m_entries[j] = m_entries[srcIdx];
                j++;
                srcIdx++;
            } while (j < remaining);
        }
        m_count -= shortCount;
    }

    sub_49f930(&stream);
    return total;
}
