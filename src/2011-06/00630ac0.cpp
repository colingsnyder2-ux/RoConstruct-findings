// from server: 52% by atomic.potato
struct MemoryManager {
    void get(float* result, int index);
};

struct Tool {
    char pad[0x1fc];
    MemoryManager memoryManager;
    void* func(int value);
};

void* Tool::func(int value) {
    memoryManager.get((float*)this, 1);
    return (void*)value;
}
