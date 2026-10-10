// from server: 34% by why2
struct ExitCommand {
    void* field_0x78;
    void invoke();
};

void ExitCommand::invoke() {
    void* p = field_0x78;
    if (p) {
        void** vtbl = *(void***)p;
        void (*fn)(void*) = (void (*)(void*))vtbl[0];
        fn(p);
    }
}
