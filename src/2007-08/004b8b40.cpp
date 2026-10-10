// from server: 80% by colin
struct RakPeer {
    char pad[0x6fc];
    int field_6fc;
    void f(char* p);
};

void RakPeer::f(char* p)
{
    if (p != 0 && *p != 0) {
        extern void __stdcall sub_4ca130(int, char*);
        sub_4ca130((int)(this->pad + 0x6fc), p);
    }
}
