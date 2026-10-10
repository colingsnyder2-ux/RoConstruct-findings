// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct MapIterPair {
    int first;
    int second;
};

struct MapResult {
    int a;
    int b;
    int c;
    int d;
};

struct CMap {
    MapResult insert_range(MapIterPair* first, MapIterPair* last);
};

MapResult CMap::insert_range(MapIterPair* first, MapIterPair* last) {
    MapResult result;
    while (first != last) {
        MapIterPair tmp;
        tmp.first = first->first;
        tmp.second = first->second;
        if (tmp.second != 0) {
            _InterlockedExchangeAdd((volatile long*)(tmp.second + 4), 1);
        }
        MapResult* p = &result;
        void* sp = &tmp;
        void* arg = &sp;
        void* out = &result;
        void* dummy = 0;
        // call helper at 0x4398f0
        extern void __stdcall helper(void*, void*);
        helper(&result, &tmp);
        first += 1;
    }
    return result;
}
