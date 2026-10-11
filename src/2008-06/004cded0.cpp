// from server: 83% by colin
extern "C" void* __cdecl sub_6a0920(unsigned int size);

struct PhysicsSender {
    int state;
    char* head;
    char* tail;
    void insert(void* value);
};

void PhysicsSender::insert(void* value) {
    if (state == 0) {
        char* node = (char*)sub_6a0920(0xc);
        head = node;
        *(void**)node = *(void**)value;
        *(char**)(head + 8) = head;
        *(char**)(head + 4) = head;
        state = 1;
        tail = head;
    } else if (state == 1) {
        char* node = (char*)sub_6a0920(0xc);
        tail = node;
        *(char**)(head + 8) = node;
        *(char**)(tail + 4) = head;
        *(char**)(tail + 4) = head;
        *(char**)(tail + 8) = head;
        *(void**)tail = *(void**)value;
        state = 2;
        tail = head;
    } else {
        char* node = (char*)sub_6a0920(0xc);
        *(void**)node = *(void**)value;
        *(char**)(node + 4) = tail;
        *(char**)(node + 8) = *(char**)(tail + 8);
        *(char**)(*(char**)(tail + 8) + 4) = node;
        *(char**)(tail + 8) = node;
        state++;
    }
}
