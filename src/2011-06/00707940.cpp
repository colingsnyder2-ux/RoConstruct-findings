// from server: 21% by atomic.potato
struct EventDesc {
    char pad0[4];
    char sub[0x10];
    int init(int);
    int run(int, int);
};

int EventDesc::init(int) {
    return 0;
}

int EventDesc::run(int a, int b) {
    int tmp = 0;
    init(1);
    return a;
}

int EventDesc_entry(EventDesc *self, int a, int b) {
    int tmp = 0;
    self->init(1);
    self->run(a, b);
    return a;
}
