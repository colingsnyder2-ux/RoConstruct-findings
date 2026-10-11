// from server: 65% by atomic.potato
extern "C" void G1_func_00606b80(void*, void*);
extern "C" void G1_func_00a404c4(void*, const char*);

struct S
{
    S(const char*);
};

S::S(const char* value)
{
    G1_func_00a404c4((void*)0, value);
    G1_func_00606b80(this, (void*)0);
    *(void**)this = (void*)0xA9327C;
}
