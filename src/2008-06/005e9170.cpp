// from server: 81% by Cezant64gamejr
struct RBX_PhysicsService {
    char pad[120];
    void* m_p;
    void* get_something();
};

void* RBX_PhysicsService::get_something() {
    void* ptr = *(void**)((char*)this + 0x84);
    return *(void**)((char*)ptr + 0x78);
}
