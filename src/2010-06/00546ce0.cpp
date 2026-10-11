// from server: 40% by atomic.potato
extern "C" int __stdcall sub_7A89B2(int, int, int);

struct RBX_MaterialBase_Level {
    void construct();
};

void RBX_MaterialBase_Level::construct()
{
    int local = 0;
    sub_7A89B2((int)&local, 0xa1f310, 0xb1d4b4);
}
