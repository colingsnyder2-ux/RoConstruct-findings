// from server: 81% by colin
struct RakPeer {
    char pad[0x8d4];
    unsigned int field_8d4;
    unsigned int field_8d8;
    unsigned int field_8dc;
    unsigned int field_8e0;
    unsigned int field_8e4;
    void method(unsigned int arg);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void RakPeer::method(unsigned int arg) {
    unsigned int* p = (unsigned int*)field_8d4;
    unsigned int v = p[2];
    if (v != field_8d8) {
        unsigned int* q = (unsigned int*)field_8d4;
        unsigned char* r = (unsigned char*)q[2];
        if (r[4] != 1) {
            goto skip;
        }
    }
    {
        unsigned int* q = (unsigned int*)field_8d4;
        unsigned int saved = q[2];
        void* mem = sub_62FEF6(0xc);
        unsigned int* q2 = (unsigned int*)field_8d4;
        q2[2] = (unsigned int)mem;
        unsigned int* q3 = (unsigned int*)field_8d4;
        unsigned int* q4 = (unsigned int*)q3[2];
        q4[2] = saved;
    }
skip:
    {
        unsigned int* q = (unsigned int*)field_8d4;
        unsigned int v2 = q[2];
        field_8d4 = v2;
        q[0] = arg;
    }
    {
        unsigned int* q = (unsigned int*)field_8dc;
        field_8e4 += 1;
        *((unsigned char*)q + 4) = 1;
        unsigned int* q2 = (unsigned int*)field_8dc;
        unsigned int v3 = q2[2];
        field_8dc = v3;
    }
}
