// from server: 30% by colin
struct Notifier {
    void (__stdcall *callback)(int, int);
    int field4;
    int field8;
    void invoke();
};

extern "C" void __stdcall sub_488F60(int *out, Notifier *self);

void Notifier::invoke()
{
    int local;
    local = 0;
    sub_488F60(&local, this);
    if (local != 0) {
        void (__stdcall *fn)(int, int) = (void (__stdcall *)(int, int))local;
        fn(1, this->field4);
    }
}
