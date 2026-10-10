// from server: 37% by Intel
void* __stdcall sub_5a7950(void* arg)
{
    void (__stdcall *free_ptr)(void*) = (void (__stdcall *)(void*))0xb229c8;
    free_ptr(arg);
    return arg;
}
