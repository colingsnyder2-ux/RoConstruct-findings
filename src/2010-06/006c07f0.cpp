// from server: 90% by atomic.potato
struct VirtualUser
{
    void Initialize();
};

void VirtualUser::Initialize()
{
    *(int*)((char*)this + 0) = 0xa438bc;
    *(int*)((char*)this + 4) = 0xa438b4;
    *(int*)((char*)this + 0x18) = 0xa438a8;
    *(int*)((char*)this + 0x1c) = 0xa4389c;
}
