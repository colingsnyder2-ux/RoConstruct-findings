// from server: 63% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <vector>
#include <typeinfo>
#include <intrin.h>
#include <utility>
namespace boost {
namespace detail {
struct sp_counted_base {
    virtual ~sp_counted_base() {}
    virtual void dispose()=0;
    virtual void destroy(){delete this;}
    long use_count_,weak_count_;
    void weak_release(){if(_InterlockedDecrement(&weak_count_)==0)destroy();}
    void release(){if(_InterlockedDecrement(&use_count_)==0){dispose();weak_release();}}
};
struct shared_count {
    sp_counted_base* pi_;
    shared_count():pi_(0){}
    shared_count& operator=(const shared_count& r){sp_counted_base* tmp=r.pi_;if(tmp!=pi_){if(tmp)_InterlockedIncrement(&tmp->use_count_);if(pi_)pi_->release();pi_=tmp;}return *this;}
    void swap(shared_count& r){sp_counted_base* tmp=r.pi_;r.pi_=pi_;pi_=tmp;}
    shared_count(const shared_count& r):pi_(r.pi_){if(pi_)_InterlockedIncrement(&pi_->use_count_);}
    ~shared_count(){if(pi_)pi_->release();}
};
}
template<class T> class shared_ptr {
public:
    T* px; detail::shared_count pn;
    shared_ptr():px(0),pn(){}
    shared_ptr& operator=(const shared_ptr& r){px=r.px;pn=r.pn;return *this;}
    void swap(shared_ptr& r){std::swap(px,r.px);pn.swap(r.pn);}
    void reset(){shared_ptr().swap(*this);}
    typedef T* shared_ptr::*unspecified_bool_type;
    operator unspecified_bool_type()const{return px==0?0:&shared_ptr::px;}
    shared_ptr(const shared_ptr& r):px(r.px),pn(r.pn){}
    template<class Y> shared_ptr(const shared_ptr<Y>& r):px(r.px),pn(r.pn){}
    T* get()const{return px;}
    T* operator->()const{return px;}
};
template<class T,class U> bool operator==(const shared_ptr<T>& a,const shared_ptr<U>& b){return a.get()==b.get();}
}

struct __declspec(dllimport) ImportedString {
 void*proxy;union{char buffer[16];char*heap;};unsigned length,capacity;
 ~ImportedString()throw();
 const char*c_str()const{return capacity>=16?heap:buffer;}
};
struct Name {unsigned id;ImportedString text;const char*c_str()const{return text.c_str();}};
struct Type {void*vtable;const Name&name;const type_info&info;};
struct DescribedBase;
struct PropertyDescriptor {
 void**vtable;const Name&name;const Name&category;void*owner;
 unsigned isPublic:1;unsigned streamWrite:1;unsigned reserved:30;
 const Type&type;
 bool canStreamWrite()const{return streamWrite;}
 bool equalValues(const DescribedBase*a,const DescribedBase*b)const{
  typedef bool(__thiscall*Equal)(const PropertyDescriptor*,const DescribedBase*,const DescribedBase*);
  return reinterpret_cast<Equal>(vtable[3])(this,a,b);
 }
};
extern const PropertyDescriptor parentDescriptor;
struct Property {
 const PropertyDescriptor*descriptor;const DescribedBase*instance;
 Property(const PropertyDescriptor&d,const DescribedBase*p):descriptor(&d),instance(p){}
 const PropertyDescriptor&getDescriptor()const{return *descriptor;}
};
typedef std::vector<PropertyDescriptor*>PropertyCollection;
struct PropertyIterator {
 const DescribedBase*instance;PropertyCollection::const_iterator iter;
 PropertyIterator(const PropertyCollection::const_iterator&i,const DescribedBase*p):instance(p),iter(i){}
 Property operator*()const{return Property(**iter,instance);}
 bool operator!=(const PropertyIterator&r)const{return iter!=r.iter;}
 PropertyIterator&operator++(){++iter;return *this;}
};
struct ClassDescriptor {
 virtual ~ClassDescriptor();const Name&name;PropertyCollection descriptors;
 PropertyIterator members_begin(const DescribedBase*p)const{return PropertyIterator(descriptors.begin(),p);}
 PropertyIterator members_end(const DescribedBase*p)const{return PropertyIterator(descriptors.end(),p);}
};
struct DescribedBase {
 virtual ~DescribedBase();void*opaque;const ClassDescriptor*descriptor;
 PropertyIterator properties_begin()const{return descriptor->members_begin(this);}
 PropertyIterator properties_end()const{return descriptor->members_end(this);}
};
struct PrimaryInstance {virtual ~PrimaryInstance();char opaque[12];};
struct FactoryProduct {virtual ~FactoryProduct();virtual const Name&getClassName()const=0;};
struct Instance:PrimaryInstance,FactoryProduct,DescribedBase {};
struct Settings {char prefix[0x131];bool printInstances,printProperties;};
Settings&settings();
struct StandardOut {void __cdecl print(int,const char*,...);};
boost::shared_ptr<StandardOut> __cdecl standardOut();
struct BitStream {unsigned bitsUsed,bitsAllocated,readOffset;};
void __cdecl writeBool(BitStream&,bool);
struct Replicator {
 const Instance*getDefault(const Name&);
 void serializeValue(const Property&,bool,BitStream&);
 void writeProperties(const Instance*,BitStream&);
};
void Replicator::writeProperties(const Instance*instance,BitStream&stream){
 const Instance*defaults=getDefault(instance->getClassName());
 PropertyIterator iter=instance->properties_begin();
 PropertyIterator end=instance->properties_end();
 for(;iter!=end;++iter){
  Property property=*iter;
  const PropertyDescriptor&descriptor=property.getDescriptor();
  if(descriptor.canStreamWrite()&&&descriptor!=&parentDescriptor){
   if(typeid(bool)==descriptor.type.info){
    serializeValue(property,false,stream);
    if(settings().printInstances&&settings().printProperties){standardOut()->print(1,"   write %s %s, 1 bit",descriptor.type.name.c_str(),descriptor.name.c_str());}
   }else if(defaults&&descriptor.equalValues(property.instance,defaults)){
    writeBool(stream,true);
    if(settings().printInstances&&settings().printProperties){standardOut()->print(1,"   write %s %s, 1 bit (default)",descriptor.type.name.c_str(),descriptor.name.c_str());}
   }else{
    unsigned bits=stream.bitsUsed;
    writeBool(stream,false);
    serializeValue(property,false,stream);
    if(settings().printInstances&&settings().printProperties){standardOut()->print(1,"   write %s %s, %d bits",descriptor.type.name.c_str(),descriptor.name.c_str(),stream.bitsUsed-bits);}
   }
  }
 }
}
