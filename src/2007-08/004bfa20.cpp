// from server: 50% by colin
struct RakPeer {
    void sub_4BFA20(int, int);
};

extern "C" {
    int __cdecl sub_4B7F70();
    void __cdecl sub_4B7E40();
    void __cdecl sub_630A1E();
    void __cdecl sub_4CBC60(void*);
    void __cdecl sub_4CA680(void*);
    void __cdecl sub_4CBA80(void*, void*, int);
    void __cdecl sub_4CBB40(void*);
    void* __cdecl sub_4CBC50(void*);
    void __cdecl sub_4CBCA0(void*);
    void __cdecl sub_4B91F0();
    void __cdecl sub_4BD180(void*, int, int, int, int, int, int, int, int, int);
}

void RakPeer::sub_4BFA20(int a1, int a2) {
    char buf[0x100];
    int i;

    sub_4CBC60(buf);
    *(int*)(buf + 0xFC) = 0;
    buf[0xB4] = 5;
    if (*(unsigned int*)((char*)this + 0x898) < (unsigned int)sub_4B7F70()) {
        sub_4B91F0();
    }
    sub_4CA680(buf);
    sub_4CBA80(buf, &a1, 4);
    sub_4CBA80(buf, &a2, 2);
    sub_4CBA80(buf, (char*)this + 0x89C, 0x14);
    sub_4CBB40(buf);
    char* p = (char*)sub_4CBC50(buf);
    for (i = 0; i < 0x14; i++) {
        buf[0xB5 + i] = p[i];
    }
    *(int*)(buf + 0xC9) = *(int*)((char*)this + 0x73C);
    for (i = 0; i < 0x20; i++) {
        buf[0xCD + i] = *((char*)this + 0x75C + i);
    }
    sub_4B7E40();
    sub_4BD180(buf, 0x1C8, 0, 0, 0, a1, a2, 0, 0, 0);
    *(int*)(buf + 0xFC) = -1;
    sub_4CBCA0(buf);
}
