// from server: 6% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ItemList {
    void* head;
    int count;
};

struct Replicator {
    char pad[0x1dec];
    ItemList items;

    void* findItem(void* key);
};

void __stdcall sub_570200(void* a, void* b, void* c);

void* Replicator::findItem(void* key)
{
    ItemList* list = &this->items;
    void* result = 0;
    void* node = list->head;
    if (node != 0) {
        sub_570200(list, &result, key);
    }
    return result;
}
