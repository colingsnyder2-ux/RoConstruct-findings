// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_viewweak_d72d28a7d4191b02.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
extern void __stdcall SysFreeString(unsigned short *);
}

typedef void (__cdecl *Manager)(void *, void *, int);

struct Callback {
    Manager *manager;
    unsigned int reserved;
    unsigned int storage;
    Callback &assign(unsigned int);
};

extern void __cdecl changeCallback();
extern const unsigned char interfaceId[];
extern const unsigned short eventName[];

struct Interface;

struct InterfaceTable {
    long (__stdcall *query)(Interface *, const void *, void **);
    unsigned long (__stdcall *addRef)(Interface *);
    unsigned long (__stdcall *release)(Interface *);
    void *reserved[64];
    long (__stdcall *detach)(Interface *, unsigned short *, Interface *);
};

struct Interface {
    InterfaceTable *table;
    unsigned int reserved;
    Callback callback;
};

struct InterfacePtr {
    Interface *pointer;
    __forceinline ~InterfacePtr();
};

__forceinline InterfacePtr::~InterfacePtr()
{
    if (pointer)
        pointer->table->release(pointer);
}

struct EventPtr {
    Interface *pointer;
    __forceinline EventPtr(Interface *);
    __forceinline ~EventPtr();
};

__forceinline EventPtr::EventPtr(Interface *source) : pointer(0)
{
    if (source)
        source->table->query(
            source, interfaceId, reinterpret_cast<void **>(&pointer));
}

__forceinline EventPtr::~EventPtr()
{
    if (pointer)
        pointer->table->release(pointer);
}

struct String {
    unsigned short *value;
    String(const unsigned short *);
    __forceinline ~String() throw();
};

struct Shared {
    void* pointer;
    boost::detail::weak_count control;
};

struct Storage {
    unsigned char data[32];
    ~Storage();
};

struct ViewBinder {
    Shared owner;
    Storage storage;
    InterfacePtr source;
    InterfacePtr connection;
    virtual ~ViewBinder();
};

ViewBinder::~ViewBinder()
{
    source.pointer->callback.assign(
        reinterpret_cast<unsigned int>(&changeCallback));

    EventPtr target(connection.pointer);
    Interface *object = target.pointer;
    object->table->detach(object, String(eventName).value, source.pointer);
}