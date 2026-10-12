// from server: 71% by king_originala
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
    if (enabled && (flags & 1) && listener.active) {
        SoundService* service = findService(this);
        if (service)
            service->listener.attach(&listener);
    } else {
        SoundService* service = findService(this);
        if (service)
            service->listener.detach(&listener);
    }
}
