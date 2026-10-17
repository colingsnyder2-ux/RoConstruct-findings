// from server: 66% by colin
extern "C" unsigned __int64 __rdtsc();
#pragma intrinsic(__rdtsc)

unsigned __int64 __cdecl measure(void (__cdecl *callback)(void *), void *argument)
{
    unsigned __int64 start, end;

    __try
    {
        start = __rdtsc();
        callback(argument);
        end = __rdtsc();
    }
    __except (1)
    {
        return 0;
    }

    return end - start;
}
