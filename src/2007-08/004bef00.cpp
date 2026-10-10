// from server: 85% by tester
struct RakPeer {
    int sub_4BCAD0(int, int, int);
    int method(int a, int b);
};

int RakPeer::method(int a, int b) {
    int idx = sub_4BCAD0(a, b, 0);
    if (idx == -1)
        goto fail;
    {
        char* base = *(char**)((char*)this + 0x22c);
        if (base[idx * 0x840] == 0)
            goto fail;
    }
    return 1;
fail:
    return 0;
}
