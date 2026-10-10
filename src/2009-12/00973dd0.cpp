// from server: 86% by atomic.potato
struct error_category;

extern "C" error_category& __cdecl get_generic_category();
extern error_category* g_00b916dc;

void func_00973dd0()
{
    g_00b916dc = &get_generic_category();
}
