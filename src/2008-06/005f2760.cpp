// from server: 37% by colin




struct ChainClient {
    char pad[0x14];
    int field14;
};

struct SimJobStage {
    void* field0;
    char field4;
    int field8;
    void init(int);
};

extern "C" void __stdcall sub_64DA70(SimJobStage* p);
extern "C" void __stdcall sub_64DB80(ChainClient* p, int a, int b, int c, int d);

void SimJobStage::init(int arg)
{
    sub_64DA70(this);
    ChainClient* p = (ChainClient*)this;
    sub_64DB80(p, 1, 0, 0, arg);
}
