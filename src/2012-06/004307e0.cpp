// from server: 57% by atomic.potato
struct CRobloxTreeCtrlNode
{
    int value0C;
    int value5C;
};

struct Sub4305F0
{
    void f(int);
};

void Sub4305F0::f(int)
{
}

void __stdcall CRobloxTreeCtrlNode_function(CRobloxTreeCtrlNode* node, int* result)
{
    ((Sub4305F0*)node->value5C)->f(node->value0C);
    *result = 0;
}
