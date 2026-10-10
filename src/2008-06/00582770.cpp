// from server: 72% by atomic.potato
struct StopCommand
{
    int reserved[4];
    unsigned char f();
};

extern "C" int sub_581C00(void *, int);

unsigned char StopCommand::f()
{
    return *(int *)((char *)sub_581C00((char *)this + 16, 1) + 436) == 1;
}
