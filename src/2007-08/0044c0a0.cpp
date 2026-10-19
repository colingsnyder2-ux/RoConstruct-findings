// from server: 89% by TrollStein
struct CRobloxControlColorSelector {
};

extern "C" void __stdcall func_77d434(void*, const void*);

void __cdecl assign_range(CRobloxControlColorSelector* first, CRobloxControlColorSelector* last, const CRobloxControlColorSelector* src)
{
    while (first != last) {
        *(int*)first = *(const int*)src;
        *(int*)((char*)first + 4) = *(const int*)((const char*)src + 4);
        func_77d434((char*)first + 8, (const char*)src + 8);
        first = (CRobloxControlColorSelector*)((char*)first + 12);
    }
}
