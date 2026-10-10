// from server: 86% by atomic.potato
struct ErrorCategory;

extern "C" ErrorCategory& __cdecl boost_get_system_category();
extern ErrorCategory* g_error_category;

void func_00973dc0()
{
    g_error_category = &boost_get_system_category();
}
