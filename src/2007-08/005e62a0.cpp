// from server: 43% by colin
// roc 2007-08 005e62a0  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e62a0

extern "C" int __cdecl sub_554b20();

int* g_5e62a0_ptr;
unsigned char g_5e62a0_flag;

int __cdecl sub_5e62a0()
{
    if (!(g_5e62a0_flag & 1)) {
        g_5e62a0_flag |= 1;
        g_5e62a0_ptr = (int*)sub_554b20();
    }
    return (int)g_5e62a0_ptr;
}
