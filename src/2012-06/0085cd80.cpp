// from server: 69% by atomic.potato
struct S
{
    void* stream;
    int __cdecl write(const char* data, int count);
};

int S::write(const char* data, int count)
{
    int total = 0;
    while (total < 1)
    {
        int written = ((int (__stdcall*)(void*, const char*, int))0xb22614)(stream, data + total, 1 - total);
        total += written;
    }
    return total == 1;
}
