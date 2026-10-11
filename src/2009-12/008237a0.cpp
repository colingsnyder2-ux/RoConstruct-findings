// from server: 81% by atomic.potato
extern "C" long __stdcall InterlockedIncrement(long volatile*);

struct VCXTPReportRow
{
    char pad0[4];
    char* data;
    int count;
    void* GetAt(int index, int addRef);
};

void* VCXTPReportRow::GetAt(int index, int addRef)
{
    if (index < 0 || index >= count)
        return 0;
    char* p = data + index * 8;
    if (addRef != 0 && *(long*)(p + 4) != 0)
        InterlockedIncrement((long*)(*(char**)(p + 4) + 4));
    return *(void**)(p + 4);
}
