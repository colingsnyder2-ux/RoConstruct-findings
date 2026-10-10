// from server: 30% by atomic.potato
extern "C" int __stdcall CallTarget(int *);

int __stdcall Function(int *p)
{
    if (p == 0 || *p != 0x2c)
        return 0x80070057;

    p[7] = 0;
    return CallTarget(p + 1);
}
