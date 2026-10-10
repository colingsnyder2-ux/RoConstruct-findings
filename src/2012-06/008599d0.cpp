// from server: 59% by colin
struct ChainClient {
    char pad[0x14];
    int field14;
    void sub_97d3a0();
    void sub_97d5f0(int, int, int, int, int);
    void func(int);
};

void ChainClient::func(int arg)
{
    sub_97d3a0();
    int* p = (this != 0) ? &this->field14 : 0;
    sub_97d5f0(arg, 1, 0, 0, (int)p);
}
