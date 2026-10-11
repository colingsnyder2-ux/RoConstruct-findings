// from server: 31% by colin




struct LuaArguments;

struct LuaArgumentsVNode {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void construct(LuaArguments*);
    void destroy();
};

struct LuaArguments {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
};

extern "C" void* __cdecl sub_612C40(void*, int);
extern "C" void __cdecl sub_612490(void*, int, void*);
extern "C" void __cdecl sub_6127F0(void*, int);

extern void* g_95b1e8;

void LuaArgumentsVNode::construct(LuaArguments* arg) {
    this->field0 = arg->field0;
    this->field4 = arg->field4;
    this->field8 = arg->field8;
    this->fieldC = arg->fieldC;
}

void LuaArgumentsVNode::destroy() {
    void* p = this->field4;
    if (p) {
        void* q = this->field8;
        if (q) {
            *(int*)((char*)q + 4) = 0;
        }
        this->field4 = 0;
    }
}

void* __cdecl sub_61F180(LuaArguments* arg) {
    LuaArgumentsVNode* node = (LuaArgumentsVNode*)sub_612C40(arg, 0x10);
    if (node) {
        node->construct(arg);
    }
    sub_612490(arg, -10000, g_95b1e8);
    sub_6127F0(arg, -2);
    if (node) {
        node->destroy();
    }
    return node;
}
