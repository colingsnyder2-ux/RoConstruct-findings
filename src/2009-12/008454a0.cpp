// from server: 59% by atomic.potato
struct CXTPControls
{
    void* vtable;
    char padding[36];
    void** controls;
    int count;

    void* GetControl(int index);
};

void* CXTPControls::GetControl(int index)
{
    void* result;
    if (index >= 0 && index < count)
        result = controls[index];
    else
        result = 0;

    return result;
}
