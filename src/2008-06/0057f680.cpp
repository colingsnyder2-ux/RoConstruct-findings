// from server: 37% by atomic.potato
extern "C" void construct_string(void *, const char *);

struct VModelInstance
{
    VModelInstance(const char *);
};

VModelInstance::VModelInstance(const char *value)
{
    construct_string((char *)this + 0x1c, "Controller1");
    *(void **)this = (void *)0x830ab8;
}
