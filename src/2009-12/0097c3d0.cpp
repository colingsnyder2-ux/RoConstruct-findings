// from server: 86% by atomic.potato
struct error_category;

extern "C" error_category& __cdecl boost_get_system_category();
extern error_category* g_system_category;

void initialize_system_category()
{
    g_system_category = &boost_get_system_category();
}
