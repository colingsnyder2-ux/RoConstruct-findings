// from server: 82% by atomic.potato
extern "C" void __stdcall sym(double, void *, void *);

struct HeartbeatTask
{
    char padding[0x1e0];
    double value;
    void *method(void *, void *);
};

void *HeartbeatTask::method(void *a, void *b)
{
    sym(value, a, b);
    return a;
}
