// from server: 61% by atomic.potato
extern "C" void __cdecl sub_4c0150();

void function_4c0bd0(void *unused, void *a, int b)
{
    if (b != 4) {
        sub_4c0150();
        return;
    }

    *(unsigned long *)a = 0x00b10600;
    *((unsigned char *)a + 4) = 0;
    *((unsigned char *)a + 5) = 0;
}
