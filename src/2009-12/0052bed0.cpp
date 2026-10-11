// from server: 51% by atomic.potato
struct Server {
    void* field0;
    void init(int arg);
};

extern "C" void* __cdecl sub_7f3860(int size);

void Server::init(int arg) {
    void* p;
    this->field0 = 0;
    p = sub_7f3860(0x14);
    if (p != 0) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)((char*)p + 0) = 0x9bc834;
        *(int*)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    this->field0 = p;
}
