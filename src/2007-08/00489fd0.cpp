// from server: 37% by colin
struct Notifier {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    Notifier(void* arg);
};

Notifier::Notifier(void* arg) {
    vtable = (void*)0x79af50;
    field4 = 0;
    field8 = 0;
    fieldC = 0;
    if (*(int*)arg != 0) {
        fieldC = *(int*)((char*)arg + 8);
        field4 = *(int*)arg;
        int (*fn)(int, int) = *(int (**)(int, int))arg;
        field8 = fn(*(int*)((char*)arg + 4), 0);
    }
}
