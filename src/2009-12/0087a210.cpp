// from server: 77% by atomic.potato
struct S_func_0087a210 {
    void* GetItem(int index);
    void* m_data;
    int m_count;
};

extern "C" void* __cdecl G_func_007f3b0c();

void* S_func_0087a210::GetItem(int index)
{
    if (index < 0 || index >= m_count)
        return G_func_007f3b0c();

    return (char*)m_data + index * 24;
}
