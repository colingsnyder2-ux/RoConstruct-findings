// from server: 91% by atomic.potato
struct Tool {
};

extern "C" void __cdecl sub_5f9900(int, int);

void __cdecl f(int a, int b)
{
    if (b != 4) {
        sub_5f9900(a, b);
        return;
    }

    *(int*)a = 0x00bad1f8;
    ((char*)a)[4] = 0;
    ((char*)a)[5] = 0;
}
