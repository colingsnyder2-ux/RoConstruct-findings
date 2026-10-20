// from server: 63% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_refpropertynative13440112d893c78e5cf.cpp

// Candidate translation unit (score above; library headers required).
#define NDEBUG
#include <boost/shared_ptr.hpp>
struct Primary{char padding[20];};struct Described{};struct Instance:Primary,Described{};
typedef boost::shared_ptr<Instance> BasePtr;
typedef boost::shared_ptr<Described> SharedPtr;
struct Getter{virtual void slot0();virtual void slot1();virtual void* get(void*);};
struct Storage{void* pointer;void* control;void assign(const SharedPtr&);};struct Output{void* type;Storage value;};
BasePtr acquire(void*);void* getType();
struct S{char padding[28];Getter* getter;void f(void*,Output*);};
void S::f(void*object,Output*output){SharedPtr value(acquire(getter->get(object)));output->type=getType();output->value.assign(value);}
