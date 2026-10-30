#include "v8tree/Instance.h"
#include "script/Script.h"
#include "script/ThreadRef.h"
#include "reflection/type.h"
#include <boost/shared_ptr.hpp>
template boost::shared_ptr<RBX::Script> boost::dynamic_pointer_cast<RBX::Script,RBX::Instance>(const boost::shared_ptr<RBX::Instance>&);
namespace RBX { namespace Reflection {
template<> Lua::FunctionRef& Value::convert<Lua::FunctionRef>() {
    if(isType<void>()) { value=Lua::FunctionRef(); _type=&Type::singleton<Lua::FunctionRef>(); }
    Lua::FunctionRef* result=boost::any_cast<Lua::FunctionRef>(&value);
    if(!result) throw std::runtime_error("Unable to cast value to RBX::Lua::FunctionRef");
    return *result;
}
template<> boost::shared_ptr<Instance>& Value::convert<boost::shared_ptr<Instance> >() {
    if(isType<void>()) { value=boost::shared_ptr<Instance>(); _type=&Type::singleton<boost::shared_ptr<Instance> >(); }
    if(isType<boost::shared_ptr<DescribedBase> >()) {
        boost::shared_ptr<DescribedBase>* base=boost::any_cast<boost::shared_ptr<DescribedBase> >(&value);
        if(base) {
            Instance* instance=dynamic_cast<Instance*>(base->get());
            if(!instance) throw std::runtime_error("Unable to cast value to Object");
            value=shared_from(instance);
        } else value=boost::shared_ptr<Instance>();
        _type=&Type::singleton<boost::shared_ptr<Instance> >();
    }
    boost::shared_ptr<Instance>* result=boost::any_cast<boost::shared_ptr<Instance> >(&value);
    if(!result) throw std::runtime_error("Unable to cast value to Object");
    return *result;
}
template<> boost::shared_ptr<DescribedBase>& Value::convert<boost::shared_ptr<DescribedBase> >() {
    typedef boost::shared_ptr<DescribedBase> Shared;
    if(isType<void>()) { value=Shared(); _type=&Type::singleton<Shared>(); }
    if(isType<boost::shared_ptr<Instance> >()) {
        boost::shared_ptr<Instance>* source=boost::any_cast<boost::shared_ptr<Instance> >(&value);
        if(source) value=Shared(*source); else value=Shared();
        _type=&Type::singleton<Shared>();
    }
    Shared* result=boost::any_cast<Shared>(&value);
    if(!result) throw std::runtime_error("Unable to cast value to Object");
    return *result;
}
} }
