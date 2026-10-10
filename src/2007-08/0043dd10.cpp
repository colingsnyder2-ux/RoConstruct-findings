// from server: 15% by colin
struct ContentId {
    ContentId(const ContentId& other);
};

struct SoundId : ContentId {
    SoundId(const ContentId& id);
};

SoundId::SoundId(const ContentId& id) : ContentId(id) {}
