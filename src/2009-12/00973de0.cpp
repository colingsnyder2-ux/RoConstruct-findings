// from server: 86% by atomic.potato
struct ErrorCategory
{
};

extern "C" ErrorCategory &__cdecl boost_get_generic_category();

ErrorCategory *g_error_category;

void __cdecl initialize_generic_category()
{
    g_error_category = &boost_get_generic_category();
}
