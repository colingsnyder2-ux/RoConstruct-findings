// from server: 67% by atomic.potato
struct CleanStage {
    int field0;
    void* field4;
    bool compare(void* other);
};

bool CleanStage::compare(void* other) {
    if (field4 == 0)
        return false;
    if (other == 0)
        return false;
    int a = ((int (__thiscall*)(void*))((*(void***)field4)[1]))(field4);
    int b = ((int (__thiscall*)(void*))((*(void***)other)[1]))(other);
    return a >= b;
}
