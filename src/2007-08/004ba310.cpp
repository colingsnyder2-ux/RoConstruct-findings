// from server: 87% by colin
struct RakPeer {
    char pad[0x284];
    int field284;
    char pad2[0x29c - 0x288];
    int field29c;
    int field2a0;
    int field2a4;
    void clear();
};

extern "C" void __cdecl sub_62fc62(void*);
extern "C" void __cdecl sub_671390(void*);
extern "C" void __cdecl sub_4ca1d0(void*);

void RakPeer::clear()
{
    sub_671390(&field284);

    unsigned int i = 0;
    while (i < (unsigned int)field2a0) {
        int* arr = (int*)field29c;
        int p = arr[i];
        sub_62fc62((void*)*(int*)p);
        arr = (int*)field29c;
        p = arr[i];
        sub_62fc62((void*)p);
        i++;
    }

    if (field2a4 != 0) {
        if ((unsigned int)field2a4 > 0x200) {
            sub_62fc62((void*)field29c);
            field2a4 = 0;
            field29c = 0;
        }
        field2a0 = 0;
    }

    sub_4ca1d0(&field284);
}
