// from server: 87% by king_originala
struct Object {
    virtual ~Object();
};

struct Base {
    char storage[0x28c];
    ~Base();
};

struct Member {
    char storage[0x58];
    ~Member();
};

struct S : Base {
    Member member;
    Object* object;
    ~S();
};

S::~S()
{
    char* p = reinterpret_cast<char*>(this);
    int* table = *reinterpret_cast<int**>(p + 0x134);

    *reinterpret_cast<unsigned long*>(p) = 0x831d4c;
    *reinterpret_cast<unsigned long*>(p + 0x10) = 0x831d40;
    *reinterpret_cast<unsigned long*>(p + 0x14) = 0x831d38;
    *reinterpret_cast<unsigned long*>(p + 0x20) = 0x831d30;
    *reinterpret_cast<unsigned long*>(p + 0x24) = 0x831d20;
    *reinterpret_cast<unsigned long*>(p + 0x44) = 0x831d10;
    *reinterpret_cast<unsigned long*>(p + 0x64) = 0x831d00;
    *reinterpret_cast<unsigned long*>(p + 0x84) = 0x831cf0;
    *reinterpret_cast<unsigned long*>(p + 0xa4) = 0x831ce0;
    *reinterpret_cast<unsigned long*>(p + 0xc4) = 0x831cd0;
    *reinterpret_cast<unsigned long*>(p + 0x130) = 0x831cc4;
    *reinterpret_cast<unsigned long*>(p + 0x1a0) = 0x831cac;
    *reinterpret_cast<unsigned long*>(p + 0x288) = 0x831c94;

    *reinterpret_cast<unsigned long*>(p + 0x134 + table[1]) = 0x831c88;
    *reinterpret_cast<unsigned long*>(
        p + 0x134 + (*reinterpret_cast<int**>(p + 0x134))[2]) = 0x831c80;
    *reinterpret_cast<unsigned long*>(
        p + 0x134 + (*reinterpret_cast<int**>(p + 0x134))[3]) = 0x831c64;

    int offset = (*reinterpret_cast<int**>(p + 0x134))[1];
    *reinterpret_cast<int*>(p + 0x130 + offset) = offset - 0x1b8;

    offset = (*reinterpret_cast<int**>(p + 0x134))[2];
    *reinterpret_cast<int*>(p + 0x130 + offset) = offset - 0x1c0;

    offset = (*reinterpret_cast<int**>(p + 0x134))[3];
    *reinterpret_cast<int*>(p + 0x130 + offset) = offset - 0x1c8;

    delete object;
}
