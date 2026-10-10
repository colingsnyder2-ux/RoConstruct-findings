// from server: 60% by atomic.potato
struct UploadVideoVerb
{
    int Get();
};

int UploadVideoVerb::Get()
{
    int* value = *(int**)((char*)this + 0x64);
    if (value == 0)
        return 0;
    int* table = *(int**)value;
    return ((int (__thiscall *)(int*))table[0])(value);
}
