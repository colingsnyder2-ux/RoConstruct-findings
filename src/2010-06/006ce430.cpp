// from server: 60% by atomic.potato
struct EventDesc_006ce430
{
    EventDesc_006ce430();
};

extern "C" EventDesc_006ce430* create_006664d0(void*);
extern "C" void init_006cc6c0(EventDesc_006ce430*, void*, void*, void*);

EventDesc_006ce430* __stdcall make_006ce430(void* a, void* b, void* c)
{
    EventDesc_006ce430* p = create_006664d0(0);
    init_006cc6c0(p, a, b, c);
    return (EventDesc_006ce430*)a;
}
