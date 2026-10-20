// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_rotateownerfieldc39dbcf0b6abb1ea.cpp

// Candidate translation unit (score above; library headers required).
#include <string>
#include <exception>
namespace RBX {
class Instance;
bool checkA(Instance* instance, int role);
bool checkB(Instance* instance, int role);
class runtime_error : public std::exception
{
    std::string message;
public:
    runtime_error(const std::string& m);
};
static __declspec(noinline) void checkPermissions(Instance* instance)
{
    if (checkA(instance, 1) && !checkB(instance, 1))
    {
        std::string msg("Insufficinet permissions");
        throw runtime_error(msg);
    }
}
void verify(Instance* instance)
{
    checkPermissions(instance);
}
}

#include "G3D/Matrix3.h"
typedef G3D::Matrix3 Matrix;

struct Flag {
    bool value;
};

struct Completion {
    virtual void finish(int value) = 0;
};

struct RotationTarget {
    void setMode(int mode);
};

struct FrameOwner { char padding[0x13c]; Matrix frame; };
struct Object {
    FrameOwner* getFrame();
    RotationTarget* getRotationTarget();
};

struct State {
    void setFlag(Flag flag);
};

struct DataModel {
    char padding[0x344];
    State state;
};

struct String {
    unsigned padding;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;
};

struct Name {
    unsigned padding;
    String text;
};

extern void __cdecl handle(const char* name, Object* object);

struct RotateAxisCommand {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void slot4() = 0;
    virtual Matrix rotate(const Matrix& frame) = 0;

    Name* name;
    unsigned padding08;
    DataModel* dataModel;
    char padding10[16];
    Object* object;

    void prepare();
    void apply(const Matrix& rotation);
    void execute(Completion* completion);
};

void RotateAxisCommand::execute(Completion* completion)
{
    RBX::checkPermissions(reinterpret_cast<RBX::Instance*>(object));

    Object* currentObject = object;
    FrameOwner* frame = currentObject ? currentObject->getFrame() : 0;
    apply(rotate(frame->frame));

    currentObject = object;
    RotationTarget* target =
        currentObject ? currentObject->getRotationTarget() : 0;
    target->setMode(4);

    Flag flag;
    flag.value = false;
    dataModel->state.setFlag(flag);

    String* text = &name->text;
    const char* characters =
        text->capacity >= 16 ? text->pointer : text->buffer;
    handle(characters, object);

    completion->finish(1);
}
