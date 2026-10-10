// from server: 71% by why2
struct EventSource {
    void invoke(void*);
};

void EventSource::invoke(void* arg)
{
    char* p = *(char**)arg;
    void (*fn)(void*) = *(void (**)(void*))p;
    fn(p + 0x10);
}
