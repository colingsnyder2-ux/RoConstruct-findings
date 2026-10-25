// from server: 98% by king_originala_sol_medium
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_sol_medium_loader_05d384820b36fd43.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/function.hpp>
#include <memory>
// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Resource {
    unsigned char data[24];
    Resource();
    ~Resource();
};

typedef boost::shared_ptr<Resource> Shared;
typedef std::auto_ptr<Resource> TemporaryOwner;
typedef boost::scoped_ptr<Resource> Owner;
struct Reader {
    unsigned char data[72];
    explicit Reader(void*);
    ~Reader();
    TemporaryOwner read();
};

struct Loader {
    unsigned char data[4];
    Loader(Resource*, Resource*);
};

struct Stream {
    int* table;
};

struct FunctionManager;

struct FunctionStorage {
    void* pointers[3];
    void invoke(FunctionManager*, Shared);
};

struct FunctionManager {
    void (__cdecl *manage)(FunctionStorage*, FunctionStorage*, int);
};

struct Callback {
    FunctionManager* manager;
    unsigned int padding;
    FunctionStorage storage;
    ~Callback();
};

inline Callback::~Callback()
{
    FunctionManager* m = manager;
    if (m) {
        void (__cdecl *f)(FunctionStorage*, FunctionStorage*, int) = m->manage;
        if (f)
            f(&storage, &storage, 1);
    }
}



void __cdecl reconstructed(int mode, Stream* stream, Callback callback)
{
    Shared value(new Resource);

    if (mode == 1) {
        void* input = *reinterpret_cast<void**>(
            reinterpret_cast<unsigned char*>(stream) +
            stream->table[1] + 40);
        Reader reader(input);
        Owner object(TemporaryOwner(reader.read()));
        Loader loader(object.get(), value.get());
    }

    callback.storage.invoke(callback.manager, value);
}
