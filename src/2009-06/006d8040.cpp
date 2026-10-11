// from server: 96% by atomic.potato
struct RBX_RotatePJoint {
    char pad[0xbc];
    void* items[1];
    int count;
    bool check();
};

bool RBX_RotatePJoint::check() {
    int i = 0;
    if (count > 0) {
        void** p = items;
        do {
            void* obj = *p;
            if ((*(bool (__thiscall**)(void*))(*(int*)obj + 0xc))(obj))
                return true;
            i++;
            p++;
        } while (i < count);
    }
    return false;
}
