// from server: 43% by atomic.potato
struct CInstanceRecord
{
    struct CNameItem
    {
        int Get();
        void* value;
    };
};

int CInstanceRecord::CNameItem::Get()
{
    if (value)
        return (*(int (__thiscall **)(void*))(*(int*)value + 0xbc))(value);
    return 0;
}
