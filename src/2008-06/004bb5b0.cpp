// from server: 94% by atomic.potato
extern "C" void* __cdecl malloc(unsigned int);

struct RakPeerInterface
{
    void* field0;
    unsigned int fieldC;
    unsigned int field14;
    unsigned char field18;
};

void* __cdecl f(void* value, unsigned int size)
{
    void* result = malloc(0x1c);
    *(unsigned int*)((char*)result + 0x14) = size;
    *(unsigned int*)((char*)result + 0x0c) = (unsigned int)value;
    *(unsigned char*)((char*)result + 0x18) = 1;
    return result;
}
