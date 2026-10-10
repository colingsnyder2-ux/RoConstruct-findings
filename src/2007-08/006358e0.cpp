// from server: 35% by colin
struct CXTPPropExchange
{
    void Construct();
    char pad[0x24];
};

struct CXTPCommandBarsOptions
{
    void AddRange(int* items, int count);
    void Add(int);
    void SetPropExchange(CXTPPropExchange* p);
};

void CXTPCommandBarsOptions::SetPropExchange(CXTPPropExchange* p)
{
    CXTPPropExchange local;
    local.Construct();
    AddRange(0, 0);
}
