// from server: 78% by colin
struct Listener {
    char padding[12];
    int active;
    char remainder[32];

    void attach(Listener*);
    void detach(Listener*);
};

struct SoundService {
    char padding[0x130];
    Listener listener;
    char reserved[5];
    unsigned char flags;
    char reserved2[6];
    int enabled;

    void update();
};

SoundService* __cdecl findService(SoundService*);

void SoundService::update()
{
    Listener* self = &listener;
    if (enabled && (flags & 1) && listener.active) {
        SoundService* service = findService(this);
        if (service)
            service->listener.attach(self);
    } else {
        SoundService* service = findService(this);
        if (service)
            service->listener.detach(self);
    }
}
