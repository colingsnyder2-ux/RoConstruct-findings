// from server: 93% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_markerresult_397b499f209fe894.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
typedef boost::shared_ptr<void> Handle;
struct Input {
    void* pointer;
    Input(const Input&);
    ~Input();
};

inline Input::Input(const Input& other)
    : pointer(other.pointer)
{
}

inline Input::~Input()
{
}

struct Key {
    unsigned first;
    unsigned second;
};

struct Value {
    unsigned tag;
    Handle handle;
    Value(Input, Handle, int);
};

struct Result {
    Key key;
    Value value;
    Result(const Key&, const Value&);
};

inline Result::Result(const Key& k, const Value& v)
    : key(k), value(v)
{
}

Result __cdecl makeResult(Key key, Input input, Handle handle, volatile int number)
{
    return Result(key, Value(input, handle, number));
}
