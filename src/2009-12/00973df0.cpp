// from server: 86% by atomic.potato
struct error_category;

extern "C" error_category& __cdecl get_generic_category();

error_category* g_category;

void f()
{
    g_category = &get_generic_category();
}
