// from server: 73% by colin
struct CXTPImageManager {
    void func_64da00(void* a, void* b);
    void func_64dd60(void* a, void* b);
};

struct helper_686770 {
    helper_686770(void* a);
    ~helper_686770();
};

void __stdcall helper_684e50(void* a);

void CXTPImageManager::func_64dd60(void* a, void* b)
{
    helper_686770 local(a);
    func_64da00(b, &local);
    local.~helper_686770();
}
