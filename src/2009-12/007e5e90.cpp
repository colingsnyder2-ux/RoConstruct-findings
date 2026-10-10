// from server: 84% by atomic.potato
struct type_info
{
	bool operator==(const type_info&) const;
};

extern "C" bool __stdcall type_info_equal(const type_info*, const type_info*);
extern type_info* g_type_info;

struct S
{
	void* f(void*);
};

void* S::f(void* p)
{
	extern const type_info* g_type;
	if (type_info_equal(g_type_info, g_type))
		return (char*)this + 0x10;
	return 0;
}
