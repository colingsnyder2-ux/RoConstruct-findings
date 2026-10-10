// from server: 47% by colin
struct Running {
    void fireEvents(int);
};

extern float g_7a8344;
extern float g_797b38;
extern void* G1_func_0062fef6(unsigned int);
extern void G2_func_00602cd0(void*, int, float);

void Running::fireEvents(int a2)
{
    if (g_7a8344 == *(float*)(a2 + 4))
        return;

    void* p = G1_func_0062fef6(0x10);
    if (p) {
        G2_func_00602cd0(p, *(int*)((char*)this + 4), g_797b38);
    }
}
