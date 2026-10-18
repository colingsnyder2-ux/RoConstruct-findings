// from server: 94% by Viper
extern "C" void* __cdecl malloc(unsigned int size);

struct RakPeerInterface {
};

void* __cdecl construct(unsigned int a, unsigned int b) {
    char* p = (char*)malloc(0x1c);
    *(unsigned int*)(p + 0x14) = b;
    *(unsigned int*)(p + 0xc) = a;
    *(unsigned char*)(p + 0x18) = 1;
    return p;
}
