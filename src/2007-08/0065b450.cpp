// from server: 48% by colin
extern "C" void* __stdcall HeapAlloc(void*, unsigned long, unsigned long);
extern "C" long __stdcall InterlockedIncrement(long*);

struct BatchAllocManager {
    int count;
    void* freeList;
    void* usedList;
    void* tail;
};

extern BatchAllocManager* g_manager;
extern int g_rowCount;
extern void* g_heap;
extern int g_flag;
extern void* g_usedHead;
extern void* g_usedTail;

void* __stdcall sub_62ff32(unsigned long);
void sub_656a50();

void* __stdcall AllocRow(int count)
{
    BatchAllocManager* mgr = g_manager;
    if (mgr == 0)
    {
        int n = count + 8;
        int rem = n & 3;
        if (rem < 0)
            rem = (rem - 1 | 0xfffffffc) + 1;
        int adj = (rem != 0) ? 1 : 0;
        int q = (n + ((n >> 31) & 3)) >> 2;
        int total = (q + adj) * 4;
        unsigned long size = total * g_rowCount + 0x10;

        if (g_flag != 0)
        {
            sub_656a50();
            mgr = (BatchAllocManager*)HeapAlloc(g_heap, 0, size);
        }
        else
        {
            mgr = (BatchAllocManager*)sub_62ff32(size);
        }

        if (mgr == 0)
            return 0;

        mgr->count = 0;
        mgr->freeList = 0;
        mgr->usedList = 0;
        mgr->tail = 0;
        g_manager = mgr;

        char* p = (char*)mgr + 0x10;
        mgr->freeList = p;

        int i = 0;
        while (i < g_rowCount)
        {
            *(BatchAllocManager**)p = mgr;
            *(char**)(p + 4) = p + total;
            p += total;
            i++;
        }
        *(void**)(p + 4) = 0;

        mgr = g_manager;
        if (mgr == 0)
            return 0;
    }

    if (mgr->freeList == 0)
        return 0;

    void* result = mgr->freeList;
    mgr->count++;
    g_usedHead = (void*)((int)g_usedHead + 1);

    mgr = g_manager;
    void* node = mgr->freeList;
    void* next = *(void**)((char*)node + 4);
    *(void**)((char*)node + 4) = 0;
    mgr->freeList = next;

    if (next != 0)
        return (char*)result + 8;

    BatchAllocManager* m = g_manager;
    void* old = m->usedList;
    void* newHead;
    if (old != 0)
        newHead = old;
    else
        newHead = m->tail;
    g_manager = (BatchAllocManager*)newHead;
    if (newHead != 0)
        *(void**)((char*)newHead + 8) = old;

    void* prev = g_usedTail;
    m->tail = prev;
    void* prevPrev;
    if (prev != 0)
        prevPrev = *(void**)((char*)prev + 8);
    else
        prevPrev = 0;
    m->usedList = prevPrev;
    if (g_usedTail != 0)
        *(void**)((char*)g_usedTail + 8) = m;
    g_usedTail = m;

    return (char*)result + 8;
}
