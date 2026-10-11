// from server: 65% by atomic.potato
extern "C" char *construct_string(char *, const char *);
extern "C" void function_57e730(void *, char *);

struct S
{
    S *f(char *);
};

S *S::f(char *arg)
{
    char local[28];
    construct_string(local, "FilteredSelection");
    function_57e730(this, local);
    *(void **)this = (void *)0x830878;
    return this;
}
