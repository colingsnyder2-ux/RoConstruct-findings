// from server: 90% by atomic.potato
extern "C" void __stdcall sub_422b00(unsigned int value);

struct CRobloxTreeCtrlNode
{
    void f(void* node, int* result);
};

void CRobloxTreeCtrlNode::f(void* node, int* result)
{
    unsigned int value = *(unsigned int*)((unsigned char*)node + 0x0c);
    sub_422b00(value);
    *result = 0;
}
