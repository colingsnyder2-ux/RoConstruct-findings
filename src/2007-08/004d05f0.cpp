// from server: 73% by colin
struct PartChunk {
    void* field0;
    void* field4;
    void* field8;
    PartChunk* assign(PartChunk* const* other);
};

extern "C" long __stdcall InterlockedDecrement(long volatile*);
extern "C" long __stdcall InterlockedIncrement(long volatile*);
extern "C" void __cdecl free(void*);

PartChunk* PartChunk::assign(PartChunk* const* other) {
    PartChunk* src = *other;
    PartChunk* old = (PartChunk*)field0;
    if (src != old) {
        if (old != 0) {
            if (InterlockedDecrement((long*)((char*)old + 4)) == 0) {
                void* node = *(void**)((char*)field0 + 8);
                while (node != 0) {
                    void** vt = *(void***)node;
                    ((void (__thiscall*)(void*))vt[1])(node);
                    void* next = *(void**)((char*)node + 4);
                    free(node);
                    node = next;
                }
                if (field0 != 0) {
                    void** vt = *(void***)field0;
                    ((void (__thiscall*)(void*, int))vt[0])(field0, 1);
                }
            }
        }
        field0 = 0;
    }
    if (src != 0) {
        field0 = src;
        InterlockedIncrement((long*)((char*)src + 4));
    }
    return this;
}
