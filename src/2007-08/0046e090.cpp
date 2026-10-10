// from server: 39% by colin
struct Table {
    char pad0[4];
    int count;
    void** items;
    int capacity;
    void* find(int key);
    void grow(int newsize);
    void insert(int key, void* value);
};

struct Node {
    int key;
    char pad4[0x1c];
    char value;
    char pad21[3];
    Node* next;
};

extern "C" int __cdecl atoi(const char*);
extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl free(void*);

extern "C" int __stdcall compare_string(void*, void*);
extern "C" void __stdcall string_ctor(void*, void*);

void Table::insert(int key, void* value) {
    int idx = key % count;
    Node* node = (Node*)items[idx];
    if (node != 0) {
        node = (Node*)malloc(0x28);
        if (node != 0) {
            node->key = key;
            node->next = 0;
            node->value = *(char*)value;
        }
        items[idx] = node;
        count++;
    } else {
        int depth = 1;
        char found = 1;
        while (1) {
            if (found) {
                if (key == node->key) found = 1;
                else found = 0;
            } else {
                found = 0;
            }
            if (key == node->key) {
                if (compare_string(&node->value, value)) {
                    node->value = *(char*)value;
                    return;
                }
            }
            node = node->next;
            depth++;
            if (node == 0) break;
        }
        if (!found && depth > 5) {
            if (capacity < count * 10) {
                grow(count * 2 + 1);
            }
        }
        idx = key % count;
        node = (Node*)malloc(0x28);
        if (node != 0) {
            node->key = key;
            node->next = (Node*)items[idx];
            node->value = *(char*)value;
        }
        items[idx] = node;
        count++;
    }
}
