// from server: 93% by tester
struct CXTPDockingPaneManager {
    char pad[0x7c];
    void* field_7c;
    int func_0066f0c0(int* out, int a, int b, int c, int d);
};

struct CXTColorSelectorCtrl {
    void* func_00711000(int index);
};

struct CControlButtonExpand {
    int func_007383c4(int flag);
};

extern "C" int __stdcall sub_006713d0(void* p);

int CXTPDockingPaneManager::func_0066f0c0(int* out, int a, int b, int c, int d)
{
    int local;
    *out = 0;
    int n = sub_006713d0(&local);
    if (n > 0)
    {
        void* p = this->field_7c;
        if (n <= *(int*)((char*)p + 0x34))
        {
            CXTColorSelectorCtrl* q = (CXTColorSelectorCtrl*)((char*)p + 0x28);
            void* r = *(void**)((char*)q->func_00711000(n - 1) + 8);
            if (r != 0)
            {
                *out = ((CControlButtonExpand*)r)->func_007383c4(1);
            }
        }
    }
    return 0;
}
