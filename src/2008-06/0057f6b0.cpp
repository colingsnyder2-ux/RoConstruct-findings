// from server: 56% by atomic.potato
extern "C" void *construct_string(void *, const char *);
void initialize_controller(void *);

struct S
{
    S *f(const char *);
};

S *S::f(const char *value)
{
    char buffer[28];
    construct_string(buffer, "Controller1");
    initialize_controller(this);
    *(void **)this = (void *)0x830ad4;
    return this;
}
