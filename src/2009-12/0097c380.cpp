// from server: 86% by atomic.potato
struct ErrorCategory
{
};

extern "C" ErrorCategory& __cdecl get_generic_category();

ErrorCategory* g_error_category;

void f()
{
    g_error_category = &get_generic_category();
}
