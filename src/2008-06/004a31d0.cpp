// from server: 89% by EspClaude
// from server: 83% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espclaude_35d249eb159fb31e.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char instanceType;
extern char scriptType;

struct Instance {virtual ~Instance();char padding[0x12c];};
typedef boost::shared_ptr<Instance> Shared;

struct Script:Instance
{
    const char* external;
    char gap[4];
    char internal[0x14];
    int discriminator;
    const char* name() const { return discriminator == 0 ? external : internal; }
};

struct Result
{
    void* iterator[2];
    bool inserted;
};

struct Collection
{
    Result insert(const char*);
};

struct ClientProxy
{
    char padding[0x164];
    Collection collection;
    void process(Shared value);
};

void ClientProxy::process(Shared value)
{
    Script* script = dynamic_cast<Script*>(value.get());

    if (script)
    {
        collection.insert(script->name());
    }
}

