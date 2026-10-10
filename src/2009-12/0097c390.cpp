// from server: 86% by atomic.potato
struct ErrorCategory {};

extern "C" ErrorCategory& __cdecl get_generic_category();

ErrorCategory* g_category;

void f()
{
    g_category = &get_generic_category();
}
