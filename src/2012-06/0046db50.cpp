// from server: 95% by atomic.potato
struct type_info
{
	bool operator==(const type_info&) const;
};

extern "C" bool __cdecl type_info_equal(const type_info&, const type_info&);
extern const type_info delete_data_type;

struct S
{
	void* f(void*);
};

void* S::f(void* p)
{
	if (*(const type_info*)p == delete_data_type)
		return (char*)this + 16;
	return 0;
}
