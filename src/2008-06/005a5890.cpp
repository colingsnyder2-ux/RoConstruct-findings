// from server: 91% by king_originala
namespace RBX {
    struct Instance {
        virtual ~Instance();
    };

    struct ServiceProvider;

    struct HopperBin {
        virtual ~HopperBin();
        void activate(ServiceProvider*);
    };

    struct Frame {
        float values[12];
    };

    struct ILocation {
        virtual Frame getFrame() = 0;
    };

    struct IRenderable {
        virtual ~IRenderable();
    };
}

RBX::ServiceProvider* __cdecl func_00590d80(RBX::Instance*);

extern "C" void (__cdecl *_invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern unsigned char instanceType;
extern unsigned char hopperType;
extern unsigned char locationType;
extern unsigned char renderableType;

struct Result {
    void finish();
};

struct Processor {
    virtual void reserved();
    virtual Result* process(const RBX::Frame&, int);
};

struct Entry {
    RBX::Instance* pointer;
    void* control;
};

struct Children {
    unsigned char padding[12];
    Entry* first;
    Entry* last;

    RBX::Instance* at(unsigned int);
};

inline RBX::Instance* Children::at(unsigned int index) {
    if (index >= static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();
    return first[index].pointer;
}

struct Workspace {
    unsigned char padding0[0x108];
    Children* children;
    unsigned char padding1[0x17c];
    unsigned char processor[4];
    unsigned char padding2[0x1b0];
    int state;

    void prepare();
    unsigned int count();
    int update(int);
};

int Workspace::update(int argument) {
    prepare();
    RBX::HopperBin* selected = 0;

    for (unsigned int i = 0; i < count(); ++i) {
        RBX::HopperBin* hopper = static_cast<RBX::HopperBin*>(
            __RTDynamicCast(children->at(i), 0, &instanceType, &hopperType, 0));
        RBX::ILocation* location = static_cast<RBX::ILocation*>(
            __RTDynamicCast(children->at(i), 0, &instanceType, &locationType, 0));
        RBX::IRenderable* renderable = static_cast<RBX::IRenderable*>(
            __RTDynamicCast(children->at(i), 0, &instanceType, &renderableType, 0));

        if (location && renderable) {
            RBX::Frame frame = location->getFrame();
            reinterpret_cast<Processor*>(processor)->process(frame, argument)->finish();
        }

        if (hopper)
            selected = hopper;
    }

    if (selected)
        selected->activate(
            func_00590d80(reinterpret_cast<RBX::Instance*>(this)));

    return state = state <= 0;
}
