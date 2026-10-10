// from server: 26% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Node {
    char pad[0xc];
    unsigned char flags;
    char pad2[0x1c - 0xd];
    int field1c;
    int field20;
    int field2c;
};

struct CRobloxTreeCtrlNode {
    char pad[0x30];
    void* field30;
    int method(Node* node);
};

int CRobloxTreeCtrlNode::method(Node* node)
{
    if (node->flags & 1) {
        void* p = this->field30;
        void* (*getInner)(void*, void*) = *(void*(**)(void*, void*))p;
        void* inner = getInner(p, 0);
        char* innerObj = (char*)inner;
        if (*(long*)(innerObj + 4) != 0) {
            _InterlockedExchangeAdd((volatile long*)(innerObj + 4), 1);
        }
        char local[0x18];
        void (*ctor)(void*) = (void (*)(void*))0x40d550;
        ctor(local);
        if (innerObj != 0) {
            if (_InterlockedExchangeAdd((volatile long*)(innerObj + 4), -1) == 1) {
                void (*dtor)(void*) = *(void(**)(void*))innerObj;
                dtor(innerObj);
                if (_InterlockedExchangeAdd((volatile long*)(innerObj + 8), -1) == 1) {
                    void (*dtor2)(void*) = *(void(**)(void*))((char*)(*(void**)innerObj) + 8);
                    dtor2(innerObj);
                }
            }
        }
        void* dc = ((void* (*)(void*))0x77e6a8)((char*)this->field30 + 0xc8);
        ((int (*)(void*, const char*, int))0x77e978)(dc, (const char*)node->field1c, node->field20);
        void (*cleanup)(void*) = (void (*)(void*))0x5595a0;
        cleanup(local);
    }
    if (node->flags & 0x40) {
        char result = ((char (*)(void))0x422770)();
        node->field2c = (result != 0) ? 1 : 0;
    }
    return 0;
}
