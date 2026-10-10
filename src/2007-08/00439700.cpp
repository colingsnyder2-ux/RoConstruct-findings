// from server: 66% by colin
struct ContentId {
    void* ptr;
    ContentId();
    ContentId(const ContentId& other);
    ~ContentId();
};

struct SoundId : ContentId {
    SoundId(const ContentId& id);
};

extern "C" void __stdcall func_00438e50();
extern "C" void __stdcall func_00438690();
extern "C" void __stdcall func_77dd98();
extern "C" void __stdcall func_77ddbc();

SoundId::SoundId(const ContentId& id)
{
    ContentId temp;
    func_00438e50();
    func_77dd98();
    func_00438690();
    func_77ddbc();
}
