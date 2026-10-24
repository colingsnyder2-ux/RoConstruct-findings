// from server: 98% by Espeon
#include <set>
// from server: 97% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <string>
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

extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo();
namespace RBX {
struct Name {int index;const std::string text;const std::string& toString()const{return text;}const char* c_str()const{return text.c_str();}};
struct Guid {void* scope;int index;std::string readableString(int)const;};
struct Primary {virtual void slot0();char flags[4];Guid guid;};
struct NameInterface {virtual void slot0();virtual const Name& getClassName()const;};
struct ReflectionObject {virtual void slot0();};
struct Instance:Primary,NameInterface,ReflectionObject {void ensureGuid()const;const Guid& getGuid()const{ensureGuid();return guid;}};
struct Descriptor {void* slot;const Name& name;};
struct Container:std::set<const Instance*> { __declspec(noinline) const_iterator find(const Instance*const&)const; };
typedef char container_extent[sizeof(Container)==32?1:-1];
struct BitStream;
struct Dictionary {char opaque[68];void send(BitStream&,const Descriptor&);};
struct Address {const char* ToString(bool)const;};
struct Property {const Descriptor* desc;const ReflectionObject* instance;Property(const Descriptor&d,const ReflectionObject*i):desc(&d),instance(i){}};
struct Settings {char prefix[0x132];bool printProperties;static Settings& singleton();};
struct StandardOut {void print(int,const char*,...);static boost::shared_ptr<StandardOut> singleton();};
struct Replicator {char prefix[0x2bf4];Dictionary propNames;Container objects;char gap[0xfc];Address remotePlayerId;void serializeId(BitStream&,const Instance*);void serializeValue(const Property&,bool,BitStream&);
 struct ChangePropertyItem {void* vptr;Replicator& replicator;const Descriptor& desc;boost::shared_ptr<const Instance> instance;void write(BitStream&);};
};
void __cdecl writeItemType(BitStream&,int);
void Replicator::ChangePropertyItem::write(BitStream& bitStream){
 if(replicator.objects.find(instance.get())!=replicator.objects.end()){
  writeItemType(bitStream,3);
  replicator.serializeId(bitStream,instance.get());
  replicator.propNames.send(bitStream,desc);
  if(Settings::singleton().printProperties){
   StandardOut::singleton()->print(1,"Replication: %s:%s.%s >> %s",instance->getClassName().c_str(),instance->getGuid().readableString(4).c_str(),desc.name.c_str(),replicator.remotePlayerId.ToString(true));
  }
  replicator.serializeValue(Property(desc,instance.get()),true,bitStream);
 }
}
}
