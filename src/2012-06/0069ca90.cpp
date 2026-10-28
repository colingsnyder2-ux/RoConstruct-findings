// from server: 0% by 41k
struct W4FriendEventType {
    enum Enum {
        kEvent1 = 1,
        kEvent2 = 2
    };
};

struct FriendService {
    W4FriendEventType::Enum event;
    int eventData;
    int eventData2;
    int eventData3;
};

extern "C" void* create_friend_service(void* unused, FriendService* out, int type);

void* create_friend_service(void* unused, FriendService* out, int type) {
    if (type != W4FriendEventType::kEvent1) {
        return create_friend_service(unused, out, type);
    }
    out->event = static_cast<W4FriendEventType::Enum>(W4FriendEventType::kEvent1);
    out->eventData = 1;
    out->eventData2 = 1;
    out->eventData3 = 0x693e3c;
    return out;
}
