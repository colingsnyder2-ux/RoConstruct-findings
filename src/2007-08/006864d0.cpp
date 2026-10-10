// from server: 89% by tester
struct CXTPPropExchange
{
    int GetCount();
};

extern int g_Count;

extern "C" int __stdcall sub_00685720(int, const char*, int*, int);

int CXTPPropExchange::GetCount()
{
    int result = 0;
    sub_00685720((int)this, (const char*)&g_Count, &result, 0);
    return result;
}
