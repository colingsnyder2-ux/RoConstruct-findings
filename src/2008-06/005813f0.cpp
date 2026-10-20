// from server: 97% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_trackcamera_ddbfc380bec1de7f.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
struct Instance {
    virtual void unused();
};

struct PVInstance : Instance {
};

typedef boost::shared_ptr<Instance> SharedInstance;

struct InstanceHolder {
    SharedInstance getInstance();
};

struct Link {
    InstanceHolder* get();
};

struct Cam {
    void setSubject(PVInstance*);
    void setCameraType(int);
};

struct CameraProvider {
    virtual void unused();
    virtual Cam* getCamera();
};

struct Owner {
    char padding[0x288];
    CameraProvider provider;
};

struct String {
    char padding[4];
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;
};

struct Name { unsigned reserved; String text; };

struct Argument {
    virtual void destroy(int);
};

extern "C" void __cdecl handle(const char*, Owner*);

struct TrackCameraCommand {
    char padding0[4];
    Name* name;
    char padding8[4];
    Owner* owner;
    char padding10[16];
    Link* link;
    void execute(Argument*);
};

void TrackCameraCommand::execute(Argument* argument)
{
    PVInstance* subject =
        dynamic_cast<PVInstance*>((link ? link->get() : 0)->getInstance().get());

    if (subject) {
        owner->provider.getCamera()->setSubject(subject);
        owner->provider.getCamera()->setCameraType(3);
    }

    String* text = &name->text;
    Owner* currentOwner = owner;
    handle(text->capacity >= 16 ? text->pointer : text->buffer, currentOwner);
    argument->destroy(1);
}
