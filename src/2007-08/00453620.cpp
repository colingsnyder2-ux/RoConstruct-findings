// from server: 45% by colin
extern "C" int __cdecl sub_00554B20();

int g_8bbf08;
int g_8bbf0c;

int sub_00453620()
{
    if ((g_8bbf0c & 1) == 0)
    {
        g_8bbf0c |= 1;
        g_8bbf08 = sub_00554B20();
    }
    return g_8bbf08;
}
