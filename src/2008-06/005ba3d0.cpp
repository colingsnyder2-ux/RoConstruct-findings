// from server: 64% by king_originala
extern "C" int __stdcall queryChannel(void*, bool*);

struct Owner {
    void stopChannel(void*);
};

struct SoundChannel {
    char padding[12];
    void* channel;

    void update(int, int, int);
};

void SoundChannel::update(int, int, int)
{
    Owner* owner = reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 0x130);
    bool playing;

    if (channel && queryChannel(channel, &playing) != 0x24 && !playing)
        owner->stopChannel(channel);
}
