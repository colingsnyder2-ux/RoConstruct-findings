// from server: 29% by colin
// roc 2007-08 004ccac0  unit: CSHA1  size: 340 bytes
// library rbxgs-raknet/SHA1.cpp (function ?Update@CSHA1@@QAE_NPBEI_N@Z)

extern "C" void* __stdcall memcpy_impl(void*, const void*, unsigned int);
extern "C" int __cdecl _security_check_cookie(unsigned int);

struct CSHA1 {
    unsigned char m_state[8];
    unsigned int m_count[2];
    unsigned char m_buffer[64];
    unsigned int m_hash[5];
    unsigned char m_digest[20];
    unsigned char m_workspace[64];
    bool Update(const unsigned char* data, unsigned int len, bool check);
};

void __cdecl SHA1Transform(unsigned int state[5], const unsigned char buffer[64]);
void __cdecl SHA1Finalize(unsigned int state[5], unsigned int count[2]);

bool CSHA1::Update(const unsigned char* data, unsigned int len, bool check)
{
    unsigned int i;
    unsigned int j;
    unsigned int cursor;
    unsigned int blockSize;
    unsigned int bufferSize;

    if (data == 0)
        return false;

    if (check != 0 && check != 1)
        return false;

    blockSize = len * 8;

    if (blockSize != 0x80 && blockSize != 0xc0 && blockSize != 0x100)
        return false;

    m_state[0] = (unsigned char)check;

    if (len == 0)
        return false;

    m_count[0] = blockSize;

    memcpy_impl(m_buffer, data, len);

    {
        int t = (int)blockSize;
        int r = t % 32;
        if (r < 0) r += 32;
        *(unsigned int*)0x8bf9cc = (t - r) / 32 + 6;
    }

    bufferSize = m_count[0];
    {
        int t = (int)bufferSize;
        int r = t % 8;
        if (r < 0) r += 8;
        j = (unsigned int)((t - r) / 8);
    }

    for (i = 0; i < j; i++)
    {
        unsigned int a = i % 4;
        unsigned int b = i / 4;
        m_workspace[a * 4 + b] = m_buffer[i];
    }

    SHA1Transform(m_hash, m_workspace);

    if (check == 1)
        SHA1Finalize(m_hash, m_count);

    return true;
}
