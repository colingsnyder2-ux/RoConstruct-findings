// from server: 0% by atomic.potato
extern "C" void* __cdecl sub_718A38(unsigned int size);

struct HeartbeatTask {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
};

struct HeartbeatTaskHolder {
    HeartbeatTask* ptr;
    HeartbeatTaskHolder(int value);
};

HeartbeatTaskHolder::HeartbeatTaskHolder(int value) {
    HeartbeatTask* p = (HeartbeatTask*)sub_718A38(0x10);
    if (p != 0) {
        p->field4 = (void*)1;
        p->field8 = (void*)1;
        p->field0 = (void*)0x8d540c;
        p->fieldC = (void*)value;
    } else {
        p = 0;
    }
    ptr = p;
}
