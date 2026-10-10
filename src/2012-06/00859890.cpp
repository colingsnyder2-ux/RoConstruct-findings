// from server: 62% by atomic.potato
struct ChainClient {
    int field_0;
    int field_3C;
    void setFlag(int arg);
};

void ChainClient::setFlag(int arg) {
    if (field_0 == 1) {
        if (!(field_3C & 2)) {
            field_3C |= 2;
            int* ptr = reinterpret_cast<int*>(field_0);
            *reinterpret_cast<int*>(arg) = 1;
            reinterpret_cast<void(__stdcall*)(int)>(ptr[15])(arg);
        }
    } else if (field_0 == 2) {
        if (!(field_3C & 4)) {
            field_3C |= 4;
            int* ptr = reinterpret_cast<int*>(field_0);
            *reinterpret_cast<int*>(arg) = 2;
            reinterpret_cast<void(__stdcall*)(int)>(ptr[15])(arg);
        }
    }
}
