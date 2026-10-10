// from server: 86% by atomic.potato
struct error_category
{
};

extern "C" error_category * __cdecl boost_get_generic_category();

error_category *g_category;

void f()
{
    g_category = boost_get_generic_category();
}
