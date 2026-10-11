// from server: 41% by atomic.potato
struct P8PVInstance {
    char pad[0x94];
    short field_94;
    int sub_6a4810();
    int SetImpl(int* other);
};

extern "C" void* __stdcall sub_89e4b8();

int P8PVInstance::SetImpl(int* other) {
    sub_6a4810();
    char* p = (char*)this + 0xa0;
    sub_89e4b8();
    *(int*)((char*)other + 0x1c) = *(int*)(p + 0x1c);
    return (int)other;
}
