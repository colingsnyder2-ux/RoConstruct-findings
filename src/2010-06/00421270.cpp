// from server: 60% by atomic.potato
struct CRobloxTreeCtrlNode
{
    CRobloxTreeCtrlNode();
};

CRobloxTreeCtrlNode::CRobloxTreeCtrlNode()
{
}

extern "C" void* create_node_0041c510(void*);
extern "C" void init_node_00421130(void*, void*, void*, void*);

void* __stdcall function_00421270(void* a, void* b, void* c)
{
    void* p = create_node_0041c510(0);
    init_node_00421130(p, a, b, c);
    return a;
}
