// from server: 39% by colin
struct VReplicator {
    char pad[0xe10];
    struct Inner {
        void* field0;
        void* field4;
        void* field8;
    } inner;
    void sub_4b00b0();
    void sub_4ad3b0(void*, void*, void*, void*, void*);

    void destroy();
};

extern "C" void __cdecl sub_62fc62(void*);

void VReplicator::sub_4ad3b0(void*, void*, void*, void*, void*) {
}

void VReplicator::sub_4b00b0() {
}

void VReplicator::destroy() {
    Inner* p = this ? &this->inner : 0;
    void* v = p->field4;
    void* w = *(void**)v;
    sub_4ad3b0(p, v, w, p, &v);
    sub_62fc62(p->field4);
    p->field4 = 0;
    p->field8 = 0;
    sub_4b00b0();
}
