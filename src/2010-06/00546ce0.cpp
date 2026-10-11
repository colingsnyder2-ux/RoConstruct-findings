// from server: 38% by atomic.potato
extern "C" int __stdcall sub_7A89B2(int, int, int);

struct RBX_MaterialBase_Level {
    void construct();
};

void RBX_MaterialBase_Level::construct()
{
    int local = 0;
    sub_7A89B2((int)&local, 0, 0);
}
