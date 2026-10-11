// from server: 29% by atomic.potato
struct Sub {
    void method();
};

struct VFriendService_EventDesc {
    void* field0;
    Sub sub;
    void destroy();
};

void VFriendService_EventDesc::destroy() {
    sub.method();
    field0 = 0;
}
