// from server: 85% by atomic.potato
struct CRobloxControlMaterialSelector
{
};

extern "C" void __stdcall sub_B24520(void* dst, void* src);

void __cdecl CopyRange(void* first, void* last, void* src)
{
    char* dst = (char*)first;
    char* end = (char*)last;
    char* s = (char*)src;

    if (dst == end)
        return;

    do
    {
        *(int*)dst = *(int*)s;
        *(int*)(dst + 4) = *(int*)(s + 4);
        sub_B24520(dst + 8, s + 8);
        dst += 12;
    } while (dst != end);
}
