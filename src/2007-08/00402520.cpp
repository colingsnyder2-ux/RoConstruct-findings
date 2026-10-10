// from server: 36% by colin
extern "C" void* __stdcall sub_52C940(int, int);

void* g_8bae88;
unsigned int g_8bae8c;

void sub_402520()
{
    if ((g_8bae8c & 1) == 0)
    {
        g_8bae8c |= 1;
        g_8bae88 = sub_52C940(-1, 0x7a4868);
    }
}
