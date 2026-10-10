// from server: 80% by colin
struct UtagACCEL_CArray {
    char pad0[0xc];
    int count;
    void* head;
    void* tail;
    int capacity;
    void* allocator;
    void* Insert(void* value);
};

extern "C" void* __stdcall sub_6306A0(void* p, int size, int count);
extern "C" void __stdcall sub_62FF20();
extern "C" void* __stdcall sub_77DDAC();

void* UtagACCEL_CArray::Insert(void* value) {
    if (this->head == 0) {
        void* p = sub_6306A0(&this->tail, this->capacity, 0x10);
        int n = this->capacity;
        char* e = (char*)p + 4 + (n << 4) - 0x10;
        int i = n - 1;
        if (i >= 0) {
            do {
                *(void**)(e + 8) = this->head;
                this->head = e;
                i--;
                e -= 0x10;
            } while (i >= 0);
        }
    }
    void* node = this->head;
    if (node == 0) {
        sub_62FF20();
    }
    void* next = *(void**)((char*)node + 8);
    int val = (int)value;
    *(int*)((char*)node + 0) = 0;
    *(int*)((char*)node + 4) = 0;
    *(int*)((char*)node + 0xc) = 0;
    *(void**)((char*)node + 8) = next;
    void* h = this->head;
    this->count++;
    this->head = *(void**)((char*)h + 8);
    *(int*)node = val;
    sub_77DDAC();
    return node;
}
