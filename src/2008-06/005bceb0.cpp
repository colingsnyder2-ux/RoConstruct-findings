// from server: 71% by king_originala
int __stdcall queryState(void *, unsigned char *);
void * __stdcall queryObject(void *, int);
void __cdecl processObject(void *);

struct SoundServiceStatsItem
{
    unsigned char padding0[0x13c];
    void *channel;
    unsigned char padding1[0x25];
    unsigned char flags;

    void update();
};

void SoundServiceStatsItem::update()
{
    if (flags & 4)
        return;

    try
    {
        if (flags & 2)
        {
            if (channel)
            {
                unsigned char playing;
                if (queryState(channel, &playing) != 0x24 && playing)
                    processObject(queryObject(channel, 0));
            }
        }
    }
    catch (...)
    {
        flags |= 4;
    }
}
