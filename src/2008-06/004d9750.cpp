// from server: 27% by colin
struct Table;

extern "C" void* __cdecl operator_new(unsigned int size);

struct Table
{
    Table* ctor();
};

Table* g_table;

Table* CreateTable()
{
    Table* t = (Table*)operator_new(0x60);
    if (t)
    {
        t = t->ctor();
        g_table = t;
        return t;
    }
    g_table = 0;
    return 0;
}
