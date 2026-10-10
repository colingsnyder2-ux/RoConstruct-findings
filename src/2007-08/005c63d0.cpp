// from server: 51% by colin
struct lua_exception {
    char pad0[4];
    char state;
    char pad1[1];
    int field8;
    char pad2[8];
    int field14;
    char pad3[16];
    int field28;
    int resume(int n);
};

int lua_exception::resume(int n)
{
    if (state == 1)
        goto resume_here;
    if (state != 0) {
        extern void err(const char*, int);
        err((const char*)0x7b970c, 0);
        return 0;
    }
    if (field14 == field28)
        goto resume_here;
    extern void err2(const char*, int);
    err2((const char*)0x7b96e4, 0);
    return 0;

resume_here:
    {
        char* base = (char*)this - 4;
        base[0] = 0;
        int edx = field8 - (n << 4);
        extern int helper1(void*, void*, int);
        int r = helper1(this, (void*)0x5c6350, edx);
        if (r != 0) {
            extern void helper2(void*, int, int);
            helper2(this, r, field8);
            state = (char)r;
            *(int*)(field14 + 8) = field8;
            return r;
        }
        return (unsigned char)state;
    }
}
