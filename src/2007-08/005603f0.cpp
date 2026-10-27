// from server: 83% by sophus
struct FilteredSelection {
};

void __cdecl for_each_impl(void (*fn)(void*, int), void* ctx, int* begin, int* end, int* out)
{
    int* it = begin;
    if (it != end) {
        do {
            fn(ctx, *it);
            ++it;
        } while (it != end);
    }
    out[0] = (int)fn;
    out[1] = (int)ctx;
    out[2] = (int)end;
}
