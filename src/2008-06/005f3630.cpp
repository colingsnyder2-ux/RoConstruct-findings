// from server: 53% by colin
extern "C" int __stdcall pubsync_helper(void*);

struct VWinHttpRequest_stream_buffer
{
    void reset(int, int, int, int, int, int);
};

void VWinHttpRequest_stream_buffer::reset(int a1, int a2, int a3, int a4, int a5, int a6)
{
    int* p24 = *(int**)((char*)this + 0x24);
    if (*p24 != 0)
        pubsync_helper(*(void**)((char*)this + 0x24));

    if (a1 == 1)
    {
        int* p20 = *(int**)((char*)this + 0x20);
        if (*p20 != 0)
        {
            int* p30 = *(int**)((char*)this + 0x30);
            int v = *p30;
            a3 -= v;
            a4 -= (v >> 31);
        }
    }

    *(int*)*(int**)((char*)this + 0x10) = 0;
    *(int*)*(int**)((char*)this + 0x20) = 0;
    *(int*)*(int**)((char*)this + 0x30) = 0;
    *(int*)*(int**)((char*)this + 0x14) = 0;
    *(int*)*(int**)((char*)this + 0x24) = 0;
    *(int*)*(int**)((char*)this + 0x34) = 0;

    int v44 = *(int*)((char*)this + 0x44);
    int v18 = a6;
    int v14 = a5;
    int v10 = a4;
    int v0c = a3;
    int v8 = a2;
    int v4 = a1;

    extern void __stdcall func_005f95f0(int, int, int, int, int, int);
    func_005f95f0(v4, v8, v0c, v10, v14, v18);
}
