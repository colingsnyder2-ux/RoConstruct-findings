// from server: 85% by atomic.potato
// roc 2009-12 00452b60  unit: CRobloxControlColorSelector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00452b60

extern "C" int __stdcall sub_98d538(void*, void*);

struct CRobloxControlColorSelector
{
};

void __cdecl assign_range(void* first, void* last, void* value)
{
    char* dst = (char*)first;
    char* end = (char*)last;
    if (dst != end)
    {
        char* src = (char*)value;
        do
        {
            *(int*)dst = *(int*)src;
            *(int*)(dst + 4) = *(int*)(src + 4);
            sub_98d538(dst + 8, src + 8);
            dst += 12;
        } while (dst != end);
    }
}
