// from server: 59% by colin
struct EventInstance;

struct EventBridge {
    EventInstance* ptr;
    EventBridge(EventInstance* p);
};

struct EventInstance {
    void* vtable;
    EventBridge* bridge;
    EventInstance(const EventBridge& other);
};

EventBridge::EventBridge(EventInstance* p) : ptr(p) {}

EventInstance::EventInstance(const EventBridge& other) : vtable(0), bridge(0) {
    bridge = new EventBridge(other.ptr);
}

EventBridge* __cdecl makeBridge(const EventBridge& other) {
    EventInstance* e = new EventInstance(other);
    return e->bridge;
}
