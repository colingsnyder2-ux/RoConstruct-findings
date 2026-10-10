// from server: 78% by colin
struct B_func_0069f160 { virtual ~B_func_0069f160(); };
struct S_func_0069f160 : B_func_0069f160 { ~S_func_0069f160(); };

struct S_func_006ea080
{
    char pad[0x1e0];
    S_func_0069f160 field_1e0;
    ~S_func_006ea080();
};

S_func_006ea080::~S_func_006ea080()
{
    field_1e0.~S_func_0069f160();
}
