// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct UString_sink_stream_buffer
{
    void destroy();
};

void UString_sink_stream_buffer::destroy()
{
    int* p = *(int**)((char*)this + 0x10);
    if (p)
    {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1)
        {
            (*(void(__thiscall**)(int*))(*(int*)p + 4))(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1)
            {
                (*(void(__thiscall**)(int*))(*(int*)p + 8))(p);
            }
        }
    }

    int* q = this ? (int*)((char*)this + 8) : 0;
    int* r = *(int**)q;
    int* s = (int*)((char*)q + *(int*)((char*)r + 4));
    *(int*)s = *(int*)0x77e4f0;

    *(int*)this = 0x7a7848;
}
