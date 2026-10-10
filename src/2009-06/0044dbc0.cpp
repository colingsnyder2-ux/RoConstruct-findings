// from server: 53% by why2
struct ExitCommand {
    char pad[0x7c];
    void* field_0x7c;
    void invoke();
};

void ExitCommand::invoke() {
    void* p = field_0x7c;
    if (p) {
        void** vtbl = *(void***)p;
        void (*fn)(void*) = (void (*)(void*))vtbl[0];
        fn(p);
    }
}
