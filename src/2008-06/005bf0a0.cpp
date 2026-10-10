// from server: 62% by atomic.potato
extern "C" int __cdecl sub_5b5cb0(void *, void *);

struct SoundItem
{
    unsigned char padding[0x18];
    unsigned int size;
    void *data;
};

extern "C" unsigned char __cdecl sub_005bf0a0(const void *source, void *unused, void **result)
{
    const SoundItem *item = (const SoundItem *)source;
    const void *value;

    if (item->size >= 0x10)
        value = *(void **)((const char *)item + 4);
    else
        value = (const char *)item + 4;

    sub_5b5cb0((void *)&value, (void *)&unused);
    *result = *(void **)&value;
    return 1;
}
