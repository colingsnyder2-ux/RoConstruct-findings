// from server: 29% by atomic.potato
extern "C" void* G1_func_007b8690(void*);

struct CXTPKeyboardManager {
    int f();
    char m_data[0x14];
};

int CXTPKeyboardManager::f()
{
    if (*(int*)(m_data + 0x14))
        return 1;
    void* p = G1_func_007b8690(*(void**)this);
    if (*(int*)((char*)p + 0x88))
        return 1;
    return 0;
}
