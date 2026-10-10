// from server: 90% by atomic.potato
extern "C" int __cdecl G1_func_007a8bea(void*, const char*, void*, int, int);

struct Animator
{
    int f(void*);
};

int Animator::f(void* value)
{
    return G1_func_007a8bea(value, ".?AVInstance@RBX@@", (void*)0xb78e40, (int)0xbe1244, 0) != 0;
}
